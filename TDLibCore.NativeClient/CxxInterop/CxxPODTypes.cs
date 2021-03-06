using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace TDLibCore.NativeClient.CxxInterop
{
    /// <summary>
    /// bool*
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    internal struct CxxBool
    {
        public IntPtr ptr;

        public CxxBool(IntPtr x)
        {
            ptr = x;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public unsafe bool Fetch()
        {
            var value = *(byte*)ptr;
            return value != 0;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public unsafe void Set(bool value)
        {
            if (value)
                *(byte*)ptr = 1;
            else
                *(byte*)ptr = 0;
        }
    }

    /// <summary>
    /// int32_t*
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    internal struct CxxInt32
    {
        public IntPtr ptr;

        public CxxInt32(IntPtr x)
        {
            ptr = x;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public unsafe int Fetch()
        {
            var value = *(int*)ptr;
            return value;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public unsafe void Set(int value)
        {
            *(int*)ptr = value;
        }
    }

    /// <summary>
    /// int64_t*
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    internal struct CxxInt64
    {
        public IntPtr ptr;

        public CxxInt64(IntPtr x)
        {
            ptr = x;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public unsafe long Fetch()
        {
            var value = *(long*)ptr;
            return value;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public unsafe void Set(long value)
        {
            *(long*)ptr = value;
        }
    }

    /// <summary>
    /// double*
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    internal struct CxxFloat64
    {
        public IntPtr ptr;

        public CxxFloat64(IntPtr x)
        {
            ptr = x;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public unsafe double Fetch()
        {
            var value = *(double*)ptr;
            return value;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public unsafe void Set(double value)
        {
            *(double*)ptr = value;
        }
    }
}
