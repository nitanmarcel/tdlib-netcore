using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;
using System.Runtime.InteropServices;


namespace TDLib.Api.CxxInterop
{
    using System.Runtime.CompilerServices;
    using System.Security;
    using static Native;

    [SuppressUnmanagedCodeSecurity]
    internal unsafe static class Native
    {
        [DllImport("tdbridge", CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr td_bridge_vector_vector_object_at(IntPtr ptr, long index);
        [DllImport("tdbridge", CallingConvention = CallingConvention.Cdecl)]
        public static extern long td_bridge_vector_vector_object_size(IntPtr ptr);
        [DllImport("tdbridge", CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr td_bridge_vector_vector_object_emplace_back(IntPtr ptr);
        [DllImport("tdbridge", CallingConvention = CallingConvention.Cdecl)]
        public static extern void td_bridge_vector_vector_object_clear(IntPtr ptr);
        [DllImport("tdbridge", CallingConvention = CallingConvention.Cdecl)]
        public static extern byte* td_bridge_string_data(IntPtr ptr, out long len);
        [DllImport("tdbridge", CallingConvention = CallingConvention.Cdecl)]
        public static extern void td_bridge_string_setdata(IntPtr ptr, byte* data, long len);
        [DllImport("tdbridge", CallingConvention = CallingConvention.Cdecl)]
        public static extern int* td_bridge_vector_int32_data(IntPtr ptr, out long len);
        [DllImport("tdbridge", CallingConvention = CallingConvention.Cdecl)]
        public static extern void td_bridge_vector_int32_assign(IntPtr ptr, int* data, long len);
        [DllImport("tdbridge", CallingConvention = CallingConvention.Cdecl)]
        public static extern int* td_bridge_vector_int64_data(IntPtr ptr, out long len);
        [DllImport("tdbridge", CallingConvention = CallingConvention.Cdecl)]
        public static extern void td_bridge_vector_int64_assign(IntPtr ptr, long* data, long len);
        [DllImport("tdbridge", CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr* td_bridge_vector_object_data(IntPtr ptr, out long len);
        [DllImport("tdbridge", CallingConvention = CallingConvention.Cdecl)]
        public static extern void td_bridge_vector_object_emplace_back(IntPtr ptr, IntPtr obj);
        [DllImport("tdbridge", CallingConvention = CallingConvention.Cdecl)]
        public static extern void td_bridge_vector_object_clear(IntPtr ptr);
        [DllImport("tdbridge", CallingConvention = CallingConvention.Cdecl)]
        public static extern CxxBytes td_bridge_vector_string_at(IntPtr ptr, long index);
        [DllImport("tdbridge", CallingConvention = CallingConvention.Cdecl)]
        public static extern long td_bridge_vector_string_size(IntPtr ptr);
        [DllImport("tdbridge", CallingConvention = CallingConvention.Cdecl)]
        public static extern void td_bridge_vector_string_emplace_back(IntPtr ptr, byte* data, long len);
        [DllImport("tdbridge", CallingConvention = CallingConvention.Cdecl)]
        public static extern void td_bridge_vector_string_clear(IntPtr ptr);
    }

    /// <summary>
    /// std::string*
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    internal struct CxxString
    {
        public CxxBytes bytes;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public CxxString(IntPtr x)
        {
            bytes = new CxxBytes(x);
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public string Fetch() => ToString();
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Set(string s)
        {
            if (string.IsNullOrEmpty(s))
            {
                bytes.Set(default);
                return;
            }
            var x = Encoding.UTF8.GetBytes(s);
            bytes.Set(x);
        }

        public static implicit operator string(CxxString x) => x.ToString();

        public static implicit operator IntPtr(CxxString x) => x.bytes.ptr;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public override string ToString() => Encoding.UTF8.GetString(bytes.AsSpan());
    }

    /// <summary>
    /// std::string*
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    internal unsafe struct CxxBytes
    {
        public IntPtr ptr;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public CxxBytes(IntPtr x)
        {
            ptr = x;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public byte[] Fetch() => ToArray();
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Set(ReadOnlySpan<byte> value)
        {
            if (value.IsEmpty)
            {
                td_bridge_string_setdata(ptr, null, 0);
            }
            fixed (byte* x = value)
                td_bridge_string_setdata(ptr, x, value.Length);
        }

        public static implicit operator byte[] (CxxBytes x) => x.ToArray();
        public static implicit operator ReadOnlySpan<byte>(CxxBytes x) => x.AsSpan();
        public static implicit operator IntPtr(CxxBytes x) => x.ptr;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public ReadOnlySpan<byte> AsSpan()
        {
            var data = td_bridge_string_data(ptr, out var len);
            return new Span<byte>(data, (int)len).ToArray();
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public byte[] ToArray() => AsSpan().ToArray();
    }

    /// <summary>
    /// object_ptr&lt;T>* = std::unique_ptr&lt;T>*
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    internal unsafe struct CxxTLObject<T> where T : TLObject
    {
        public IntPtr ptr;
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public CxxTLObject(IntPtr x)
        {
            ptr = x;
        }

        public static implicit operator IntPtr(CxxTLObject<T> x) => x.ptr;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public T Fetch()
        {
            var objptr = *(IntPtr*)ptr;
            return objptr == IntPtr.Zero ? null : (T)TLObjectFactory.FetchCxxObject(objptr);
        }
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Set(T obj)
        {
            var oldobj = *(IntPtr*)ptr;
            if (oldobj != IntPtr.Zero)
                CxxAbi.FreeCxxTLObject(oldobj);
            *(IntPtr*)ptr = obj == null ? IntPtr.Zero : obj.TdCreateCxxObject();
        }
    }

    /// <summary>
    /// std::vector&lt;int32_t>*
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    internal unsafe struct CxxVectorInt32
    {
        public IntPtr ptr;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public CxxVectorInt32(IntPtr x)
        {
            ptr = x;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public int[] Fetch() => ToArray();
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Set(ReadOnlySpan<int> value)
        {
            if (value.IsEmpty)
            {
                td_bridge_vector_int32_assign(ptr, null, 0);
                return;
            }
            fixed (int* x = value)
                td_bridge_vector_int32_assign(ptr, x, value.Length);
        }

        public static implicit operator int[] (CxxVectorInt32 x) => x.ToArray();
        public static implicit operator ReadOnlySpan<int>(CxxVectorInt32 x) => x.AsSpan();
        public static implicit operator IntPtr(CxxVectorInt32 x) => x.ptr;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public ReadOnlySpan<int> AsSpan()
        {
            var data = td_bridge_vector_int32_data(ptr, out var len);
            return new ReadOnlySpan<int>(data, (int)len).ToArray();
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public int[] ToArray() => AsSpan().ToArray();
    }

    /// <summary>
    /// std::vector&lt;int64_t>*
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    internal unsafe struct CxxVectorInt64
    {
        public IntPtr ptr;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public CxxVectorInt64(IntPtr x)
        {
            ptr = x;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public long[] Fetch() => ToArray();
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Set(ReadOnlySpan<long> value)
        {
            if (value.IsEmpty)
            {
                td_bridge_vector_int64_assign(ptr, null, 0);
                return;
            }
            fixed (long* x = value)
                td_bridge_vector_int64_assign(ptr, x, value.Length);
        }

        public static implicit operator IntPtr(CxxVectorInt64 x) => x.ptr;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public ReadOnlySpan<long> AsSpan()
        {
            var data = td_bridge_vector_int64_data(ptr, out var len);
            return new Span<long>(data, (int)len).ToArray();
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public long[] ToArray() => AsSpan().ToArray();
    }

    /// <summary>
    /// std::vector&lt;object_ptr&lt;T>>*
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    internal unsafe struct CxxVectorObject<T> where T : TLObject
    {
        public IntPtr ptr;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public CxxVectorObject(IntPtr x)
        {
            ptr = x;
        }

        public static implicit operator IntPtr(CxxVectorObject<T> x) => x.ptr;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public T[] Fetch() => ToArray();
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Set(IEnumerable<T> data)
        {
            Clear();
            if (data != null)
                foreach (var x in data) Add(x);
        }
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Add(TLObject obj)
        {
            td_bridge_vector_object_emplace_back(ptr, obj.TdCreateCxxObject());
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Clear()
        {
            td_bridge_vector_object_clear(ptr);
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public T[] ToArray()
        {
            var data = td_bridge_vector_object_data(ptr, out var len);
            var span = new ReadOnlySpan<IntPtr>(data, (int)len).ToArray();
            return span.Select(x => (T)TLObjectFactory.FetchCxxObject(x)).ToArray();
        }
    }

    /// <summary>
    /// std::vector&lt;std::string>*
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    internal unsafe struct CxxVectorString
    {
        public CxxVectorBytes vecbytes;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public CxxVectorString(IntPtr x)
        {
            vecbytes = new CxxVectorBytes(x);
        }

        public static implicit operator IntPtr(CxxVectorString x) => x.vecbytes.ptr;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public string[] Fetch() => ToArray();
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Set(IEnumerable<string> data)
        {
            Clear();
            if (data != null)
                foreach (var x in data) Add(x);
        }
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Clear() => vecbytes.Clear();

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Add(string value) => vecbytes.Add(Encoding.UTF8.GetBytes(value));

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public string[] ToArray()
        {
            var len = vecbytes.Length;
            var result = new string[len];
            for (long i = 0; i < len; i++)
            {
                result[i] = Encoding.UTF8.GetString(vecbytes.SpanAt(i));
            }
            return result;
        }
    }

    /// <summary>
    /// std::vector&lt;std::string>*
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    internal unsafe struct CxxVectorBytes
    {
        public IntPtr ptr;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public CxxVectorBytes(IntPtr x)
        {
            ptr = x;
        }


        public static implicit operator IntPtr(CxxVectorBytes x) => x.ptr;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public byte[][] Fetch() => ToArray();
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Set(IEnumerable<byte[]> data)
        {
            Clear();
            if (data != null)
                foreach (var x in data) Add(x);
        }
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Add(ReadOnlySpan<byte> value)
        {
            fixed (byte* x = value)
                td_bridge_vector_string_emplace_back(ptr, x, value.Length);
        }
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Clear()
        {
            td_bridge_vector_string_clear(ptr);
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public ReadOnlySpan<byte> SpanAt(long index)
        {
            if (index < 0 || index >= Length)
                throw new IndexOutOfRangeException();
            return td_bridge_vector_string_at(ptr, index).AsSpan();
        }

        public long Length => td_bridge_vector_string_size(ptr);

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public byte[][] ToArray()
        {
            var len = Length;
            var result = (byte[][])Array.CreateInstance(typeof(byte[]), len);
            for (long i = 0; i < len; i++)
            {
                result[i] = td_bridge_vector_string_at(ptr, i).ToArray();
            }
            return result;
        }
    }

    /// <summary>
    /// std::vector&lt;std::vector&lt;object_ptr&lt;T>>>*
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    internal struct CxxVectorVectorObject<T> where T : TLObject
    {
        public IntPtr ptr;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public CxxVectorVectorObject(IntPtr x)
        {
            ptr = x;
        }

        public static implicit operator IntPtr(CxxVectorVectorObject<T> x) => x.ptr;
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public T[][] Fetch() => ToArray();
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Set(IEnumerable<IEnumerable<T>> data)
        {
            Clear();
            if (data != null)
                foreach (var x in data) Add(x);
        }
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Clear()
        {
            td_bridge_vector_vector_object_clear(ptr);
        }
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Add(IEnumerable<T> value)
        {
            var vec = new CxxVectorObject<T>(td_bridge_vector_vector_object_emplace_back(ptr));
            if (value == null) return;
            foreach (var obj in value)
            {
                vec.Add(obj);
            }
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public T[][] ToArray()
        {
            var len = td_bridge_vector_vector_object_size(ptr);
            var result = (T[][])Array.CreateInstance(typeof(T[]), len);
            for (long i = 0; i < len; i++)
            {
                result[i] = new CxxVectorObject<T>(td_bridge_vector_vector_object_at(ptr, i)).ToArray();
            }
            return result;
        }
    }
}
