#include "tdcxxbridge.h"

//////////////////////////////////////
//// GENERATED FILE! DO NOT EDIT! ////
//////////////////////////////////////

using namespace td::td_api;

EXPORT error *td_bridge_newobj_error() { return new error(); }
EXPORT auto td_bridge_obj_error_code(error *obj) { return &obj->code_; }
EXPORT auto td_bridge_obj_error_message(error *obj) { return &obj->message_; }

EXPORT ok *td_bridge_newobj_ok() { return new ok(); }

EXPORT tdlibParameters *td_bridge_newobj_tdlibParameters() { return new tdlibParameters(); }
EXPORT auto td_bridge_obj_tdlibParameters_use_test_dc(tdlibParameters *obj) { return &obj->use_test_dc_; }
EXPORT auto td_bridge_obj_tdlibParameters_database_directory(tdlibParameters *obj) { return &obj->database_directory_; }
EXPORT auto td_bridge_obj_tdlibParameters_files_directory(tdlibParameters *obj) { return &obj->files_directory_; }
EXPORT auto td_bridge_obj_tdlibParameters_use_file_database(tdlibParameters *obj) { return &obj->use_file_database_; }
EXPORT auto td_bridge_obj_tdlibParameters_use_chat_info_database(tdlibParameters *obj) { return &obj->use_chat_info_database_; }
EXPORT auto td_bridge_obj_tdlibParameters_use_message_database(tdlibParameters *obj) { return &obj->use_message_database_; }
EXPORT auto td_bridge_obj_tdlibParameters_use_secret_chats(tdlibParameters *obj) { return &obj->use_secret_chats_; }
EXPORT auto td_bridge_obj_tdlibParameters_api_id(tdlibParameters *obj) { return &obj->api_id_; }
EXPORT auto td_bridge_obj_tdlibParameters_api_hash(tdlibParameters *obj) { return &obj->api_hash_; }
EXPORT auto td_bridge_obj_tdlibParameters_system_language_code(tdlibParameters *obj) { return &obj->system_language_code_; }
EXPORT auto td_bridge_obj_tdlibParameters_device_model(tdlibParameters *obj) { return &obj->device_model_; }
EXPORT auto td_bridge_obj_tdlibParameters_system_version(tdlibParameters *obj) { return &obj->system_version_; }
EXPORT auto td_bridge_obj_tdlibParameters_application_version(tdlibParameters *obj) { return &obj->application_version_; }
EXPORT auto td_bridge_obj_tdlibParameters_enable_storage_optimizer(tdlibParameters *obj) { return &obj->enable_storage_optimizer_; }
EXPORT auto td_bridge_obj_tdlibParameters_ignore_file_names(tdlibParameters *obj) { return &obj->ignore_file_names_; }

EXPORT authenticationCodeTypeTelegramMessage *td_bridge_newobj_authenticationCodeTypeTelegramMessage() { return new authenticationCodeTypeTelegramMessage(); }
EXPORT auto td_bridge_obj_authenticationCodeTypeTelegramMessage_length(authenticationCodeTypeTelegramMessage *obj) { return &obj->length_; }

EXPORT authenticationCodeTypeSms *td_bridge_newobj_authenticationCodeTypeSms() { return new authenticationCodeTypeSms(); }
EXPORT auto td_bridge_obj_authenticationCodeTypeSms_length(authenticationCodeTypeSms *obj) { return &obj->length_; }

EXPORT authenticationCodeTypeCall *td_bridge_newobj_authenticationCodeTypeCall() { return new authenticationCodeTypeCall(); }
EXPORT auto td_bridge_obj_authenticationCodeTypeCall_length(authenticationCodeTypeCall *obj) { return &obj->length_; }

EXPORT authenticationCodeTypeFlashCall *td_bridge_newobj_authenticationCodeTypeFlashCall() { return new authenticationCodeTypeFlashCall(); }
EXPORT auto td_bridge_obj_authenticationCodeTypeFlashCall_pattern(authenticationCodeTypeFlashCall *obj) { return &obj->pattern_; }

EXPORT authenticationCodeInfo *td_bridge_newobj_authenticationCodeInfo() { return new authenticationCodeInfo(); }
EXPORT auto td_bridge_obj_authenticationCodeInfo_phone_number(authenticationCodeInfo *obj) { return &obj->phone_number_; }
EXPORT auto td_bridge_obj_authenticationCodeInfo_type(authenticationCodeInfo *obj) { return &obj->type_; }
EXPORT auto td_bridge_obj_authenticationCodeInfo_next_type(authenticationCodeInfo *obj) { return &obj->next_type_; }
EXPORT auto td_bridge_obj_authenticationCodeInfo_timeout(authenticationCodeInfo *obj) { return &obj->timeout_; }

EXPORT emailAddressAuthenticationCodeInfo *td_bridge_newobj_emailAddressAuthenticationCodeInfo() { return new emailAddressAuthenticationCodeInfo(); }
EXPORT auto td_bridge_obj_emailAddressAuthenticationCodeInfo_email_address_pattern(emailAddressAuthenticationCodeInfo *obj) { return &obj->email_address_pattern_; }
EXPORT auto td_bridge_obj_emailAddressAuthenticationCodeInfo_length(emailAddressAuthenticationCodeInfo *obj) { return &obj->length_; }

EXPORT textEntity *td_bridge_newobj_textEntity() { return new textEntity(); }
EXPORT auto td_bridge_obj_textEntity_offset(textEntity *obj) { return &obj->offset_; }
EXPORT auto td_bridge_obj_textEntity_length(textEntity *obj) { return &obj->length_; }
EXPORT auto td_bridge_obj_textEntity_type(textEntity *obj) { return &obj->type_; }

EXPORT textEntities *td_bridge_newobj_textEntities() { return new textEntities(); }
EXPORT auto td_bridge_obj_textEntities_entities(textEntities *obj) { return &obj->entities_; }

EXPORT formattedText *td_bridge_newobj_formattedText() { return new formattedText(); }
EXPORT auto td_bridge_obj_formattedText_text(formattedText *obj) { return &obj->text_; }
EXPORT auto td_bridge_obj_formattedText_entities(formattedText *obj) { return &obj->entities_; }

EXPORT termsOfService *td_bridge_newobj_termsOfService() { return new termsOfService(); }
EXPORT auto td_bridge_obj_termsOfService_text(termsOfService *obj) { return &obj->text_; }
EXPORT auto td_bridge_obj_termsOfService_min_user_age(termsOfService *obj) { return &obj->min_user_age_; }
EXPORT auto td_bridge_obj_termsOfService_show_popup(termsOfService *obj) { return &obj->show_popup_; }

EXPORT authorizationStateWaitTdlibParameters *td_bridge_newobj_authorizationStateWaitTdlibParameters() { return new authorizationStateWaitTdlibParameters(); }

EXPORT authorizationStateWaitEncryptionKey *td_bridge_newobj_authorizationStateWaitEncryptionKey() { return new authorizationStateWaitEncryptionKey(); }
EXPORT auto td_bridge_obj_authorizationStateWaitEncryptionKey_is_encrypted(authorizationStateWaitEncryptionKey *obj) { return &obj->is_encrypted_; }

EXPORT authorizationStateWaitPhoneNumber *td_bridge_newobj_authorizationStateWaitPhoneNumber() { return new authorizationStateWaitPhoneNumber(); }

EXPORT authorizationStateWaitCode *td_bridge_newobj_authorizationStateWaitCode() { return new authorizationStateWaitCode(); }
EXPORT auto td_bridge_obj_authorizationStateWaitCode_is_registered(authorizationStateWaitCode *obj) { return &obj->is_registered_; }
EXPORT auto td_bridge_obj_authorizationStateWaitCode_terms_of_service(authorizationStateWaitCode *obj) { return &obj->terms_of_service_; }
EXPORT auto td_bridge_obj_authorizationStateWaitCode_code_info(authorizationStateWaitCode *obj) { return &obj->code_info_; }

EXPORT authorizationStateWaitPassword *td_bridge_newobj_authorizationStateWaitPassword() { return new authorizationStateWaitPassword(); }
EXPORT auto td_bridge_obj_authorizationStateWaitPassword_password_hint(authorizationStateWaitPassword *obj) { return &obj->password_hint_; }
EXPORT auto td_bridge_obj_authorizationStateWaitPassword_has_recovery_email_address(authorizationStateWaitPassword *obj) { return &obj->has_recovery_email_address_; }
EXPORT auto td_bridge_obj_authorizationStateWaitPassword_recovery_email_address_pattern(authorizationStateWaitPassword *obj) { return &obj->recovery_email_address_pattern_; }

EXPORT authorizationStateReady *td_bridge_newobj_authorizationStateReady() { return new authorizationStateReady(); }

EXPORT authorizationStateLoggingOut *td_bridge_newobj_authorizationStateLoggingOut() { return new authorizationStateLoggingOut(); }

EXPORT authorizationStateClosing *td_bridge_newobj_authorizationStateClosing() { return new authorizationStateClosing(); }

EXPORT authorizationStateClosed *td_bridge_newobj_authorizationStateClosed() { return new authorizationStateClosed(); }

EXPORT passwordState *td_bridge_newobj_passwordState() { return new passwordState(); }
EXPORT auto td_bridge_obj_passwordState_has_password(passwordState *obj) { return &obj->has_password_; }
EXPORT auto td_bridge_obj_passwordState_password_hint(passwordState *obj) { return &obj->password_hint_; }
EXPORT auto td_bridge_obj_passwordState_has_recovery_email_address(passwordState *obj) { return &obj->has_recovery_email_address_; }
EXPORT auto td_bridge_obj_passwordState_has_passport_data(passwordState *obj) { return &obj->has_passport_data_; }
EXPORT auto td_bridge_obj_passwordState_unconfirmed_recovery_email_address_pattern(passwordState *obj) { return &obj->unconfirmed_recovery_email_address_pattern_; }

EXPORT recoveryEmailAddress *td_bridge_newobj_recoveryEmailAddress() { return new recoveryEmailAddress(); }
EXPORT auto td_bridge_obj_recoveryEmailAddress_recovery_email_address(recoveryEmailAddress *obj) { return &obj->recovery_email_address_; }

EXPORT temporaryPasswordState *td_bridge_newobj_temporaryPasswordState() { return new temporaryPasswordState(); }
EXPORT auto td_bridge_obj_temporaryPasswordState_has_password(temporaryPasswordState *obj) { return &obj->has_password_; }
EXPORT auto td_bridge_obj_temporaryPasswordState_valid_for(temporaryPasswordState *obj) { return &obj->valid_for_; }

EXPORT localFile *td_bridge_newobj_localFile() { return new localFile(); }
EXPORT auto td_bridge_obj_localFile_path(localFile *obj) { return &obj->path_; }
EXPORT auto td_bridge_obj_localFile_can_be_downloaded(localFile *obj) { return &obj->can_be_downloaded_; }
EXPORT auto td_bridge_obj_localFile_can_be_deleted(localFile *obj) { return &obj->can_be_deleted_; }
EXPORT auto td_bridge_obj_localFile_is_downloading_active(localFile *obj) { return &obj->is_downloading_active_; }
EXPORT auto td_bridge_obj_localFile_is_downloading_completed(localFile *obj) { return &obj->is_downloading_completed_; }
EXPORT auto td_bridge_obj_localFile_downloaded_prefix_size(localFile *obj) { return &obj->downloaded_prefix_size_; }
EXPORT auto td_bridge_obj_localFile_downloaded_size(localFile *obj) { return &obj->downloaded_size_; }

EXPORT remoteFile *td_bridge_newobj_remoteFile() { return new remoteFile(); }
EXPORT auto td_bridge_obj_remoteFile_id(remoteFile *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_remoteFile_is_uploading_active(remoteFile *obj) { return &obj->is_uploading_active_; }
EXPORT auto td_bridge_obj_remoteFile_is_uploading_completed(remoteFile *obj) { return &obj->is_uploading_completed_; }
EXPORT auto td_bridge_obj_remoteFile_uploaded_size(remoteFile *obj) { return &obj->uploaded_size_; }

EXPORT file *td_bridge_newobj_file() { return new file(); }
EXPORT auto td_bridge_obj_file_id(file *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_file_size(file *obj) { return &obj->size_; }
EXPORT auto td_bridge_obj_file_expected_size(file *obj) { return &obj->expected_size_; }
EXPORT auto td_bridge_obj_file_local(file *obj) { return &obj->local_; }
EXPORT auto td_bridge_obj_file_remote(file *obj) { return &obj->remote_; }

EXPORT inputFileId *td_bridge_newobj_inputFileId() { return new inputFileId(); }
EXPORT auto td_bridge_obj_inputFileId_id(inputFileId *obj) { return &obj->id_; }

EXPORT inputFileRemote *td_bridge_newobj_inputFileRemote() { return new inputFileRemote(); }
EXPORT auto td_bridge_obj_inputFileRemote_id(inputFileRemote *obj) { return &obj->id_; }

EXPORT inputFileLocal *td_bridge_newobj_inputFileLocal() { return new inputFileLocal(); }
EXPORT auto td_bridge_obj_inputFileLocal_path(inputFileLocal *obj) { return &obj->path_; }

EXPORT inputFileGenerated *td_bridge_newobj_inputFileGenerated() { return new inputFileGenerated(); }
EXPORT auto td_bridge_obj_inputFileGenerated_original_path(inputFileGenerated *obj) { return &obj->original_path_; }
EXPORT auto td_bridge_obj_inputFileGenerated_conversion(inputFileGenerated *obj) { return &obj->conversion_; }
EXPORT auto td_bridge_obj_inputFileGenerated_expected_size(inputFileGenerated *obj) { return &obj->expected_size_; }

EXPORT photoSize *td_bridge_newobj_photoSize() { return new photoSize(); }
EXPORT auto td_bridge_obj_photoSize_type(photoSize *obj) { return &obj->type_; }
EXPORT auto td_bridge_obj_photoSize_photo(photoSize *obj) { return &obj->photo_; }
EXPORT auto td_bridge_obj_photoSize_width(photoSize *obj) { return &obj->width_; }
EXPORT auto td_bridge_obj_photoSize_height(photoSize *obj) { return &obj->height_; }

EXPORT maskPointForehead *td_bridge_newobj_maskPointForehead() { return new maskPointForehead(); }

EXPORT maskPointEyes *td_bridge_newobj_maskPointEyes() { return new maskPointEyes(); }

EXPORT maskPointMouth *td_bridge_newobj_maskPointMouth() { return new maskPointMouth(); }

EXPORT maskPointChin *td_bridge_newobj_maskPointChin() { return new maskPointChin(); }

EXPORT maskPosition *td_bridge_newobj_maskPosition() { return new maskPosition(); }
EXPORT auto td_bridge_obj_maskPosition_point(maskPosition *obj) { return &obj->point_; }
EXPORT auto td_bridge_obj_maskPosition_x_shift(maskPosition *obj) { return &obj->x_shift_; }
EXPORT auto td_bridge_obj_maskPosition_y_shift(maskPosition *obj) { return &obj->y_shift_; }
EXPORT auto td_bridge_obj_maskPosition_scale(maskPosition *obj) { return &obj->scale_; }

EXPORT animation *td_bridge_newobj_animation() { return new animation(); }
EXPORT auto td_bridge_obj_animation_duration(animation *obj) { return &obj->duration_; }
EXPORT auto td_bridge_obj_animation_width(animation *obj) { return &obj->width_; }
EXPORT auto td_bridge_obj_animation_height(animation *obj) { return &obj->height_; }
EXPORT auto td_bridge_obj_animation_file_name(animation *obj) { return &obj->file_name_; }
EXPORT auto td_bridge_obj_animation_mime_type(animation *obj) { return &obj->mime_type_; }
EXPORT auto td_bridge_obj_animation_thumbnail(animation *obj) { return &obj->thumbnail_; }
EXPORT auto td_bridge_obj_animation_animation(animation *obj) { return &obj->animation_; }

EXPORT audio *td_bridge_newobj_audio() { return new audio(); }
EXPORT auto td_bridge_obj_audio_duration(audio *obj) { return &obj->duration_; }
EXPORT auto td_bridge_obj_audio_title(audio *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_audio_performer(audio *obj) { return &obj->performer_; }
EXPORT auto td_bridge_obj_audio_file_name(audio *obj) { return &obj->file_name_; }
EXPORT auto td_bridge_obj_audio_mime_type(audio *obj) { return &obj->mime_type_; }
EXPORT auto td_bridge_obj_audio_album_cover_thumbnail(audio *obj) { return &obj->album_cover_thumbnail_; }
EXPORT auto td_bridge_obj_audio_audio(audio *obj) { return &obj->audio_; }

EXPORT document *td_bridge_newobj_document() { return new document(); }
EXPORT auto td_bridge_obj_document_file_name(document *obj) { return &obj->file_name_; }
EXPORT auto td_bridge_obj_document_mime_type(document *obj) { return &obj->mime_type_; }
EXPORT auto td_bridge_obj_document_thumbnail(document *obj) { return &obj->thumbnail_; }
EXPORT auto td_bridge_obj_document_document(document *obj) { return &obj->document_; }

EXPORT photo *td_bridge_newobj_photo() { return new photo(); }
EXPORT auto td_bridge_obj_photo_id(photo *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_photo_has_stickers(photo *obj) { return &obj->has_stickers_; }
EXPORT auto td_bridge_obj_photo_sizes(photo *obj) { return &obj->sizes_; }

EXPORT sticker *td_bridge_newobj_sticker() { return new sticker(); }
EXPORT auto td_bridge_obj_sticker_set_id(sticker *obj) { return &obj->set_id_; }
EXPORT auto td_bridge_obj_sticker_width(sticker *obj) { return &obj->width_; }
EXPORT auto td_bridge_obj_sticker_height(sticker *obj) { return &obj->height_; }
EXPORT auto td_bridge_obj_sticker_emoji(sticker *obj) { return &obj->emoji_; }
EXPORT auto td_bridge_obj_sticker_is_mask(sticker *obj) { return &obj->is_mask_; }
EXPORT auto td_bridge_obj_sticker_mask_position(sticker *obj) { return &obj->mask_position_; }
EXPORT auto td_bridge_obj_sticker_thumbnail(sticker *obj) { return &obj->thumbnail_; }
EXPORT auto td_bridge_obj_sticker_sticker(sticker *obj) { return &obj->sticker_; }

EXPORT video *td_bridge_newobj_video() { return new video(); }
EXPORT auto td_bridge_obj_video_duration(video *obj) { return &obj->duration_; }
EXPORT auto td_bridge_obj_video_width(video *obj) { return &obj->width_; }
EXPORT auto td_bridge_obj_video_height(video *obj) { return &obj->height_; }
EXPORT auto td_bridge_obj_video_file_name(video *obj) { return &obj->file_name_; }
EXPORT auto td_bridge_obj_video_mime_type(video *obj) { return &obj->mime_type_; }
EXPORT auto td_bridge_obj_video_has_stickers(video *obj) { return &obj->has_stickers_; }
EXPORT auto td_bridge_obj_video_supports_streaming(video *obj) { return &obj->supports_streaming_; }
EXPORT auto td_bridge_obj_video_thumbnail(video *obj) { return &obj->thumbnail_; }
EXPORT auto td_bridge_obj_video_video(video *obj) { return &obj->video_; }

EXPORT videoNote *td_bridge_newobj_videoNote() { return new videoNote(); }
EXPORT auto td_bridge_obj_videoNote_duration(videoNote *obj) { return &obj->duration_; }
EXPORT auto td_bridge_obj_videoNote_length(videoNote *obj) { return &obj->length_; }
EXPORT auto td_bridge_obj_videoNote_thumbnail(videoNote *obj) { return &obj->thumbnail_; }
EXPORT auto td_bridge_obj_videoNote_video(videoNote *obj) { return &obj->video_; }

EXPORT voiceNote *td_bridge_newobj_voiceNote() { return new voiceNote(); }
EXPORT auto td_bridge_obj_voiceNote_duration(voiceNote *obj) { return &obj->duration_; }
EXPORT auto td_bridge_obj_voiceNote_waveform(voiceNote *obj) { return &obj->waveform_; }
EXPORT auto td_bridge_obj_voiceNote_mime_type(voiceNote *obj) { return &obj->mime_type_; }
EXPORT auto td_bridge_obj_voiceNote_voice(voiceNote *obj) { return &obj->voice_; }

EXPORT contact *td_bridge_newobj_contact() { return new contact(); }
EXPORT auto td_bridge_obj_contact_phone_number(contact *obj) { return &obj->phone_number_; }
EXPORT auto td_bridge_obj_contact_first_name(contact *obj) { return &obj->first_name_; }
EXPORT auto td_bridge_obj_contact_last_name(contact *obj) { return &obj->last_name_; }
EXPORT auto td_bridge_obj_contact_vcard(contact *obj) { return &obj->vcard_; }
EXPORT auto td_bridge_obj_contact_user_id(contact *obj) { return &obj->user_id_; }

EXPORT location *td_bridge_newobj_location() { return new location(); }
EXPORT auto td_bridge_obj_location_latitude(location *obj) { return &obj->latitude_; }
EXPORT auto td_bridge_obj_location_longitude(location *obj) { return &obj->longitude_; }

EXPORT venue *td_bridge_newobj_venue() { return new venue(); }
EXPORT auto td_bridge_obj_venue_location(venue *obj) { return &obj->location_; }
EXPORT auto td_bridge_obj_venue_title(venue *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_venue_address(venue *obj) { return &obj->address_; }
EXPORT auto td_bridge_obj_venue_provider(venue *obj) { return &obj->provider_; }
EXPORT auto td_bridge_obj_venue_id(venue *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_venue_type(venue *obj) { return &obj->type_; }

EXPORT game *td_bridge_newobj_game() { return new game(); }
EXPORT auto td_bridge_obj_game_id(game *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_game_short_name(game *obj) { return &obj->short_name_; }
EXPORT auto td_bridge_obj_game_title(game *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_game_text(game *obj) { return &obj->text_; }
EXPORT auto td_bridge_obj_game_description(game *obj) { return &obj->description_; }
EXPORT auto td_bridge_obj_game_photo(game *obj) { return &obj->photo_; }
EXPORT auto td_bridge_obj_game_animation(game *obj) { return &obj->animation_; }

EXPORT profilePhoto *td_bridge_newobj_profilePhoto() { return new profilePhoto(); }
EXPORT auto td_bridge_obj_profilePhoto_id(profilePhoto *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_profilePhoto_small(profilePhoto *obj) { return &obj->small_; }
EXPORT auto td_bridge_obj_profilePhoto_big(profilePhoto *obj) { return &obj->big_; }

EXPORT chatPhoto *td_bridge_newobj_chatPhoto() { return new chatPhoto(); }
EXPORT auto td_bridge_obj_chatPhoto_small(chatPhoto *obj) { return &obj->small_; }
EXPORT auto td_bridge_obj_chatPhoto_big(chatPhoto *obj) { return &obj->big_; }

EXPORT linkStateNone *td_bridge_newobj_linkStateNone() { return new linkStateNone(); }

EXPORT linkStateKnowsPhoneNumber *td_bridge_newobj_linkStateKnowsPhoneNumber() { return new linkStateKnowsPhoneNumber(); }

EXPORT linkStateIsContact *td_bridge_newobj_linkStateIsContact() { return new linkStateIsContact(); }

EXPORT userTypeRegular *td_bridge_newobj_userTypeRegular() { return new userTypeRegular(); }

EXPORT userTypeDeleted *td_bridge_newobj_userTypeDeleted() { return new userTypeDeleted(); }

EXPORT userTypeBot *td_bridge_newobj_userTypeBot() { return new userTypeBot(); }
EXPORT auto td_bridge_obj_userTypeBot_can_join_groups(userTypeBot *obj) { return &obj->can_join_groups_; }
EXPORT auto td_bridge_obj_userTypeBot_can_read_all_group_messages(userTypeBot *obj) { return &obj->can_read_all_group_messages_; }
EXPORT auto td_bridge_obj_userTypeBot_is_inline(userTypeBot *obj) { return &obj->is_inline_; }
EXPORT auto td_bridge_obj_userTypeBot_inline_query_placeholder(userTypeBot *obj) { return &obj->inline_query_placeholder_; }
EXPORT auto td_bridge_obj_userTypeBot_need_location(userTypeBot *obj) { return &obj->need_location_; }

EXPORT userTypeUnknown *td_bridge_newobj_userTypeUnknown() { return new userTypeUnknown(); }

EXPORT botCommand *td_bridge_newobj_botCommand() { return new botCommand(); }
EXPORT auto td_bridge_obj_botCommand_command(botCommand *obj) { return &obj->command_; }
EXPORT auto td_bridge_obj_botCommand_description(botCommand *obj) { return &obj->description_; }

EXPORT botInfo *td_bridge_newobj_botInfo() { return new botInfo(); }
EXPORT auto td_bridge_obj_botInfo_description(botInfo *obj) { return &obj->description_; }
EXPORT auto td_bridge_obj_botInfo_commands(botInfo *obj) { return &obj->commands_; }

EXPORT user *td_bridge_newobj_user() { return new user(); }
EXPORT auto td_bridge_obj_user_id(user *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_user_first_name(user *obj) { return &obj->first_name_; }
EXPORT auto td_bridge_obj_user_last_name(user *obj) { return &obj->last_name_; }
EXPORT auto td_bridge_obj_user_username(user *obj) { return &obj->username_; }
EXPORT auto td_bridge_obj_user_phone_number(user *obj) { return &obj->phone_number_; }
EXPORT auto td_bridge_obj_user_status(user *obj) { return &obj->status_; }
EXPORT auto td_bridge_obj_user_profile_photo(user *obj) { return &obj->profile_photo_; }
EXPORT auto td_bridge_obj_user_outgoing_link(user *obj) { return &obj->outgoing_link_; }
EXPORT auto td_bridge_obj_user_incoming_link(user *obj) { return &obj->incoming_link_; }
EXPORT auto td_bridge_obj_user_is_verified(user *obj) { return &obj->is_verified_; }
EXPORT auto td_bridge_obj_user_restriction_reason(user *obj) { return &obj->restriction_reason_; }
EXPORT auto td_bridge_obj_user_have_access(user *obj) { return &obj->have_access_; }
EXPORT auto td_bridge_obj_user_type(user *obj) { return &obj->type_; }
EXPORT auto td_bridge_obj_user_language_code(user *obj) { return &obj->language_code_; }

EXPORT userFullInfo *td_bridge_newobj_userFullInfo() { return new userFullInfo(); }
EXPORT auto td_bridge_obj_userFullInfo_is_blocked(userFullInfo *obj) { return &obj->is_blocked_; }
EXPORT auto td_bridge_obj_userFullInfo_can_be_called(userFullInfo *obj) { return &obj->can_be_called_; }
EXPORT auto td_bridge_obj_userFullInfo_has_private_calls(userFullInfo *obj) { return &obj->has_private_calls_; }
EXPORT auto td_bridge_obj_userFullInfo_bio(userFullInfo *obj) { return &obj->bio_; }
EXPORT auto td_bridge_obj_userFullInfo_share_text(userFullInfo *obj) { return &obj->share_text_; }
EXPORT auto td_bridge_obj_userFullInfo_group_in_common_count(userFullInfo *obj) { return &obj->group_in_common_count_; }
EXPORT auto td_bridge_obj_userFullInfo_bot_info(userFullInfo *obj) { return &obj->bot_info_; }

EXPORT userProfilePhotos *td_bridge_newobj_userProfilePhotos() { return new userProfilePhotos(); }
EXPORT auto td_bridge_obj_userProfilePhotos_total_count(userProfilePhotos *obj) { return &obj->total_count_; }
EXPORT auto td_bridge_obj_userProfilePhotos_photos(userProfilePhotos *obj) { return &obj->photos_; }

EXPORT users *td_bridge_newobj_users() { return new users(); }
EXPORT auto td_bridge_obj_users_total_count(users *obj) { return &obj->total_count_; }
EXPORT auto td_bridge_obj_users_user_ids(users *obj) { return &obj->user_ids_; }

EXPORT chatMemberStatusCreator *td_bridge_newobj_chatMemberStatusCreator() { return new chatMemberStatusCreator(); }
EXPORT auto td_bridge_obj_chatMemberStatusCreator_is_member(chatMemberStatusCreator *obj) { return &obj->is_member_; }

EXPORT chatMemberStatusAdministrator *td_bridge_newobj_chatMemberStatusAdministrator() { return new chatMemberStatusAdministrator(); }
EXPORT auto td_bridge_obj_chatMemberStatusAdministrator_can_be_edited(chatMemberStatusAdministrator *obj) { return &obj->can_be_edited_; }
EXPORT auto td_bridge_obj_chatMemberStatusAdministrator_can_change_info(chatMemberStatusAdministrator *obj) { return &obj->can_change_info_; }
EXPORT auto td_bridge_obj_chatMemberStatusAdministrator_can_post_messages(chatMemberStatusAdministrator *obj) { return &obj->can_post_messages_; }
EXPORT auto td_bridge_obj_chatMemberStatusAdministrator_can_edit_messages(chatMemberStatusAdministrator *obj) { return &obj->can_edit_messages_; }
EXPORT auto td_bridge_obj_chatMemberStatusAdministrator_can_delete_messages(chatMemberStatusAdministrator *obj) { return &obj->can_delete_messages_; }
EXPORT auto td_bridge_obj_chatMemberStatusAdministrator_can_invite_users(chatMemberStatusAdministrator *obj) { return &obj->can_invite_users_; }
EXPORT auto td_bridge_obj_chatMemberStatusAdministrator_can_restrict_members(chatMemberStatusAdministrator *obj) { return &obj->can_restrict_members_; }
EXPORT auto td_bridge_obj_chatMemberStatusAdministrator_can_pin_messages(chatMemberStatusAdministrator *obj) { return &obj->can_pin_messages_; }
EXPORT auto td_bridge_obj_chatMemberStatusAdministrator_can_promote_members(chatMemberStatusAdministrator *obj) { return &obj->can_promote_members_; }

EXPORT chatMemberStatusMember *td_bridge_newobj_chatMemberStatusMember() { return new chatMemberStatusMember(); }

EXPORT chatMemberStatusRestricted *td_bridge_newobj_chatMemberStatusRestricted() { return new chatMemberStatusRestricted(); }
EXPORT auto td_bridge_obj_chatMemberStatusRestricted_is_member(chatMemberStatusRestricted *obj) { return &obj->is_member_; }
EXPORT auto td_bridge_obj_chatMemberStatusRestricted_restricted_until_date(chatMemberStatusRestricted *obj) { return &obj->restricted_until_date_; }
EXPORT auto td_bridge_obj_chatMemberStatusRestricted_can_send_messages(chatMemberStatusRestricted *obj) { return &obj->can_send_messages_; }
EXPORT auto td_bridge_obj_chatMemberStatusRestricted_can_send_media_messages(chatMemberStatusRestricted *obj) { return &obj->can_send_media_messages_; }
EXPORT auto td_bridge_obj_chatMemberStatusRestricted_can_send_other_messages(chatMemberStatusRestricted *obj) { return &obj->can_send_other_messages_; }
EXPORT auto td_bridge_obj_chatMemberStatusRestricted_can_add_web_page_previews(chatMemberStatusRestricted *obj) { return &obj->can_add_web_page_previews_; }

EXPORT chatMemberStatusLeft *td_bridge_newobj_chatMemberStatusLeft() { return new chatMemberStatusLeft(); }

EXPORT chatMemberStatusBanned *td_bridge_newobj_chatMemberStatusBanned() { return new chatMemberStatusBanned(); }
EXPORT auto td_bridge_obj_chatMemberStatusBanned_banned_until_date(chatMemberStatusBanned *obj) { return &obj->banned_until_date_; }

EXPORT chatMember *td_bridge_newobj_chatMember() { return new chatMember(); }
EXPORT auto td_bridge_obj_chatMember_user_id(chatMember *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_chatMember_inviter_user_id(chatMember *obj) { return &obj->inviter_user_id_; }
EXPORT auto td_bridge_obj_chatMember_joined_chat_date(chatMember *obj) { return &obj->joined_chat_date_; }
EXPORT auto td_bridge_obj_chatMember_status(chatMember *obj) { return &obj->status_; }
EXPORT auto td_bridge_obj_chatMember_bot_info(chatMember *obj) { return &obj->bot_info_; }

EXPORT chatMembers *td_bridge_newobj_chatMembers() { return new chatMembers(); }
EXPORT auto td_bridge_obj_chatMembers_total_count(chatMembers *obj) { return &obj->total_count_; }
EXPORT auto td_bridge_obj_chatMembers_members(chatMembers *obj) { return &obj->members_; }

EXPORT chatMembersFilterAdministrators *td_bridge_newobj_chatMembersFilterAdministrators() { return new chatMembersFilterAdministrators(); }

EXPORT chatMembersFilterMembers *td_bridge_newobj_chatMembersFilterMembers() { return new chatMembersFilterMembers(); }

EXPORT chatMembersFilterRestricted *td_bridge_newobj_chatMembersFilterRestricted() { return new chatMembersFilterRestricted(); }

EXPORT chatMembersFilterBanned *td_bridge_newobj_chatMembersFilterBanned() { return new chatMembersFilterBanned(); }

EXPORT chatMembersFilterBots *td_bridge_newobj_chatMembersFilterBots() { return new chatMembersFilterBots(); }

EXPORT supergroupMembersFilterRecent *td_bridge_newobj_supergroupMembersFilterRecent() { return new supergroupMembersFilterRecent(); }

EXPORT supergroupMembersFilterAdministrators *td_bridge_newobj_supergroupMembersFilterAdministrators() { return new supergroupMembersFilterAdministrators(); }

EXPORT supergroupMembersFilterSearch *td_bridge_newobj_supergroupMembersFilterSearch() { return new supergroupMembersFilterSearch(); }
EXPORT auto td_bridge_obj_supergroupMembersFilterSearch_query(supergroupMembersFilterSearch *obj) { return &obj->query_; }

EXPORT supergroupMembersFilterRestricted *td_bridge_newobj_supergroupMembersFilterRestricted() { return new supergroupMembersFilterRestricted(); }
EXPORT auto td_bridge_obj_supergroupMembersFilterRestricted_query(supergroupMembersFilterRestricted *obj) { return &obj->query_; }

EXPORT supergroupMembersFilterBanned *td_bridge_newobj_supergroupMembersFilterBanned() { return new supergroupMembersFilterBanned(); }
EXPORT auto td_bridge_obj_supergroupMembersFilterBanned_query(supergroupMembersFilterBanned *obj) { return &obj->query_; }

EXPORT supergroupMembersFilterBots *td_bridge_newobj_supergroupMembersFilterBots() { return new supergroupMembersFilterBots(); }

EXPORT basicGroup *td_bridge_newobj_basicGroup() { return new basicGroup(); }
EXPORT auto td_bridge_obj_basicGroup_id(basicGroup *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_basicGroup_member_count(basicGroup *obj) { return &obj->member_count_; }
EXPORT auto td_bridge_obj_basicGroup_status(basicGroup *obj) { return &obj->status_; }
EXPORT auto td_bridge_obj_basicGroup_everyone_is_administrator(basicGroup *obj) { return &obj->everyone_is_administrator_; }
EXPORT auto td_bridge_obj_basicGroup_is_active(basicGroup *obj) { return &obj->is_active_; }
EXPORT auto td_bridge_obj_basicGroup_upgraded_to_supergroup_id(basicGroup *obj) { return &obj->upgraded_to_supergroup_id_; }

EXPORT basicGroupFullInfo *td_bridge_newobj_basicGroupFullInfo() { return new basicGroupFullInfo(); }
EXPORT auto td_bridge_obj_basicGroupFullInfo_creator_user_id(basicGroupFullInfo *obj) { return &obj->creator_user_id_; }
EXPORT auto td_bridge_obj_basicGroupFullInfo_members(basicGroupFullInfo *obj) { return &obj->members_; }
EXPORT auto td_bridge_obj_basicGroupFullInfo_invite_link(basicGroupFullInfo *obj) { return &obj->invite_link_; }

EXPORT supergroup *td_bridge_newobj_supergroup() { return new supergroup(); }
EXPORT auto td_bridge_obj_supergroup_id(supergroup *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_supergroup_username(supergroup *obj) { return &obj->username_; }
EXPORT auto td_bridge_obj_supergroup_date(supergroup *obj) { return &obj->date_; }
EXPORT auto td_bridge_obj_supergroup_status(supergroup *obj) { return &obj->status_; }
EXPORT auto td_bridge_obj_supergroup_member_count(supergroup *obj) { return &obj->member_count_; }
EXPORT auto td_bridge_obj_supergroup_anyone_can_invite(supergroup *obj) { return &obj->anyone_can_invite_; }
EXPORT auto td_bridge_obj_supergroup_sign_messages(supergroup *obj) { return &obj->sign_messages_; }
EXPORT auto td_bridge_obj_supergroup_is_channel(supergroup *obj) { return &obj->is_channel_; }
EXPORT auto td_bridge_obj_supergroup_is_verified(supergroup *obj) { return &obj->is_verified_; }
EXPORT auto td_bridge_obj_supergroup_restriction_reason(supergroup *obj) { return &obj->restriction_reason_; }

EXPORT supergroupFullInfo *td_bridge_newobj_supergroupFullInfo() { return new supergroupFullInfo(); }
EXPORT auto td_bridge_obj_supergroupFullInfo_description(supergroupFullInfo *obj) { return &obj->description_; }
EXPORT auto td_bridge_obj_supergroupFullInfo_member_count(supergroupFullInfo *obj) { return &obj->member_count_; }
EXPORT auto td_bridge_obj_supergroupFullInfo_administrator_count(supergroupFullInfo *obj) { return &obj->administrator_count_; }
EXPORT auto td_bridge_obj_supergroupFullInfo_restricted_count(supergroupFullInfo *obj) { return &obj->restricted_count_; }
EXPORT auto td_bridge_obj_supergroupFullInfo_banned_count(supergroupFullInfo *obj) { return &obj->banned_count_; }
EXPORT auto td_bridge_obj_supergroupFullInfo_can_get_members(supergroupFullInfo *obj) { return &obj->can_get_members_; }
EXPORT auto td_bridge_obj_supergroupFullInfo_can_set_username(supergroupFullInfo *obj) { return &obj->can_set_username_; }
EXPORT auto td_bridge_obj_supergroupFullInfo_can_set_sticker_set(supergroupFullInfo *obj) { return &obj->can_set_sticker_set_; }
EXPORT auto td_bridge_obj_supergroupFullInfo_is_all_history_available(supergroupFullInfo *obj) { return &obj->is_all_history_available_; }
EXPORT auto td_bridge_obj_supergroupFullInfo_sticker_set_id(supergroupFullInfo *obj) { return &obj->sticker_set_id_; }
EXPORT auto td_bridge_obj_supergroupFullInfo_invite_link(supergroupFullInfo *obj) { return &obj->invite_link_; }
EXPORT auto td_bridge_obj_supergroupFullInfo_pinned_message_id(supergroupFullInfo *obj) { return &obj->pinned_message_id_; }
EXPORT auto td_bridge_obj_supergroupFullInfo_upgraded_from_basic_group_id(supergroupFullInfo *obj) { return &obj->upgraded_from_basic_group_id_; }
EXPORT auto td_bridge_obj_supergroupFullInfo_upgraded_from_max_message_id(supergroupFullInfo *obj) { return &obj->upgraded_from_max_message_id_; }

EXPORT secretChatStatePending *td_bridge_newobj_secretChatStatePending() { return new secretChatStatePending(); }

EXPORT secretChatStateReady *td_bridge_newobj_secretChatStateReady() { return new secretChatStateReady(); }

EXPORT secretChatStateClosed *td_bridge_newobj_secretChatStateClosed() { return new secretChatStateClosed(); }

EXPORT secretChat *td_bridge_newobj_secretChat() { return new secretChat(); }
EXPORT auto td_bridge_obj_secretChat_id(secretChat *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_secretChat_user_id(secretChat *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_secretChat_state(secretChat *obj) { return &obj->state_; }
EXPORT auto td_bridge_obj_secretChat_is_outbound(secretChat *obj) { return &obj->is_outbound_; }
EXPORT auto td_bridge_obj_secretChat_ttl(secretChat *obj) { return &obj->ttl_; }
EXPORT auto td_bridge_obj_secretChat_key_hash(secretChat *obj) { return &obj->key_hash_; }
EXPORT auto td_bridge_obj_secretChat_layer(secretChat *obj) { return &obj->layer_; }

EXPORT messageForwardedFromUser *td_bridge_newobj_messageForwardedFromUser() { return new messageForwardedFromUser(); }
EXPORT auto td_bridge_obj_messageForwardedFromUser_sender_user_id(messageForwardedFromUser *obj) { return &obj->sender_user_id_; }
EXPORT auto td_bridge_obj_messageForwardedFromUser_date(messageForwardedFromUser *obj) { return &obj->date_; }
EXPORT auto td_bridge_obj_messageForwardedFromUser_forwarded_from_chat_id(messageForwardedFromUser *obj) { return &obj->forwarded_from_chat_id_; }
EXPORT auto td_bridge_obj_messageForwardedFromUser_forwarded_from_message_id(messageForwardedFromUser *obj) { return &obj->forwarded_from_message_id_; }

EXPORT messageForwardedPost *td_bridge_newobj_messageForwardedPost() { return new messageForwardedPost(); }
EXPORT auto td_bridge_obj_messageForwardedPost_chat_id(messageForwardedPost *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_messageForwardedPost_author_signature(messageForwardedPost *obj) { return &obj->author_signature_; }
EXPORT auto td_bridge_obj_messageForwardedPost_date(messageForwardedPost *obj) { return &obj->date_; }
EXPORT auto td_bridge_obj_messageForwardedPost_message_id(messageForwardedPost *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_messageForwardedPost_forwarded_from_chat_id(messageForwardedPost *obj) { return &obj->forwarded_from_chat_id_; }
EXPORT auto td_bridge_obj_messageForwardedPost_forwarded_from_message_id(messageForwardedPost *obj) { return &obj->forwarded_from_message_id_; }

EXPORT messageSendingStatePending *td_bridge_newobj_messageSendingStatePending() { return new messageSendingStatePending(); }

EXPORT messageSendingStateFailed *td_bridge_newobj_messageSendingStateFailed() { return new messageSendingStateFailed(); }

EXPORT message *td_bridge_newobj_message() { return new message(); }
EXPORT auto td_bridge_obj_message_id(message *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_message_sender_user_id(message *obj) { return &obj->sender_user_id_; }
EXPORT auto td_bridge_obj_message_chat_id(message *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_message_sending_state(message *obj) { return &obj->sending_state_; }
EXPORT auto td_bridge_obj_message_is_outgoing(message *obj) { return &obj->is_outgoing_; }
EXPORT auto td_bridge_obj_message_can_be_edited(message *obj) { return &obj->can_be_edited_; }
EXPORT auto td_bridge_obj_message_can_be_forwarded(message *obj) { return &obj->can_be_forwarded_; }
EXPORT auto td_bridge_obj_message_can_be_deleted_only_for_self(message *obj) { return &obj->can_be_deleted_only_for_self_; }
EXPORT auto td_bridge_obj_message_can_be_deleted_for_all_users(message *obj) { return &obj->can_be_deleted_for_all_users_; }
EXPORT auto td_bridge_obj_message_is_channel_post(message *obj) { return &obj->is_channel_post_; }
EXPORT auto td_bridge_obj_message_contains_unread_mention(message *obj) { return &obj->contains_unread_mention_; }
EXPORT auto td_bridge_obj_message_date(message *obj) { return &obj->date_; }
EXPORT auto td_bridge_obj_message_edit_date(message *obj) { return &obj->edit_date_; }
EXPORT auto td_bridge_obj_message_forward_info(message *obj) { return &obj->forward_info_; }
EXPORT auto td_bridge_obj_message_reply_to_message_id(message *obj) { return &obj->reply_to_message_id_; }
EXPORT auto td_bridge_obj_message_ttl(message *obj) { return &obj->ttl_; }
EXPORT auto td_bridge_obj_message_ttl_expires_in(message *obj) { return &obj->ttl_expires_in_; }
EXPORT auto td_bridge_obj_message_via_bot_user_id(message *obj) { return &obj->via_bot_user_id_; }
EXPORT auto td_bridge_obj_message_author_signature(message *obj) { return &obj->author_signature_; }
EXPORT auto td_bridge_obj_message_views(message *obj) { return &obj->views_; }
EXPORT auto td_bridge_obj_message_media_album_id(message *obj) { return &obj->media_album_id_; }
EXPORT auto td_bridge_obj_message_content(message *obj) { return &obj->content_; }
EXPORT auto td_bridge_obj_message_reply_markup(message *obj) { return &obj->reply_markup_; }

EXPORT messages *td_bridge_newobj_messages() { return new messages(); }
EXPORT auto td_bridge_obj_messages_total_count(messages *obj) { return &obj->total_count_; }
EXPORT auto td_bridge_obj_messages_messages(messages *obj) { return &obj->messages_; }

EXPORT foundMessages *td_bridge_newobj_foundMessages() { return new foundMessages(); }
EXPORT auto td_bridge_obj_foundMessages_messages(foundMessages *obj) { return &obj->messages_; }
EXPORT auto td_bridge_obj_foundMessages_next_from_search_id(foundMessages *obj) { return &obj->next_from_search_id_; }

EXPORT notificationSettingsScopePrivateChats *td_bridge_newobj_notificationSettingsScopePrivateChats() { return new notificationSettingsScopePrivateChats(); }

EXPORT notificationSettingsScopeGroupChats *td_bridge_newobj_notificationSettingsScopeGroupChats() { return new notificationSettingsScopeGroupChats(); }

EXPORT chatNotificationSettings *td_bridge_newobj_chatNotificationSettings() { return new chatNotificationSettings(); }
EXPORT auto td_bridge_obj_chatNotificationSettings_use_default_mute_for(chatNotificationSettings *obj) { return &obj->use_default_mute_for_; }
EXPORT auto td_bridge_obj_chatNotificationSettings_mute_for(chatNotificationSettings *obj) { return &obj->mute_for_; }
EXPORT auto td_bridge_obj_chatNotificationSettings_use_default_sound(chatNotificationSettings *obj) { return &obj->use_default_sound_; }
EXPORT auto td_bridge_obj_chatNotificationSettings_sound(chatNotificationSettings *obj) { return &obj->sound_; }
EXPORT auto td_bridge_obj_chatNotificationSettings_use_default_show_preview(chatNotificationSettings *obj) { return &obj->use_default_show_preview_; }
EXPORT auto td_bridge_obj_chatNotificationSettings_show_preview(chatNotificationSettings *obj) { return &obj->show_preview_; }

EXPORT scopeNotificationSettings *td_bridge_newobj_scopeNotificationSettings() { return new scopeNotificationSettings(); }
EXPORT auto td_bridge_obj_scopeNotificationSettings_mute_for(scopeNotificationSettings *obj) { return &obj->mute_for_; }
EXPORT auto td_bridge_obj_scopeNotificationSettings_sound(scopeNotificationSettings *obj) { return &obj->sound_; }
EXPORT auto td_bridge_obj_scopeNotificationSettings_show_preview(scopeNotificationSettings *obj) { return &obj->show_preview_; }

EXPORT draftMessage *td_bridge_newobj_draftMessage() { return new draftMessage(); }
EXPORT auto td_bridge_obj_draftMessage_reply_to_message_id(draftMessage *obj) { return &obj->reply_to_message_id_; }
EXPORT auto td_bridge_obj_draftMessage_input_message_text(draftMessage *obj) { return &obj->input_message_text_; }

EXPORT chatTypePrivate *td_bridge_newobj_chatTypePrivate() { return new chatTypePrivate(); }
EXPORT auto td_bridge_obj_chatTypePrivate_user_id(chatTypePrivate *obj) { return &obj->user_id_; }

EXPORT chatTypeBasicGroup *td_bridge_newobj_chatTypeBasicGroup() { return new chatTypeBasicGroup(); }
EXPORT auto td_bridge_obj_chatTypeBasicGroup_basic_group_id(chatTypeBasicGroup *obj) { return &obj->basic_group_id_; }

EXPORT chatTypeSupergroup *td_bridge_newobj_chatTypeSupergroup() { return new chatTypeSupergroup(); }
EXPORT auto td_bridge_obj_chatTypeSupergroup_supergroup_id(chatTypeSupergroup *obj) { return &obj->supergroup_id_; }
EXPORT auto td_bridge_obj_chatTypeSupergroup_is_channel(chatTypeSupergroup *obj) { return &obj->is_channel_; }

EXPORT chatTypeSecret *td_bridge_newobj_chatTypeSecret() { return new chatTypeSecret(); }
EXPORT auto td_bridge_obj_chatTypeSecret_secret_chat_id(chatTypeSecret *obj) { return &obj->secret_chat_id_; }
EXPORT auto td_bridge_obj_chatTypeSecret_user_id(chatTypeSecret *obj) { return &obj->user_id_; }

EXPORT chat *td_bridge_newobj_chat() { return new chat(); }
EXPORT auto td_bridge_obj_chat_id(chat *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_chat_type(chat *obj) { return &obj->type_; }
EXPORT auto td_bridge_obj_chat_title(chat *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_chat_photo(chat *obj) { return &obj->photo_; }
EXPORT auto td_bridge_obj_chat_last_message(chat *obj) { return &obj->last_message_; }
EXPORT auto td_bridge_obj_chat_order(chat *obj) { return &obj->order_; }
EXPORT auto td_bridge_obj_chat_is_pinned(chat *obj) { return &obj->is_pinned_; }
EXPORT auto td_bridge_obj_chat_is_marked_as_unread(chat *obj) { return &obj->is_marked_as_unread_; }
EXPORT auto td_bridge_obj_chat_is_sponsored(chat *obj) { return &obj->is_sponsored_; }
EXPORT auto td_bridge_obj_chat_can_be_reported(chat *obj) { return &obj->can_be_reported_; }
EXPORT auto td_bridge_obj_chat_default_disable_notification(chat *obj) { return &obj->default_disable_notification_; }
EXPORT auto td_bridge_obj_chat_unread_count(chat *obj) { return &obj->unread_count_; }
EXPORT auto td_bridge_obj_chat_last_read_inbox_message_id(chat *obj) { return &obj->last_read_inbox_message_id_; }
EXPORT auto td_bridge_obj_chat_last_read_outbox_message_id(chat *obj) { return &obj->last_read_outbox_message_id_; }
EXPORT auto td_bridge_obj_chat_unread_mention_count(chat *obj) { return &obj->unread_mention_count_; }
EXPORT auto td_bridge_obj_chat_notification_settings(chat *obj) { return &obj->notification_settings_; }
EXPORT auto td_bridge_obj_chat_reply_markup_message_id(chat *obj) { return &obj->reply_markup_message_id_; }
EXPORT auto td_bridge_obj_chat_draft_message(chat *obj) { return &obj->draft_message_; }
EXPORT auto td_bridge_obj_chat_client_data(chat *obj) { return &obj->client_data_; }

EXPORT chats *td_bridge_newobj_chats() { return new chats(); }
EXPORT auto td_bridge_obj_chats_chat_ids(chats *obj) { return &obj->chat_ids_; }

EXPORT chatInviteLink *td_bridge_newobj_chatInviteLink() { return new chatInviteLink(); }
EXPORT auto td_bridge_obj_chatInviteLink_invite_link(chatInviteLink *obj) { return &obj->invite_link_; }

EXPORT chatInviteLinkInfo *td_bridge_newobj_chatInviteLinkInfo() { return new chatInviteLinkInfo(); }
EXPORT auto td_bridge_obj_chatInviteLinkInfo_chat_id(chatInviteLinkInfo *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_chatInviteLinkInfo_type(chatInviteLinkInfo *obj) { return &obj->type_; }
EXPORT auto td_bridge_obj_chatInviteLinkInfo_title(chatInviteLinkInfo *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_chatInviteLinkInfo_photo(chatInviteLinkInfo *obj) { return &obj->photo_; }
EXPORT auto td_bridge_obj_chatInviteLinkInfo_member_count(chatInviteLinkInfo *obj) { return &obj->member_count_; }
EXPORT auto td_bridge_obj_chatInviteLinkInfo_member_user_ids(chatInviteLinkInfo *obj) { return &obj->member_user_ids_; }
EXPORT auto td_bridge_obj_chatInviteLinkInfo_is_public(chatInviteLinkInfo *obj) { return &obj->is_public_; }

EXPORT keyboardButtonTypeText *td_bridge_newobj_keyboardButtonTypeText() { return new keyboardButtonTypeText(); }

EXPORT keyboardButtonTypeRequestPhoneNumber *td_bridge_newobj_keyboardButtonTypeRequestPhoneNumber() { return new keyboardButtonTypeRequestPhoneNumber(); }

EXPORT keyboardButtonTypeRequestLocation *td_bridge_newobj_keyboardButtonTypeRequestLocation() { return new keyboardButtonTypeRequestLocation(); }

EXPORT keyboardButton *td_bridge_newobj_keyboardButton() { return new keyboardButton(); }
EXPORT auto td_bridge_obj_keyboardButton_text(keyboardButton *obj) { return &obj->text_; }
EXPORT auto td_bridge_obj_keyboardButton_type(keyboardButton *obj) { return &obj->type_; }

EXPORT inlineKeyboardButtonTypeUrl *td_bridge_newobj_inlineKeyboardButtonTypeUrl() { return new inlineKeyboardButtonTypeUrl(); }
EXPORT auto td_bridge_obj_inlineKeyboardButtonTypeUrl_url(inlineKeyboardButtonTypeUrl *obj) { return &obj->url_; }

EXPORT inlineKeyboardButtonTypeCallback *td_bridge_newobj_inlineKeyboardButtonTypeCallback() { return new inlineKeyboardButtonTypeCallback(); }
EXPORT auto td_bridge_obj_inlineKeyboardButtonTypeCallback_data(inlineKeyboardButtonTypeCallback *obj) { return &obj->data_; }

EXPORT inlineKeyboardButtonTypeCallbackGame *td_bridge_newobj_inlineKeyboardButtonTypeCallbackGame() { return new inlineKeyboardButtonTypeCallbackGame(); }

EXPORT inlineKeyboardButtonTypeSwitchInline *td_bridge_newobj_inlineKeyboardButtonTypeSwitchInline() { return new inlineKeyboardButtonTypeSwitchInline(); }
EXPORT auto td_bridge_obj_inlineKeyboardButtonTypeSwitchInline_query(inlineKeyboardButtonTypeSwitchInline *obj) { return &obj->query_; }
EXPORT auto td_bridge_obj_inlineKeyboardButtonTypeSwitchInline_in_current_chat(inlineKeyboardButtonTypeSwitchInline *obj) { return &obj->in_current_chat_; }

EXPORT inlineKeyboardButtonTypeBuy *td_bridge_newobj_inlineKeyboardButtonTypeBuy() { return new inlineKeyboardButtonTypeBuy(); }

EXPORT inlineKeyboardButton *td_bridge_newobj_inlineKeyboardButton() { return new inlineKeyboardButton(); }
EXPORT auto td_bridge_obj_inlineKeyboardButton_text(inlineKeyboardButton *obj) { return &obj->text_; }
EXPORT auto td_bridge_obj_inlineKeyboardButton_type(inlineKeyboardButton *obj) { return &obj->type_; }

EXPORT replyMarkupRemoveKeyboard *td_bridge_newobj_replyMarkupRemoveKeyboard() { return new replyMarkupRemoveKeyboard(); }
EXPORT auto td_bridge_obj_replyMarkupRemoveKeyboard_is_personal(replyMarkupRemoveKeyboard *obj) { return &obj->is_personal_; }

EXPORT replyMarkupForceReply *td_bridge_newobj_replyMarkupForceReply() { return new replyMarkupForceReply(); }
EXPORT auto td_bridge_obj_replyMarkupForceReply_is_personal(replyMarkupForceReply *obj) { return &obj->is_personal_; }

EXPORT replyMarkupShowKeyboard *td_bridge_newobj_replyMarkupShowKeyboard() { return new replyMarkupShowKeyboard(); }
EXPORT auto td_bridge_obj_replyMarkupShowKeyboard_rows(replyMarkupShowKeyboard *obj) { return &obj->rows_; }
EXPORT auto td_bridge_obj_replyMarkupShowKeyboard_resize_keyboard(replyMarkupShowKeyboard *obj) { return &obj->resize_keyboard_; }
EXPORT auto td_bridge_obj_replyMarkupShowKeyboard_one_time(replyMarkupShowKeyboard *obj) { return &obj->one_time_; }
EXPORT auto td_bridge_obj_replyMarkupShowKeyboard_is_personal(replyMarkupShowKeyboard *obj) { return &obj->is_personal_; }

EXPORT replyMarkupInlineKeyboard *td_bridge_newobj_replyMarkupInlineKeyboard() { return new replyMarkupInlineKeyboard(); }
EXPORT auto td_bridge_obj_replyMarkupInlineKeyboard_rows(replyMarkupInlineKeyboard *obj) { return &obj->rows_; }

EXPORT richTextPlain *td_bridge_newobj_richTextPlain() { return new richTextPlain(); }
EXPORT auto td_bridge_obj_richTextPlain_text(richTextPlain *obj) { return &obj->text_; }

EXPORT richTextBold *td_bridge_newobj_richTextBold() { return new richTextBold(); }
EXPORT auto td_bridge_obj_richTextBold_text(richTextBold *obj) { return &obj->text_; }

EXPORT richTextItalic *td_bridge_newobj_richTextItalic() { return new richTextItalic(); }
EXPORT auto td_bridge_obj_richTextItalic_text(richTextItalic *obj) { return &obj->text_; }

EXPORT richTextUnderline *td_bridge_newobj_richTextUnderline() { return new richTextUnderline(); }
EXPORT auto td_bridge_obj_richTextUnderline_text(richTextUnderline *obj) { return &obj->text_; }

EXPORT richTextStrikethrough *td_bridge_newobj_richTextStrikethrough() { return new richTextStrikethrough(); }
EXPORT auto td_bridge_obj_richTextStrikethrough_text(richTextStrikethrough *obj) { return &obj->text_; }

EXPORT richTextFixed *td_bridge_newobj_richTextFixed() { return new richTextFixed(); }
EXPORT auto td_bridge_obj_richTextFixed_text(richTextFixed *obj) { return &obj->text_; }

EXPORT richTextUrl *td_bridge_newobj_richTextUrl() { return new richTextUrl(); }
EXPORT auto td_bridge_obj_richTextUrl_text(richTextUrl *obj) { return &obj->text_; }
EXPORT auto td_bridge_obj_richTextUrl_url(richTextUrl *obj) { return &obj->url_; }

EXPORT richTextEmailAddress *td_bridge_newobj_richTextEmailAddress() { return new richTextEmailAddress(); }
EXPORT auto td_bridge_obj_richTextEmailAddress_text(richTextEmailAddress *obj) { return &obj->text_; }
EXPORT auto td_bridge_obj_richTextEmailAddress_email_address(richTextEmailAddress *obj) { return &obj->email_address_; }

EXPORT richTexts *td_bridge_newobj_richTexts() { return new richTexts(); }
EXPORT auto td_bridge_obj_richTexts_texts(richTexts *obj) { return &obj->texts_; }

EXPORT pageBlockTitle *td_bridge_newobj_pageBlockTitle() { return new pageBlockTitle(); }
EXPORT auto td_bridge_obj_pageBlockTitle_title(pageBlockTitle *obj) { return &obj->title_; }

EXPORT pageBlockSubtitle *td_bridge_newobj_pageBlockSubtitle() { return new pageBlockSubtitle(); }
EXPORT auto td_bridge_obj_pageBlockSubtitle_subtitle(pageBlockSubtitle *obj) { return &obj->subtitle_; }

EXPORT pageBlockAuthorDate *td_bridge_newobj_pageBlockAuthorDate() { return new pageBlockAuthorDate(); }
EXPORT auto td_bridge_obj_pageBlockAuthorDate_author(pageBlockAuthorDate *obj) { return &obj->author_; }
EXPORT auto td_bridge_obj_pageBlockAuthorDate_publish_date(pageBlockAuthorDate *obj) { return &obj->publish_date_; }

EXPORT pageBlockHeader *td_bridge_newobj_pageBlockHeader() { return new pageBlockHeader(); }
EXPORT auto td_bridge_obj_pageBlockHeader_header(pageBlockHeader *obj) { return &obj->header_; }

EXPORT pageBlockSubheader *td_bridge_newobj_pageBlockSubheader() { return new pageBlockSubheader(); }
EXPORT auto td_bridge_obj_pageBlockSubheader_subheader(pageBlockSubheader *obj) { return &obj->subheader_; }

EXPORT pageBlockParagraph *td_bridge_newobj_pageBlockParagraph() { return new pageBlockParagraph(); }
EXPORT auto td_bridge_obj_pageBlockParagraph_text(pageBlockParagraph *obj) { return &obj->text_; }

EXPORT pageBlockPreformatted *td_bridge_newobj_pageBlockPreformatted() { return new pageBlockPreformatted(); }
EXPORT auto td_bridge_obj_pageBlockPreformatted_text(pageBlockPreformatted *obj) { return &obj->text_; }
EXPORT auto td_bridge_obj_pageBlockPreformatted_language(pageBlockPreformatted *obj) { return &obj->language_; }

EXPORT pageBlockFooter *td_bridge_newobj_pageBlockFooter() { return new pageBlockFooter(); }
EXPORT auto td_bridge_obj_pageBlockFooter_footer(pageBlockFooter *obj) { return &obj->footer_; }

EXPORT pageBlockDivider *td_bridge_newobj_pageBlockDivider() { return new pageBlockDivider(); }

EXPORT pageBlockAnchor *td_bridge_newobj_pageBlockAnchor() { return new pageBlockAnchor(); }
EXPORT auto td_bridge_obj_pageBlockAnchor_name(pageBlockAnchor *obj) { return &obj->name_; }

EXPORT pageBlockList *td_bridge_newobj_pageBlockList() { return new pageBlockList(); }
EXPORT auto td_bridge_obj_pageBlockList_items(pageBlockList *obj) { return &obj->items_; }
EXPORT auto td_bridge_obj_pageBlockList_is_ordered(pageBlockList *obj) { return &obj->is_ordered_; }

EXPORT pageBlockBlockQuote *td_bridge_newobj_pageBlockBlockQuote() { return new pageBlockBlockQuote(); }
EXPORT auto td_bridge_obj_pageBlockBlockQuote_text(pageBlockBlockQuote *obj) { return &obj->text_; }
EXPORT auto td_bridge_obj_pageBlockBlockQuote_caption(pageBlockBlockQuote *obj) { return &obj->caption_; }

EXPORT pageBlockPullQuote *td_bridge_newobj_pageBlockPullQuote() { return new pageBlockPullQuote(); }
EXPORT auto td_bridge_obj_pageBlockPullQuote_text(pageBlockPullQuote *obj) { return &obj->text_; }
EXPORT auto td_bridge_obj_pageBlockPullQuote_caption(pageBlockPullQuote *obj) { return &obj->caption_; }

EXPORT pageBlockAnimation *td_bridge_newobj_pageBlockAnimation() { return new pageBlockAnimation(); }
EXPORT auto td_bridge_obj_pageBlockAnimation_animation(pageBlockAnimation *obj) { return &obj->animation_; }
EXPORT auto td_bridge_obj_pageBlockAnimation_caption(pageBlockAnimation *obj) { return &obj->caption_; }
EXPORT auto td_bridge_obj_pageBlockAnimation_need_autoplay(pageBlockAnimation *obj) { return &obj->need_autoplay_; }

EXPORT pageBlockAudio *td_bridge_newobj_pageBlockAudio() { return new pageBlockAudio(); }
EXPORT auto td_bridge_obj_pageBlockAudio_audio(pageBlockAudio *obj) { return &obj->audio_; }
EXPORT auto td_bridge_obj_pageBlockAudio_caption(pageBlockAudio *obj) { return &obj->caption_; }

EXPORT pageBlockPhoto *td_bridge_newobj_pageBlockPhoto() { return new pageBlockPhoto(); }
EXPORT auto td_bridge_obj_pageBlockPhoto_photo(pageBlockPhoto *obj) { return &obj->photo_; }
EXPORT auto td_bridge_obj_pageBlockPhoto_caption(pageBlockPhoto *obj) { return &obj->caption_; }

EXPORT pageBlockVideo *td_bridge_newobj_pageBlockVideo() { return new pageBlockVideo(); }
EXPORT auto td_bridge_obj_pageBlockVideo_video(pageBlockVideo *obj) { return &obj->video_; }
EXPORT auto td_bridge_obj_pageBlockVideo_caption(pageBlockVideo *obj) { return &obj->caption_; }
EXPORT auto td_bridge_obj_pageBlockVideo_need_autoplay(pageBlockVideo *obj) { return &obj->need_autoplay_; }
EXPORT auto td_bridge_obj_pageBlockVideo_is_looped(pageBlockVideo *obj) { return &obj->is_looped_; }

EXPORT pageBlockCover *td_bridge_newobj_pageBlockCover() { return new pageBlockCover(); }
EXPORT auto td_bridge_obj_pageBlockCover_cover(pageBlockCover *obj) { return &obj->cover_; }

EXPORT pageBlockEmbedded *td_bridge_newobj_pageBlockEmbedded() { return new pageBlockEmbedded(); }
EXPORT auto td_bridge_obj_pageBlockEmbedded_url(pageBlockEmbedded *obj) { return &obj->url_; }
EXPORT auto td_bridge_obj_pageBlockEmbedded_html(pageBlockEmbedded *obj) { return &obj->html_; }
EXPORT auto td_bridge_obj_pageBlockEmbedded_poster_photo(pageBlockEmbedded *obj) { return &obj->poster_photo_; }
EXPORT auto td_bridge_obj_pageBlockEmbedded_width(pageBlockEmbedded *obj) { return &obj->width_; }
EXPORT auto td_bridge_obj_pageBlockEmbedded_height(pageBlockEmbedded *obj) { return &obj->height_; }
EXPORT auto td_bridge_obj_pageBlockEmbedded_caption(pageBlockEmbedded *obj) { return &obj->caption_; }
EXPORT auto td_bridge_obj_pageBlockEmbedded_is_full_width(pageBlockEmbedded *obj) { return &obj->is_full_width_; }
EXPORT auto td_bridge_obj_pageBlockEmbedded_allow_scrolling(pageBlockEmbedded *obj) { return &obj->allow_scrolling_; }

EXPORT pageBlockEmbeddedPost *td_bridge_newobj_pageBlockEmbeddedPost() { return new pageBlockEmbeddedPost(); }
EXPORT auto td_bridge_obj_pageBlockEmbeddedPost_url(pageBlockEmbeddedPost *obj) { return &obj->url_; }
EXPORT auto td_bridge_obj_pageBlockEmbeddedPost_author(pageBlockEmbeddedPost *obj) { return &obj->author_; }
EXPORT auto td_bridge_obj_pageBlockEmbeddedPost_author_photo(pageBlockEmbeddedPost *obj) { return &obj->author_photo_; }
EXPORT auto td_bridge_obj_pageBlockEmbeddedPost_date(pageBlockEmbeddedPost *obj) { return &obj->date_; }
EXPORT auto td_bridge_obj_pageBlockEmbeddedPost_page_blocks(pageBlockEmbeddedPost *obj) { return &obj->page_blocks_; }
EXPORT auto td_bridge_obj_pageBlockEmbeddedPost_caption(pageBlockEmbeddedPost *obj) { return &obj->caption_; }

EXPORT pageBlockCollage *td_bridge_newobj_pageBlockCollage() { return new pageBlockCollage(); }
EXPORT auto td_bridge_obj_pageBlockCollage_page_blocks(pageBlockCollage *obj) { return &obj->page_blocks_; }
EXPORT auto td_bridge_obj_pageBlockCollage_caption(pageBlockCollage *obj) { return &obj->caption_; }

EXPORT pageBlockSlideshow *td_bridge_newobj_pageBlockSlideshow() { return new pageBlockSlideshow(); }
EXPORT auto td_bridge_obj_pageBlockSlideshow_page_blocks(pageBlockSlideshow *obj) { return &obj->page_blocks_; }
EXPORT auto td_bridge_obj_pageBlockSlideshow_caption(pageBlockSlideshow *obj) { return &obj->caption_; }

EXPORT pageBlockChatLink *td_bridge_newobj_pageBlockChatLink() { return new pageBlockChatLink(); }
EXPORT auto td_bridge_obj_pageBlockChatLink_title(pageBlockChatLink *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_pageBlockChatLink_photo(pageBlockChatLink *obj) { return &obj->photo_; }
EXPORT auto td_bridge_obj_pageBlockChatLink_username(pageBlockChatLink *obj) { return &obj->username_; }

EXPORT webPageInstantView *td_bridge_newobj_webPageInstantView() { return new webPageInstantView(); }
EXPORT auto td_bridge_obj_webPageInstantView_page_blocks(webPageInstantView *obj) { return &obj->page_blocks_; }
EXPORT auto td_bridge_obj_webPageInstantView_is_full(webPageInstantView *obj) { return &obj->is_full_; }

EXPORT webPage *td_bridge_newobj_webPage() { return new webPage(); }
EXPORT auto td_bridge_obj_webPage_url(webPage *obj) { return &obj->url_; }
EXPORT auto td_bridge_obj_webPage_display_url(webPage *obj) { return &obj->display_url_; }
EXPORT auto td_bridge_obj_webPage_type(webPage *obj) { return &obj->type_; }
EXPORT auto td_bridge_obj_webPage_site_name(webPage *obj) { return &obj->site_name_; }
EXPORT auto td_bridge_obj_webPage_title(webPage *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_webPage_description(webPage *obj) { return &obj->description_; }
EXPORT auto td_bridge_obj_webPage_photo(webPage *obj) { return &obj->photo_; }
EXPORT auto td_bridge_obj_webPage_embed_url(webPage *obj) { return &obj->embed_url_; }
EXPORT auto td_bridge_obj_webPage_embed_type(webPage *obj) { return &obj->embed_type_; }
EXPORT auto td_bridge_obj_webPage_embed_width(webPage *obj) { return &obj->embed_width_; }
EXPORT auto td_bridge_obj_webPage_embed_height(webPage *obj) { return &obj->embed_height_; }
EXPORT auto td_bridge_obj_webPage_duration(webPage *obj) { return &obj->duration_; }
EXPORT auto td_bridge_obj_webPage_author(webPage *obj) { return &obj->author_; }
EXPORT auto td_bridge_obj_webPage_animation(webPage *obj) { return &obj->animation_; }
EXPORT auto td_bridge_obj_webPage_audio(webPage *obj) { return &obj->audio_; }
EXPORT auto td_bridge_obj_webPage_document(webPage *obj) { return &obj->document_; }
EXPORT auto td_bridge_obj_webPage_sticker(webPage *obj) { return &obj->sticker_; }
EXPORT auto td_bridge_obj_webPage_video(webPage *obj) { return &obj->video_; }
EXPORT auto td_bridge_obj_webPage_video_note(webPage *obj) { return &obj->video_note_; }
EXPORT auto td_bridge_obj_webPage_voice_note(webPage *obj) { return &obj->voice_note_; }
EXPORT auto td_bridge_obj_webPage_has_instant_view(webPage *obj) { return &obj->has_instant_view_; }

EXPORT address *td_bridge_newobj_address() { return new address(); }
EXPORT auto td_bridge_obj_address_country_code(address *obj) { return &obj->country_code_; }
EXPORT auto td_bridge_obj_address_state(address *obj) { return &obj->state_; }
EXPORT auto td_bridge_obj_address_city(address *obj) { return &obj->city_; }
EXPORT auto td_bridge_obj_address_street_line1(address *obj) { return &obj->street_line1_; }
EXPORT auto td_bridge_obj_address_street_line2(address *obj) { return &obj->street_line2_; }
EXPORT auto td_bridge_obj_address_postal_code(address *obj) { return &obj->postal_code_; }

EXPORT labeledPricePart *td_bridge_newobj_labeledPricePart() { return new labeledPricePart(); }
EXPORT auto td_bridge_obj_labeledPricePart_label(labeledPricePart *obj) { return &obj->label_; }
EXPORT auto td_bridge_obj_labeledPricePart_amount(labeledPricePart *obj) { return &obj->amount_; }

EXPORT invoice *td_bridge_newobj_invoice() { return new invoice(); }
EXPORT auto td_bridge_obj_invoice_currency(invoice *obj) { return &obj->currency_; }
EXPORT auto td_bridge_obj_invoice_price_parts(invoice *obj) { return &obj->price_parts_; }
EXPORT auto td_bridge_obj_invoice_is_test(invoice *obj) { return &obj->is_test_; }
EXPORT auto td_bridge_obj_invoice_need_name(invoice *obj) { return &obj->need_name_; }
EXPORT auto td_bridge_obj_invoice_need_phone_number(invoice *obj) { return &obj->need_phone_number_; }
EXPORT auto td_bridge_obj_invoice_need_email_address(invoice *obj) { return &obj->need_email_address_; }
EXPORT auto td_bridge_obj_invoice_need_shipping_address(invoice *obj) { return &obj->need_shipping_address_; }
EXPORT auto td_bridge_obj_invoice_send_phone_number_to_provider(invoice *obj) { return &obj->send_phone_number_to_provider_; }
EXPORT auto td_bridge_obj_invoice_send_email_address_to_provider(invoice *obj) { return &obj->send_email_address_to_provider_; }
EXPORT auto td_bridge_obj_invoice_is_flexible(invoice *obj) { return &obj->is_flexible_; }

EXPORT orderInfo *td_bridge_newobj_orderInfo() { return new orderInfo(); }
EXPORT auto td_bridge_obj_orderInfo_name(orderInfo *obj) { return &obj->name_; }
EXPORT auto td_bridge_obj_orderInfo_phone_number(orderInfo *obj) { return &obj->phone_number_; }
EXPORT auto td_bridge_obj_orderInfo_email_address(orderInfo *obj) { return &obj->email_address_; }
EXPORT auto td_bridge_obj_orderInfo_shipping_address(orderInfo *obj) { return &obj->shipping_address_; }

EXPORT shippingOption *td_bridge_newobj_shippingOption() { return new shippingOption(); }
EXPORT auto td_bridge_obj_shippingOption_id(shippingOption *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_shippingOption_title(shippingOption *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_shippingOption_price_parts(shippingOption *obj) { return &obj->price_parts_; }

EXPORT savedCredentials *td_bridge_newobj_savedCredentials() { return new savedCredentials(); }
EXPORT auto td_bridge_obj_savedCredentials_id(savedCredentials *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_savedCredentials_title(savedCredentials *obj) { return &obj->title_; }

EXPORT inputCredentialsSaved *td_bridge_newobj_inputCredentialsSaved() { return new inputCredentialsSaved(); }
EXPORT auto td_bridge_obj_inputCredentialsSaved_saved_credentials_id(inputCredentialsSaved *obj) { return &obj->saved_credentials_id_; }

EXPORT inputCredentialsNew *td_bridge_newobj_inputCredentialsNew() { return new inputCredentialsNew(); }
EXPORT auto td_bridge_obj_inputCredentialsNew_data(inputCredentialsNew *obj) { return &obj->data_; }
EXPORT auto td_bridge_obj_inputCredentialsNew_allow_save(inputCredentialsNew *obj) { return &obj->allow_save_; }

EXPORT inputCredentialsAndroidPay *td_bridge_newobj_inputCredentialsAndroidPay() { return new inputCredentialsAndroidPay(); }
EXPORT auto td_bridge_obj_inputCredentialsAndroidPay_data(inputCredentialsAndroidPay *obj) { return &obj->data_; }

EXPORT inputCredentialsApplePay *td_bridge_newobj_inputCredentialsApplePay() { return new inputCredentialsApplePay(); }
EXPORT auto td_bridge_obj_inputCredentialsApplePay_data(inputCredentialsApplePay *obj) { return &obj->data_; }

EXPORT paymentsProviderStripe *td_bridge_newobj_paymentsProviderStripe() { return new paymentsProviderStripe(); }
EXPORT auto td_bridge_obj_paymentsProviderStripe_publishable_key(paymentsProviderStripe *obj) { return &obj->publishable_key_; }
EXPORT auto td_bridge_obj_paymentsProviderStripe_need_country(paymentsProviderStripe *obj) { return &obj->need_country_; }
EXPORT auto td_bridge_obj_paymentsProviderStripe_need_postal_code(paymentsProviderStripe *obj) { return &obj->need_postal_code_; }
EXPORT auto td_bridge_obj_paymentsProviderStripe_need_cardholder_name(paymentsProviderStripe *obj) { return &obj->need_cardholder_name_; }

EXPORT paymentForm *td_bridge_newobj_paymentForm() { return new paymentForm(); }
EXPORT auto td_bridge_obj_paymentForm_invoice(paymentForm *obj) { return &obj->invoice_; }
EXPORT auto td_bridge_obj_paymentForm_url(paymentForm *obj) { return &obj->url_; }
EXPORT auto td_bridge_obj_paymentForm_payments_provider(paymentForm *obj) { return &obj->payments_provider_; }
EXPORT auto td_bridge_obj_paymentForm_saved_order_info(paymentForm *obj) { return &obj->saved_order_info_; }
EXPORT auto td_bridge_obj_paymentForm_saved_credentials(paymentForm *obj) { return &obj->saved_credentials_; }
EXPORT auto td_bridge_obj_paymentForm_can_save_credentials(paymentForm *obj) { return &obj->can_save_credentials_; }
EXPORT auto td_bridge_obj_paymentForm_need_password(paymentForm *obj) { return &obj->need_password_; }

EXPORT validatedOrderInfo *td_bridge_newobj_validatedOrderInfo() { return new validatedOrderInfo(); }
EXPORT auto td_bridge_obj_validatedOrderInfo_order_info_id(validatedOrderInfo *obj) { return &obj->order_info_id_; }
EXPORT auto td_bridge_obj_validatedOrderInfo_shipping_options(validatedOrderInfo *obj) { return &obj->shipping_options_; }

EXPORT paymentResult *td_bridge_newobj_paymentResult() { return new paymentResult(); }
EXPORT auto td_bridge_obj_paymentResult_success(paymentResult *obj) { return &obj->success_; }
EXPORT auto td_bridge_obj_paymentResult_verification_url(paymentResult *obj) { return &obj->verification_url_; }

EXPORT paymentReceipt *td_bridge_newobj_paymentReceipt() { return new paymentReceipt(); }
EXPORT auto td_bridge_obj_paymentReceipt_date(paymentReceipt *obj) { return &obj->date_; }
EXPORT auto td_bridge_obj_paymentReceipt_payments_provider_user_id(paymentReceipt *obj) { return &obj->payments_provider_user_id_; }
EXPORT auto td_bridge_obj_paymentReceipt_invoice(paymentReceipt *obj) { return &obj->invoice_; }
EXPORT auto td_bridge_obj_paymentReceipt_order_info(paymentReceipt *obj) { return &obj->order_info_; }
EXPORT auto td_bridge_obj_paymentReceipt_shipping_option(paymentReceipt *obj) { return &obj->shipping_option_; }
EXPORT auto td_bridge_obj_paymentReceipt_credentials_title(paymentReceipt *obj) { return &obj->credentials_title_; }

EXPORT datedFile *td_bridge_newobj_datedFile() { return new datedFile(); }
EXPORT auto td_bridge_obj_datedFile_file(datedFile *obj) { return &obj->file_; }
EXPORT auto td_bridge_obj_datedFile_date(datedFile *obj) { return &obj->date_; }

EXPORT passportElementTypePersonalDetails *td_bridge_newobj_passportElementTypePersonalDetails() { return new passportElementTypePersonalDetails(); }

EXPORT passportElementTypePassport *td_bridge_newobj_passportElementTypePassport() { return new passportElementTypePassport(); }

EXPORT passportElementTypeDriverLicense *td_bridge_newobj_passportElementTypeDriverLicense() { return new passportElementTypeDriverLicense(); }

EXPORT passportElementTypeIdentityCard *td_bridge_newobj_passportElementTypeIdentityCard() { return new passportElementTypeIdentityCard(); }

EXPORT passportElementTypeInternalPassport *td_bridge_newobj_passportElementTypeInternalPassport() { return new passportElementTypeInternalPassport(); }

EXPORT passportElementTypeAddress *td_bridge_newobj_passportElementTypeAddress() { return new passportElementTypeAddress(); }

EXPORT passportElementTypeUtilityBill *td_bridge_newobj_passportElementTypeUtilityBill() { return new passportElementTypeUtilityBill(); }

EXPORT passportElementTypeBankStatement *td_bridge_newobj_passportElementTypeBankStatement() { return new passportElementTypeBankStatement(); }

EXPORT passportElementTypeRentalAgreement *td_bridge_newobj_passportElementTypeRentalAgreement() { return new passportElementTypeRentalAgreement(); }

EXPORT passportElementTypePassportRegistration *td_bridge_newobj_passportElementTypePassportRegistration() { return new passportElementTypePassportRegistration(); }

EXPORT passportElementTypeTemporaryRegistration *td_bridge_newobj_passportElementTypeTemporaryRegistration() { return new passportElementTypeTemporaryRegistration(); }

EXPORT passportElementTypePhoneNumber *td_bridge_newobj_passportElementTypePhoneNumber() { return new passportElementTypePhoneNumber(); }

EXPORT passportElementTypeEmailAddress *td_bridge_newobj_passportElementTypeEmailAddress() { return new passportElementTypeEmailAddress(); }

EXPORT date *td_bridge_newobj_date() { return new date(); }
EXPORT auto td_bridge_obj_date_day(date *obj) { return &obj->day_; }
EXPORT auto td_bridge_obj_date_month(date *obj) { return &obj->month_; }
EXPORT auto td_bridge_obj_date_year(date *obj) { return &obj->year_; }

EXPORT personalDetails *td_bridge_newobj_personalDetails() { return new personalDetails(); }
EXPORT auto td_bridge_obj_personalDetails_first_name(personalDetails *obj) { return &obj->first_name_; }
EXPORT auto td_bridge_obj_personalDetails_middle_name(personalDetails *obj) { return &obj->middle_name_; }
EXPORT auto td_bridge_obj_personalDetails_last_name(personalDetails *obj) { return &obj->last_name_; }
EXPORT auto td_bridge_obj_personalDetails_native_first_name(personalDetails *obj) { return &obj->native_first_name_; }
EXPORT auto td_bridge_obj_personalDetails_native_middle_name(personalDetails *obj) { return &obj->native_middle_name_; }
EXPORT auto td_bridge_obj_personalDetails_native_last_name(personalDetails *obj) { return &obj->native_last_name_; }
EXPORT auto td_bridge_obj_personalDetails_birthdate(personalDetails *obj) { return &obj->birthdate_; }
EXPORT auto td_bridge_obj_personalDetails_gender(personalDetails *obj) { return &obj->gender_; }
EXPORT auto td_bridge_obj_personalDetails_country_code(personalDetails *obj) { return &obj->country_code_; }
EXPORT auto td_bridge_obj_personalDetails_residence_country_code(personalDetails *obj) { return &obj->residence_country_code_; }

EXPORT identityDocument *td_bridge_newobj_identityDocument() { return new identityDocument(); }
EXPORT auto td_bridge_obj_identityDocument_number(identityDocument *obj) { return &obj->number_; }
EXPORT auto td_bridge_obj_identityDocument_expiry_date(identityDocument *obj) { return &obj->expiry_date_; }
EXPORT auto td_bridge_obj_identityDocument_front_side(identityDocument *obj) { return &obj->front_side_; }
EXPORT auto td_bridge_obj_identityDocument_reverse_side(identityDocument *obj) { return &obj->reverse_side_; }
EXPORT auto td_bridge_obj_identityDocument_selfie(identityDocument *obj) { return &obj->selfie_; }
EXPORT auto td_bridge_obj_identityDocument_translation(identityDocument *obj) { return &obj->translation_; }

EXPORT inputIdentityDocument *td_bridge_newobj_inputIdentityDocument() { return new inputIdentityDocument(); }
EXPORT auto td_bridge_obj_inputIdentityDocument_number(inputIdentityDocument *obj) { return &obj->number_; }
EXPORT auto td_bridge_obj_inputIdentityDocument_expiry_date(inputIdentityDocument *obj) { return &obj->expiry_date_; }
EXPORT auto td_bridge_obj_inputIdentityDocument_front_side(inputIdentityDocument *obj) { return &obj->front_side_; }
EXPORT auto td_bridge_obj_inputIdentityDocument_reverse_side(inputIdentityDocument *obj) { return &obj->reverse_side_; }
EXPORT auto td_bridge_obj_inputIdentityDocument_selfie(inputIdentityDocument *obj) { return &obj->selfie_; }
EXPORT auto td_bridge_obj_inputIdentityDocument_translation(inputIdentityDocument *obj) { return &obj->translation_; }

EXPORT personalDocument *td_bridge_newobj_personalDocument() { return new personalDocument(); }
EXPORT auto td_bridge_obj_personalDocument_files(personalDocument *obj) { return &obj->files_; }
EXPORT auto td_bridge_obj_personalDocument_translation(personalDocument *obj) { return &obj->translation_; }

EXPORT inputPersonalDocument *td_bridge_newobj_inputPersonalDocument() { return new inputPersonalDocument(); }
EXPORT auto td_bridge_obj_inputPersonalDocument_files(inputPersonalDocument *obj) { return &obj->files_; }
EXPORT auto td_bridge_obj_inputPersonalDocument_translation(inputPersonalDocument *obj) { return &obj->translation_; }

EXPORT passportElementPersonalDetails *td_bridge_newobj_passportElementPersonalDetails() { return new passportElementPersonalDetails(); }
EXPORT auto td_bridge_obj_passportElementPersonalDetails_personal_details(passportElementPersonalDetails *obj) { return &obj->personal_details_; }

EXPORT passportElementPassport *td_bridge_newobj_passportElementPassport() { return new passportElementPassport(); }
EXPORT auto td_bridge_obj_passportElementPassport_passport(passportElementPassport *obj) { return &obj->passport_; }

EXPORT passportElementDriverLicense *td_bridge_newobj_passportElementDriverLicense() { return new passportElementDriverLicense(); }
EXPORT auto td_bridge_obj_passportElementDriverLicense_driver_license(passportElementDriverLicense *obj) { return &obj->driver_license_; }

EXPORT passportElementIdentityCard *td_bridge_newobj_passportElementIdentityCard() { return new passportElementIdentityCard(); }
EXPORT auto td_bridge_obj_passportElementIdentityCard_identity_card(passportElementIdentityCard *obj) { return &obj->identity_card_; }

EXPORT passportElementInternalPassport *td_bridge_newobj_passportElementInternalPassport() { return new passportElementInternalPassport(); }
EXPORT auto td_bridge_obj_passportElementInternalPassport_internal_passport(passportElementInternalPassport *obj) { return &obj->internal_passport_; }

EXPORT passportElementAddress *td_bridge_newobj_passportElementAddress() { return new passportElementAddress(); }
EXPORT auto td_bridge_obj_passportElementAddress_address(passportElementAddress *obj) { return &obj->address_; }

EXPORT passportElementUtilityBill *td_bridge_newobj_passportElementUtilityBill() { return new passportElementUtilityBill(); }
EXPORT auto td_bridge_obj_passportElementUtilityBill_utility_bill(passportElementUtilityBill *obj) { return &obj->utility_bill_; }

EXPORT passportElementBankStatement *td_bridge_newobj_passportElementBankStatement() { return new passportElementBankStatement(); }
EXPORT auto td_bridge_obj_passportElementBankStatement_bank_statement(passportElementBankStatement *obj) { return &obj->bank_statement_; }

EXPORT passportElementRentalAgreement *td_bridge_newobj_passportElementRentalAgreement() { return new passportElementRentalAgreement(); }
EXPORT auto td_bridge_obj_passportElementRentalAgreement_rental_agreement(passportElementRentalAgreement *obj) { return &obj->rental_agreement_; }

EXPORT passportElementPassportRegistration *td_bridge_newobj_passportElementPassportRegistration() { return new passportElementPassportRegistration(); }
EXPORT auto td_bridge_obj_passportElementPassportRegistration_passport_registration(passportElementPassportRegistration *obj) { return &obj->passport_registration_; }

EXPORT passportElementTemporaryRegistration *td_bridge_newobj_passportElementTemporaryRegistration() { return new passportElementTemporaryRegistration(); }
EXPORT auto td_bridge_obj_passportElementTemporaryRegistration_temporary_registration(passportElementTemporaryRegistration *obj) { return &obj->temporary_registration_; }

EXPORT passportElementPhoneNumber *td_bridge_newobj_passportElementPhoneNumber() { return new passportElementPhoneNumber(); }
EXPORT auto td_bridge_obj_passportElementPhoneNumber_phone_number(passportElementPhoneNumber *obj) { return &obj->phone_number_; }

EXPORT passportElementEmailAddress *td_bridge_newobj_passportElementEmailAddress() { return new passportElementEmailAddress(); }
EXPORT auto td_bridge_obj_passportElementEmailAddress_email_address(passportElementEmailAddress *obj) { return &obj->email_address_; }

EXPORT inputPassportElementPersonalDetails *td_bridge_newobj_inputPassportElementPersonalDetails() { return new inputPassportElementPersonalDetails(); }
EXPORT auto td_bridge_obj_inputPassportElementPersonalDetails_personal_details(inputPassportElementPersonalDetails *obj) { return &obj->personal_details_; }

EXPORT inputPassportElementPassport *td_bridge_newobj_inputPassportElementPassport() { return new inputPassportElementPassport(); }
EXPORT auto td_bridge_obj_inputPassportElementPassport_passport(inputPassportElementPassport *obj) { return &obj->passport_; }

EXPORT inputPassportElementDriverLicense *td_bridge_newobj_inputPassportElementDriverLicense() { return new inputPassportElementDriverLicense(); }
EXPORT auto td_bridge_obj_inputPassportElementDriverLicense_driver_license(inputPassportElementDriverLicense *obj) { return &obj->driver_license_; }

EXPORT inputPassportElementIdentityCard *td_bridge_newobj_inputPassportElementIdentityCard() { return new inputPassportElementIdentityCard(); }
EXPORT auto td_bridge_obj_inputPassportElementIdentityCard_identity_card(inputPassportElementIdentityCard *obj) { return &obj->identity_card_; }

EXPORT inputPassportElementInternalPassport *td_bridge_newobj_inputPassportElementInternalPassport() { return new inputPassportElementInternalPassport(); }
EXPORT auto td_bridge_obj_inputPassportElementInternalPassport_internal_passport(inputPassportElementInternalPassport *obj) { return &obj->internal_passport_; }

EXPORT inputPassportElementAddress *td_bridge_newobj_inputPassportElementAddress() { return new inputPassportElementAddress(); }
EXPORT auto td_bridge_obj_inputPassportElementAddress_address(inputPassportElementAddress *obj) { return &obj->address_; }

EXPORT inputPassportElementUtilityBill *td_bridge_newobj_inputPassportElementUtilityBill() { return new inputPassportElementUtilityBill(); }
EXPORT auto td_bridge_obj_inputPassportElementUtilityBill_utility_bill(inputPassportElementUtilityBill *obj) { return &obj->utility_bill_; }

EXPORT inputPassportElementBankStatement *td_bridge_newobj_inputPassportElementBankStatement() { return new inputPassportElementBankStatement(); }
EXPORT auto td_bridge_obj_inputPassportElementBankStatement_bank_statement(inputPassportElementBankStatement *obj) { return &obj->bank_statement_; }

EXPORT inputPassportElementRentalAgreement *td_bridge_newobj_inputPassportElementRentalAgreement() { return new inputPassportElementRentalAgreement(); }
EXPORT auto td_bridge_obj_inputPassportElementRentalAgreement_rental_agreement(inputPassportElementRentalAgreement *obj) { return &obj->rental_agreement_; }

EXPORT inputPassportElementPassportRegistration *td_bridge_newobj_inputPassportElementPassportRegistration() { return new inputPassportElementPassportRegistration(); }
EXPORT auto td_bridge_obj_inputPassportElementPassportRegistration_passport_registration(inputPassportElementPassportRegistration *obj) { return &obj->passport_registration_; }

EXPORT inputPassportElementTemporaryRegistration *td_bridge_newobj_inputPassportElementTemporaryRegistration() { return new inputPassportElementTemporaryRegistration(); }
EXPORT auto td_bridge_obj_inputPassportElementTemporaryRegistration_temporary_registration(inputPassportElementTemporaryRegistration *obj) { return &obj->temporary_registration_; }

EXPORT inputPassportElementPhoneNumber *td_bridge_newobj_inputPassportElementPhoneNumber() { return new inputPassportElementPhoneNumber(); }
EXPORT auto td_bridge_obj_inputPassportElementPhoneNumber_phone_number(inputPassportElementPhoneNumber *obj) { return &obj->phone_number_; }

EXPORT inputPassportElementEmailAddress *td_bridge_newobj_inputPassportElementEmailAddress() { return new inputPassportElementEmailAddress(); }
EXPORT auto td_bridge_obj_inputPassportElementEmailAddress_email_address(inputPassportElementEmailAddress *obj) { return &obj->email_address_; }

EXPORT passportElements *td_bridge_newobj_passportElements() { return new passportElements(); }
EXPORT auto td_bridge_obj_passportElements_elements(passportElements *obj) { return &obj->elements_; }

EXPORT passportElementErrorSourceUnspecified *td_bridge_newobj_passportElementErrorSourceUnspecified() { return new passportElementErrorSourceUnspecified(); }

EXPORT passportElementErrorSourceDataField *td_bridge_newobj_passportElementErrorSourceDataField() { return new passportElementErrorSourceDataField(); }
EXPORT auto td_bridge_obj_passportElementErrorSourceDataField_field_name(passportElementErrorSourceDataField *obj) { return &obj->field_name_; }

EXPORT passportElementErrorSourceFrontSide *td_bridge_newobj_passportElementErrorSourceFrontSide() { return new passportElementErrorSourceFrontSide(); }

EXPORT passportElementErrorSourceReverseSide *td_bridge_newobj_passportElementErrorSourceReverseSide() { return new passportElementErrorSourceReverseSide(); }

EXPORT passportElementErrorSourceSelfie *td_bridge_newobj_passportElementErrorSourceSelfie() { return new passportElementErrorSourceSelfie(); }

EXPORT passportElementErrorSourceTranslationFile *td_bridge_newobj_passportElementErrorSourceTranslationFile() { return new passportElementErrorSourceTranslationFile(); }

EXPORT passportElementErrorSourceTranslationFiles *td_bridge_newobj_passportElementErrorSourceTranslationFiles() { return new passportElementErrorSourceTranslationFiles(); }

EXPORT passportElementErrorSourceFile *td_bridge_newobj_passportElementErrorSourceFile() { return new passportElementErrorSourceFile(); }

EXPORT passportElementErrorSourceFiles *td_bridge_newobj_passportElementErrorSourceFiles() { return new passportElementErrorSourceFiles(); }

EXPORT passportElementError *td_bridge_newobj_passportElementError() { return new passportElementError(); }
EXPORT auto td_bridge_obj_passportElementError_type(passportElementError *obj) { return &obj->type_; }
EXPORT auto td_bridge_obj_passportElementError_message(passportElementError *obj) { return &obj->message_; }
EXPORT auto td_bridge_obj_passportElementError_source(passportElementError *obj) { return &obj->source_; }

EXPORT passportSuitableElement *td_bridge_newobj_passportSuitableElement() { return new passportSuitableElement(); }
EXPORT auto td_bridge_obj_passportSuitableElement_type(passportSuitableElement *obj) { return &obj->type_; }
EXPORT auto td_bridge_obj_passportSuitableElement_is_selfie_required(passportSuitableElement *obj) { return &obj->is_selfie_required_; }
EXPORT auto td_bridge_obj_passportSuitableElement_is_translation_required(passportSuitableElement *obj) { return &obj->is_translation_required_; }
EXPORT auto td_bridge_obj_passportSuitableElement_is_native_name_required(passportSuitableElement *obj) { return &obj->is_native_name_required_; }

EXPORT passportRequiredElement *td_bridge_newobj_passportRequiredElement() { return new passportRequiredElement(); }
EXPORT auto td_bridge_obj_passportRequiredElement_suitable_elements(passportRequiredElement *obj) { return &obj->suitable_elements_; }

EXPORT passportAuthorizationForm *td_bridge_newobj_passportAuthorizationForm() { return new passportAuthorizationForm(); }
EXPORT auto td_bridge_obj_passportAuthorizationForm_id(passportAuthorizationForm *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_passportAuthorizationForm_required_elements(passportAuthorizationForm *obj) { return &obj->required_elements_; }
EXPORT auto td_bridge_obj_passportAuthorizationForm_elements(passportAuthorizationForm *obj) { return &obj->elements_; }
EXPORT auto td_bridge_obj_passportAuthorizationForm_errors(passportAuthorizationForm *obj) { return &obj->errors_; }
EXPORT auto td_bridge_obj_passportAuthorizationForm_privacy_policy_url(passportAuthorizationForm *obj) { return &obj->privacy_policy_url_; }

EXPORT encryptedCredentials *td_bridge_newobj_encryptedCredentials() { return new encryptedCredentials(); }
EXPORT auto td_bridge_obj_encryptedCredentials_data(encryptedCredentials *obj) { return &obj->data_; }
EXPORT auto td_bridge_obj_encryptedCredentials_hash(encryptedCredentials *obj) { return &obj->hash_; }
EXPORT auto td_bridge_obj_encryptedCredentials_secret(encryptedCredentials *obj) { return &obj->secret_; }

EXPORT encryptedPassportElement *td_bridge_newobj_encryptedPassportElement() { return new encryptedPassportElement(); }
EXPORT auto td_bridge_obj_encryptedPassportElement_type(encryptedPassportElement *obj) { return &obj->type_; }
EXPORT auto td_bridge_obj_encryptedPassportElement_data(encryptedPassportElement *obj) { return &obj->data_; }
EXPORT auto td_bridge_obj_encryptedPassportElement_front_side(encryptedPassportElement *obj) { return &obj->front_side_; }
EXPORT auto td_bridge_obj_encryptedPassportElement_reverse_side(encryptedPassportElement *obj) { return &obj->reverse_side_; }
EXPORT auto td_bridge_obj_encryptedPassportElement_selfie(encryptedPassportElement *obj) { return &obj->selfie_; }
EXPORT auto td_bridge_obj_encryptedPassportElement_translation(encryptedPassportElement *obj) { return &obj->translation_; }
EXPORT auto td_bridge_obj_encryptedPassportElement_files(encryptedPassportElement *obj) { return &obj->files_; }
EXPORT auto td_bridge_obj_encryptedPassportElement_value(encryptedPassportElement *obj) { return &obj->value_; }
EXPORT auto td_bridge_obj_encryptedPassportElement_hash(encryptedPassportElement *obj) { return &obj->hash_; }

EXPORT inputPassportElementErrorSourceUnspecified *td_bridge_newobj_inputPassportElementErrorSourceUnspecified() { return new inputPassportElementErrorSourceUnspecified(); }
EXPORT auto td_bridge_obj_inputPassportElementErrorSourceUnspecified_element_hash(inputPassportElementErrorSourceUnspecified *obj) { return &obj->element_hash_; }

EXPORT inputPassportElementErrorSourceDataField *td_bridge_newobj_inputPassportElementErrorSourceDataField() { return new inputPassportElementErrorSourceDataField(); }
EXPORT auto td_bridge_obj_inputPassportElementErrorSourceDataField_field_name(inputPassportElementErrorSourceDataField *obj) { return &obj->field_name_; }
EXPORT auto td_bridge_obj_inputPassportElementErrorSourceDataField_data_hash(inputPassportElementErrorSourceDataField *obj) { return &obj->data_hash_; }

EXPORT inputPassportElementErrorSourceFrontSide *td_bridge_newobj_inputPassportElementErrorSourceFrontSide() { return new inputPassportElementErrorSourceFrontSide(); }
EXPORT auto td_bridge_obj_inputPassportElementErrorSourceFrontSide_file_hash(inputPassportElementErrorSourceFrontSide *obj) { return &obj->file_hash_; }

EXPORT inputPassportElementErrorSourceReverseSide *td_bridge_newobj_inputPassportElementErrorSourceReverseSide() { return new inputPassportElementErrorSourceReverseSide(); }
EXPORT auto td_bridge_obj_inputPassportElementErrorSourceReverseSide_file_hash(inputPassportElementErrorSourceReverseSide *obj) { return &obj->file_hash_; }

EXPORT inputPassportElementErrorSourceSelfie *td_bridge_newobj_inputPassportElementErrorSourceSelfie() { return new inputPassportElementErrorSourceSelfie(); }
EXPORT auto td_bridge_obj_inputPassportElementErrorSourceSelfie_file_hash(inputPassportElementErrorSourceSelfie *obj) { return &obj->file_hash_; }

EXPORT inputPassportElementErrorSourceTranslationFile *td_bridge_newobj_inputPassportElementErrorSourceTranslationFile() { return new inputPassportElementErrorSourceTranslationFile(); }
EXPORT auto td_bridge_obj_inputPassportElementErrorSourceTranslationFile_file_hash(inputPassportElementErrorSourceTranslationFile *obj) { return &obj->file_hash_; }

EXPORT inputPassportElementErrorSourceTranslationFiles *td_bridge_newobj_inputPassportElementErrorSourceTranslationFiles() { return new inputPassportElementErrorSourceTranslationFiles(); }
EXPORT auto td_bridge_obj_inputPassportElementErrorSourceTranslationFiles_file_hashes(inputPassportElementErrorSourceTranslationFiles *obj) { return &obj->file_hashes_; }

EXPORT inputPassportElementErrorSourceFile *td_bridge_newobj_inputPassportElementErrorSourceFile() { return new inputPassportElementErrorSourceFile(); }
EXPORT auto td_bridge_obj_inputPassportElementErrorSourceFile_file_hash(inputPassportElementErrorSourceFile *obj) { return &obj->file_hash_; }

EXPORT inputPassportElementErrorSourceFiles *td_bridge_newobj_inputPassportElementErrorSourceFiles() { return new inputPassportElementErrorSourceFiles(); }
EXPORT auto td_bridge_obj_inputPassportElementErrorSourceFiles_file_hashes(inputPassportElementErrorSourceFiles *obj) { return &obj->file_hashes_; }

EXPORT inputPassportElementError *td_bridge_newobj_inputPassportElementError() { return new inputPassportElementError(); }
EXPORT auto td_bridge_obj_inputPassportElementError_type(inputPassportElementError *obj) { return &obj->type_; }
EXPORT auto td_bridge_obj_inputPassportElementError_message(inputPassportElementError *obj) { return &obj->message_; }
EXPORT auto td_bridge_obj_inputPassportElementError_source(inputPassportElementError *obj) { return &obj->source_; }

EXPORT messageText *td_bridge_newobj_messageText() { return new messageText(); }
EXPORT auto td_bridge_obj_messageText_text(messageText *obj) { return &obj->text_; }
EXPORT auto td_bridge_obj_messageText_web_page(messageText *obj) { return &obj->web_page_; }

EXPORT messageAnimation *td_bridge_newobj_messageAnimation() { return new messageAnimation(); }
EXPORT auto td_bridge_obj_messageAnimation_animation(messageAnimation *obj) { return &obj->animation_; }
EXPORT auto td_bridge_obj_messageAnimation_caption(messageAnimation *obj) { return &obj->caption_; }
EXPORT auto td_bridge_obj_messageAnimation_is_secret(messageAnimation *obj) { return &obj->is_secret_; }

EXPORT messageAudio *td_bridge_newobj_messageAudio() { return new messageAudio(); }
EXPORT auto td_bridge_obj_messageAudio_audio(messageAudio *obj) { return &obj->audio_; }
EXPORT auto td_bridge_obj_messageAudio_caption(messageAudio *obj) { return &obj->caption_; }

EXPORT messageDocument *td_bridge_newobj_messageDocument() { return new messageDocument(); }
EXPORT auto td_bridge_obj_messageDocument_document(messageDocument *obj) { return &obj->document_; }
EXPORT auto td_bridge_obj_messageDocument_caption(messageDocument *obj) { return &obj->caption_; }

EXPORT messagePhoto *td_bridge_newobj_messagePhoto() { return new messagePhoto(); }
EXPORT auto td_bridge_obj_messagePhoto_photo(messagePhoto *obj) { return &obj->photo_; }
EXPORT auto td_bridge_obj_messagePhoto_caption(messagePhoto *obj) { return &obj->caption_; }
EXPORT auto td_bridge_obj_messagePhoto_is_secret(messagePhoto *obj) { return &obj->is_secret_; }

EXPORT messageExpiredPhoto *td_bridge_newobj_messageExpiredPhoto() { return new messageExpiredPhoto(); }

EXPORT messageSticker *td_bridge_newobj_messageSticker() { return new messageSticker(); }
EXPORT auto td_bridge_obj_messageSticker_sticker(messageSticker *obj) { return &obj->sticker_; }

EXPORT messageVideo *td_bridge_newobj_messageVideo() { return new messageVideo(); }
EXPORT auto td_bridge_obj_messageVideo_video(messageVideo *obj) { return &obj->video_; }
EXPORT auto td_bridge_obj_messageVideo_caption(messageVideo *obj) { return &obj->caption_; }
EXPORT auto td_bridge_obj_messageVideo_is_secret(messageVideo *obj) { return &obj->is_secret_; }

EXPORT messageExpiredVideo *td_bridge_newobj_messageExpiredVideo() { return new messageExpiredVideo(); }

EXPORT messageVideoNote *td_bridge_newobj_messageVideoNote() { return new messageVideoNote(); }
EXPORT auto td_bridge_obj_messageVideoNote_video_note(messageVideoNote *obj) { return &obj->video_note_; }
EXPORT auto td_bridge_obj_messageVideoNote_is_viewed(messageVideoNote *obj) { return &obj->is_viewed_; }
EXPORT auto td_bridge_obj_messageVideoNote_is_secret(messageVideoNote *obj) { return &obj->is_secret_; }

EXPORT messageVoiceNote *td_bridge_newobj_messageVoiceNote() { return new messageVoiceNote(); }
EXPORT auto td_bridge_obj_messageVoiceNote_voice_note(messageVoiceNote *obj) { return &obj->voice_note_; }
EXPORT auto td_bridge_obj_messageVoiceNote_caption(messageVoiceNote *obj) { return &obj->caption_; }
EXPORT auto td_bridge_obj_messageVoiceNote_is_listened(messageVoiceNote *obj) { return &obj->is_listened_; }

EXPORT messageLocation *td_bridge_newobj_messageLocation() { return new messageLocation(); }
EXPORT auto td_bridge_obj_messageLocation_location(messageLocation *obj) { return &obj->location_; }
EXPORT auto td_bridge_obj_messageLocation_live_period(messageLocation *obj) { return &obj->live_period_; }
EXPORT auto td_bridge_obj_messageLocation_expires_in(messageLocation *obj) { return &obj->expires_in_; }

EXPORT messageVenue *td_bridge_newobj_messageVenue() { return new messageVenue(); }
EXPORT auto td_bridge_obj_messageVenue_venue(messageVenue *obj) { return &obj->venue_; }

EXPORT messageContact *td_bridge_newobj_messageContact() { return new messageContact(); }
EXPORT auto td_bridge_obj_messageContact_contact(messageContact *obj) { return &obj->contact_; }

EXPORT messageGame *td_bridge_newobj_messageGame() { return new messageGame(); }
EXPORT auto td_bridge_obj_messageGame_game(messageGame *obj) { return &obj->game_; }

EXPORT messageInvoice *td_bridge_newobj_messageInvoice() { return new messageInvoice(); }
EXPORT auto td_bridge_obj_messageInvoice_title(messageInvoice *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_messageInvoice_description(messageInvoice *obj) { return &obj->description_; }
EXPORT auto td_bridge_obj_messageInvoice_photo(messageInvoice *obj) { return &obj->photo_; }
EXPORT auto td_bridge_obj_messageInvoice_currency(messageInvoice *obj) { return &obj->currency_; }
EXPORT auto td_bridge_obj_messageInvoice_total_amount(messageInvoice *obj) { return &obj->total_amount_; }
EXPORT auto td_bridge_obj_messageInvoice_start_parameter(messageInvoice *obj) { return &obj->start_parameter_; }
EXPORT auto td_bridge_obj_messageInvoice_is_test(messageInvoice *obj) { return &obj->is_test_; }
EXPORT auto td_bridge_obj_messageInvoice_need_shipping_address(messageInvoice *obj) { return &obj->need_shipping_address_; }
EXPORT auto td_bridge_obj_messageInvoice_receipt_message_id(messageInvoice *obj) { return &obj->receipt_message_id_; }

EXPORT messageCall *td_bridge_newobj_messageCall() { return new messageCall(); }
EXPORT auto td_bridge_obj_messageCall_discard_reason(messageCall *obj) { return &obj->discard_reason_; }
EXPORT auto td_bridge_obj_messageCall_duration(messageCall *obj) { return &obj->duration_; }

EXPORT messageBasicGroupChatCreate *td_bridge_newobj_messageBasicGroupChatCreate() { return new messageBasicGroupChatCreate(); }
EXPORT auto td_bridge_obj_messageBasicGroupChatCreate_title(messageBasicGroupChatCreate *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_messageBasicGroupChatCreate_member_user_ids(messageBasicGroupChatCreate *obj) { return &obj->member_user_ids_; }

EXPORT messageSupergroupChatCreate *td_bridge_newobj_messageSupergroupChatCreate() { return new messageSupergroupChatCreate(); }
EXPORT auto td_bridge_obj_messageSupergroupChatCreate_title(messageSupergroupChatCreate *obj) { return &obj->title_; }

EXPORT messageChatChangeTitle *td_bridge_newobj_messageChatChangeTitle() { return new messageChatChangeTitle(); }
EXPORT auto td_bridge_obj_messageChatChangeTitle_title(messageChatChangeTitle *obj) { return &obj->title_; }

EXPORT messageChatChangePhoto *td_bridge_newobj_messageChatChangePhoto() { return new messageChatChangePhoto(); }
EXPORT auto td_bridge_obj_messageChatChangePhoto_photo(messageChatChangePhoto *obj) { return &obj->photo_; }

EXPORT messageChatDeletePhoto *td_bridge_newobj_messageChatDeletePhoto() { return new messageChatDeletePhoto(); }

EXPORT messageChatAddMembers *td_bridge_newobj_messageChatAddMembers() { return new messageChatAddMembers(); }
EXPORT auto td_bridge_obj_messageChatAddMembers_member_user_ids(messageChatAddMembers *obj) { return &obj->member_user_ids_; }

EXPORT messageChatJoinByLink *td_bridge_newobj_messageChatJoinByLink() { return new messageChatJoinByLink(); }

EXPORT messageChatDeleteMember *td_bridge_newobj_messageChatDeleteMember() { return new messageChatDeleteMember(); }
EXPORT auto td_bridge_obj_messageChatDeleteMember_user_id(messageChatDeleteMember *obj) { return &obj->user_id_; }

EXPORT messageChatUpgradeTo *td_bridge_newobj_messageChatUpgradeTo() { return new messageChatUpgradeTo(); }
EXPORT auto td_bridge_obj_messageChatUpgradeTo_supergroup_id(messageChatUpgradeTo *obj) { return &obj->supergroup_id_; }

EXPORT messageChatUpgradeFrom *td_bridge_newobj_messageChatUpgradeFrom() { return new messageChatUpgradeFrom(); }
EXPORT auto td_bridge_obj_messageChatUpgradeFrom_title(messageChatUpgradeFrom *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_messageChatUpgradeFrom_basic_group_id(messageChatUpgradeFrom *obj) { return &obj->basic_group_id_; }

EXPORT messagePinMessage *td_bridge_newobj_messagePinMessage() { return new messagePinMessage(); }
EXPORT auto td_bridge_obj_messagePinMessage_message_id(messagePinMessage *obj) { return &obj->message_id_; }

EXPORT messageScreenshotTaken *td_bridge_newobj_messageScreenshotTaken() { return new messageScreenshotTaken(); }

EXPORT messageChatSetTtl *td_bridge_newobj_messageChatSetTtl() { return new messageChatSetTtl(); }
EXPORT auto td_bridge_obj_messageChatSetTtl_ttl(messageChatSetTtl *obj) { return &obj->ttl_; }

EXPORT messageCustomServiceAction *td_bridge_newobj_messageCustomServiceAction() { return new messageCustomServiceAction(); }
EXPORT auto td_bridge_obj_messageCustomServiceAction_text(messageCustomServiceAction *obj) { return &obj->text_; }

EXPORT messageGameScore *td_bridge_newobj_messageGameScore() { return new messageGameScore(); }
EXPORT auto td_bridge_obj_messageGameScore_game_message_id(messageGameScore *obj) { return &obj->game_message_id_; }
EXPORT auto td_bridge_obj_messageGameScore_game_id(messageGameScore *obj) { return &obj->game_id_; }
EXPORT auto td_bridge_obj_messageGameScore_score(messageGameScore *obj) { return &obj->score_; }

EXPORT messagePaymentSuccessful *td_bridge_newobj_messagePaymentSuccessful() { return new messagePaymentSuccessful(); }
EXPORT auto td_bridge_obj_messagePaymentSuccessful_invoice_message_id(messagePaymentSuccessful *obj) { return &obj->invoice_message_id_; }
EXPORT auto td_bridge_obj_messagePaymentSuccessful_currency(messagePaymentSuccessful *obj) { return &obj->currency_; }
EXPORT auto td_bridge_obj_messagePaymentSuccessful_total_amount(messagePaymentSuccessful *obj) { return &obj->total_amount_; }

EXPORT messagePaymentSuccessfulBot *td_bridge_newobj_messagePaymentSuccessfulBot() { return new messagePaymentSuccessfulBot(); }
EXPORT auto td_bridge_obj_messagePaymentSuccessfulBot_invoice_message_id(messagePaymentSuccessfulBot *obj) { return &obj->invoice_message_id_; }
EXPORT auto td_bridge_obj_messagePaymentSuccessfulBot_currency(messagePaymentSuccessfulBot *obj) { return &obj->currency_; }
EXPORT auto td_bridge_obj_messagePaymentSuccessfulBot_total_amount(messagePaymentSuccessfulBot *obj) { return &obj->total_amount_; }
EXPORT auto td_bridge_obj_messagePaymentSuccessfulBot_invoice_payload(messagePaymentSuccessfulBot *obj) { return &obj->invoice_payload_; }
EXPORT auto td_bridge_obj_messagePaymentSuccessfulBot_shipping_option_id(messagePaymentSuccessfulBot *obj) { return &obj->shipping_option_id_; }
EXPORT auto td_bridge_obj_messagePaymentSuccessfulBot_order_info(messagePaymentSuccessfulBot *obj) { return &obj->order_info_; }
EXPORT auto td_bridge_obj_messagePaymentSuccessfulBot_telegram_payment_charge_id(messagePaymentSuccessfulBot *obj) { return &obj->telegram_payment_charge_id_; }
EXPORT auto td_bridge_obj_messagePaymentSuccessfulBot_provider_payment_charge_id(messagePaymentSuccessfulBot *obj) { return &obj->provider_payment_charge_id_; }

EXPORT messageContactRegistered *td_bridge_newobj_messageContactRegistered() { return new messageContactRegistered(); }

EXPORT messageWebsiteConnected *td_bridge_newobj_messageWebsiteConnected() { return new messageWebsiteConnected(); }
EXPORT auto td_bridge_obj_messageWebsiteConnected_domain_name(messageWebsiteConnected *obj) { return &obj->domain_name_; }

EXPORT messagePassportDataSent *td_bridge_newobj_messagePassportDataSent() { return new messagePassportDataSent(); }
EXPORT auto td_bridge_obj_messagePassportDataSent_types(messagePassportDataSent *obj) { return &obj->types_; }

EXPORT messagePassportDataReceived *td_bridge_newobj_messagePassportDataReceived() { return new messagePassportDataReceived(); }
EXPORT auto td_bridge_obj_messagePassportDataReceived_elements(messagePassportDataReceived *obj) { return &obj->elements_; }
EXPORT auto td_bridge_obj_messagePassportDataReceived_credentials(messagePassportDataReceived *obj) { return &obj->credentials_; }

EXPORT messageUnsupported *td_bridge_newobj_messageUnsupported() { return new messageUnsupported(); }

EXPORT textEntityTypeMention *td_bridge_newobj_textEntityTypeMention() { return new textEntityTypeMention(); }

EXPORT textEntityTypeHashtag *td_bridge_newobj_textEntityTypeHashtag() { return new textEntityTypeHashtag(); }

EXPORT textEntityTypeCashtag *td_bridge_newobj_textEntityTypeCashtag() { return new textEntityTypeCashtag(); }

EXPORT textEntityTypeBotCommand *td_bridge_newobj_textEntityTypeBotCommand() { return new textEntityTypeBotCommand(); }

EXPORT textEntityTypeUrl *td_bridge_newobj_textEntityTypeUrl() { return new textEntityTypeUrl(); }

EXPORT textEntityTypeEmailAddress *td_bridge_newobj_textEntityTypeEmailAddress() { return new textEntityTypeEmailAddress(); }

EXPORT textEntityTypeBold *td_bridge_newobj_textEntityTypeBold() { return new textEntityTypeBold(); }

EXPORT textEntityTypeItalic *td_bridge_newobj_textEntityTypeItalic() { return new textEntityTypeItalic(); }

EXPORT textEntityTypeCode *td_bridge_newobj_textEntityTypeCode() { return new textEntityTypeCode(); }

EXPORT textEntityTypePre *td_bridge_newobj_textEntityTypePre() { return new textEntityTypePre(); }

EXPORT textEntityTypePreCode *td_bridge_newobj_textEntityTypePreCode() { return new textEntityTypePreCode(); }
EXPORT auto td_bridge_obj_textEntityTypePreCode_language(textEntityTypePreCode *obj) { return &obj->language_; }

EXPORT textEntityTypeTextUrl *td_bridge_newobj_textEntityTypeTextUrl() { return new textEntityTypeTextUrl(); }
EXPORT auto td_bridge_obj_textEntityTypeTextUrl_url(textEntityTypeTextUrl *obj) { return &obj->url_; }

EXPORT textEntityTypeMentionName *td_bridge_newobj_textEntityTypeMentionName() { return new textEntityTypeMentionName(); }
EXPORT auto td_bridge_obj_textEntityTypeMentionName_user_id(textEntityTypeMentionName *obj) { return &obj->user_id_; }

EXPORT textEntityTypePhoneNumber *td_bridge_newobj_textEntityTypePhoneNumber() { return new textEntityTypePhoneNumber(); }

EXPORT inputThumbnail *td_bridge_newobj_inputThumbnail() { return new inputThumbnail(); }
EXPORT auto td_bridge_obj_inputThumbnail_thumbnail(inputThumbnail *obj) { return &obj->thumbnail_; }
EXPORT auto td_bridge_obj_inputThumbnail_width(inputThumbnail *obj) { return &obj->width_; }
EXPORT auto td_bridge_obj_inputThumbnail_height(inputThumbnail *obj) { return &obj->height_; }

EXPORT inputMessageText *td_bridge_newobj_inputMessageText() { return new inputMessageText(); }
EXPORT auto td_bridge_obj_inputMessageText_text(inputMessageText *obj) { return &obj->text_; }
EXPORT auto td_bridge_obj_inputMessageText_disable_web_page_preview(inputMessageText *obj) { return &obj->disable_web_page_preview_; }
EXPORT auto td_bridge_obj_inputMessageText_clear_draft(inputMessageText *obj) { return &obj->clear_draft_; }

EXPORT inputMessageAnimation *td_bridge_newobj_inputMessageAnimation() { return new inputMessageAnimation(); }
EXPORT auto td_bridge_obj_inputMessageAnimation_animation(inputMessageAnimation *obj) { return &obj->animation_; }
EXPORT auto td_bridge_obj_inputMessageAnimation_thumbnail(inputMessageAnimation *obj) { return &obj->thumbnail_; }
EXPORT auto td_bridge_obj_inputMessageAnimation_duration(inputMessageAnimation *obj) { return &obj->duration_; }
EXPORT auto td_bridge_obj_inputMessageAnimation_width(inputMessageAnimation *obj) { return &obj->width_; }
EXPORT auto td_bridge_obj_inputMessageAnimation_height(inputMessageAnimation *obj) { return &obj->height_; }
EXPORT auto td_bridge_obj_inputMessageAnimation_caption(inputMessageAnimation *obj) { return &obj->caption_; }

EXPORT inputMessageAudio *td_bridge_newobj_inputMessageAudio() { return new inputMessageAudio(); }
EXPORT auto td_bridge_obj_inputMessageAudio_audio(inputMessageAudio *obj) { return &obj->audio_; }
EXPORT auto td_bridge_obj_inputMessageAudio_album_cover_thumbnail(inputMessageAudio *obj) { return &obj->album_cover_thumbnail_; }
EXPORT auto td_bridge_obj_inputMessageAudio_duration(inputMessageAudio *obj) { return &obj->duration_; }
EXPORT auto td_bridge_obj_inputMessageAudio_title(inputMessageAudio *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_inputMessageAudio_performer(inputMessageAudio *obj) { return &obj->performer_; }
EXPORT auto td_bridge_obj_inputMessageAudio_caption(inputMessageAudio *obj) { return &obj->caption_; }

EXPORT inputMessageDocument *td_bridge_newobj_inputMessageDocument() { return new inputMessageDocument(); }
EXPORT auto td_bridge_obj_inputMessageDocument_document(inputMessageDocument *obj) { return &obj->document_; }
EXPORT auto td_bridge_obj_inputMessageDocument_thumbnail(inputMessageDocument *obj) { return &obj->thumbnail_; }
EXPORT auto td_bridge_obj_inputMessageDocument_caption(inputMessageDocument *obj) { return &obj->caption_; }

EXPORT inputMessagePhoto *td_bridge_newobj_inputMessagePhoto() { return new inputMessagePhoto(); }
EXPORT auto td_bridge_obj_inputMessagePhoto_photo(inputMessagePhoto *obj) { return &obj->photo_; }
EXPORT auto td_bridge_obj_inputMessagePhoto_thumbnail(inputMessagePhoto *obj) { return &obj->thumbnail_; }
EXPORT auto td_bridge_obj_inputMessagePhoto_added_sticker_file_ids(inputMessagePhoto *obj) { return &obj->added_sticker_file_ids_; }
EXPORT auto td_bridge_obj_inputMessagePhoto_width(inputMessagePhoto *obj) { return &obj->width_; }
EXPORT auto td_bridge_obj_inputMessagePhoto_height(inputMessagePhoto *obj) { return &obj->height_; }
EXPORT auto td_bridge_obj_inputMessagePhoto_caption(inputMessagePhoto *obj) { return &obj->caption_; }
EXPORT auto td_bridge_obj_inputMessagePhoto_ttl(inputMessagePhoto *obj) { return &obj->ttl_; }

EXPORT inputMessageSticker *td_bridge_newobj_inputMessageSticker() { return new inputMessageSticker(); }
EXPORT auto td_bridge_obj_inputMessageSticker_sticker(inputMessageSticker *obj) { return &obj->sticker_; }
EXPORT auto td_bridge_obj_inputMessageSticker_thumbnail(inputMessageSticker *obj) { return &obj->thumbnail_; }
EXPORT auto td_bridge_obj_inputMessageSticker_width(inputMessageSticker *obj) { return &obj->width_; }
EXPORT auto td_bridge_obj_inputMessageSticker_height(inputMessageSticker *obj) { return &obj->height_; }

EXPORT inputMessageVideo *td_bridge_newobj_inputMessageVideo() { return new inputMessageVideo(); }
EXPORT auto td_bridge_obj_inputMessageVideo_video(inputMessageVideo *obj) { return &obj->video_; }
EXPORT auto td_bridge_obj_inputMessageVideo_thumbnail(inputMessageVideo *obj) { return &obj->thumbnail_; }
EXPORT auto td_bridge_obj_inputMessageVideo_added_sticker_file_ids(inputMessageVideo *obj) { return &obj->added_sticker_file_ids_; }
EXPORT auto td_bridge_obj_inputMessageVideo_duration(inputMessageVideo *obj) { return &obj->duration_; }
EXPORT auto td_bridge_obj_inputMessageVideo_width(inputMessageVideo *obj) { return &obj->width_; }
EXPORT auto td_bridge_obj_inputMessageVideo_height(inputMessageVideo *obj) { return &obj->height_; }
EXPORT auto td_bridge_obj_inputMessageVideo_supports_streaming(inputMessageVideo *obj) { return &obj->supports_streaming_; }
EXPORT auto td_bridge_obj_inputMessageVideo_caption(inputMessageVideo *obj) { return &obj->caption_; }
EXPORT auto td_bridge_obj_inputMessageVideo_ttl(inputMessageVideo *obj) { return &obj->ttl_; }

EXPORT inputMessageVideoNote *td_bridge_newobj_inputMessageVideoNote() { return new inputMessageVideoNote(); }
EXPORT auto td_bridge_obj_inputMessageVideoNote_video_note(inputMessageVideoNote *obj) { return &obj->video_note_; }
EXPORT auto td_bridge_obj_inputMessageVideoNote_thumbnail(inputMessageVideoNote *obj) { return &obj->thumbnail_; }
EXPORT auto td_bridge_obj_inputMessageVideoNote_duration(inputMessageVideoNote *obj) { return &obj->duration_; }
EXPORT auto td_bridge_obj_inputMessageVideoNote_length(inputMessageVideoNote *obj) { return &obj->length_; }

EXPORT inputMessageVoiceNote *td_bridge_newobj_inputMessageVoiceNote() { return new inputMessageVoiceNote(); }
EXPORT auto td_bridge_obj_inputMessageVoiceNote_voice_note(inputMessageVoiceNote *obj) { return &obj->voice_note_; }
EXPORT auto td_bridge_obj_inputMessageVoiceNote_duration(inputMessageVoiceNote *obj) { return &obj->duration_; }
EXPORT auto td_bridge_obj_inputMessageVoiceNote_waveform(inputMessageVoiceNote *obj) { return &obj->waveform_; }
EXPORT auto td_bridge_obj_inputMessageVoiceNote_caption(inputMessageVoiceNote *obj) { return &obj->caption_; }

EXPORT inputMessageLocation *td_bridge_newobj_inputMessageLocation() { return new inputMessageLocation(); }
EXPORT auto td_bridge_obj_inputMessageLocation_location(inputMessageLocation *obj) { return &obj->location_; }
EXPORT auto td_bridge_obj_inputMessageLocation_live_period(inputMessageLocation *obj) { return &obj->live_period_; }

EXPORT inputMessageVenue *td_bridge_newobj_inputMessageVenue() { return new inputMessageVenue(); }
EXPORT auto td_bridge_obj_inputMessageVenue_venue(inputMessageVenue *obj) { return &obj->venue_; }

EXPORT inputMessageContact *td_bridge_newobj_inputMessageContact() { return new inputMessageContact(); }
EXPORT auto td_bridge_obj_inputMessageContact_contact(inputMessageContact *obj) { return &obj->contact_; }

EXPORT inputMessageGame *td_bridge_newobj_inputMessageGame() { return new inputMessageGame(); }
EXPORT auto td_bridge_obj_inputMessageGame_bot_user_id(inputMessageGame *obj) { return &obj->bot_user_id_; }
EXPORT auto td_bridge_obj_inputMessageGame_game_short_name(inputMessageGame *obj) { return &obj->game_short_name_; }

EXPORT inputMessageInvoice *td_bridge_newobj_inputMessageInvoice() { return new inputMessageInvoice(); }
EXPORT auto td_bridge_obj_inputMessageInvoice_invoice(inputMessageInvoice *obj) { return &obj->invoice_; }
EXPORT auto td_bridge_obj_inputMessageInvoice_title(inputMessageInvoice *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_inputMessageInvoice_description(inputMessageInvoice *obj) { return &obj->description_; }
EXPORT auto td_bridge_obj_inputMessageInvoice_photo_url(inputMessageInvoice *obj) { return &obj->photo_url_; }
EXPORT auto td_bridge_obj_inputMessageInvoice_photo_size(inputMessageInvoice *obj) { return &obj->photo_size_; }
EXPORT auto td_bridge_obj_inputMessageInvoice_photo_width(inputMessageInvoice *obj) { return &obj->photo_width_; }
EXPORT auto td_bridge_obj_inputMessageInvoice_photo_height(inputMessageInvoice *obj) { return &obj->photo_height_; }
EXPORT auto td_bridge_obj_inputMessageInvoice_payload(inputMessageInvoice *obj) { return &obj->payload_; }
EXPORT auto td_bridge_obj_inputMessageInvoice_provider_token(inputMessageInvoice *obj) { return &obj->provider_token_; }
EXPORT auto td_bridge_obj_inputMessageInvoice_provider_data(inputMessageInvoice *obj) { return &obj->provider_data_; }
EXPORT auto td_bridge_obj_inputMessageInvoice_start_parameter(inputMessageInvoice *obj) { return &obj->start_parameter_; }

EXPORT inputMessageForwarded *td_bridge_newobj_inputMessageForwarded() { return new inputMessageForwarded(); }
EXPORT auto td_bridge_obj_inputMessageForwarded_from_chat_id(inputMessageForwarded *obj) { return &obj->from_chat_id_; }
EXPORT auto td_bridge_obj_inputMessageForwarded_message_id(inputMessageForwarded *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_inputMessageForwarded_in_game_share(inputMessageForwarded *obj) { return &obj->in_game_share_; }

EXPORT searchMessagesFilterEmpty *td_bridge_newobj_searchMessagesFilterEmpty() { return new searchMessagesFilterEmpty(); }

EXPORT searchMessagesFilterAnimation *td_bridge_newobj_searchMessagesFilterAnimation() { return new searchMessagesFilterAnimation(); }

EXPORT searchMessagesFilterAudio *td_bridge_newobj_searchMessagesFilterAudio() { return new searchMessagesFilterAudio(); }

EXPORT searchMessagesFilterDocument *td_bridge_newobj_searchMessagesFilterDocument() { return new searchMessagesFilterDocument(); }

EXPORT searchMessagesFilterPhoto *td_bridge_newobj_searchMessagesFilterPhoto() { return new searchMessagesFilterPhoto(); }

EXPORT searchMessagesFilterVideo *td_bridge_newobj_searchMessagesFilterVideo() { return new searchMessagesFilterVideo(); }

EXPORT searchMessagesFilterVoiceNote *td_bridge_newobj_searchMessagesFilterVoiceNote() { return new searchMessagesFilterVoiceNote(); }

EXPORT searchMessagesFilterPhotoAndVideo *td_bridge_newobj_searchMessagesFilterPhotoAndVideo() { return new searchMessagesFilterPhotoAndVideo(); }

EXPORT searchMessagesFilterUrl *td_bridge_newobj_searchMessagesFilterUrl() { return new searchMessagesFilterUrl(); }

EXPORT searchMessagesFilterChatPhoto *td_bridge_newobj_searchMessagesFilterChatPhoto() { return new searchMessagesFilterChatPhoto(); }

EXPORT searchMessagesFilterCall *td_bridge_newobj_searchMessagesFilterCall() { return new searchMessagesFilterCall(); }

EXPORT searchMessagesFilterMissedCall *td_bridge_newobj_searchMessagesFilterMissedCall() { return new searchMessagesFilterMissedCall(); }

EXPORT searchMessagesFilterVideoNote *td_bridge_newobj_searchMessagesFilterVideoNote() { return new searchMessagesFilterVideoNote(); }

EXPORT searchMessagesFilterVoiceAndVideoNote *td_bridge_newobj_searchMessagesFilterVoiceAndVideoNote() { return new searchMessagesFilterVoiceAndVideoNote(); }

EXPORT searchMessagesFilterMention *td_bridge_newobj_searchMessagesFilterMention() { return new searchMessagesFilterMention(); }

EXPORT searchMessagesFilterUnreadMention *td_bridge_newobj_searchMessagesFilterUnreadMention() { return new searchMessagesFilterUnreadMention(); }

EXPORT chatActionTyping *td_bridge_newobj_chatActionTyping() { return new chatActionTyping(); }

EXPORT chatActionRecordingVideo *td_bridge_newobj_chatActionRecordingVideo() { return new chatActionRecordingVideo(); }

EXPORT chatActionUploadingVideo *td_bridge_newobj_chatActionUploadingVideo() { return new chatActionUploadingVideo(); }
EXPORT auto td_bridge_obj_chatActionUploadingVideo_progress(chatActionUploadingVideo *obj) { return &obj->progress_; }

EXPORT chatActionRecordingVoiceNote *td_bridge_newobj_chatActionRecordingVoiceNote() { return new chatActionRecordingVoiceNote(); }

EXPORT chatActionUploadingVoiceNote *td_bridge_newobj_chatActionUploadingVoiceNote() { return new chatActionUploadingVoiceNote(); }
EXPORT auto td_bridge_obj_chatActionUploadingVoiceNote_progress(chatActionUploadingVoiceNote *obj) { return &obj->progress_; }

EXPORT chatActionUploadingPhoto *td_bridge_newobj_chatActionUploadingPhoto() { return new chatActionUploadingPhoto(); }
EXPORT auto td_bridge_obj_chatActionUploadingPhoto_progress(chatActionUploadingPhoto *obj) { return &obj->progress_; }

EXPORT chatActionUploadingDocument *td_bridge_newobj_chatActionUploadingDocument() { return new chatActionUploadingDocument(); }
EXPORT auto td_bridge_obj_chatActionUploadingDocument_progress(chatActionUploadingDocument *obj) { return &obj->progress_; }

EXPORT chatActionChoosingLocation *td_bridge_newobj_chatActionChoosingLocation() { return new chatActionChoosingLocation(); }

EXPORT chatActionChoosingContact *td_bridge_newobj_chatActionChoosingContact() { return new chatActionChoosingContact(); }

EXPORT chatActionStartPlayingGame *td_bridge_newobj_chatActionStartPlayingGame() { return new chatActionStartPlayingGame(); }

EXPORT chatActionRecordingVideoNote *td_bridge_newobj_chatActionRecordingVideoNote() { return new chatActionRecordingVideoNote(); }

EXPORT chatActionUploadingVideoNote *td_bridge_newobj_chatActionUploadingVideoNote() { return new chatActionUploadingVideoNote(); }
EXPORT auto td_bridge_obj_chatActionUploadingVideoNote_progress(chatActionUploadingVideoNote *obj) { return &obj->progress_; }

EXPORT chatActionCancel *td_bridge_newobj_chatActionCancel() { return new chatActionCancel(); }

EXPORT userStatusEmpty *td_bridge_newobj_userStatusEmpty() { return new userStatusEmpty(); }

EXPORT userStatusOnline *td_bridge_newobj_userStatusOnline() { return new userStatusOnline(); }
EXPORT auto td_bridge_obj_userStatusOnline_expires(userStatusOnline *obj) { return &obj->expires_; }

EXPORT userStatusOffline *td_bridge_newobj_userStatusOffline() { return new userStatusOffline(); }
EXPORT auto td_bridge_obj_userStatusOffline_was_online(userStatusOffline *obj) { return &obj->was_online_; }

EXPORT userStatusRecently *td_bridge_newobj_userStatusRecently() { return new userStatusRecently(); }

EXPORT userStatusLastWeek *td_bridge_newobj_userStatusLastWeek() { return new userStatusLastWeek(); }

EXPORT userStatusLastMonth *td_bridge_newobj_userStatusLastMonth() { return new userStatusLastMonth(); }

EXPORT stickers *td_bridge_newobj_stickers() { return new stickers(); }
EXPORT auto td_bridge_obj_stickers_stickers(stickers *obj) { return &obj->stickers_; }

EXPORT stickerEmojis *td_bridge_newobj_stickerEmojis() { return new stickerEmojis(); }
EXPORT auto td_bridge_obj_stickerEmojis_emojis(stickerEmojis *obj) { return &obj->emojis_; }

EXPORT stickerSet *td_bridge_newobj_stickerSet() { return new stickerSet(); }
EXPORT auto td_bridge_obj_stickerSet_id(stickerSet *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_stickerSet_title(stickerSet *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_stickerSet_name(stickerSet *obj) { return &obj->name_; }
EXPORT auto td_bridge_obj_stickerSet_is_installed(stickerSet *obj) { return &obj->is_installed_; }
EXPORT auto td_bridge_obj_stickerSet_is_archived(stickerSet *obj) { return &obj->is_archived_; }
EXPORT auto td_bridge_obj_stickerSet_is_official(stickerSet *obj) { return &obj->is_official_; }
EXPORT auto td_bridge_obj_stickerSet_is_masks(stickerSet *obj) { return &obj->is_masks_; }
EXPORT auto td_bridge_obj_stickerSet_is_viewed(stickerSet *obj) { return &obj->is_viewed_; }
EXPORT auto td_bridge_obj_stickerSet_stickers(stickerSet *obj) { return &obj->stickers_; }
EXPORT auto td_bridge_obj_stickerSet_emojis(stickerSet *obj) { return &obj->emojis_; }

EXPORT stickerSetInfo *td_bridge_newobj_stickerSetInfo() { return new stickerSetInfo(); }
EXPORT auto td_bridge_obj_stickerSetInfo_id(stickerSetInfo *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_stickerSetInfo_title(stickerSetInfo *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_stickerSetInfo_name(stickerSetInfo *obj) { return &obj->name_; }
EXPORT auto td_bridge_obj_stickerSetInfo_is_installed(stickerSetInfo *obj) { return &obj->is_installed_; }
EXPORT auto td_bridge_obj_stickerSetInfo_is_archived(stickerSetInfo *obj) { return &obj->is_archived_; }
EXPORT auto td_bridge_obj_stickerSetInfo_is_official(stickerSetInfo *obj) { return &obj->is_official_; }
EXPORT auto td_bridge_obj_stickerSetInfo_is_masks(stickerSetInfo *obj) { return &obj->is_masks_; }
EXPORT auto td_bridge_obj_stickerSetInfo_is_viewed(stickerSetInfo *obj) { return &obj->is_viewed_; }
EXPORT auto td_bridge_obj_stickerSetInfo_size(stickerSetInfo *obj) { return &obj->size_; }
EXPORT auto td_bridge_obj_stickerSetInfo_covers(stickerSetInfo *obj) { return &obj->covers_; }

EXPORT stickerSets *td_bridge_newobj_stickerSets() { return new stickerSets(); }
EXPORT auto td_bridge_obj_stickerSets_total_count(stickerSets *obj) { return &obj->total_count_; }
EXPORT auto td_bridge_obj_stickerSets_sets(stickerSets *obj) { return &obj->sets_; }

EXPORT callDiscardReasonEmpty *td_bridge_newobj_callDiscardReasonEmpty() { return new callDiscardReasonEmpty(); }

EXPORT callDiscardReasonMissed *td_bridge_newobj_callDiscardReasonMissed() { return new callDiscardReasonMissed(); }

EXPORT callDiscardReasonDeclined *td_bridge_newobj_callDiscardReasonDeclined() { return new callDiscardReasonDeclined(); }

EXPORT callDiscardReasonDisconnected *td_bridge_newobj_callDiscardReasonDisconnected() { return new callDiscardReasonDisconnected(); }

EXPORT callDiscardReasonHungUp *td_bridge_newobj_callDiscardReasonHungUp() { return new callDiscardReasonHungUp(); }

EXPORT callProtocol *td_bridge_newobj_callProtocol() { return new callProtocol(); }
EXPORT auto td_bridge_obj_callProtocol_udp_p2p(callProtocol *obj) { return &obj->udp_p2p_; }
EXPORT auto td_bridge_obj_callProtocol_udp_reflector(callProtocol *obj) { return &obj->udp_reflector_; }
EXPORT auto td_bridge_obj_callProtocol_min_layer(callProtocol *obj) { return &obj->min_layer_; }
EXPORT auto td_bridge_obj_callProtocol_max_layer(callProtocol *obj) { return &obj->max_layer_; }

EXPORT callConnection *td_bridge_newobj_callConnection() { return new callConnection(); }
EXPORT auto td_bridge_obj_callConnection_id(callConnection *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_callConnection_ip(callConnection *obj) { return &obj->ip_; }
EXPORT auto td_bridge_obj_callConnection_ipv6(callConnection *obj) { return &obj->ipv6_; }
EXPORT auto td_bridge_obj_callConnection_port(callConnection *obj) { return &obj->port_; }
EXPORT auto td_bridge_obj_callConnection_peer_tag(callConnection *obj) { return &obj->peer_tag_; }

EXPORT callId *td_bridge_newobj_callId() { return new callId(); }
EXPORT auto td_bridge_obj_callId_id(callId *obj) { return &obj->id_; }

EXPORT callStatePending *td_bridge_newobj_callStatePending() { return new callStatePending(); }
EXPORT auto td_bridge_obj_callStatePending_is_created(callStatePending *obj) { return &obj->is_created_; }
EXPORT auto td_bridge_obj_callStatePending_is_received(callStatePending *obj) { return &obj->is_received_; }

EXPORT callStateExchangingKeys *td_bridge_newobj_callStateExchangingKeys() { return new callStateExchangingKeys(); }

EXPORT callStateReady *td_bridge_newobj_callStateReady() { return new callStateReady(); }
EXPORT auto td_bridge_obj_callStateReady_protocol(callStateReady *obj) { return &obj->protocol_; }
EXPORT auto td_bridge_obj_callStateReady_connections(callStateReady *obj) { return &obj->connections_; }
EXPORT auto td_bridge_obj_callStateReady_config(callStateReady *obj) { return &obj->config_; }
EXPORT auto td_bridge_obj_callStateReady_encryption_key(callStateReady *obj) { return &obj->encryption_key_; }
EXPORT auto td_bridge_obj_callStateReady_emojis(callStateReady *obj) { return &obj->emojis_; }

EXPORT callStateHangingUp *td_bridge_newobj_callStateHangingUp() { return new callStateHangingUp(); }

EXPORT callStateDiscarded *td_bridge_newobj_callStateDiscarded() { return new callStateDiscarded(); }
EXPORT auto td_bridge_obj_callStateDiscarded_reason(callStateDiscarded *obj) { return &obj->reason_; }
EXPORT auto td_bridge_obj_callStateDiscarded_need_rating(callStateDiscarded *obj) { return &obj->need_rating_; }
EXPORT auto td_bridge_obj_callStateDiscarded_need_debug_information(callStateDiscarded *obj) { return &obj->need_debug_information_; }

EXPORT callStateError *td_bridge_newobj_callStateError() { return new callStateError(); }
EXPORT auto td_bridge_obj_callStateError_error(callStateError *obj) { return &obj->error_; }

EXPORT call *td_bridge_newobj_call() { return new call(); }
EXPORT auto td_bridge_obj_call_id(call *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_call_user_id(call *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_call_is_outgoing(call *obj) { return &obj->is_outgoing_; }
EXPORT auto td_bridge_obj_call_state(call *obj) { return &obj->state_; }

EXPORT animations *td_bridge_newobj_animations() { return new animations(); }
EXPORT auto td_bridge_obj_animations_animations(animations *obj) { return &obj->animations_; }

EXPORT importedContacts *td_bridge_newobj_importedContacts() { return new importedContacts(); }
EXPORT auto td_bridge_obj_importedContacts_user_ids(importedContacts *obj) { return &obj->user_ids_; }
EXPORT auto td_bridge_obj_importedContacts_importer_count(importedContacts *obj) { return &obj->importer_count_; }

EXPORT inputInlineQueryResultAnimatedGif *td_bridge_newobj_inputInlineQueryResultAnimatedGif() { return new inputInlineQueryResultAnimatedGif(); }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedGif_id(inputInlineQueryResultAnimatedGif *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedGif_title(inputInlineQueryResultAnimatedGif *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedGif_thumbnail_url(inputInlineQueryResultAnimatedGif *obj) { return &obj->thumbnail_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedGif_gif_url(inputInlineQueryResultAnimatedGif *obj) { return &obj->gif_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedGif_gif_duration(inputInlineQueryResultAnimatedGif *obj) { return &obj->gif_duration_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedGif_gif_width(inputInlineQueryResultAnimatedGif *obj) { return &obj->gif_width_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedGif_gif_height(inputInlineQueryResultAnimatedGif *obj) { return &obj->gif_height_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedGif_reply_markup(inputInlineQueryResultAnimatedGif *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedGif_input_message_content(inputInlineQueryResultAnimatedGif *obj) { return &obj->input_message_content_; }

EXPORT inputInlineQueryResultAnimatedMpeg4 *td_bridge_newobj_inputInlineQueryResultAnimatedMpeg4() { return new inputInlineQueryResultAnimatedMpeg4(); }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedMpeg4_id(inputInlineQueryResultAnimatedMpeg4 *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedMpeg4_title(inputInlineQueryResultAnimatedMpeg4 *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedMpeg4_thumbnail_url(inputInlineQueryResultAnimatedMpeg4 *obj) { return &obj->thumbnail_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedMpeg4_mpeg4_url(inputInlineQueryResultAnimatedMpeg4 *obj) { return &obj->mpeg4_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedMpeg4_mpeg4_duration(inputInlineQueryResultAnimatedMpeg4 *obj) { return &obj->mpeg4_duration_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedMpeg4_mpeg4_width(inputInlineQueryResultAnimatedMpeg4 *obj) { return &obj->mpeg4_width_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedMpeg4_mpeg4_height(inputInlineQueryResultAnimatedMpeg4 *obj) { return &obj->mpeg4_height_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedMpeg4_reply_markup(inputInlineQueryResultAnimatedMpeg4 *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAnimatedMpeg4_input_message_content(inputInlineQueryResultAnimatedMpeg4 *obj) { return &obj->input_message_content_; }

EXPORT inputInlineQueryResultArticle *td_bridge_newobj_inputInlineQueryResultArticle() { return new inputInlineQueryResultArticle(); }
EXPORT auto td_bridge_obj_inputInlineQueryResultArticle_id(inputInlineQueryResultArticle *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultArticle_url(inputInlineQueryResultArticle *obj) { return &obj->url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultArticle_hide_url(inputInlineQueryResultArticle *obj) { return &obj->hide_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultArticle_title(inputInlineQueryResultArticle *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultArticle_description(inputInlineQueryResultArticle *obj) { return &obj->description_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultArticle_thumbnail_url(inputInlineQueryResultArticle *obj) { return &obj->thumbnail_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultArticle_thumbnail_width(inputInlineQueryResultArticle *obj) { return &obj->thumbnail_width_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultArticle_thumbnail_height(inputInlineQueryResultArticle *obj) { return &obj->thumbnail_height_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultArticle_reply_markup(inputInlineQueryResultArticle *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultArticle_input_message_content(inputInlineQueryResultArticle *obj) { return &obj->input_message_content_; }

EXPORT inputInlineQueryResultAudio *td_bridge_newobj_inputInlineQueryResultAudio() { return new inputInlineQueryResultAudio(); }
EXPORT auto td_bridge_obj_inputInlineQueryResultAudio_id(inputInlineQueryResultAudio *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAudio_title(inputInlineQueryResultAudio *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAudio_performer(inputInlineQueryResultAudio *obj) { return &obj->performer_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAudio_audio_url(inputInlineQueryResultAudio *obj) { return &obj->audio_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAudio_audio_duration(inputInlineQueryResultAudio *obj) { return &obj->audio_duration_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAudio_reply_markup(inputInlineQueryResultAudio *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultAudio_input_message_content(inputInlineQueryResultAudio *obj) { return &obj->input_message_content_; }

EXPORT inputInlineQueryResultContact *td_bridge_newobj_inputInlineQueryResultContact() { return new inputInlineQueryResultContact(); }
EXPORT auto td_bridge_obj_inputInlineQueryResultContact_id(inputInlineQueryResultContact *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultContact_contact(inputInlineQueryResultContact *obj) { return &obj->contact_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultContact_thumbnail_url(inputInlineQueryResultContact *obj) { return &obj->thumbnail_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultContact_thumbnail_width(inputInlineQueryResultContact *obj) { return &obj->thumbnail_width_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultContact_thumbnail_height(inputInlineQueryResultContact *obj) { return &obj->thumbnail_height_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultContact_reply_markup(inputInlineQueryResultContact *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultContact_input_message_content(inputInlineQueryResultContact *obj) { return &obj->input_message_content_; }

EXPORT inputInlineQueryResultDocument *td_bridge_newobj_inputInlineQueryResultDocument() { return new inputInlineQueryResultDocument(); }
EXPORT auto td_bridge_obj_inputInlineQueryResultDocument_id(inputInlineQueryResultDocument *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultDocument_title(inputInlineQueryResultDocument *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultDocument_description(inputInlineQueryResultDocument *obj) { return &obj->description_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultDocument_document_url(inputInlineQueryResultDocument *obj) { return &obj->document_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultDocument_mime_type(inputInlineQueryResultDocument *obj) { return &obj->mime_type_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultDocument_thumbnail_url(inputInlineQueryResultDocument *obj) { return &obj->thumbnail_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultDocument_thumbnail_width(inputInlineQueryResultDocument *obj) { return &obj->thumbnail_width_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultDocument_thumbnail_height(inputInlineQueryResultDocument *obj) { return &obj->thumbnail_height_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultDocument_reply_markup(inputInlineQueryResultDocument *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultDocument_input_message_content(inputInlineQueryResultDocument *obj) { return &obj->input_message_content_; }

EXPORT inputInlineQueryResultGame *td_bridge_newobj_inputInlineQueryResultGame() { return new inputInlineQueryResultGame(); }
EXPORT auto td_bridge_obj_inputInlineQueryResultGame_id(inputInlineQueryResultGame *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultGame_game_short_name(inputInlineQueryResultGame *obj) { return &obj->game_short_name_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultGame_reply_markup(inputInlineQueryResultGame *obj) { return &obj->reply_markup_; }

EXPORT inputInlineQueryResultLocation *td_bridge_newobj_inputInlineQueryResultLocation() { return new inputInlineQueryResultLocation(); }
EXPORT auto td_bridge_obj_inputInlineQueryResultLocation_id(inputInlineQueryResultLocation *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultLocation_location(inputInlineQueryResultLocation *obj) { return &obj->location_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultLocation_live_period(inputInlineQueryResultLocation *obj) { return &obj->live_period_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultLocation_title(inputInlineQueryResultLocation *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultLocation_thumbnail_url(inputInlineQueryResultLocation *obj) { return &obj->thumbnail_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultLocation_thumbnail_width(inputInlineQueryResultLocation *obj) { return &obj->thumbnail_width_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultLocation_thumbnail_height(inputInlineQueryResultLocation *obj) { return &obj->thumbnail_height_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultLocation_reply_markup(inputInlineQueryResultLocation *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultLocation_input_message_content(inputInlineQueryResultLocation *obj) { return &obj->input_message_content_; }

EXPORT inputInlineQueryResultPhoto *td_bridge_newobj_inputInlineQueryResultPhoto() { return new inputInlineQueryResultPhoto(); }
EXPORT auto td_bridge_obj_inputInlineQueryResultPhoto_id(inputInlineQueryResultPhoto *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultPhoto_title(inputInlineQueryResultPhoto *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultPhoto_description(inputInlineQueryResultPhoto *obj) { return &obj->description_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultPhoto_thumbnail_url(inputInlineQueryResultPhoto *obj) { return &obj->thumbnail_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultPhoto_photo_url(inputInlineQueryResultPhoto *obj) { return &obj->photo_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultPhoto_photo_width(inputInlineQueryResultPhoto *obj) { return &obj->photo_width_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultPhoto_photo_height(inputInlineQueryResultPhoto *obj) { return &obj->photo_height_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultPhoto_reply_markup(inputInlineQueryResultPhoto *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultPhoto_input_message_content(inputInlineQueryResultPhoto *obj) { return &obj->input_message_content_; }

EXPORT inputInlineQueryResultSticker *td_bridge_newobj_inputInlineQueryResultSticker() { return new inputInlineQueryResultSticker(); }
EXPORT auto td_bridge_obj_inputInlineQueryResultSticker_id(inputInlineQueryResultSticker *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultSticker_thumbnail_url(inputInlineQueryResultSticker *obj) { return &obj->thumbnail_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultSticker_sticker_url(inputInlineQueryResultSticker *obj) { return &obj->sticker_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultSticker_sticker_width(inputInlineQueryResultSticker *obj) { return &obj->sticker_width_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultSticker_sticker_height(inputInlineQueryResultSticker *obj) { return &obj->sticker_height_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultSticker_reply_markup(inputInlineQueryResultSticker *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultSticker_input_message_content(inputInlineQueryResultSticker *obj) { return &obj->input_message_content_; }

EXPORT inputInlineQueryResultVenue *td_bridge_newobj_inputInlineQueryResultVenue() { return new inputInlineQueryResultVenue(); }
EXPORT auto td_bridge_obj_inputInlineQueryResultVenue_id(inputInlineQueryResultVenue *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVenue_venue(inputInlineQueryResultVenue *obj) { return &obj->venue_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVenue_thumbnail_url(inputInlineQueryResultVenue *obj) { return &obj->thumbnail_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVenue_thumbnail_width(inputInlineQueryResultVenue *obj) { return &obj->thumbnail_width_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVenue_thumbnail_height(inputInlineQueryResultVenue *obj) { return &obj->thumbnail_height_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVenue_reply_markup(inputInlineQueryResultVenue *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVenue_input_message_content(inputInlineQueryResultVenue *obj) { return &obj->input_message_content_; }

EXPORT inputInlineQueryResultVideo *td_bridge_newobj_inputInlineQueryResultVideo() { return new inputInlineQueryResultVideo(); }
EXPORT auto td_bridge_obj_inputInlineQueryResultVideo_id(inputInlineQueryResultVideo *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVideo_title(inputInlineQueryResultVideo *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVideo_description(inputInlineQueryResultVideo *obj) { return &obj->description_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVideo_thumbnail_url(inputInlineQueryResultVideo *obj) { return &obj->thumbnail_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVideo_video_url(inputInlineQueryResultVideo *obj) { return &obj->video_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVideo_mime_type(inputInlineQueryResultVideo *obj) { return &obj->mime_type_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVideo_video_width(inputInlineQueryResultVideo *obj) { return &obj->video_width_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVideo_video_height(inputInlineQueryResultVideo *obj) { return &obj->video_height_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVideo_video_duration(inputInlineQueryResultVideo *obj) { return &obj->video_duration_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVideo_reply_markup(inputInlineQueryResultVideo *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVideo_input_message_content(inputInlineQueryResultVideo *obj) { return &obj->input_message_content_; }

EXPORT inputInlineQueryResultVoiceNote *td_bridge_newobj_inputInlineQueryResultVoiceNote() { return new inputInlineQueryResultVoiceNote(); }
EXPORT auto td_bridge_obj_inputInlineQueryResultVoiceNote_id(inputInlineQueryResultVoiceNote *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVoiceNote_title(inputInlineQueryResultVoiceNote *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVoiceNote_voice_note_url(inputInlineQueryResultVoiceNote *obj) { return &obj->voice_note_url_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVoiceNote_voice_note_duration(inputInlineQueryResultVoiceNote *obj) { return &obj->voice_note_duration_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVoiceNote_reply_markup(inputInlineQueryResultVoiceNote *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_inputInlineQueryResultVoiceNote_input_message_content(inputInlineQueryResultVoiceNote *obj) { return &obj->input_message_content_; }

EXPORT inlineQueryResultArticle *td_bridge_newobj_inlineQueryResultArticle() { return new inlineQueryResultArticle(); }
EXPORT auto td_bridge_obj_inlineQueryResultArticle_id(inlineQueryResultArticle *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inlineQueryResultArticle_url(inlineQueryResultArticle *obj) { return &obj->url_; }
EXPORT auto td_bridge_obj_inlineQueryResultArticle_hide_url(inlineQueryResultArticle *obj) { return &obj->hide_url_; }
EXPORT auto td_bridge_obj_inlineQueryResultArticle_title(inlineQueryResultArticle *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_inlineQueryResultArticle_description(inlineQueryResultArticle *obj) { return &obj->description_; }
EXPORT auto td_bridge_obj_inlineQueryResultArticle_thumbnail(inlineQueryResultArticle *obj) { return &obj->thumbnail_; }

EXPORT inlineQueryResultContact *td_bridge_newobj_inlineQueryResultContact() { return new inlineQueryResultContact(); }
EXPORT auto td_bridge_obj_inlineQueryResultContact_id(inlineQueryResultContact *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inlineQueryResultContact_contact(inlineQueryResultContact *obj) { return &obj->contact_; }
EXPORT auto td_bridge_obj_inlineQueryResultContact_thumbnail(inlineQueryResultContact *obj) { return &obj->thumbnail_; }

EXPORT inlineQueryResultLocation *td_bridge_newobj_inlineQueryResultLocation() { return new inlineQueryResultLocation(); }
EXPORT auto td_bridge_obj_inlineQueryResultLocation_id(inlineQueryResultLocation *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inlineQueryResultLocation_location(inlineQueryResultLocation *obj) { return &obj->location_; }
EXPORT auto td_bridge_obj_inlineQueryResultLocation_title(inlineQueryResultLocation *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_inlineQueryResultLocation_thumbnail(inlineQueryResultLocation *obj) { return &obj->thumbnail_; }

EXPORT inlineQueryResultVenue *td_bridge_newobj_inlineQueryResultVenue() { return new inlineQueryResultVenue(); }
EXPORT auto td_bridge_obj_inlineQueryResultVenue_id(inlineQueryResultVenue *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inlineQueryResultVenue_venue(inlineQueryResultVenue *obj) { return &obj->venue_; }
EXPORT auto td_bridge_obj_inlineQueryResultVenue_thumbnail(inlineQueryResultVenue *obj) { return &obj->thumbnail_; }

EXPORT inlineQueryResultGame *td_bridge_newobj_inlineQueryResultGame() { return new inlineQueryResultGame(); }
EXPORT auto td_bridge_obj_inlineQueryResultGame_id(inlineQueryResultGame *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inlineQueryResultGame_game(inlineQueryResultGame *obj) { return &obj->game_; }

EXPORT inlineQueryResultAnimation *td_bridge_newobj_inlineQueryResultAnimation() { return new inlineQueryResultAnimation(); }
EXPORT auto td_bridge_obj_inlineQueryResultAnimation_id(inlineQueryResultAnimation *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inlineQueryResultAnimation_animation(inlineQueryResultAnimation *obj) { return &obj->animation_; }
EXPORT auto td_bridge_obj_inlineQueryResultAnimation_title(inlineQueryResultAnimation *obj) { return &obj->title_; }

EXPORT inlineQueryResultAudio *td_bridge_newobj_inlineQueryResultAudio() { return new inlineQueryResultAudio(); }
EXPORT auto td_bridge_obj_inlineQueryResultAudio_id(inlineQueryResultAudio *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inlineQueryResultAudio_audio(inlineQueryResultAudio *obj) { return &obj->audio_; }

EXPORT inlineQueryResultDocument *td_bridge_newobj_inlineQueryResultDocument() { return new inlineQueryResultDocument(); }
EXPORT auto td_bridge_obj_inlineQueryResultDocument_id(inlineQueryResultDocument *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inlineQueryResultDocument_document(inlineQueryResultDocument *obj) { return &obj->document_; }
EXPORT auto td_bridge_obj_inlineQueryResultDocument_title(inlineQueryResultDocument *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_inlineQueryResultDocument_description(inlineQueryResultDocument *obj) { return &obj->description_; }

EXPORT inlineQueryResultPhoto *td_bridge_newobj_inlineQueryResultPhoto() { return new inlineQueryResultPhoto(); }
EXPORT auto td_bridge_obj_inlineQueryResultPhoto_id(inlineQueryResultPhoto *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inlineQueryResultPhoto_photo(inlineQueryResultPhoto *obj) { return &obj->photo_; }
EXPORT auto td_bridge_obj_inlineQueryResultPhoto_title(inlineQueryResultPhoto *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_inlineQueryResultPhoto_description(inlineQueryResultPhoto *obj) { return &obj->description_; }

EXPORT inlineQueryResultSticker *td_bridge_newobj_inlineQueryResultSticker() { return new inlineQueryResultSticker(); }
EXPORT auto td_bridge_obj_inlineQueryResultSticker_id(inlineQueryResultSticker *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inlineQueryResultSticker_sticker(inlineQueryResultSticker *obj) { return &obj->sticker_; }

EXPORT inlineQueryResultVideo *td_bridge_newobj_inlineQueryResultVideo() { return new inlineQueryResultVideo(); }
EXPORT auto td_bridge_obj_inlineQueryResultVideo_id(inlineQueryResultVideo *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inlineQueryResultVideo_video(inlineQueryResultVideo *obj) { return &obj->video_; }
EXPORT auto td_bridge_obj_inlineQueryResultVideo_title(inlineQueryResultVideo *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_inlineQueryResultVideo_description(inlineQueryResultVideo *obj) { return &obj->description_; }

EXPORT inlineQueryResultVoiceNote *td_bridge_newobj_inlineQueryResultVoiceNote() { return new inlineQueryResultVoiceNote(); }
EXPORT auto td_bridge_obj_inlineQueryResultVoiceNote_id(inlineQueryResultVoiceNote *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_inlineQueryResultVoiceNote_voice_note(inlineQueryResultVoiceNote *obj) { return &obj->voice_note_; }
EXPORT auto td_bridge_obj_inlineQueryResultVoiceNote_title(inlineQueryResultVoiceNote *obj) { return &obj->title_; }

EXPORT inlineQueryResults *td_bridge_newobj_inlineQueryResults() { return new inlineQueryResults(); }
EXPORT auto td_bridge_obj_inlineQueryResults_inline_query_id(inlineQueryResults *obj) { return &obj->inline_query_id_; }
EXPORT auto td_bridge_obj_inlineQueryResults_next_offset(inlineQueryResults *obj) { return &obj->next_offset_; }
EXPORT auto td_bridge_obj_inlineQueryResults_results(inlineQueryResults *obj) { return &obj->results_; }
EXPORT auto td_bridge_obj_inlineQueryResults_switch_pm_text(inlineQueryResults *obj) { return &obj->switch_pm_text_; }
EXPORT auto td_bridge_obj_inlineQueryResults_switch_pm_parameter(inlineQueryResults *obj) { return &obj->switch_pm_parameter_; }

EXPORT callbackQueryPayloadData *td_bridge_newobj_callbackQueryPayloadData() { return new callbackQueryPayloadData(); }
EXPORT auto td_bridge_obj_callbackQueryPayloadData_data(callbackQueryPayloadData *obj) { return &obj->data_; }

EXPORT callbackQueryPayloadGame *td_bridge_newobj_callbackQueryPayloadGame() { return new callbackQueryPayloadGame(); }
EXPORT auto td_bridge_obj_callbackQueryPayloadGame_game_short_name(callbackQueryPayloadGame *obj) { return &obj->game_short_name_; }

EXPORT callbackQueryAnswer *td_bridge_newobj_callbackQueryAnswer() { return new callbackQueryAnswer(); }
EXPORT auto td_bridge_obj_callbackQueryAnswer_text(callbackQueryAnswer *obj) { return &obj->text_; }
EXPORT auto td_bridge_obj_callbackQueryAnswer_show_alert(callbackQueryAnswer *obj) { return &obj->show_alert_; }
EXPORT auto td_bridge_obj_callbackQueryAnswer_url(callbackQueryAnswer *obj) { return &obj->url_; }

EXPORT customRequestResult *td_bridge_newobj_customRequestResult() { return new customRequestResult(); }
EXPORT auto td_bridge_obj_customRequestResult_result(customRequestResult *obj) { return &obj->result_; }

EXPORT gameHighScore *td_bridge_newobj_gameHighScore() { return new gameHighScore(); }
EXPORT auto td_bridge_obj_gameHighScore_position(gameHighScore *obj) { return &obj->position_; }
EXPORT auto td_bridge_obj_gameHighScore_user_id(gameHighScore *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_gameHighScore_score(gameHighScore *obj) { return &obj->score_; }

EXPORT gameHighScores *td_bridge_newobj_gameHighScores() { return new gameHighScores(); }
EXPORT auto td_bridge_obj_gameHighScores_scores(gameHighScores *obj) { return &obj->scores_; }

EXPORT chatEventMessageEdited *td_bridge_newobj_chatEventMessageEdited() { return new chatEventMessageEdited(); }
EXPORT auto td_bridge_obj_chatEventMessageEdited_old_message(chatEventMessageEdited *obj) { return &obj->old_message_; }
EXPORT auto td_bridge_obj_chatEventMessageEdited_new_message(chatEventMessageEdited *obj) { return &obj->new_message_; }

EXPORT chatEventMessageDeleted *td_bridge_newobj_chatEventMessageDeleted() { return new chatEventMessageDeleted(); }
EXPORT auto td_bridge_obj_chatEventMessageDeleted_message(chatEventMessageDeleted *obj) { return &obj->message_; }

EXPORT chatEventMessagePinned *td_bridge_newobj_chatEventMessagePinned() { return new chatEventMessagePinned(); }
EXPORT auto td_bridge_obj_chatEventMessagePinned_message(chatEventMessagePinned *obj) { return &obj->message_; }

EXPORT chatEventMessageUnpinned *td_bridge_newobj_chatEventMessageUnpinned() { return new chatEventMessageUnpinned(); }

EXPORT chatEventMemberJoined *td_bridge_newobj_chatEventMemberJoined() { return new chatEventMemberJoined(); }

EXPORT chatEventMemberLeft *td_bridge_newobj_chatEventMemberLeft() { return new chatEventMemberLeft(); }

EXPORT chatEventMemberInvited *td_bridge_newobj_chatEventMemberInvited() { return new chatEventMemberInvited(); }
EXPORT auto td_bridge_obj_chatEventMemberInvited_user_id(chatEventMemberInvited *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_chatEventMemberInvited_status(chatEventMemberInvited *obj) { return &obj->status_; }

EXPORT chatEventMemberPromoted *td_bridge_newobj_chatEventMemberPromoted() { return new chatEventMemberPromoted(); }
EXPORT auto td_bridge_obj_chatEventMemberPromoted_user_id(chatEventMemberPromoted *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_chatEventMemberPromoted_old_status(chatEventMemberPromoted *obj) { return &obj->old_status_; }
EXPORT auto td_bridge_obj_chatEventMemberPromoted_new_status(chatEventMemberPromoted *obj) { return &obj->new_status_; }

EXPORT chatEventMemberRestricted *td_bridge_newobj_chatEventMemberRestricted() { return new chatEventMemberRestricted(); }
EXPORT auto td_bridge_obj_chatEventMemberRestricted_user_id(chatEventMemberRestricted *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_chatEventMemberRestricted_old_status(chatEventMemberRestricted *obj) { return &obj->old_status_; }
EXPORT auto td_bridge_obj_chatEventMemberRestricted_new_status(chatEventMemberRestricted *obj) { return &obj->new_status_; }

EXPORT chatEventTitleChanged *td_bridge_newobj_chatEventTitleChanged() { return new chatEventTitleChanged(); }
EXPORT auto td_bridge_obj_chatEventTitleChanged_old_title(chatEventTitleChanged *obj) { return &obj->old_title_; }
EXPORT auto td_bridge_obj_chatEventTitleChanged_new_title(chatEventTitleChanged *obj) { return &obj->new_title_; }

EXPORT chatEventDescriptionChanged *td_bridge_newobj_chatEventDescriptionChanged() { return new chatEventDescriptionChanged(); }
EXPORT auto td_bridge_obj_chatEventDescriptionChanged_old_description(chatEventDescriptionChanged *obj) { return &obj->old_description_; }
EXPORT auto td_bridge_obj_chatEventDescriptionChanged_new_description(chatEventDescriptionChanged *obj) { return &obj->new_description_; }

EXPORT chatEventUsernameChanged *td_bridge_newobj_chatEventUsernameChanged() { return new chatEventUsernameChanged(); }
EXPORT auto td_bridge_obj_chatEventUsernameChanged_old_username(chatEventUsernameChanged *obj) { return &obj->old_username_; }
EXPORT auto td_bridge_obj_chatEventUsernameChanged_new_username(chatEventUsernameChanged *obj) { return &obj->new_username_; }

EXPORT chatEventPhotoChanged *td_bridge_newobj_chatEventPhotoChanged() { return new chatEventPhotoChanged(); }
EXPORT auto td_bridge_obj_chatEventPhotoChanged_old_photo(chatEventPhotoChanged *obj) { return &obj->old_photo_; }
EXPORT auto td_bridge_obj_chatEventPhotoChanged_new_photo(chatEventPhotoChanged *obj) { return &obj->new_photo_; }

EXPORT chatEventInvitesToggled *td_bridge_newobj_chatEventInvitesToggled() { return new chatEventInvitesToggled(); }
EXPORT auto td_bridge_obj_chatEventInvitesToggled_anyone_can_invite(chatEventInvitesToggled *obj) { return &obj->anyone_can_invite_; }

EXPORT chatEventSignMessagesToggled *td_bridge_newobj_chatEventSignMessagesToggled() { return new chatEventSignMessagesToggled(); }
EXPORT auto td_bridge_obj_chatEventSignMessagesToggled_sign_messages(chatEventSignMessagesToggled *obj) { return &obj->sign_messages_; }

EXPORT chatEventStickerSetChanged *td_bridge_newobj_chatEventStickerSetChanged() { return new chatEventStickerSetChanged(); }
EXPORT auto td_bridge_obj_chatEventStickerSetChanged_old_sticker_set_id(chatEventStickerSetChanged *obj) { return &obj->old_sticker_set_id_; }
EXPORT auto td_bridge_obj_chatEventStickerSetChanged_new_sticker_set_id(chatEventStickerSetChanged *obj) { return &obj->new_sticker_set_id_; }

EXPORT chatEventIsAllHistoryAvailableToggled *td_bridge_newobj_chatEventIsAllHistoryAvailableToggled() { return new chatEventIsAllHistoryAvailableToggled(); }
EXPORT auto td_bridge_obj_chatEventIsAllHistoryAvailableToggled_is_all_history_available(chatEventIsAllHistoryAvailableToggled *obj) { return &obj->is_all_history_available_; }

EXPORT chatEvent *td_bridge_newobj_chatEvent() { return new chatEvent(); }
EXPORT auto td_bridge_obj_chatEvent_id(chatEvent *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_chatEvent_date(chatEvent *obj) { return &obj->date_; }
EXPORT auto td_bridge_obj_chatEvent_user_id(chatEvent *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_chatEvent_action(chatEvent *obj) { return &obj->action_; }

EXPORT chatEvents *td_bridge_newobj_chatEvents() { return new chatEvents(); }
EXPORT auto td_bridge_obj_chatEvents_events(chatEvents *obj) { return &obj->events_; }

EXPORT chatEventLogFilters *td_bridge_newobj_chatEventLogFilters() { return new chatEventLogFilters(); }
EXPORT auto td_bridge_obj_chatEventLogFilters_message_edits(chatEventLogFilters *obj) { return &obj->message_edits_; }
EXPORT auto td_bridge_obj_chatEventLogFilters_message_deletions(chatEventLogFilters *obj) { return &obj->message_deletions_; }
EXPORT auto td_bridge_obj_chatEventLogFilters_message_pins(chatEventLogFilters *obj) { return &obj->message_pins_; }
EXPORT auto td_bridge_obj_chatEventLogFilters_member_joins(chatEventLogFilters *obj) { return &obj->member_joins_; }
EXPORT auto td_bridge_obj_chatEventLogFilters_member_leaves(chatEventLogFilters *obj) { return &obj->member_leaves_; }
EXPORT auto td_bridge_obj_chatEventLogFilters_member_invites(chatEventLogFilters *obj) { return &obj->member_invites_; }
EXPORT auto td_bridge_obj_chatEventLogFilters_member_promotions(chatEventLogFilters *obj) { return &obj->member_promotions_; }
EXPORT auto td_bridge_obj_chatEventLogFilters_member_restrictions(chatEventLogFilters *obj) { return &obj->member_restrictions_; }
EXPORT auto td_bridge_obj_chatEventLogFilters_info_changes(chatEventLogFilters *obj) { return &obj->info_changes_; }
EXPORT auto td_bridge_obj_chatEventLogFilters_setting_changes(chatEventLogFilters *obj) { return &obj->setting_changes_; }

EXPORT languagePackStringValueOrdinary *td_bridge_newobj_languagePackStringValueOrdinary() { return new languagePackStringValueOrdinary(); }
EXPORT auto td_bridge_obj_languagePackStringValueOrdinary_value(languagePackStringValueOrdinary *obj) { return &obj->value_; }

EXPORT languagePackStringValuePluralized *td_bridge_newobj_languagePackStringValuePluralized() { return new languagePackStringValuePluralized(); }
EXPORT auto td_bridge_obj_languagePackStringValuePluralized_zero_value(languagePackStringValuePluralized *obj) { return &obj->zero_value_; }
EXPORT auto td_bridge_obj_languagePackStringValuePluralized_one_value(languagePackStringValuePluralized *obj) { return &obj->one_value_; }
EXPORT auto td_bridge_obj_languagePackStringValuePluralized_two_value(languagePackStringValuePluralized *obj) { return &obj->two_value_; }
EXPORT auto td_bridge_obj_languagePackStringValuePluralized_few_value(languagePackStringValuePluralized *obj) { return &obj->few_value_; }
EXPORT auto td_bridge_obj_languagePackStringValuePluralized_many_value(languagePackStringValuePluralized *obj) { return &obj->many_value_; }
EXPORT auto td_bridge_obj_languagePackStringValuePluralized_other_value(languagePackStringValuePluralized *obj) { return &obj->other_value_; }

EXPORT languagePackStringValueDeleted *td_bridge_newobj_languagePackStringValueDeleted() { return new languagePackStringValueDeleted(); }

EXPORT languagePackString *td_bridge_newobj_languagePackString() { return new languagePackString(); }
EXPORT auto td_bridge_obj_languagePackString_key(languagePackString *obj) { return &obj->key_; }
EXPORT auto td_bridge_obj_languagePackString_value(languagePackString *obj) { return &obj->value_; }

EXPORT languagePackStrings *td_bridge_newobj_languagePackStrings() { return new languagePackStrings(); }
EXPORT auto td_bridge_obj_languagePackStrings_strings(languagePackStrings *obj) { return &obj->strings_; }

EXPORT languagePackInfo *td_bridge_newobj_languagePackInfo() { return new languagePackInfo(); }
EXPORT auto td_bridge_obj_languagePackInfo_id(languagePackInfo *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_languagePackInfo_name(languagePackInfo *obj) { return &obj->name_; }
EXPORT auto td_bridge_obj_languagePackInfo_native_name(languagePackInfo *obj) { return &obj->native_name_; }
EXPORT auto td_bridge_obj_languagePackInfo_local_string_count(languagePackInfo *obj) { return &obj->local_string_count_; }

EXPORT localizationTargetInfo *td_bridge_newobj_localizationTargetInfo() { return new localizationTargetInfo(); }
EXPORT auto td_bridge_obj_localizationTargetInfo_language_packs(localizationTargetInfo *obj) { return &obj->language_packs_; }

EXPORT deviceTokenGoogleCloudMessaging *td_bridge_newobj_deviceTokenGoogleCloudMessaging() { return new deviceTokenGoogleCloudMessaging(); }
EXPORT auto td_bridge_obj_deviceTokenGoogleCloudMessaging_token(deviceTokenGoogleCloudMessaging *obj) { return &obj->token_; }

EXPORT deviceTokenApplePush *td_bridge_newobj_deviceTokenApplePush() { return new deviceTokenApplePush(); }
EXPORT auto td_bridge_obj_deviceTokenApplePush_device_token(deviceTokenApplePush *obj) { return &obj->device_token_; }
EXPORT auto td_bridge_obj_deviceTokenApplePush_is_app_sandbox(deviceTokenApplePush *obj) { return &obj->is_app_sandbox_; }

EXPORT deviceTokenApplePushVoIP *td_bridge_newobj_deviceTokenApplePushVoIP() { return new deviceTokenApplePushVoIP(); }
EXPORT auto td_bridge_obj_deviceTokenApplePushVoIP_device_token(deviceTokenApplePushVoIP *obj) { return &obj->device_token_; }
EXPORT auto td_bridge_obj_deviceTokenApplePushVoIP_is_app_sandbox(deviceTokenApplePushVoIP *obj) { return &obj->is_app_sandbox_; }

EXPORT deviceTokenWindowsPush *td_bridge_newobj_deviceTokenWindowsPush() { return new deviceTokenWindowsPush(); }
EXPORT auto td_bridge_obj_deviceTokenWindowsPush_access_token(deviceTokenWindowsPush *obj) { return &obj->access_token_; }

EXPORT deviceTokenMicrosoftPush *td_bridge_newobj_deviceTokenMicrosoftPush() { return new deviceTokenMicrosoftPush(); }
EXPORT auto td_bridge_obj_deviceTokenMicrosoftPush_channel_uri(deviceTokenMicrosoftPush *obj) { return &obj->channel_uri_; }

EXPORT deviceTokenMicrosoftPushVoIP *td_bridge_newobj_deviceTokenMicrosoftPushVoIP() { return new deviceTokenMicrosoftPushVoIP(); }
EXPORT auto td_bridge_obj_deviceTokenMicrosoftPushVoIP_channel_uri(deviceTokenMicrosoftPushVoIP *obj) { return &obj->channel_uri_; }

EXPORT deviceTokenWebPush *td_bridge_newobj_deviceTokenWebPush() { return new deviceTokenWebPush(); }
EXPORT auto td_bridge_obj_deviceTokenWebPush_endpoint(deviceTokenWebPush *obj) { return &obj->endpoint_; }
EXPORT auto td_bridge_obj_deviceTokenWebPush_p256dh_base64url(deviceTokenWebPush *obj) { return &obj->p256dh_base64url_; }
EXPORT auto td_bridge_obj_deviceTokenWebPush_auth_base64url(deviceTokenWebPush *obj) { return &obj->auth_base64url_; }

EXPORT deviceTokenSimplePush *td_bridge_newobj_deviceTokenSimplePush() { return new deviceTokenSimplePush(); }
EXPORT auto td_bridge_obj_deviceTokenSimplePush_endpoint(deviceTokenSimplePush *obj) { return &obj->endpoint_; }

EXPORT deviceTokenUbuntuPush *td_bridge_newobj_deviceTokenUbuntuPush() { return new deviceTokenUbuntuPush(); }
EXPORT auto td_bridge_obj_deviceTokenUbuntuPush_token(deviceTokenUbuntuPush *obj) { return &obj->token_; }

EXPORT deviceTokenBlackBerryPush *td_bridge_newobj_deviceTokenBlackBerryPush() { return new deviceTokenBlackBerryPush(); }
EXPORT auto td_bridge_obj_deviceTokenBlackBerryPush_token(deviceTokenBlackBerryPush *obj) { return &obj->token_; }

EXPORT deviceTokenTizenPush *td_bridge_newobj_deviceTokenTizenPush() { return new deviceTokenTizenPush(); }
EXPORT auto td_bridge_obj_deviceTokenTizenPush_reg_id(deviceTokenTizenPush *obj) { return &obj->reg_id_; }

EXPORT wallpaper *td_bridge_newobj_wallpaper() { return new wallpaper(); }
EXPORT auto td_bridge_obj_wallpaper_id(wallpaper *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_wallpaper_sizes(wallpaper *obj) { return &obj->sizes_; }
EXPORT auto td_bridge_obj_wallpaper_color(wallpaper *obj) { return &obj->color_; }

EXPORT wallpapers *td_bridge_newobj_wallpapers() { return new wallpapers(); }
EXPORT auto td_bridge_obj_wallpapers_wallpapers(wallpapers *obj) { return &obj->wallpapers_; }

EXPORT hashtags *td_bridge_newobj_hashtags() { return new hashtags(); }
EXPORT auto td_bridge_obj_hashtags_hashtags(hashtags *obj) { return &obj->hashtags_; }

EXPORT checkChatUsernameResultOk *td_bridge_newobj_checkChatUsernameResultOk() { return new checkChatUsernameResultOk(); }

EXPORT checkChatUsernameResultUsernameInvalid *td_bridge_newobj_checkChatUsernameResultUsernameInvalid() { return new checkChatUsernameResultUsernameInvalid(); }

EXPORT checkChatUsernameResultUsernameOccupied *td_bridge_newobj_checkChatUsernameResultUsernameOccupied() { return new checkChatUsernameResultUsernameOccupied(); }

EXPORT checkChatUsernameResultPublicChatsTooMuch *td_bridge_newobj_checkChatUsernameResultPublicChatsTooMuch() { return new checkChatUsernameResultPublicChatsTooMuch(); }

EXPORT checkChatUsernameResultPublicGroupsUnavailable *td_bridge_newobj_checkChatUsernameResultPublicGroupsUnavailable() { return new checkChatUsernameResultPublicGroupsUnavailable(); }

EXPORT optionValueBoolean *td_bridge_newobj_optionValueBoolean() { return new optionValueBoolean(); }
EXPORT auto td_bridge_obj_optionValueBoolean_value(optionValueBoolean *obj) { return &obj->value_; }

EXPORT optionValueEmpty *td_bridge_newobj_optionValueEmpty() { return new optionValueEmpty(); }

EXPORT optionValueInteger *td_bridge_newobj_optionValueInteger() { return new optionValueInteger(); }
EXPORT auto td_bridge_obj_optionValueInteger_value(optionValueInteger *obj) { return &obj->value_; }

EXPORT optionValueString *td_bridge_newobj_optionValueString() { return new optionValueString(); }
EXPORT auto td_bridge_obj_optionValueString_value(optionValueString *obj) { return &obj->value_; }

EXPORT userPrivacySettingRuleAllowAll *td_bridge_newobj_userPrivacySettingRuleAllowAll() { return new userPrivacySettingRuleAllowAll(); }

EXPORT userPrivacySettingRuleAllowContacts *td_bridge_newobj_userPrivacySettingRuleAllowContacts() { return new userPrivacySettingRuleAllowContacts(); }

EXPORT userPrivacySettingRuleAllowUsers *td_bridge_newobj_userPrivacySettingRuleAllowUsers() { return new userPrivacySettingRuleAllowUsers(); }
EXPORT auto td_bridge_obj_userPrivacySettingRuleAllowUsers_user_ids(userPrivacySettingRuleAllowUsers *obj) { return &obj->user_ids_; }

EXPORT userPrivacySettingRuleRestrictAll *td_bridge_newobj_userPrivacySettingRuleRestrictAll() { return new userPrivacySettingRuleRestrictAll(); }

EXPORT userPrivacySettingRuleRestrictContacts *td_bridge_newobj_userPrivacySettingRuleRestrictContacts() { return new userPrivacySettingRuleRestrictContacts(); }

EXPORT userPrivacySettingRuleRestrictUsers *td_bridge_newobj_userPrivacySettingRuleRestrictUsers() { return new userPrivacySettingRuleRestrictUsers(); }
EXPORT auto td_bridge_obj_userPrivacySettingRuleRestrictUsers_user_ids(userPrivacySettingRuleRestrictUsers *obj) { return &obj->user_ids_; }

EXPORT userPrivacySettingRules *td_bridge_newobj_userPrivacySettingRules() { return new userPrivacySettingRules(); }
EXPORT auto td_bridge_obj_userPrivacySettingRules_rules(userPrivacySettingRules *obj) { return &obj->rules_; }

EXPORT userPrivacySettingShowStatus *td_bridge_newobj_userPrivacySettingShowStatus() { return new userPrivacySettingShowStatus(); }

EXPORT userPrivacySettingAllowChatInvites *td_bridge_newobj_userPrivacySettingAllowChatInvites() { return new userPrivacySettingAllowChatInvites(); }

EXPORT userPrivacySettingAllowCalls *td_bridge_newobj_userPrivacySettingAllowCalls() { return new userPrivacySettingAllowCalls(); }

EXPORT accountTtl *td_bridge_newobj_accountTtl() { return new accountTtl(); }
EXPORT auto td_bridge_obj_accountTtl_days(accountTtl *obj) { return &obj->days_; }

EXPORT session *td_bridge_newobj_session() { return new session(); }
EXPORT auto td_bridge_obj_session_id(session *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_session_is_current(session *obj) { return &obj->is_current_; }
EXPORT auto td_bridge_obj_session_api_id(session *obj) { return &obj->api_id_; }
EXPORT auto td_bridge_obj_session_application_name(session *obj) { return &obj->application_name_; }
EXPORT auto td_bridge_obj_session_application_version(session *obj) { return &obj->application_version_; }
EXPORT auto td_bridge_obj_session_is_official_application(session *obj) { return &obj->is_official_application_; }
EXPORT auto td_bridge_obj_session_device_model(session *obj) { return &obj->device_model_; }
EXPORT auto td_bridge_obj_session_platform(session *obj) { return &obj->platform_; }
EXPORT auto td_bridge_obj_session_system_version(session *obj) { return &obj->system_version_; }
EXPORT auto td_bridge_obj_session_log_in_date(session *obj) { return &obj->log_in_date_; }
EXPORT auto td_bridge_obj_session_last_active_date(session *obj) { return &obj->last_active_date_; }
EXPORT auto td_bridge_obj_session_ip(session *obj) { return &obj->ip_; }
EXPORT auto td_bridge_obj_session_country(session *obj) { return &obj->country_; }
EXPORT auto td_bridge_obj_session_region(session *obj) { return &obj->region_; }

EXPORT sessions *td_bridge_newobj_sessions() { return new sessions(); }
EXPORT auto td_bridge_obj_sessions_sessions(sessions *obj) { return &obj->sessions_; }

EXPORT connectedWebsite *td_bridge_newobj_connectedWebsite() { return new connectedWebsite(); }
EXPORT auto td_bridge_obj_connectedWebsite_id(connectedWebsite *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_connectedWebsite_domain_name(connectedWebsite *obj) { return &obj->domain_name_; }
EXPORT auto td_bridge_obj_connectedWebsite_bot_user_id(connectedWebsite *obj) { return &obj->bot_user_id_; }
EXPORT auto td_bridge_obj_connectedWebsite_browser(connectedWebsite *obj) { return &obj->browser_; }
EXPORT auto td_bridge_obj_connectedWebsite_platform(connectedWebsite *obj) { return &obj->platform_; }
EXPORT auto td_bridge_obj_connectedWebsite_log_in_date(connectedWebsite *obj) { return &obj->log_in_date_; }
EXPORT auto td_bridge_obj_connectedWebsite_last_active_date(connectedWebsite *obj) { return &obj->last_active_date_; }
EXPORT auto td_bridge_obj_connectedWebsite_ip(connectedWebsite *obj) { return &obj->ip_; }
EXPORT auto td_bridge_obj_connectedWebsite_location(connectedWebsite *obj) { return &obj->location_; }

EXPORT connectedWebsites *td_bridge_newobj_connectedWebsites() { return new connectedWebsites(); }
EXPORT auto td_bridge_obj_connectedWebsites_websites(connectedWebsites *obj) { return &obj->websites_; }

EXPORT chatReportSpamState *td_bridge_newobj_chatReportSpamState() { return new chatReportSpamState(); }
EXPORT auto td_bridge_obj_chatReportSpamState_can_report_spam(chatReportSpamState *obj) { return &obj->can_report_spam_; }

EXPORT chatReportReasonSpam *td_bridge_newobj_chatReportReasonSpam() { return new chatReportReasonSpam(); }

EXPORT chatReportReasonViolence *td_bridge_newobj_chatReportReasonViolence() { return new chatReportReasonViolence(); }

EXPORT chatReportReasonPornography *td_bridge_newobj_chatReportReasonPornography() { return new chatReportReasonPornography(); }

EXPORT chatReportReasonCopyright *td_bridge_newobj_chatReportReasonCopyright() { return new chatReportReasonCopyright(); }

EXPORT chatReportReasonCustom *td_bridge_newobj_chatReportReasonCustom() { return new chatReportReasonCustom(); }
EXPORT auto td_bridge_obj_chatReportReasonCustom_text(chatReportReasonCustom *obj) { return &obj->text_; }

EXPORT publicMessageLink *td_bridge_newobj_publicMessageLink() { return new publicMessageLink(); }
EXPORT auto td_bridge_obj_publicMessageLink_link(publicMessageLink *obj) { return &obj->link_; }
EXPORT auto td_bridge_obj_publicMessageLink_html(publicMessageLink *obj) { return &obj->html_; }

EXPORT fileTypeNone *td_bridge_newobj_fileTypeNone() { return new fileTypeNone(); }

EXPORT fileTypeAnimation *td_bridge_newobj_fileTypeAnimation() { return new fileTypeAnimation(); }

EXPORT fileTypeAudio *td_bridge_newobj_fileTypeAudio() { return new fileTypeAudio(); }

EXPORT fileTypeDocument *td_bridge_newobj_fileTypeDocument() { return new fileTypeDocument(); }

EXPORT fileTypePhoto *td_bridge_newobj_fileTypePhoto() { return new fileTypePhoto(); }

EXPORT fileTypeProfilePhoto *td_bridge_newobj_fileTypeProfilePhoto() { return new fileTypeProfilePhoto(); }

EXPORT fileTypeSecret *td_bridge_newobj_fileTypeSecret() { return new fileTypeSecret(); }

EXPORT fileTypeSecretThumbnail *td_bridge_newobj_fileTypeSecretThumbnail() { return new fileTypeSecretThumbnail(); }

EXPORT fileTypeSecure *td_bridge_newobj_fileTypeSecure() { return new fileTypeSecure(); }

EXPORT fileTypeSticker *td_bridge_newobj_fileTypeSticker() { return new fileTypeSticker(); }

EXPORT fileTypeThumbnail *td_bridge_newobj_fileTypeThumbnail() { return new fileTypeThumbnail(); }

EXPORT fileTypeUnknown *td_bridge_newobj_fileTypeUnknown() { return new fileTypeUnknown(); }

EXPORT fileTypeVideo *td_bridge_newobj_fileTypeVideo() { return new fileTypeVideo(); }

EXPORT fileTypeVideoNote *td_bridge_newobj_fileTypeVideoNote() { return new fileTypeVideoNote(); }

EXPORT fileTypeVoiceNote *td_bridge_newobj_fileTypeVoiceNote() { return new fileTypeVoiceNote(); }

EXPORT fileTypeWallpaper *td_bridge_newobj_fileTypeWallpaper() { return new fileTypeWallpaper(); }

EXPORT storageStatisticsByFileType *td_bridge_newobj_storageStatisticsByFileType() { return new storageStatisticsByFileType(); }
EXPORT auto td_bridge_obj_storageStatisticsByFileType_file_type(storageStatisticsByFileType *obj) { return &obj->file_type_; }
EXPORT auto td_bridge_obj_storageStatisticsByFileType_size(storageStatisticsByFileType *obj) { return &obj->size_; }
EXPORT auto td_bridge_obj_storageStatisticsByFileType_count(storageStatisticsByFileType *obj) { return &obj->count_; }

EXPORT storageStatisticsByChat *td_bridge_newobj_storageStatisticsByChat() { return new storageStatisticsByChat(); }
EXPORT auto td_bridge_obj_storageStatisticsByChat_chat_id(storageStatisticsByChat *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_storageStatisticsByChat_size(storageStatisticsByChat *obj) { return &obj->size_; }
EXPORT auto td_bridge_obj_storageStatisticsByChat_count(storageStatisticsByChat *obj) { return &obj->count_; }
EXPORT auto td_bridge_obj_storageStatisticsByChat_by_file_type(storageStatisticsByChat *obj) { return &obj->by_file_type_; }

EXPORT storageStatistics *td_bridge_newobj_storageStatistics() { return new storageStatistics(); }
EXPORT auto td_bridge_obj_storageStatistics_size(storageStatistics *obj) { return &obj->size_; }
EXPORT auto td_bridge_obj_storageStatistics_count(storageStatistics *obj) { return &obj->count_; }
EXPORT auto td_bridge_obj_storageStatistics_by_chat(storageStatistics *obj) { return &obj->by_chat_; }

EXPORT storageStatisticsFast *td_bridge_newobj_storageStatisticsFast() { return new storageStatisticsFast(); }
EXPORT auto td_bridge_obj_storageStatisticsFast_files_size(storageStatisticsFast *obj) { return &obj->files_size_; }
EXPORT auto td_bridge_obj_storageStatisticsFast_file_count(storageStatisticsFast *obj) { return &obj->file_count_; }
EXPORT auto td_bridge_obj_storageStatisticsFast_database_size(storageStatisticsFast *obj) { return &obj->database_size_; }

EXPORT networkTypeNone *td_bridge_newobj_networkTypeNone() { return new networkTypeNone(); }

EXPORT networkTypeMobile *td_bridge_newobj_networkTypeMobile() { return new networkTypeMobile(); }

EXPORT networkTypeMobileRoaming *td_bridge_newobj_networkTypeMobileRoaming() { return new networkTypeMobileRoaming(); }

EXPORT networkTypeWiFi *td_bridge_newobj_networkTypeWiFi() { return new networkTypeWiFi(); }

EXPORT networkTypeOther *td_bridge_newobj_networkTypeOther() { return new networkTypeOther(); }

EXPORT networkStatisticsEntryFile *td_bridge_newobj_networkStatisticsEntryFile() { return new networkStatisticsEntryFile(); }
EXPORT auto td_bridge_obj_networkStatisticsEntryFile_file_type(networkStatisticsEntryFile *obj) { return &obj->file_type_; }
EXPORT auto td_bridge_obj_networkStatisticsEntryFile_network_type(networkStatisticsEntryFile *obj) { return &obj->network_type_; }
EXPORT auto td_bridge_obj_networkStatisticsEntryFile_sent_bytes(networkStatisticsEntryFile *obj) { return &obj->sent_bytes_; }
EXPORT auto td_bridge_obj_networkStatisticsEntryFile_received_bytes(networkStatisticsEntryFile *obj) { return &obj->received_bytes_; }

EXPORT networkStatisticsEntryCall *td_bridge_newobj_networkStatisticsEntryCall() { return new networkStatisticsEntryCall(); }
EXPORT auto td_bridge_obj_networkStatisticsEntryCall_network_type(networkStatisticsEntryCall *obj) { return &obj->network_type_; }
EXPORT auto td_bridge_obj_networkStatisticsEntryCall_sent_bytes(networkStatisticsEntryCall *obj) { return &obj->sent_bytes_; }
EXPORT auto td_bridge_obj_networkStatisticsEntryCall_received_bytes(networkStatisticsEntryCall *obj) { return &obj->received_bytes_; }
EXPORT auto td_bridge_obj_networkStatisticsEntryCall_duration(networkStatisticsEntryCall *obj) { return &obj->duration_; }

EXPORT networkStatistics *td_bridge_newobj_networkStatistics() { return new networkStatistics(); }
EXPORT auto td_bridge_obj_networkStatistics_since_date(networkStatistics *obj) { return &obj->since_date_; }
EXPORT auto td_bridge_obj_networkStatistics_entries(networkStatistics *obj) { return &obj->entries_; }

EXPORT connectionStateWaitingForNetwork *td_bridge_newobj_connectionStateWaitingForNetwork() { return new connectionStateWaitingForNetwork(); }

EXPORT connectionStateConnectingToProxy *td_bridge_newobj_connectionStateConnectingToProxy() { return new connectionStateConnectingToProxy(); }

EXPORT connectionStateConnecting *td_bridge_newobj_connectionStateConnecting() { return new connectionStateConnecting(); }

EXPORT connectionStateUpdating *td_bridge_newobj_connectionStateUpdating() { return new connectionStateUpdating(); }

EXPORT connectionStateReady *td_bridge_newobj_connectionStateReady() { return new connectionStateReady(); }

EXPORT topChatCategoryUsers *td_bridge_newobj_topChatCategoryUsers() { return new topChatCategoryUsers(); }

EXPORT topChatCategoryBots *td_bridge_newobj_topChatCategoryBots() { return new topChatCategoryBots(); }

EXPORT topChatCategoryGroups *td_bridge_newobj_topChatCategoryGroups() { return new topChatCategoryGroups(); }

EXPORT topChatCategoryChannels *td_bridge_newobj_topChatCategoryChannels() { return new topChatCategoryChannels(); }

EXPORT topChatCategoryInlineBots *td_bridge_newobj_topChatCategoryInlineBots() { return new topChatCategoryInlineBots(); }

EXPORT topChatCategoryCalls *td_bridge_newobj_topChatCategoryCalls() { return new topChatCategoryCalls(); }

EXPORT tMeUrlTypeUser *td_bridge_newobj_tMeUrlTypeUser() { return new tMeUrlTypeUser(); }
EXPORT auto td_bridge_obj_tMeUrlTypeUser_user_id(tMeUrlTypeUser *obj) { return &obj->user_id_; }

EXPORT tMeUrlTypeSupergroup *td_bridge_newobj_tMeUrlTypeSupergroup() { return new tMeUrlTypeSupergroup(); }
EXPORT auto td_bridge_obj_tMeUrlTypeSupergroup_supergroup_id(tMeUrlTypeSupergroup *obj) { return &obj->supergroup_id_; }

EXPORT tMeUrlTypeChatInvite *td_bridge_newobj_tMeUrlTypeChatInvite() { return new tMeUrlTypeChatInvite(); }
EXPORT auto td_bridge_obj_tMeUrlTypeChatInvite_info(tMeUrlTypeChatInvite *obj) { return &obj->info_; }

EXPORT tMeUrlTypeStickerSet *td_bridge_newobj_tMeUrlTypeStickerSet() { return new tMeUrlTypeStickerSet(); }
EXPORT auto td_bridge_obj_tMeUrlTypeStickerSet_sticker_set_id(tMeUrlTypeStickerSet *obj) { return &obj->sticker_set_id_; }

EXPORT tMeUrl *td_bridge_newobj_tMeUrl() { return new tMeUrl(); }
EXPORT auto td_bridge_obj_tMeUrl_url(tMeUrl *obj) { return &obj->url_; }
EXPORT auto td_bridge_obj_tMeUrl_type(tMeUrl *obj) { return &obj->type_; }

EXPORT tMeUrls *td_bridge_newobj_tMeUrls() { return new tMeUrls(); }
EXPORT auto td_bridge_obj_tMeUrls_urls(tMeUrls *obj) { return &obj->urls_; }

EXPORT count *td_bridge_newobj_count() { return new count(); }
EXPORT auto td_bridge_obj_count_count(count *obj) { return &obj->count_; }

EXPORT text *td_bridge_newobj_text() { return new text(); }
EXPORT auto td_bridge_obj_text_text(text *obj) { return &obj->text_; }

EXPORT seconds *td_bridge_newobj_seconds() { return new seconds(); }
EXPORT auto td_bridge_obj_seconds_seconds(seconds *obj) { return &obj->seconds_; }

EXPORT deepLinkInfo *td_bridge_newobj_deepLinkInfo() { return new deepLinkInfo(); }
EXPORT auto td_bridge_obj_deepLinkInfo_text(deepLinkInfo *obj) { return &obj->text_; }
EXPORT auto td_bridge_obj_deepLinkInfo_need_update_application(deepLinkInfo *obj) { return &obj->need_update_application_; }

EXPORT textParseModeMarkdown *td_bridge_newobj_textParseModeMarkdown() { return new textParseModeMarkdown(); }

EXPORT textParseModeHTML *td_bridge_newobj_textParseModeHTML() { return new textParseModeHTML(); }

EXPORT proxyTypeSocks5 *td_bridge_newobj_proxyTypeSocks5() { return new proxyTypeSocks5(); }
EXPORT auto td_bridge_obj_proxyTypeSocks5_username(proxyTypeSocks5 *obj) { return &obj->username_; }
EXPORT auto td_bridge_obj_proxyTypeSocks5_password(proxyTypeSocks5 *obj) { return &obj->password_; }

EXPORT proxyTypeHttp *td_bridge_newobj_proxyTypeHttp() { return new proxyTypeHttp(); }
EXPORT auto td_bridge_obj_proxyTypeHttp_username(proxyTypeHttp *obj) { return &obj->username_; }
EXPORT auto td_bridge_obj_proxyTypeHttp_password(proxyTypeHttp *obj) { return &obj->password_; }
EXPORT auto td_bridge_obj_proxyTypeHttp_http_only(proxyTypeHttp *obj) { return &obj->http_only_; }

EXPORT proxyTypeMtproto *td_bridge_newobj_proxyTypeMtproto() { return new proxyTypeMtproto(); }
EXPORT auto td_bridge_obj_proxyTypeMtproto_secret(proxyTypeMtproto *obj) { return &obj->secret_; }

EXPORT proxy *td_bridge_newobj_proxy() { return new proxy(); }
EXPORT auto td_bridge_obj_proxy_id(proxy *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_proxy_server(proxy *obj) { return &obj->server_; }
EXPORT auto td_bridge_obj_proxy_port(proxy *obj) { return &obj->port_; }
EXPORT auto td_bridge_obj_proxy_last_used_date(proxy *obj) { return &obj->last_used_date_; }
EXPORT auto td_bridge_obj_proxy_is_enabled(proxy *obj) { return &obj->is_enabled_; }
EXPORT auto td_bridge_obj_proxy_type(proxy *obj) { return &obj->type_; }

EXPORT proxies *td_bridge_newobj_proxies() { return new proxies(); }
EXPORT auto td_bridge_obj_proxies_proxies(proxies *obj) { return &obj->proxies_; }

EXPORT inputSticker *td_bridge_newobj_inputSticker() { return new inputSticker(); }
EXPORT auto td_bridge_obj_inputSticker_png_sticker(inputSticker *obj) { return &obj->png_sticker_; }
EXPORT auto td_bridge_obj_inputSticker_emojis(inputSticker *obj) { return &obj->emojis_; }
EXPORT auto td_bridge_obj_inputSticker_mask_position(inputSticker *obj) { return &obj->mask_position_; }

EXPORT updateAuthorizationState *td_bridge_newobj_updateAuthorizationState() { return new updateAuthorizationState(); }
EXPORT auto td_bridge_obj_updateAuthorizationState_authorization_state(updateAuthorizationState *obj) { return &obj->authorization_state_; }

EXPORT updateNewMessage *td_bridge_newobj_updateNewMessage() { return new updateNewMessage(); }
EXPORT auto td_bridge_obj_updateNewMessage_message(updateNewMessage *obj) { return &obj->message_; }
EXPORT auto td_bridge_obj_updateNewMessage_disable_notification(updateNewMessage *obj) { return &obj->disable_notification_; }
EXPORT auto td_bridge_obj_updateNewMessage_contains_mention(updateNewMessage *obj) { return &obj->contains_mention_; }

EXPORT updateMessageSendAcknowledged *td_bridge_newobj_updateMessageSendAcknowledged() { return new updateMessageSendAcknowledged(); }
EXPORT auto td_bridge_obj_updateMessageSendAcknowledged_chat_id(updateMessageSendAcknowledged *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateMessageSendAcknowledged_message_id(updateMessageSendAcknowledged *obj) { return &obj->message_id_; }

EXPORT updateMessageSendSucceeded *td_bridge_newobj_updateMessageSendSucceeded() { return new updateMessageSendSucceeded(); }
EXPORT auto td_bridge_obj_updateMessageSendSucceeded_message(updateMessageSendSucceeded *obj) { return &obj->message_; }
EXPORT auto td_bridge_obj_updateMessageSendSucceeded_old_message_id(updateMessageSendSucceeded *obj) { return &obj->old_message_id_; }

EXPORT updateMessageSendFailed *td_bridge_newobj_updateMessageSendFailed() { return new updateMessageSendFailed(); }
EXPORT auto td_bridge_obj_updateMessageSendFailed_message(updateMessageSendFailed *obj) { return &obj->message_; }
EXPORT auto td_bridge_obj_updateMessageSendFailed_old_message_id(updateMessageSendFailed *obj) { return &obj->old_message_id_; }
EXPORT auto td_bridge_obj_updateMessageSendFailed_error_code(updateMessageSendFailed *obj) { return &obj->error_code_; }
EXPORT auto td_bridge_obj_updateMessageSendFailed_error_message(updateMessageSendFailed *obj) { return &obj->error_message_; }

EXPORT updateMessageContent *td_bridge_newobj_updateMessageContent() { return new updateMessageContent(); }
EXPORT auto td_bridge_obj_updateMessageContent_chat_id(updateMessageContent *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateMessageContent_message_id(updateMessageContent *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_updateMessageContent_new_content(updateMessageContent *obj) { return &obj->new_content_; }

EXPORT updateMessageEdited *td_bridge_newobj_updateMessageEdited() { return new updateMessageEdited(); }
EXPORT auto td_bridge_obj_updateMessageEdited_chat_id(updateMessageEdited *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateMessageEdited_message_id(updateMessageEdited *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_updateMessageEdited_edit_date(updateMessageEdited *obj) { return &obj->edit_date_; }
EXPORT auto td_bridge_obj_updateMessageEdited_reply_markup(updateMessageEdited *obj) { return &obj->reply_markup_; }

EXPORT updateMessageViews *td_bridge_newobj_updateMessageViews() { return new updateMessageViews(); }
EXPORT auto td_bridge_obj_updateMessageViews_chat_id(updateMessageViews *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateMessageViews_message_id(updateMessageViews *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_updateMessageViews_views(updateMessageViews *obj) { return &obj->views_; }

EXPORT updateMessageContentOpened *td_bridge_newobj_updateMessageContentOpened() { return new updateMessageContentOpened(); }
EXPORT auto td_bridge_obj_updateMessageContentOpened_chat_id(updateMessageContentOpened *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateMessageContentOpened_message_id(updateMessageContentOpened *obj) { return &obj->message_id_; }

EXPORT updateMessageMentionRead *td_bridge_newobj_updateMessageMentionRead() { return new updateMessageMentionRead(); }
EXPORT auto td_bridge_obj_updateMessageMentionRead_chat_id(updateMessageMentionRead *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateMessageMentionRead_message_id(updateMessageMentionRead *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_updateMessageMentionRead_unread_mention_count(updateMessageMentionRead *obj) { return &obj->unread_mention_count_; }

EXPORT updateNewChat *td_bridge_newobj_updateNewChat() { return new updateNewChat(); }
EXPORT auto td_bridge_obj_updateNewChat_chat(updateNewChat *obj) { return &obj->chat_; }

EXPORT updateChatTitle *td_bridge_newobj_updateChatTitle() { return new updateChatTitle(); }
EXPORT auto td_bridge_obj_updateChatTitle_chat_id(updateChatTitle *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateChatTitle_title(updateChatTitle *obj) { return &obj->title_; }

EXPORT updateChatPhoto *td_bridge_newobj_updateChatPhoto() { return new updateChatPhoto(); }
EXPORT auto td_bridge_obj_updateChatPhoto_chat_id(updateChatPhoto *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateChatPhoto_photo(updateChatPhoto *obj) { return &obj->photo_; }

EXPORT updateChatLastMessage *td_bridge_newobj_updateChatLastMessage() { return new updateChatLastMessage(); }
EXPORT auto td_bridge_obj_updateChatLastMessage_chat_id(updateChatLastMessage *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateChatLastMessage_last_message(updateChatLastMessage *obj) { return &obj->last_message_; }
EXPORT auto td_bridge_obj_updateChatLastMessage_order(updateChatLastMessage *obj) { return &obj->order_; }

EXPORT updateChatOrder *td_bridge_newobj_updateChatOrder() { return new updateChatOrder(); }
EXPORT auto td_bridge_obj_updateChatOrder_chat_id(updateChatOrder *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateChatOrder_order(updateChatOrder *obj) { return &obj->order_; }

EXPORT updateChatIsPinned *td_bridge_newobj_updateChatIsPinned() { return new updateChatIsPinned(); }
EXPORT auto td_bridge_obj_updateChatIsPinned_chat_id(updateChatIsPinned *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateChatIsPinned_is_pinned(updateChatIsPinned *obj) { return &obj->is_pinned_; }
EXPORT auto td_bridge_obj_updateChatIsPinned_order(updateChatIsPinned *obj) { return &obj->order_; }

EXPORT updateChatIsMarkedAsUnread *td_bridge_newobj_updateChatIsMarkedAsUnread() { return new updateChatIsMarkedAsUnread(); }
EXPORT auto td_bridge_obj_updateChatIsMarkedAsUnread_chat_id(updateChatIsMarkedAsUnread *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateChatIsMarkedAsUnread_is_marked_as_unread(updateChatIsMarkedAsUnread *obj) { return &obj->is_marked_as_unread_; }

EXPORT updateChatIsSponsored *td_bridge_newobj_updateChatIsSponsored() { return new updateChatIsSponsored(); }
EXPORT auto td_bridge_obj_updateChatIsSponsored_chat_id(updateChatIsSponsored *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateChatIsSponsored_is_sponsored(updateChatIsSponsored *obj) { return &obj->is_sponsored_; }
EXPORT auto td_bridge_obj_updateChatIsSponsored_order(updateChatIsSponsored *obj) { return &obj->order_; }

EXPORT updateChatDefaultDisableNotification *td_bridge_newobj_updateChatDefaultDisableNotification() { return new updateChatDefaultDisableNotification(); }
EXPORT auto td_bridge_obj_updateChatDefaultDisableNotification_chat_id(updateChatDefaultDisableNotification *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateChatDefaultDisableNotification_default_disable_notification(updateChatDefaultDisableNotification *obj) { return &obj->default_disable_notification_; }

EXPORT updateChatReadInbox *td_bridge_newobj_updateChatReadInbox() { return new updateChatReadInbox(); }
EXPORT auto td_bridge_obj_updateChatReadInbox_chat_id(updateChatReadInbox *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateChatReadInbox_last_read_inbox_message_id(updateChatReadInbox *obj) { return &obj->last_read_inbox_message_id_; }
EXPORT auto td_bridge_obj_updateChatReadInbox_unread_count(updateChatReadInbox *obj) { return &obj->unread_count_; }

EXPORT updateChatReadOutbox *td_bridge_newobj_updateChatReadOutbox() { return new updateChatReadOutbox(); }
EXPORT auto td_bridge_obj_updateChatReadOutbox_chat_id(updateChatReadOutbox *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateChatReadOutbox_last_read_outbox_message_id(updateChatReadOutbox *obj) { return &obj->last_read_outbox_message_id_; }

EXPORT updateChatUnreadMentionCount *td_bridge_newobj_updateChatUnreadMentionCount() { return new updateChatUnreadMentionCount(); }
EXPORT auto td_bridge_obj_updateChatUnreadMentionCount_chat_id(updateChatUnreadMentionCount *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateChatUnreadMentionCount_unread_mention_count(updateChatUnreadMentionCount *obj) { return &obj->unread_mention_count_; }

EXPORT updateChatNotificationSettings *td_bridge_newobj_updateChatNotificationSettings() { return new updateChatNotificationSettings(); }
EXPORT auto td_bridge_obj_updateChatNotificationSettings_chat_id(updateChatNotificationSettings *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateChatNotificationSettings_notification_settings(updateChatNotificationSettings *obj) { return &obj->notification_settings_; }

EXPORT updateScopeNotificationSettings *td_bridge_newobj_updateScopeNotificationSettings() { return new updateScopeNotificationSettings(); }
EXPORT auto td_bridge_obj_updateScopeNotificationSettings_scope(updateScopeNotificationSettings *obj) { return &obj->scope_; }
EXPORT auto td_bridge_obj_updateScopeNotificationSettings_notification_settings(updateScopeNotificationSettings *obj) { return &obj->notification_settings_; }

EXPORT updateChatReplyMarkup *td_bridge_newobj_updateChatReplyMarkup() { return new updateChatReplyMarkup(); }
EXPORT auto td_bridge_obj_updateChatReplyMarkup_chat_id(updateChatReplyMarkup *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateChatReplyMarkup_reply_markup_message_id(updateChatReplyMarkup *obj) { return &obj->reply_markup_message_id_; }

EXPORT updateChatDraftMessage *td_bridge_newobj_updateChatDraftMessage() { return new updateChatDraftMessage(); }
EXPORT auto td_bridge_obj_updateChatDraftMessage_chat_id(updateChatDraftMessage *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateChatDraftMessage_draft_message(updateChatDraftMessage *obj) { return &obj->draft_message_; }
EXPORT auto td_bridge_obj_updateChatDraftMessage_order(updateChatDraftMessage *obj) { return &obj->order_; }

EXPORT updateDeleteMessages *td_bridge_newobj_updateDeleteMessages() { return new updateDeleteMessages(); }
EXPORT auto td_bridge_obj_updateDeleteMessages_chat_id(updateDeleteMessages *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateDeleteMessages_message_ids(updateDeleteMessages *obj) { return &obj->message_ids_; }
EXPORT auto td_bridge_obj_updateDeleteMessages_is_permanent(updateDeleteMessages *obj) { return &obj->is_permanent_; }
EXPORT auto td_bridge_obj_updateDeleteMessages_from_cache(updateDeleteMessages *obj) { return &obj->from_cache_; }

EXPORT updateUserChatAction *td_bridge_newobj_updateUserChatAction() { return new updateUserChatAction(); }
EXPORT auto td_bridge_obj_updateUserChatAction_chat_id(updateUserChatAction *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateUserChatAction_user_id(updateUserChatAction *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_updateUserChatAction_action(updateUserChatAction *obj) { return &obj->action_; }

EXPORT updateUserStatus *td_bridge_newobj_updateUserStatus() { return new updateUserStatus(); }
EXPORT auto td_bridge_obj_updateUserStatus_user_id(updateUserStatus *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_updateUserStatus_status(updateUserStatus *obj) { return &obj->status_; }

EXPORT updateUser *td_bridge_newobj_updateUser() { return new updateUser(); }
EXPORT auto td_bridge_obj_updateUser_user(updateUser *obj) { return &obj->user_; }

EXPORT updateBasicGroup *td_bridge_newobj_updateBasicGroup() { return new updateBasicGroup(); }
EXPORT auto td_bridge_obj_updateBasicGroup_basic_group(updateBasicGroup *obj) { return &obj->basic_group_; }

EXPORT updateSupergroup *td_bridge_newobj_updateSupergroup() { return new updateSupergroup(); }
EXPORT auto td_bridge_obj_updateSupergroup_supergroup(updateSupergroup *obj) { return &obj->supergroup_; }

EXPORT updateSecretChat *td_bridge_newobj_updateSecretChat() { return new updateSecretChat(); }
EXPORT auto td_bridge_obj_updateSecretChat_secret_chat(updateSecretChat *obj) { return &obj->secret_chat_; }

EXPORT updateUserFullInfo *td_bridge_newobj_updateUserFullInfo() { return new updateUserFullInfo(); }
EXPORT auto td_bridge_obj_updateUserFullInfo_user_id(updateUserFullInfo *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_updateUserFullInfo_user_full_info(updateUserFullInfo *obj) { return &obj->user_full_info_; }

EXPORT updateBasicGroupFullInfo *td_bridge_newobj_updateBasicGroupFullInfo() { return new updateBasicGroupFullInfo(); }
EXPORT auto td_bridge_obj_updateBasicGroupFullInfo_basic_group_id(updateBasicGroupFullInfo *obj) { return &obj->basic_group_id_; }
EXPORT auto td_bridge_obj_updateBasicGroupFullInfo_basic_group_full_info(updateBasicGroupFullInfo *obj) { return &obj->basic_group_full_info_; }

EXPORT updateSupergroupFullInfo *td_bridge_newobj_updateSupergroupFullInfo() { return new updateSupergroupFullInfo(); }
EXPORT auto td_bridge_obj_updateSupergroupFullInfo_supergroup_id(updateSupergroupFullInfo *obj) { return &obj->supergroup_id_; }
EXPORT auto td_bridge_obj_updateSupergroupFullInfo_supergroup_full_info(updateSupergroupFullInfo *obj) { return &obj->supergroup_full_info_; }

EXPORT updateServiceNotification *td_bridge_newobj_updateServiceNotification() { return new updateServiceNotification(); }
EXPORT auto td_bridge_obj_updateServiceNotification_type(updateServiceNotification *obj) { return &obj->type_; }
EXPORT auto td_bridge_obj_updateServiceNotification_content(updateServiceNotification *obj) { return &obj->content_; }

EXPORT updateFile *td_bridge_newobj_updateFile() { return new updateFile(); }
EXPORT auto td_bridge_obj_updateFile_file(updateFile *obj) { return &obj->file_; }

EXPORT updateFileGenerationStart *td_bridge_newobj_updateFileGenerationStart() { return new updateFileGenerationStart(); }
EXPORT auto td_bridge_obj_updateFileGenerationStart_generation_id(updateFileGenerationStart *obj) { return &obj->generation_id_; }
EXPORT auto td_bridge_obj_updateFileGenerationStart_original_path(updateFileGenerationStart *obj) { return &obj->original_path_; }
EXPORT auto td_bridge_obj_updateFileGenerationStart_destination_path(updateFileGenerationStart *obj) { return &obj->destination_path_; }
EXPORT auto td_bridge_obj_updateFileGenerationStart_conversion(updateFileGenerationStart *obj) { return &obj->conversion_; }

EXPORT updateFileGenerationStop *td_bridge_newobj_updateFileGenerationStop() { return new updateFileGenerationStop(); }
EXPORT auto td_bridge_obj_updateFileGenerationStop_generation_id(updateFileGenerationStop *obj) { return &obj->generation_id_; }

EXPORT updateCall *td_bridge_newobj_updateCall() { return new updateCall(); }
EXPORT auto td_bridge_obj_updateCall_call(updateCall *obj) { return &obj->call_; }

EXPORT updateUserPrivacySettingRules *td_bridge_newobj_updateUserPrivacySettingRules() { return new updateUserPrivacySettingRules(); }
EXPORT auto td_bridge_obj_updateUserPrivacySettingRules_setting(updateUserPrivacySettingRules *obj) { return &obj->setting_; }
EXPORT auto td_bridge_obj_updateUserPrivacySettingRules_rules(updateUserPrivacySettingRules *obj) { return &obj->rules_; }

EXPORT updateUnreadMessageCount *td_bridge_newobj_updateUnreadMessageCount() { return new updateUnreadMessageCount(); }
EXPORT auto td_bridge_obj_updateUnreadMessageCount_unread_count(updateUnreadMessageCount *obj) { return &obj->unread_count_; }
EXPORT auto td_bridge_obj_updateUnreadMessageCount_unread_unmuted_count(updateUnreadMessageCount *obj) { return &obj->unread_unmuted_count_; }

EXPORT updateUnreadChatCount *td_bridge_newobj_updateUnreadChatCount() { return new updateUnreadChatCount(); }
EXPORT auto td_bridge_obj_updateUnreadChatCount_unread_count(updateUnreadChatCount *obj) { return &obj->unread_count_; }
EXPORT auto td_bridge_obj_updateUnreadChatCount_unread_unmuted_count(updateUnreadChatCount *obj) { return &obj->unread_unmuted_count_; }
EXPORT auto td_bridge_obj_updateUnreadChatCount_marked_as_unread_count(updateUnreadChatCount *obj) { return &obj->marked_as_unread_count_; }
EXPORT auto td_bridge_obj_updateUnreadChatCount_marked_as_unread_unmuted_count(updateUnreadChatCount *obj) { return &obj->marked_as_unread_unmuted_count_; }

EXPORT updateOption *td_bridge_newobj_updateOption() { return new updateOption(); }
EXPORT auto td_bridge_obj_updateOption_name(updateOption *obj) { return &obj->name_; }
EXPORT auto td_bridge_obj_updateOption_value(updateOption *obj) { return &obj->value_; }

EXPORT updateInstalledStickerSets *td_bridge_newobj_updateInstalledStickerSets() { return new updateInstalledStickerSets(); }
EXPORT auto td_bridge_obj_updateInstalledStickerSets_is_masks(updateInstalledStickerSets *obj) { return &obj->is_masks_; }
EXPORT auto td_bridge_obj_updateInstalledStickerSets_sticker_set_ids(updateInstalledStickerSets *obj) { return &obj->sticker_set_ids_; }

EXPORT updateTrendingStickerSets *td_bridge_newobj_updateTrendingStickerSets() { return new updateTrendingStickerSets(); }
EXPORT auto td_bridge_obj_updateTrendingStickerSets_sticker_sets(updateTrendingStickerSets *obj) { return &obj->sticker_sets_; }

EXPORT updateRecentStickers *td_bridge_newobj_updateRecentStickers() { return new updateRecentStickers(); }
EXPORT auto td_bridge_obj_updateRecentStickers_is_attached(updateRecentStickers *obj) { return &obj->is_attached_; }
EXPORT auto td_bridge_obj_updateRecentStickers_sticker_ids(updateRecentStickers *obj) { return &obj->sticker_ids_; }

EXPORT updateFavoriteStickers *td_bridge_newobj_updateFavoriteStickers() { return new updateFavoriteStickers(); }
EXPORT auto td_bridge_obj_updateFavoriteStickers_sticker_ids(updateFavoriteStickers *obj) { return &obj->sticker_ids_; }

EXPORT updateSavedAnimations *td_bridge_newobj_updateSavedAnimations() { return new updateSavedAnimations(); }
EXPORT auto td_bridge_obj_updateSavedAnimations_animation_ids(updateSavedAnimations *obj) { return &obj->animation_ids_; }

EXPORT updateLanguagePackStrings *td_bridge_newobj_updateLanguagePackStrings() { return new updateLanguagePackStrings(); }
EXPORT auto td_bridge_obj_updateLanguagePackStrings_localization_target(updateLanguagePackStrings *obj) { return &obj->localization_target_; }
EXPORT auto td_bridge_obj_updateLanguagePackStrings_language_pack_id(updateLanguagePackStrings *obj) { return &obj->language_pack_id_; }
EXPORT auto td_bridge_obj_updateLanguagePackStrings_strings(updateLanguagePackStrings *obj) { return &obj->strings_; }

EXPORT updateConnectionState *td_bridge_newobj_updateConnectionState() { return new updateConnectionState(); }
EXPORT auto td_bridge_obj_updateConnectionState_state(updateConnectionState *obj) { return &obj->state_; }

EXPORT updateTermsOfService *td_bridge_newobj_updateTermsOfService() { return new updateTermsOfService(); }
EXPORT auto td_bridge_obj_updateTermsOfService_terms_of_service_id(updateTermsOfService *obj) { return &obj->terms_of_service_id_; }
EXPORT auto td_bridge_obj_updateTermsOfService_terms_of_service(updateTermsOfService *obj) { return &obj->terms_of_service_; }

EXPORT updateNewInlineQuery *td_bridge_newobj_updateNewInlineQuery() { return new updateNewInlineQuery(); }
EXPORT auto td_bridge_obj_updateNewInlineQuery_id(updateNewInlineQuery *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_updateNewInlineQuery_sender_user_id(updateNewInlineQuery *obj) { return &obj->sender_user_id_; }
EXPORT auto td_bridge_obj_updateNewInlineQuery_user_location(updateNewInlineQuery *obj) { return &obj->user_location_; }
EXPORT auto td_bridge_obj_updateNewInlineQuery_query(updateNewInlineQuery *obj) { return &obj->query_; }
EXPORT auto td_bridge_obj_updateNewInlineQuery_offset(updateNewInlineQuery *obj) { return &obj->offset_; }

EXPORT updateNewChosenInlineResult *td_bridge_newobj_updateNewChosenInlineResult() { return new updateNewChosenInlineResult(); }
EXPORT auto td_bridge_obj_updateNewChosenInlineResult_sender_user_id(updateNewChosenInlineResult *obj) { return &obj->sender_user_id_; }
EXPORT auto td_bridge_obj_updateNewChosenInlineResult_user_location(updateNewChosenInlineResult *obj) { return &obj->user_location_; }
EXPORT auto td_bridge_obj_updateNewChosenInlineResult_query(updateNewChosenInlineResult *obj) { return &obj->query_; }
EXPORT auto td_bridge_obj_updateNewChosenInlineResult_result_id(updateNewChosenInlineResult *obj) { return &obj->result_id_; }
EXPORT auto td_bridge_obj_updateNewChosenInlineResult_inline_message_id(updateNewChosenInlineResult *obj) { return &obj->inline_message_id_; }

EXPORT updateNewCallbackQuery *td_bridge_newobj_updateNewCallbackQuery() { return new updateNewCallbackQuery(); }
EXPORT auto td_bridge_obj_updateNewCallbackQuery_id(updateNewCallbackQuery *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_updateNewCallbackQuery_sender_user_id(updateNewCallbackQuery *obj) { return &obj->sender_user_id_; }
EXPORT auto td_bridge_obj_updateNewCallbackQuery_chat_id(updateNewCallbackQuery *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_updateNewCallbackQuery_message_id(updateNewCallbackQuery *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_updateNewCallbackQuery_chat_instance(updateNewCallbackQuery *obj) { return &obj->chat_instance_; }
EXPORT auto td_bridge_obj_updateNewCallbackQuery_payload(updateNewCallbackQuery *obj) { return &obj->payload_; }

EXPORT updateNewInlineCallbackQuery *td_bridge_newobj_updateNewInlineCallbackQuery() { return new updateNewInlineCallbackQuery(); }
EXPORT auto td_bridge_obj_updateNewInlineCallbackQuery_id(updateNewInlineCallbackQuery *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_updateNewInlineCallbackQuery_sender_user_id(updateNewInlineCallbackQuery *obj) { return &obj->sender_user_id_; }
EXPORT auto td_bridge_obj_updateNewInlineCallbackQuery_inline_message_id(updateNewInlineCallbackQuery *obj) { return &obj->inline_message_id_; }
EXPORT auto td_bridge_obj_updateNewInlineCallbackQuery_chat_instance(updateNewInlineCallbackQuery *obj) { return &obj->chat_instance_; }
EXPORT auto td_bridge_obj_updateNewInlineCallbackQuery_payload(updateNewInlineCallbackQuery *obj) { return &obj->payload_; }

EXPORT updateNewShippingQuery *td_bridge_newobj_updateNewShippingQuery() { return new updateNewShippingQuery(); }
EXPORT auto td_bridge_obj_updateNewShippingQuery_id(updateNewShippingQuery *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_updateNewShippingQuery_sender_user_id(updateNewShippingQuery *obj) { return &obj->sender_user_id_; }
EXPORT auto td_bridge_obj_updateNewShippingQuery_invoice_payload(updateNewShippingQuery *obj) { return &obj->invoice_payload_; }
EXPORT auto td_bridge_obj_updateNewShippingQuery_shipping_address(updateNewShippingQuery *obj) { return &obj->shipping_address_; }

EXPORT updateNewPreCheckoutQuery *td_bridge_newobj_updateNewPreCheckoutQuery() { return new updateNewPreCheckoutQuery(); }
EXPORT auto td_bridge_obj_updateNewPreCheckoutQuery_id(updateNewPreCheckoutQuery *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_updateNewPreCheckoutQuery_sender_user_id(updateNewPreCheckoutQuery *obj) { return &obj->sender_user_id_; }
EXPORT auto td_bridge_obj_updateNewPreCheckoutQuery_currency(updateNewPreCheckoutQuery *obj) { return &obj->currency_; }
EXPORT auto td_bridge_obj_updateNewPreCheckoutQuery_total_amount(updateNewPreCheckoutQuery *obj) { return &obj->total_amount_; }
EXPORT auto td_bridge_obj_updateNewPreCheckoutQuery_invoice_payload(updateNewPreCheckoutQuery *obj) { return &obj->invoice_payload_; }
EXPORT auto td_bridge_obj_updateNewPreCheckoutQuery_shipping_option_id(updateNewPreCheckoutQuery *obj) { return &obj->shipping_option_id_; }
EXPORT auto td_bridge_obj_updateNewPreCheckoutQuery_order_info(updateNewPreCheckoutQuery *obj) { return &obj->order_info_; }

EXPORT updateNewCustomEvent *td_bridge_newobj_updateNewCustomEvent() { return new updateNewCustomEvent(); }
EXPORT auto td_bridge_obj_updateNewCustomEvent_event(updateNewCustomEvent *obj) { return &obj->event_; }

EXPORT updateNewCustomQuery *td_bridge_newobj_updateNewCustomQuery() { return new updateNewCustomQuery(); }
EXPORT auto td_bridge_obj_updateNewCustomQuery_id(updateNewCustomQuery *obj) { return &obj->id_; }
EXPORT auto td_bridge_obj_updateNewCustomQuery_data(updateNewCustomQuery *obj) { return &obj->data_; }
EXPORT auto td_bridge_obj_updateNewCustomQuery_timeout(updateNewCustomQuery *obj) { return &obj->timeout_; }

EXPORT testInt *td_bridge_newobj_testInt() { return new testInt(); }
EXPORT auto td_bridge_obj_testInt_value(testInt *obj) { return &obj->value_; }

EXPORT testString *td_bridge_newobj_testString() { return new testString(); }
EXPORT auto td_bridge_obj_testString_value(testString *obj) { return &obj->value_; }

EXPORT testBytes *td_bridge_newobj_testBytes() { return new testBytes(); }
EXPORT auto td_bridge_obj_testBytes_value(testBytes *obj) { return &obj->value_; }

EXPORT testVectorInt *td_bridge_newobj_testVectorInt() { return new testVectorInt(); }
EXPORT auto td_bridge_obj_testVectorInt_value(testVectorInt *obj) { return &obj->value_; }

EXPORT testVectorIntObject *td_bridge_newobj_testVectorIntObject() { return new testVectorIntObject(); }
EXPORT auto td_bridge_obj_testVectorIntObject_value(testVectorIntObject *obj) { return &obj->value_; }

EXPORT testVectorString *td_bridge_newobj_testVectorString() { return new testVectorString(); }
EXPORT auto td_bridge_obj_testVectorString_value(testVectorString *obj) { return &obj->value_; }

EXPORT testVectorStringObject *td_bridge_newobj_testVectorStringObject() { return new testVectorStringObject(); }
EXPORT auto td_bridge_obj_testVectorStringObject_value(testVectorStringObject *obj) { return &obj->value_; }

EXPORT getAuthorizationState *td_bridge_newobj_getAuthorizationState() { return new getAuthorizationState(); }

EXPORT setTdlibParameters *td_bridge_newobj_setTdlibParameters() { return new setTdlibParameters(); }
EXPORT auto td_bridge_obj_setTdlibParameters_parameters(setTdlibParameters *obj) { return &obj->parameters_; }

EXPORT checkDatabaseEncryptionKey *td_bridge_newobj_checkDatabaseEncryptionKey() { return new checkDatabaseEncryptionKey(); }
EXPORT auto td_bridge_obj_checkDatabaseEncryptionKey_encryption_key(checkDatabaseEncryptionKey *obj) { return &obj->encryption_key_; }

EXPORT setAuthenticationPhoneNumber *td_bridge_newobj_setAuthenticationPhoneNumber() { return new setAuthenticationPhoneNumber(); }
EXPORT auto td_bridge_obj_setAuthenticationPhoneNumber_phone_number(setAuthenticationPhoneNumber *obj) { return &obj->phone_number_; }
EXPORT auto td_bridge_obj_setAuthenticationPhoneNumber_allow_flash_call(setAuthenticationPhoneNumber *obj) { return &obj->allow_flash_call_; }
EXPORT auto td_bridge_obj_setAuthenticationPhoneNumber_is_current_phone_number(setAuthenticationPhoneNumber *obj) { return &obj->is_current_phone_number_; }

EXPORT resendAuthenticationCode *td_bridge_newobj_resendAuthenticationCode() { return new resendAuthenticationCode(); }

EXPORT checkAuthenticationCode *td_bridge_newobj_checkAuthenticationCode() { return new checkAuthenticationCode(); }
EXPORT auto td_bridge_obj_checkAuthenticationCode_code(checkAuthenticationCode *obj) { return &obj->code_; }
EXPORT auto td_bridge_obj_checkAuthenticationCode_first_name(checkAuthenticationCode *obj) { return &obj->first_name_; }
EXPORT auto td_bridge_obj_checkAuthenticationCode_last_name(checkAuthenticationCode *obj) { return &obj->last_name_; }

EXPORT checkAuthenticationPassword *td_bridge_newobj_checkAuthenticationPassword() { return new checkAuthenticationPassword(); }
EXPORT auto td_bridge_obj_checkAuthenticationPassword_password(checkAuthenticationPassword *obj) { return &obj->password_; }

EXPORT requestAuthenticationPasswordRecovery *td_bridge_newobj_requestAuthenticationPasswordRecovery() { return new requestAuthenticationPasswordRecovery(); }

EXPORT recoverAuthenticationPassword *td_bridge_newobj_recoverAuthenticationPassword() { return new recoverAuthenticationPassword(); }
EXPORT auto td_bridge_obj_recoverAuthenticationPassword_recovery_code(recoverAuthenticationPassword *obj) { return &obj->recovery_code_; }

EXPORT checkAuthenticationBotToken *td_bridge_newobj_checkAuthenticationBotToken() { return new checkAuthenticationBotToken(); }
EXPORT auto td_bridge_obj_checkAuthenticationBotToken_token(checkAuthenticationBotToken *obj) { return &obj->token_; }

EXPORT logOut *td_bridge_newobj_logOut() { return new logOut(); }

EXPORT close *td_bridge_newobj_close() { return new close(); }

EXPORT destroy *td_bridge_newobj_destroy() { return new destroy(); }

EXPORT setDatabaseEncryptionKey *td_bridge_newobj_setDatabaseEncryptionKey() { return new setDatabaseEncryptionKey(); }
EXPORT auto td_bridge_obj_setDatabaseEncryptionKey_new_encryption_key(setDatabaseEncryptionKey *obj) { return &obj->new_encryption_key_; }

EXPORT getPasswordState *td_bridge_newobj_getPasswordState() { return new getPasswordState(); }

EXPORT setPassword *td_bridge_newobj_setPassword() { return new setPassword(); }
EXPORT auto td_bridge_obj_setPassword_old_password(setPassword *obj) { return &obj->old_password_; }
EXPORT auto td_bridge_obj_setPassword_new_password(setPassword *obj) { return &obj->new_password_; }
EXPORT auto td_bridge_obj_setPassword_new_hint(setPassword *obj) { return &obj->new_hint_; }
EXPORT auto td_bridge_obj_setPassword_set_recovery_email_address(setPassword *obj) { return &obj->set_recovery_email_address_; }
EXPORT auto td_bridge_obj_setPassword_new_recovery_email_address(setPassword *obj) { return &obj->new_recovery_email_address_; }

EXPORT getRecoveryEmailAddress *td_bridge_newobj_getRecoveryEmailAddress() { return new getRecoveryEmailAddress(); }
EXPORT auto td_bridge_obj_getRecoveryEmailAddress_password(getRecoveryEmailAddress *obj) { return &obj->password_; }

EXPORT setRecoveryEmailAddress *td_bridge_newobj_setRecoveryEmailAddress() { return new setRecoveryEmailAddress(); }
EXPORT auto td_bridge_obj_setRecoveryEmailAddress_password(setRecoveryEmailAddress *obj) { return &obj->password_; }
EXPORT auto td_bridge_obj_setRecoveryEmailAddress_new_recovery_email_address(setRecoveryEmailAddress *obj) { return &obj->new_recovery_email_address_; }

EXPORT requestPasswordRecovery *td_bridge_newobj_requestPasswordRecovery() { return new requestPasswordRecovery(); }

EXPORT recoverPassword *td_bridge_newobj_recoverPassword() { return new recoverPassword(); }
EXPORT auto td_bridge_obj_recoverPassword_recovery_code(recoverPassword *obj) { return &obj->recovery_code_; }

EXPORT createTemporaryPassword *td_bridge_newobj_createTemporaryPassword() { return new createTemporaryPassword(); }
EXPORT auto td_bridge_obj_createTemporaryPassword_password(createTemporaryPassword *obj) { return &obj->password_; }
EXPORT auto td_bridge_obj_createTemporaryPassword_valid_for(createTemporaryPassword *obj) { return &obj->valid_for_; }

EXPORT getTemporaryPasswordState *td_bridge_newobj_getTemporaryPasswordState() { return new getTemporaryPasswordState(); }

EXPORT processDcUpdate *td_bridge_newobj_processDcUpdate() { return new processDcUpdate(); }
EXPORT auto td_bridge_obj_processDcUpdate_dc(processDcUpdate *obj) { return &obj->dc_; }
EXPORT auto td_bridge_obj_processDcUpdate_addr(processDcUpdate *obj) { return &obj->addr_; }

EXPORT getMe *td_bridge_newobj_getMe() { return new getMe(); }

EXPORT getUser *td_bridge_newobj_getUser() { return new getUser(); }
EXPORT auto td_bridge_obj_getUser_user_id(getUser *obj) { return &obj->user_id_; }

EXPORT getUserFullInfo *td_bridge_newobj_getUserFullInfo() { return new getUserFullInfo(); }
EXPORT auto td_bridge_obj_getUserFullInfo_user_id(getUserFullInfo *obj) { return &obj->user_id_; }

EXPORT getBasicGroup *td_bridge_newobj_getBasicGroup() { return new getBasicGroup(); }
EXPORT auto td_bridge_obj_getBasicGroup_basic_group_id(getBasicGroup *obj) { return &obj->basic_group_id_; }

EXPORT getBasicGroupFullInfo *td_bridge_newobj_getBasicGroupFullInfo() { return new getBasicGroupFullInfo(); }
EXPORT auto td_bridge_obj_getBasicGroupFullInfo_basic_group_id(getBasicGroupFullInfo *obj) { return &obj->basic_group_id_; }

EXPORT getSupergroup *td_bridge_newobj_getSupergroup() { return new getSupergroup(); }
EXPORT auto td_bridge_obj_getSupergroup_supergroup_id(getSupergroup *obj) { return &obj->supergroup_id_; }

EXPORT getSupergroupFullInfo *td_bridge_newobj_getSupergroupFullInfo() { return new getSupergroupFullInfo(); }
EXPORT auto td_bridge_obj_getSupergroupFullInfo_supergroup_id(getSupergroupFullInfo *obj) { return &obj->supergroup_id_; }

EXPORT getSecretChat *td_bridge_newobj_getSecretChat() { return new getSecretChat(); }
EXPORT auto td_bridge_obj_getSecretChat_secret_chat_id(getSecretChat *obj) { return &obj->secret_chat_id_; }

EXPORT getChat *td_bridge_newobj_getChat() { return new getChat(); }
EXPORT auto td_bridge_obj_getChat_chat_id(getChat *obj) { return &obj->chat_id_; }

EXPORT getMessage *td_bridge_newobj_getMessage() { return new getMessage(); }
EXPORT auto td_bridge_obj_getMessage_chat_id(getMessage *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_getMessage_message_id(getMessage *obj) { return &obj->message_id_; }

EXPORT getRepliedMessage *td_bridge_newobj_getRepliedMessage() { return new getRepliedMessage(); }
EXPORT auto td_bridge_obj_getRepliedMessage_chat_id(getRepliedMessage *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_getRepliedMessage_message_id(getRepliedMessage *obj) { return &obj->message_id_; }

EXPORT getChatPinnedMessage *td_bridge_newobj_getChatPinnedMessage() { return new getChatPinnedMessage(); }
EXPORT auto td_bridge_obj_getChatPinnedMessage_chat_id(getChatPinnedMessage *obj) { return &obj->chat_id_; }

EXPORT getMessages *td_bridge_newobj_getMessages() { return new getMessages(); }
EXPORT auto td_bridge_obj_getMessages_chat_id(getMessages *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_getMessages_message_ids(getMessages *obj) { return &obj->message_ids_; }

EXPORT getFile *td_bridge_newobj_getFile() { return new getFile(); }
EXPORT auto td_bridge_obj_getFile_file_id(getFile *obj) { return &obj->file_id_; }

EXPORT getRemoteFile *td_bridge_newobj_getRemoteFile() { return new getRemoteFile(); }
EXPORT auto td_bridge_obj_getRemoteFile_remote_file_id(getRemoteFile *obj) { return &obj->remote_file_id_; }
EXPORT auto td_bridge_obj_getRemoteFile_file_type(getRemoteFile *obj) { return &obj->file_type_; }

EXPORT getChats *td_bridge_newobj_getChats() { return new getChats(); }
EXPORT auto td_bridge_obj_getChats_offset_order(getChats *obj) { return &obj->offset_order_; }
EXPORT auto td_bridge_obj_getChats_offset_chat_id(getChats *obj) { return &obj->offset_chat_id_; }
EXPORT auto td_bridge_obj_getChats_limit(getChats *obj) { return &obj->limit_; }

EXPORT searchPublicChat *td_bridge_newobj_searchPublicChat() { return new searchPublicChat(); }
EXPORT auto td_bridge_obj_searchPublicChat_username(searchPublicChat *obj) { return &obj->username_; }

EXPORT searchPublicChats *td_bridge_newobj_searchPublicChats() { return new searchPublicChats(); }
EXPORT auto td_bridge_obj_searchPublicChats_query(searchPublicChats *obj) { return &obj->query_; }

EXPORT searchChats *td_bridge_newobj_searchChats() { return new searchChats(); }
EXPORT auto td_bridge_obj_searchChats_query(searchChats *obj) { return &obj->query_; }
EXPORT auto td_bridge_obj_searchChats_limit(searchChats *obj) { return &obj->limit_; }

EXPORT searchChatsOnServer *td_bridge_newobj_searchChatsOnServer() { return new searchChatsOnServer(); }
EXPORT auto td_bridge_obj_searchChatsOnServer_query(searchChatsOnServer *obj) { return &obj->query_; }
EXPORT auto td_bridge_obj_searchChatsOnServer_limit(searchChatsOnServer *obj) { return &obj->limit_; }

EXPORT getTopChats *td_bridge_newobj_getTopChats() { return new getTopChats(); }
EXPORT auto td_bridge_obj_getTopChats_category(getTopChats *obj) { return &obj->category_; }
EXPORT auto td_bridge_obj_getTopChats_limit(getTopChats *obj) { return &obj->limit_; }

EXPORT removeTopChat *td_bridge_newobj_removeTopChat() { return new removeTopChat(); }
EXPORT auto td_bridge_obj_removeTopChat_category(removeTopChat *obj) { return &obj->category_; }
EXPORT auto td_bridge_obj_removeTopChat_chat_id(removeTopChat *obj) { return &obj->chat_id_; }

EXPORT addRecentlyFoundChat *td_bridge_newobj_addRecentlyFoundChat() { return new addRecentlyFoundChat(); }
EXPORT auto td_bridge_obj_addRecentlyFoundChat_chat_id(addRecentlyFoundChat *obj) { return &obj->chat_id_; }

EXPORT removeRecentlyFoundChat *td_bridge_newobj_removeRecentlyFoundChat() { return new removeRecentlyFoundChat(); }
EXPORT auto td_bridge_obj_removeRecentlyFoundChat_chat_id(removeRecentlyFoundChat *obj) { return &obj->chat_id_; }

EXPORT clearRecentlyFoundChats *td_bridge_newobj_clearRecentlyFoundChats() { return new clearRecentlyFoundChats(); }

EXPORT checkChatUsername *td_bridge_newobj_checkChatUsername() { return new checkChatUsername(); }
EXPORT auto td_bridge_obj_checkChatUsername_chat_id(checkChatUsername *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_checkChatUsername_username(checkChatUsername *obj) { return &obj->username_; }

EXPORT getCreatedPublicChats *td_bridge_newobj_getCreatedPublicChats() { return new getCreatedPublicChats(); }

EXPORT getGroupsInCommon *td_bridge_newobj_getGroupsInCommon() { return new getGroupsInCommon(); }
EXPORT auto td_bridge_obj_getGroupsInCommon_user_id(getGroupsInCommon *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_getGroupsInCommon_offset_chat_id(getGroupsInCommon *obj) { return &obj->offset_chat_id_; }
EXPORT auto td_bridge_obj_getGroupsInCommon_limit(getGroupsInCommon *obj) { return &obj->limit_; }

EXPORT getChatHistory *td_bridge_newobj_getChatHistory() { return new getChatHistory(); }
EXPORT auto td_bridge_obj_getChatHistory_chat_id(getChatHistory *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_getChatHistory_from_message_id(getChatHistory *obj) { return &obj->from_message_id_; }
EXPORT auto td_bridge_obj_getChatHistory_offset(getChatHistory *obj) { return &obj->offset_; }
EXPORT auto td_bridge_obj_getChatHistory_limit(getChatHistory *obj) { return &obj->limit_; }
EXPORT auto td_bridge_obj_getChatHistory_only_local(getChatHistory *obj) { return &obj->only_local_; }

EXPORT deleteChatHistory *td_bridge_newobj_deleteChatHistory() { return new deleteChatHistory(); }
EXPORT auto td_bridge_obj_deleteChatHistory_chat_id(deleteChatHistory *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_deleteChatHistory_remove_from_chat_list(deleteChatHistory *obj) { return &obj->remove_from_chat_list_; }

EXPORT searchChatMessages *td_bridge_newobj_searchChatMessages() { return new searchChatMessages(); }
EXPORT auto td_bridge_obj_searchChatMessages_chat_id(searchChatMessages *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_searchChatMessages_query(searchChatMessages *obj) { return &obj->query_; }
EXPORT auto td_bridge_obj_searchChatMessages_sender_user_id(searchChatMessages *obj) { return &obj->sender_user_id_; }
EXPORT auto td_bridge_obj_searchChatMessages_from_message_id(searchChatMessages *obj) { return &obj->from_message_id_; }
EXPORT auto td_bridge_obj_searchChatMessages_offset(searchChatMessages *obj) { return &obj->offset_; }
EXPORT auto td_bridge_obj_searchChatMessages_limit(searchChatMessages *obj) { return &obj->limit_; }
EXPORT auto td_bridge_obj_searchChatMessages_filter(searchChatMessages *obj) { return &obj->filter_; }

EXPORT searchMessages *td_bridge_newobj_searchMessages() { return new searchMessages(); }
EXPORT auto td_bridge_obj_searchMessages_query(searchMessages *obj) { return &obj->query_; }
EXPORT auto td_bridge_obj_searchMessages_offset_date(searchMessages *obj) { return &obj->offset_date_; }
EXPORT auto td_bridge_obj_searchMessages_offset_chat_id(searchMessages *obj) { return &obj->offset_chat_id_; }
EXPORT auto td_bridge_obj_searchMessages_offset_message_id(searchMessages *obj) { return &obj->offset_message_id_; }
EXPORT auto td_bridge_obj_searchMessages_limit(searchMessages *obj) { return &obj->limit_; }

EXPORT searchSecretMessages *td_bridge_newobj_searchSecretMessages() { return new searchSecretMessages(); }
EXPORT auto td_bridge_obj_searchSecretMessages_chat_id(searchSecretMessages *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_searchSecretMessages_query(searchSecretMessages *obj) { return &obj->query_; }
EXPORT auto td_bridge_obj_searchSecretMessages_from_search_id(searchSecretMessages *obj) { return &obj->from_search_id_; }
EXPORT auto td_bridge_obj_searchSecretMessages_limit(searchSecretMessages *obj) { return &obj->limit_; }
EXPORT auto td_bridge_obj_searchSecretMessages_filter(searchSecretMessages *obj) { return &obj->filter_; }

EXPORT searchCallMessages *td_bridge_newobj_searchCallMessages() { return new searchCallMessages(); }
EXPORT auto td_bridge_obj_searchCallMessages_from_message_id(searchCallMessages *obj) { return &obj->from_message_id_; }
EXPORT auto td_bridge_obj_searchCallMessages_limit(searchCallMessages *obj) { return &obj->limit_; }
EXPORT auto td_bridge_obj_searchCallMessages_only_missed(searchCallMessages *obj) { return &obj->only_missed_; }

EXPORT searchChatRecentLocationMessages *td_bridge_newobj_searchChatRecentLocationMessages() { return new searchChatRecentLocationMessages(); }
EXPORT auto td_bridge_obj_searchChatRecentLocationMessages_chat_id(searchChatRecentLocationMessages *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_searchChatRecentLocationMessages_limit(searchChatRecentLocationMessages *obj) { return &obj->limit_; }

EXPORT getActiveLiveLocationMessages *td_bridge_newobj_getActiveLiveLocationMessages() { return new getActiveLiveLocationMessages(); }

EXPORT getChatMessageByDate *td_bridge_newobj_getChatMessageByDate() { return new getChatMessageByDate(); }
EXPORT auto td_bridge_obj_getChatMessageByDate_chat_id(getChatMessageByDate *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_getChatMessageByDate_date(getChatMessageByDate *obj) { return &obj->date_; }

EXPORT getChatMessageCount *td_bridge_newobj_getChatMessageCount() { return new getChatMessageCount(); }
EXPORT auto td_bridge_obj_getChatMessageCount_chat_id(getChatMessageCount *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_getChatMessageCount_filter(getChatMessageCount *obj) { return &obj->filter_; }
EXPORT auto td_bridge_obj_getChatMessageCount_return_local(getChatMessageCount *obj) { return &obj->return_local_; }

EXPORT getPublicMessageLink *td_bridge_newobj_getPublicMessageLink() { return new getPublicMessageLink(); }
EXPORT auto td_bridge_obj_getPublicMessageLink_chat_id(getPublicMessageLink *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_getPublicMessageLink_message_id(getPublicMessageLink *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_getPublicMessageLink_for_album(getPublicMessageLink *obj) { return &obj->for_album_; }

EXPORT sendMessage *td_bridge_newobj_sendMessage() { return new sendMessage(); }
EXPORT auto td_bridge_obj_sendMessage_chat_id(sendMessage *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_sendMessage_reply_to_message_id(sendMessage *obj) { return &obj->reply_to_message_id_; }
EXPORT auto td_bridge_obj_sendMessage_disable_notification(sendMessage *obj) { return &obj->disable_notification_; }
EXPORT auto td_bridge_obj_sendMessage_from_background(sendMessage *obj) { return &obj->from_background_; }
EXPORT auto td_bridge_obj_sendMessage_reply_markup(sendMessage *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_sendMessage_input_message_content(sendMessage *obj) { return &obj->input_message_content_; }

EXPORT sendMessageAlbum *td_bridge_newobj_sendMessageAlbum() { return new sendMessageAlbum(); }
EXPORT auto td_bridge_obj_sendMessageAlbum_chat_id(sendMessageAlbum *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_sendMessageAlbum_reply_to_message_id(sendMessageAlbum *obj) { return &obj->reply_to_message_id_; }
EXPORT auto td_bridge_obj_sendMessageAlbum_disable_notification(sendMessageAlbum *obj) { return &obj->disable_notification_; }
EXPORT auto td_bridge_obj_sendMessageAlbum_from_background(sendMessageAlbum *obj) { return &obj->from_background_; }
EXPORT auto td_bridge_obj_sendMessageAlbum_input_message_contents(sendMessageAlbum *obj) { return &obj->input_message_contents_; }

EXPORT sendBotStartMessage *td_bridge_newobj_sendBotStartMessage() { return new sendBotStartMessage(); }
EXPORT auto td_bridge_obj_sendBotStartMessage_bot_user_id(sendBotStartMessage *obj) { return &obj->bot_user_id_; }
EXPORT auto td_bridge_obj_sendBotStartMessage_chat_id(sendBotStartMessage *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_sendBotStartMessage_parameter(sendBotStartMessage *obj) { return &obj->parameter_; }

EXPORT sendInlineQueryResultMessage *td_bridge_newobj_sendInlineQueryResultMessage() { return new sendInlineQueryResultMessage(); }
EXPORT auto td_bridge_obj_sendInlineQueryResultMessage_chat_id(sendInlineQueryResultMessage *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_sendInlineQueryResultMessage_reply_to_message_id(sendInlineQueryResultMessage *obj) { return &obj->reply_to_message_id_; }
EXPORT auto td_bridge_obj_sendInlineQueryResultMessage_disable_notification(sendInlineQueryResultMessage *obj) { return &obj->disable_notification_; }
EXPORT auto td_bridge_obj_sendInlineQueryResultMessage_from_background(sendInlineQueryResultMessage *obj) { return &obj->from_background_; }
EXPORT auto td_bridge_obj_sendInlineQueryResultMessage_query_id(sendInlineQueryResultMessage *obj) { return &obj->query_id_; }
EXPORT auto td_bridge_obj_sendInlineQueryResultMessage_result_id(sendInlineQueryResultMessage *obj) { return &obj->result_id_; }

EXPORT forwardMessages *td_bridge_newobj_forwardMessages() { return new forwardMessages(); }
EXPORT auto td_bridge_obj_forwardMessages_chat_id(forwardMessages *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_forwardMessages_from_chat_id(forwardMessages *obj) { return &obj->from_chat_id_; }
EXPORT auto td_bridge_obj_forwardMessages_message_ids(forwardMessages *obj) { return &obj->message_ids_; }
EXPORT auto td_bridge_obj_forwardMessages_disable_notification(forwardMessages *obj) { return &obj->disable_notification_; }
EXPORT auto td_bridge_obj_forwardMessages_from_background(forwardMessages *obj) { return &obj->from_background_; }
EXPORT auto td_bridge_obj_forwardMessages_as_album(forwardMessages *obj) { return &obj->as_album_; }

EXPORT sendChatSetTtlMessage *td_bridge_newobj_sendChatSetTtlMessage() { return new sendChatSetTtlMessage(); }
EXPORT auto td_bridge_obj_sendChatSetTtlMessage_chat_id(sendChatSetTtlMessage *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_sendChatSetTtlMessage_ttl(sendChatSetTtlMessage *obj) { return &obj->ttl_; }

EXPORT sendChatScreenshotTakenNotification *td_bridge_newobj_sendChatScreenshotTakenNotification() { return new sendChatScreenshotTakenNotification(); }
EXPORT auto td_bridge_obj_sendChatScreenshotTakenNotification_chat_id(sendChatScreenshotTakenNotification *obj) { return &obj->chat_id_; }

EXPORT addLocalMessage *td_bridge_newobj_addLocalMessage() { return new addLocalMessage(); }
EXPORT auto td_bridge_obj_addLocalMessage_chat_id(addLocalMessage *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_addLocalMessage_sender_user_id(addLocalMessage *obj) { return &obj->sender_user_id_; }
EXPORT auto td_bridge_obj_addLocalMessage_reply_to_message_id(addLocalMessage *obj) { return &obj->reply_to_message_id_; }
EXPORT auto td_bridge_obj_addLocalMessage_disable_notification(addLocalMessage *obj) { return &obj->disable_notification_; }
EXPORT auto td_bridge_obj_addLocalMessage_input_message_content(addLocalMessage *obj) { return &obj->input_message_content_; }

EXPORT deleteMessages *td_bridge_newobj_deleteMessages() { return new deleteMessages(); }
EXPORT auto td_bridge_obj_deleteMessages_chat_id(deleteMessages *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_deleteMessages_message_ids(deleteMessages *obj) { return &obj->message_ids_; }
EXPORT auto td_bridge_obj_deleteMessages_revoke(deleteMessages *obj) { return &obj->revoke_; }

EXPORT deleteChatMessagesFromUser *td_bridge_newobj_deleteChatMessagesFromUser() { return new deleteChatMessagesFromUser(); }
EXPORT auto td_bridge_obj_deleteChatMessagesFromUser_chat_id(deleteChatMessagesFromUser *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_deleteChatMessagesFromUser_user_id(deleteChatMessagesFromUser *obj) { return &obj->user_id_; }

EXPORT editMessageText *td_bridge_newobj_editMessageText() { return new editMessageText(); }
EXPORT auto td_bridge_obj_editMessageText_chat_id(editMessageText *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_editMessageText_message_id(editMessageText *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_editMessageText_reply_markup(editMessageText *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_editMessageText_input_message_content(editMessageText *obj) { return &obj->input_message_content_; }

EXPORT editMessageLiveLocation *td_bridge_newobj_editMessageLiveLocation() { return new editMessageLiveLocation(); }
EXPORT auto td_bridge_obj_editMessageLiveLocation_chat_id(editMessageLiveLocation *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_editMessageLiveLocation_message_id(editMessageLiveLocation *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_editMessageLiveLocation_reply_markup(editMessageLiveLocation *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_editMessageLiveLocation_location(editMessageLiveLocation *obj) { return &obj->location_; }

EXPORT editMessageMedia *td_bridge_newobj_editMessageMedia() { return new editMessageMedia(); }
EXPORT auto td_bridge_obj_editMessageMedia_chat_id(editMessageMedia *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_editMessageMedia_message_id(editMessageMedia *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_editMessageMedia_reply_markup(editMessageMedia *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_editMessageMedia_input_message_content(editMessageMedia *obj) { return &obj->input_message_content_; }

EXPORT editMessageCaption *td_bridge_newobj_editMessageCaption() { return new editMessageCaption(); }
EXPORT auto td_bridge_obj_editMessageCaption_chat_id(editMessageCaption *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_editMessageCaption_message_id(editMessageCaption *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_editMessageCaption_reply_markup(editMessageCaption *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_editMessageCaption_caption(editMessageCaption *obj) { return &obj->caption_; }

EXPORT editMessageReplyMarkup *td_bridge_newobj_editMessageReplyMarkup() { return new editMessageReplyMarkup(); }
EXPORT auto td_bridge_obj_editMessageReplyMarkup_chat_id(editMessageReplyMarkup *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_editMessageReplyMarkup_message_id(editMessageReplyMarkup *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_editMessageReplyMarkup_reply_markup(editMessageReplyMarkup *obj) { return &obj->reply_markup_; }

EXPORT editInlineMessageText *td_bridge_newobj_editInlineMessageText() { return new editInlineMessageText(); }
EXPORT auto td_bridge_obj_editInlineMessageText_inline_message_id(editInlineMessageText *obj) { return &obj->inline_message_id_; }
EXPORT auto td_bridge_obj_editInlineMessageText_reply_markup(editInlineMessageText *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_editInlineMessageText_input_message_content(editInlineMessageText *obj) { return &obj->input_message_content_; }

EXPORT editInlineMessageLiveLocation *td_bridge_newobj_editInlineMessageLiveLocation() { return new editInlineMessageLiveLocation(); }
EXPORT auto td_bridge_obj_editInlineMessageLiveLocation_inline_message_id(editInlineMessageLiveLocation *obj) { return &obj->inline_message_id_; }
EXPORT auto td_bridge_obj_editInlineMessageLiveLocation_reply_markup(editInlineMessageLiveLocation *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_editInlineMessageLiveLocation_location(editInlineMessageLiveLocation *obj) { return &obj->location_; }

EXPORT editInlineMessageMedia *td_bridge_newobj_editInlineMessageMedia() { return new editInlineMessageMedia(); }
EXPORT auto td_bridge_obj_editInlineMessageMedia_inline_message_id(editInlineMessageMedia *obj) { return &obj->inline_message_id_; }
EXPORT auto td_bridge_obj_editInlineMessageMedia_reply_markup(editInlineMessageMedia *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_editInlineMessageMedia_input_message_content(editInlineMessageMedia *obj) { return &obj->input_message_content_; }

EXPORT editInlineMessageCaption *td_bridge_newobj_editInlineMessageCaption() { return new editInlineMessageCaption(); }
EXPORT auto td_bridge_obj_editInlineMessageCaption_inline_message_id(editInlineMessageCaption *obj) { return &obj->inline_message_id_; }
EXPORT auto td_bridge_obj_editInlineMessageCaption_reply_markup(editInlineMessageCaption *obj) { return &obj->reply_markup_; }
EXPORT auto td_bridge_obj_editInlineMessageCaption_caption(editInlineMessageCaption *obj) { return &obj->caption_; }

EXPORT editInlineMessageReplyMarkup *td_bridge_newobj_editInlineMessageReplyMarkup() { return new editInlineMessageReplyMarkup(); }
EXPORT auto td_bridge_obj_editInlineMessageReplyMarkup_inline_message_id(editInlineMessageReplyMarkup *obj) { return &obj->inline_message_id_; }
EXPORT auto td_bridge_obj_editInlineMessageReplyMarkup_reply_markup(editInlineMessageReplyMarkup *obj) { return &obj->reply_markup_; }

EXPORT getTextEntities *td_bridge_newobj_getTextEntities() { return new getTextEntities(); }
EXPORT auto td_bridge_obj_getTextEntities_text(getTextEntities *obj) { return &obj->text_; }

EXPORT parseTextEntities *td_bridge_newobj_parseTextEntities() { return new parseTextEntities(); }
EXPORT auto td_bridge_obj_parseTextEntities_text(parseTextEntities *obj) { return &obj->text_; }
EXPORT auto td_bridge_obj_parseTextEntities_parse_mode(parseTextEntities *obj) { return &obj->parse_mode_; }

EXPORT getFileMimeType *td_bridge_newobj_getFileMimeType() { return new getFileMimeType(); }
EXPORT auto td_bridge_obj_getFileMimeType_file_name(getFileMimeType *obj) { return &obj->file_name_; }

EXPORT getFileExtension *td_bridge_newobj_getFileExtension() { return new getFileExtension(); }
EXPORT auto td_bridge_obj_getFileExtension_mime_type(getFileExtension *obj) { return &obj->mime_type_; }

EXPORT cleanFileName *td_bridge_newobj_cleanFileName() { return new cleanFileName(); }
EXPORT auto td_bridge_obj_cleanFileName_file_name(cleanFileName *obj) { return &obj->file_name_; }

EXPORT getLanguagePackString *td_bridge_newobj_getLanguagePackString() { return new getLanguagePackString(); }
EXPORT auto td_bridge_obj_getLanguagePackString_language_pack_database_path(getLanguagePackString *obj) { return &obj->language_pack_database_path_; }
EXPORT auto td_bridge_obj_getLanguagePackString_localization_target(getLanguagePackString *obj) { return &obj->localization_target_; }
EXPORT auto td_bridge_obj_getLanguagePackString_language_pack_id(getLanguagePackString *obj) { return &obj->language_pack_id_; }
EXPORT auto td_bridge_obj_getLanguagePackString_key(getLanguagePackString *obj) { return &obj->key_; }

EXPORT getInlineQueryResults *td_bridge_newobj_getInlineQueryResults() { return new getInlineQueryResults(); }
EXPORT auto td_bridge_obj_getInlineQueryResults_bot_user_id(getInlineQueryResults *obj) { return &obj->bot_user_id_; }
EXPORT auto td_bridge_obj_getInlineQueryResults_chat_id(getInlineQueryResults *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_getInlineQueryResults_user_location(getInlineQueryResults *obj) { return &obj->user_location_; }
EXPORT auto td_bridge_obj_getInlineQueryResults_query(getInlineQueryResults *obj) { return &obj->query_; }
EXPORT auto td_bridge_obj_getInlineQueryResults_offset(getInlineQueryResults *obj) { return &obj->offset_; }

EXPORT answerInlineQuery *td_bridge_newobj_answerInlineQuery() { return new answerInlineQuery(); }
EXPORT auto td_bridge_obj_answerInlineQuery_inline_query_id(answerInlineQuery *obj) { return &obj->inline_query_id_; }
EXPORT auto td_bridge_obj_answerInlineQuery_is_personal(answerInlineQuery *obj) { return &obj->is_personal_; }
EXPORT auto td_bridge_obj_answerInlineQuery_results(answerInlineQuery *obj) { return &obj->results_; }
EXPORT auto td_bridge_obj_answerInlineQuery_cache_time(answerInlineQuery *obj) { return &obj->cache_time_; }
EXPORT auto td_bridge_obj_answerInlineQuery_next_offset(answerInlineQuery *obj) { return &obj->next_offset_; }
EXPORT auto td_bridge_obj_answerInlineQuery_switch_pm_text(answerInlineQuery *obj) { return &obj->switch_pm_text_; }
EXPORT auto td_bridge_obj_answerInlineQuery_switch_pm_parameter(answerInlineQuery *obj) { return &obj->switch_pm_parameter_; }

EXPORT getCallbackQueryAnswer *td_bridge_newobj_getCallbackQueryAnswer() { return new getCallbackQueryAnswer(); }
EXPORT auto td_bridge_obj_getCallbackQueryAnswer_chat_id(getCallbackQueryAnswer *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_getCallbackQueryAnswer_message_id(getCallbackQueryAnswer *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_getCallbackQueryAnswer_payload(getCallbackQueryAnswer *obj) { return &obj->payload_; }

EXPORT answerCallbackQuery *td_bridge_newobj_answerCallbackQuery() { return new answerCallbackQuery(); }
EXPORT auto td_bridge_obj_answerCallbackQuery_callback_query_id(answerCallbackQuery *obj) { return &obj->callback_query_id_; }
EXPORT auto td_bridge_obj_answerCallbackQuery_text(answerCallbackQuery *obj) { return &obj->text_; }
EXPORT auto td_bridge_obj_answerCallbackQuery_show_alert(answerCallbackQuery *obj) { return &obj->show_alert_; }
EXPORT auto td_bridge_obj_answerCallbackQuery_url(answerCallbackQuery *obj) { return &obj->url_; }
EXPORT auto td_bridge_obj_answerCallbackQuery_cache_time(answerCallbackQuery *obj) { return &obj->cache_time_; }

EXPORT answerShippingQuery *td_bridge_newobj_answerShippingQuery() { return new answerShippingQuery(); }
EXPORT auto td_bridge_obj_answerShippingQuery_shipping_query_id(answerShippingQuery *obj) { return &obj->shipping_query_id_; }
EXPORT auto td_bridge_obj_answerShippingQuery_shipping_options(answerShippingQuery *obj) { return &obj->shipping_options_; }
EXPORT auto td_bridge_obj_answerShippingQuery_error_message(answerShippingQuery *obj) { return &obj->error_message_; }

EXPORT answerPreCheckoutQuery *td_bridge_newobj_answerPreCheckoutQuery() { return new answerPreCheckoutQuery(); }
EXPORT auto td_bridge_obj_answerPreCheckoutQuery_pre_checkout_query_id(answerPreCheckoutQuery *obj) { return &obj->pre_checkout_query_id_; }
EXPORT auto td_bridge_obj_answerPreCheckoutQuery_error_message(answerPreCheckoutQuery *obj) { return &obj->error_message_; }

EXPORT setGameScore *td_bridge_newobj_setGameScore() { return new setGameScore(); }
EXPORT auto td_bridge_obj_setGameScore_chat_id(setGameScore *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_setGameScore_message_id(setGameScore *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_setGameScore_edit_message(setGameScore *obj) { return &obj->edit_message_; }
EXPORT auto td_bridge_obj_setGameScore_user_id(setGameScore *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_setGameScore_score(setGameScore *obj) { return &obj->score_; }
EXPORT auto td_bridge_obj_setGameScore_force(setGameScore *obj) { return &obj->force_; }

EXPORT setInlineGameScore *td_bridge_newobj_setInlineGameScore() { return new setInlineGameScore(); }
EXPORT auto td_bridge_obj_setInlineGameScore_inline_message_id(setInlineGameScore *obj) { return &obj->inline_message_id_; }
EXPORT auto td_bridge_obj_setInlineGameScore_edit_message(setInlineGameScore *obj) { return &obj->edit_message_; }
EXPORT auto td_bridge_obj_setInlineGameScore_user_id(setInlineGameScore *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_setInlineGameScore_score(setInlineGameScore *obj) { return &obj->score_; }
EXPORT auto td_bridge_obj_setInlineGameScore_force(setInlineGameScore *obj) { return &obj->force_; }

EXPORT getGameHighScores *td_bridge_newobj_getGameHighScores() { return new getGameHighScores(); }
EXPORT auto td_bridge_obj_getGameHighScores_chat_id(getGameHighScores *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_getGameHighScores_message_id(getGameHighScores *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_getGameHighScores_user_id(getGameHighScores *obj) { return &obj->user_id_; }

EXPORT getInlineGameHighScores *td_bridge_newobj_getInlineGameHighScores() { return new getInlineGameHighScores(); }
EXPORT auto td_bridge_obj_getInlineGameHighScores_inline_message_id(getInlineGameHighScores *obj) { return &obj->inline_message_id_; }
EXPORT auto td_bridge_obj_getInlineGameHighScores_user_id(getInlineGameHighScores *obj) { return &obj->user_id_; }

EXPORT deleteChatReplyMarkup *td_bridge_newobj_deleteChatReplyMarkup() { return new deleteChatReplyMarkup(); }
EXPORT auto td_bridge_obj_deleteChatReplyMarkup_chat_id(deleteChatReplyMarkup *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_deleteChatReplyMarkup_message_id(deleteChatReplyMarkup *obj) { return &obj->message_id_; }

EXPORT sendChatAction *td_bridge_newobj_sendChatAction() { return new sendChatAction(); }
EXPORT auto td_bridge_obj_sendChatAction_chat_id(sendChatAction *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_sendChatAction_action(sendChatAction *obj) { return &obj->action_; }

EXPORT openChat *td_bridge_newobj_openChat() { return new openChat(); }
EXPORT auto td_bridge_obj_openChat_chat_id(openChat *obj) { return &obj->chat_id_; }

EXPORT closeChat *td_bridge_newobj_closeChat() { return new closeChat(); }
EXPORT auto td_bridge_obj_closeChat_chat_id(closeChat *obj) { return &obj->chat_id_; }

EXPORT viewMessages *td_bridge_newobj_viewMessages() { return new viewMessages(); }
EXPORT auto td_bridge_obj_viewMessages_chat_id(viewMessages *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_viewMessages_message_ids(viewMessages *obj) { return &obj->message_ids_; }
EXPORT auto td_bridge_obj_viewMessages_force_read(viewMessages *obj) { return &obj->force_read_; }

EXPORT openMessageContent *td_bridge_newobj_openMessageContent() { return new openMessageContent(); }
EXPORT auto td_bridge_obj_openMessageContent_chat_id(openMessageContent *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_openMessageContent_message_id(openMessageContent *obj) { return &obj->message_id_; }

EXPORT readAllChatMentions *td_bridge_newobj_readAllChatMentions() { return new readAllChatMentions(); }
EXPORT auto td_bridge_obj_readAllChatMentions_chat_id(readAllChatMentions *obj) { return &obj->chat_id_; }

EXPORT createPrivateChat *td_bridge_newobj_createPrivateChat() { return new createPrivateChat(); }
EXPORT auto td_bridge_obj_createPrivateChat_user_id(createPrivateChat *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_createPrivateChat_force(createPrivateChat *obj) { return &obj->force_; }

EXPORT createBasicGroupChat *td_bridge_newobj_createBasicGroupChat() { return new createBasicGroupChat(); }
EXPORT auto td_bridge_obj_createBasicGroupChat_basic_group_id(createBasicGroupChat *obj) { return &obj->basic_group_id_; }
EXPORT auto td_bridge_obj_createBasicGroupChat_force(createBasicGroupChat *obj) { return &obj->force_; }

EXPORT createSupergroupChat *td_bridge_newobj_createSupergroupChat() { return new createSupergroupChat(); }
EXPORT auto td_bridge_obj_createSupergroupChat_supergroup_id(createSupergroupChat *obj) { return &obj->supergroup_id_; }
EXPORT auto td_bridge_obj_createSupergroupChat_force(createSupergroupChat *obj) { return &obj->force_; }

EXPORT createSecretChat *td_bridge_newobj_createSecretChat() { return new createSecretChat(); }
EXPORT auto td_bridge_obj_createSecretChat_secret_chat_id(createSecretChat *obj) { return &obj->secret_chat_id_; }

EXPORT createNewBasicGroupChat *td_bridge_newobj_createNewBasicGroupChat() { return new createNewBasicGroupChat(); }
EXPORT auto td_bridge_obj_createNewBasicGroupChat_user_ids(createNewBasicGroupChat *obj) { return &obj->user_ids_; }
EXPORT auto td_bridge_obj_createNewBasicGroupChat_title(createNewBasicGroupChat *obj) { return &obj->title_; }

EXPORT createNewSupergroupChat *td_bridge_newobj_createNewSupergroupChat() { return new createNewSupergroupChat(); }
EXPORT auto td_bridge_obj_createNewSupergroupChat_title(createNewSupergroupChat *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_createNewSupergroupChat_is_channel(createNewSupergroupChat *obj) { return &obj->is_channel_; }
EXPORT auto td_bridge_obj_createNewSupergroupChat_description(createNewSupergroupChat *obj) { return &obj->description_; }

EXPORT createNewSecretChat *td_bridge_newobj_createNewSecretChat() { return new createNewSecretChat(); }
EXPORT auto td_bridge_obj_createNewSecretChat_user_id(createNewSecretChat *obj) { return &obj->user_id_; }

EXPORT upgradeBasicGroupChatToSupergroupChat *td_bridge_newobj_upgradeBasicGroupChatToSupergroupChat() { return new upgradeBasicGroupChatToSupergroupChat(); }
EXPORT auto td_bridge_obj_upgradeBasicGroupChatToSupergroupChat_chat_id(upgradeBasicGroupChatToSupergroupChat *obj) { return &obj->chat_id_; }

EXPORT setChatTitle *td_bridge_newobj_setChatTitle() { return new setChatTitle(); }
EXPORT auto td_bridge_obj_setChatTitle_chat_id(setChatTitle *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_setChatTitle_title(setChatTitle *obj) { return &obj->title_; }

EXPORT setChatPhoto *td_bridge_newobj_setChatPhoto() { return new setChatPhoto(); }
EXPORT auto td_bridge_obj_setChatPhoto_chat_id(setChatPhoto *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_setChatPhoto_photo(setChatPhoto *obj) { return &obj->photo_; }

EXPORT setChatDraftMessage *td_bridge_newobj_setChatDraftMessage() { return new setChatDraftMessage(); }
EXPORT auto td_bridge_obj_setChatDraftMessage_chat_id(setChatDraftMessage *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_setChatDraftMessage_draft_message(setChatDraftMessage *obj) { return &obj->draft_message_; }

EXPORT setChatNotificationSettings *td_bridge_newobj_setChatNotificationSettings() { return new setChatNotificationSettings(); }
EXPORT auto td_bridge_obj_setChatNotificationSettings_chat_id(setChatNotificationSettings *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_setChatNotificationSettings_notification_settings(setChatNotificationSettings *obj) { return &obj->notification_settings_; }

EXPORT toggleChatIsPinned *td_bridge_newobj_toggleChatIsPinned() { return new toggleChatIsPinned(); }
EXPORT auto td_bridge_obj_toggleChatIsPinned_chat_id(toggleChatIsPinned *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_toggleChatIsPinned_is_pinned(toggleChatIsPinned *obj) { return &obj->is_pinned_; }

EXPORT toggleChatIsMarkedAsUnread *td_bridge_newobj_toggleChatIsMarkedAsUnread() { return new toggleChatIsMarkedAsUnread(); }
EXPORT auto td_bridge_obj_toggleChatIsMarkedAsUnread_chat_id(toggleChatIsMarkedAsUnread *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_toggleChatIsMarkedAsUnread_is_marked_as_unread(toggleChatIsMarkedAsUnread *obj) { return &obj->is_marked_as_unread_; }

EXPORT toggleChatDefaultDisableNotification *td_bridge_newobj_toggleChatDefaultDisableNotification() { return new toggleChatDefaultDisableNotification(); }
EXPORT auto td_bridge_obj_toggleChatDefaultDisableNotification_chat_id(toggleChatDefaultDisableNotification *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_toggleChatDefaultDisableNotification_default_disable_notification(toggleChatDefaultDisableNotification *obj) { return &obj->default_disable_notification_; }

EXPORT setChatClientData *td_bridge_newobj_setChatClientData() { return new setChatClientData(); }
EXPORT auto td_bridge_obj_setChatClientData_chat_id(setChatClientData *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_setChatClientData_client_data(setChatClientData *obj) { return &obj->client_data_; }

EXPORT joinChat *td_bridge_newobj_joinChat() { return new joinChat(); }
EXPORT auto td_bridge_obj_joinChat_chat_id(joinChat *obj) { return &obj->chat_id_; }

EXPORT leaveChat *td_bridge_newobj_leaveChat() { return new leaveChat(); }
EXPORT auto td_bridge_obj_leaveChat_chat_id(leaveChat *obj) { return &obj->chat_id_; }

EXPORT addChatMember *td_bridge_newobj_addChatMember() { return new addChatMember(); }
EXPORT auto td_bridge_obj_addChatMember_chat_id(addChatMember *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_addChatMember_user_id(addChatMember *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_addChatMember_forward_limit(addChatMember *obj) { return &obj->forward_limit_; }

EXPORT addChatMembers *td_bridge_newobj_addChatMembers() { return new addChatMembers(); }
EXPORT auto td_bridge_obj_addChatMembers_chat_id(addChatMembers *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_addChatMembers_user_ids(addChatMembers *obj) { return &obj->user_ids_; }

EXPORT setChatMemberStatus *td_bridge_newobj_setChatMemberStatus() { return new setChatMemberStatus(); }
EXPORT auto td_bridge_obj_setChatMemberStatus_chat_id(setChatMemberStatus *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_setChatMemberStatus_user_id(setChatMemberStatus *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_setChatMemberStatus_status(setChatMemberStatus *obj) { return &obj->status_; }

EXPORT getChatMember *td_bridge_newobj_getChatMember() { return new getChatMember(); }
EXPORT auto td_bridge_obj_getChatMember_chat_id(getChatMember *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_getChatMember_user_id(getChatMember *obj) { return &obj->user_id_; }

EXPORT searchChatMembers *td_bridge_newobj_searchChatMembers() { return new searchChatMembers(); }
EXPORT auto td_bridge_obj_searchChatMembers_chat_id(searchChatMembers *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_searchChatMembers_query(searchChatMembers *obj) { return &obj->query_; }
EXPORT auto td_bridge_obj_searchChatMembers_limit(searchChatMembers *obj) { return &obj->limit_; }
EXPORT auto td_bridge_obj_searchChatMembers_filter(searchChatMembers *obj) { return &obj->filter_; }

EXPORT getChatAdministrators *td_bridge_newobj_getChatAdministrators() { return new getChatAdministrators(); }
EXPORT auto td_bridge_obj_getChatAdministrators_chat_id(getChatAdministrators *obj) { return &obj->chat_id_; }

EXPORT clearAllDraftMessages *td_bridge_newobj_clearAllDraftMessages() { return new clearAllDraftMessages(); }
EXPORT auto td_bridge_obj_clearAllDraftMessages_exclude_secret_chats(clearAllDraftMessages *obj) { return &obj->exclude_secret_chats_; }

EXPORT getScopeNotificationSettings *td_bridge_newobj_getScopeNotificationSettings() { return new getScopeNotificationSettings(); }
EXPORT auto td_bridge_obj_getScopeNotificationSettings_scope(getScopeNotificationSettings *obj) { return &obj->scope_; }

EXPORT setScopeNotificationSettings *td_bridge_newobj_setScopeNotificationSettings() { return new setScopeNotificationSettings(); }
EXPORT auto td_bridge_obj_setScopeNotificationSettings_scope(setScopeNotificationSettings *obj) { return &obj->scope_; }
EXPORT auto td_bridge_obj_setScopeNotificationSettings_notification_settings(setScopeNotificationSettings *obj) { return &obj->notification_settings_; }

EXPORT resetAllNotificationSettings *td_bridge_newobj_resetAllNotificationSettings() { return new resetAllNotificationSettings(); }

EXPORT setPinnedChats *td_bridge_newobj_setPinnedChats() { return new setPinnedChats(); }
EXPORT auto td_bridge_obj_setPinnedChats_chat_ids(setPinnedChats *obj) { return &obj->chat_ids_; }

EXPORT downloadFile *td_bridge_newobj_downloadFile() { return new downloadFile(); }
EXPORT auto td_bridge_obj_downloadFile_file_id(downloadFile *obj) { return &obj->file_id_; }
EXPORT auto td_bridge_obj_downloadFile_priority(downloadFile *obj) { return &obj->priority_; }

EXPORT cancelDownloadFile *td_bridge_newobj_cancelDownloadFile() { return new cancelDownloadFile(); }
EXPORT auto td_bridge_obj_cancelDownloadFile_file_id(cancelDownloadFile *obj) { return &obj->file_id_; }
EXPORT auto td_bridge_obj_cancelDownloadFile_only_if_pending(cancelDownloadFile *obj) { return &obj->only_if_pending_; }

EXPORT uploadFile *td_bridge_newobj_uploadFile() { return new uploadFile(); }
EXPORT auto td_bridge_obj_uploadFile_file(uploadFile *obj) { return &obj->file_; }
EXPORT auto td_bridge_obj_uploadFile_file_type(uploadFile *obj) { return &obj->file_type_; }
EXPORT auto td_bridge_obj_uploadFile_priority(uploadFile *obj) { return &obj->priority_; }

EXPORT cancelUploadFile *td_bridge_newobj_cancelUploadFile() { return new cancelUploadFile(); }
EXPORT auto td_bridge_obj_cancelUploadFile_file_id(cancelUploadFile *obj) { return &obj->file_id_; }

EXPORT setFileGenerationProgress *td_bridge_newobj_setFileGenerationProgress() { return new setFileGenerationProgress(); }
EXPORT auto td_bridge_obj_setFileGenerationProgress_generation_id(setFileGenerationProgress *obj) { return &obj->generation_id_; }
EXPORT auto td_bridge_obj_setFileGenerationProgress_expected_size(setFileGenerationProgress *obj) { return &obj->expected_size_; }
EXPORT auto td_bridge_obj_setFileGenerationProgress_local_prefix_size(setFileGenerationProgress *obj) { return &obj->local_prefix_size_; }

EXPORT finishFileGeneration *td_bridge_newobj_finishFileGeneration() { return new finishFileGeneration(); }
EXPORT auto td_bridge_obj_finishFileGeneration_generation_id(finishFileGeneration *obj) { return &obj->generation_id_; }
EXPORT auto td_bridge_obj_finishFileGeneration_error(finishFileGeneration *obj) { return &obj->error_; }

EXPORT deleteFile *td_bridge_newobj_deleteFile() { return new deleteFile(); }
EXPORT auto td_bridge_obj_deleteFile_file_id(deleteFile *obj) { return &obj->file_id_; }

EXPORT generateChatInviteLink *td_bridge_newobj_generateChatInviteLink() { return new generateChatInviteLink(); }
EXPORT auto td_bridge_obj_generateChatInviteLink_chat_id(generateChatInviteLink *obj) { return &obj->chat_id_; }

EXPORT checkChatInviteLink *td_bridge_newobj_checkChatInviteLink() { return new checkChatInviteLink(); }
EXPORT auto td_bridge_obj_checkChatInviteLink_invite_link(checkChatInviteLink *obj) { return &obj->invite_link_; }

EXPORT joinChatByInviteLink *td_bridge_newobj_joinChatByInviteLink() { return new joinChatByInviteLink(); }
EXPORT auto td_bridge_obj_joinChatByInviteLink_invite_link(joinChatByInviteLink *obj) { return &obj->invite_link_; }

EXPORT createCall *td_bridge_newobj_createCall() { return new createCall(); }
EXPORT auto td_bridge_obj_createCall_user_id(createCall *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_createCall_protocol(createCall *obj) { return &obj->protocol_; }

EXPORT acceptCall *td_bridge_newobj_acceptCall() { return new acceptCall(); }
EXPORT auto td_bridge_obj_acceptCall_call_id(acceptCall *obj) { return &obj->call_id_; }
EXPORT auto td_bridge_obj_acceptCall_protocol(acceptCall *obj) { return &obj->protocol_; }

EXPORT discardCall *td_bridge_newobj_discardCall() { return new discardCall(); }
EXPORT auto td_bridge_obj_discardCall_call_id(discardCall *obj) { return &obj->call_id_; }
EXPORT auto td_bridge_obj_discardCall_is_disconnected(discardCall *obj) { return &obj->is_disconnected_; }
EXPORT auto td_bridge_obj_discardCall_duration(discardCall *obj) { return &obj->duration_; }
EXPORT auto td_bridge_obj_discardCall_connection_id(discardCall *obj) { return &obj->connection_id_; }

EXPORT sendCallRating *td_bridge_newobj_sendCallRating() { return new sendCallRating(); }
EXPORT auto td_bridge_obj_sendCallRating_call_id(sendCallRating *obj) { return &obj->call_id_; }
EXPORT auto td_bridge_obj_sendCallRating_rating(sendCallRating *obj) { return &obj->rating_; }
EXPORT auto td_bridge_obj_sendCallRating_comment(sendCallRating *obj) { return &obj->comment_; }

EXPORT sendCallDebugInformation *td_bridge_newobj_sendCallDebugInformation() { return new sendCallDebugInformation(); }
EXPORT auto td_bridge_obj_sendCallDebugInformation_call_id(sendCallDebugInformation *obj) { return &obj->call_id_; }
EXPORT auto td_bridge_obj_sendCallDebugInformation_debug_information(sendCallDebugInformation *obj) { return &obj->debug_information_; }

EXPORT blockUser *td_bridge_newobj_blockUser() { return new blockUser(); }
EXPORT auto td_bridge_obj_blockUser_user_id(blockUser *obj) { return &obj->user_id_; }

EXPORT unblockUser *td_bridge_newobj_unblockUser() { return new unblockUser(); }
EXPORT auto td_bridge_obj_unblockUser_user_id(unblockUser *obj) { return &obj->user_id_; }

EXPORT getBlockedUsers *td_bridge_newobj_getBlockedUsers() { return new getBlockedUsers(); }
EXPORT auto td_bridge_obj_getBlockedUsers_offset(getBlockedUsers *obj) { return &obj->offset_; }
EXPORT auto td_bridge_obj_getBlockedUsers_limit(getBlockedUsers *obj) { return &obj->limit_; }

EXPORT importContacts *td_bridge_newobj_importContacts() { return new importContacts(); }
EXPORT auto td_bridge_obj_importContacts_contacts(importContacts *obj) { return &obj->contacts_; }

EXPORT getContacts *td_bridge_newobj_getContacts() { return new getContacts(); }

EXPORT searchContacts *td_bridge_newobj_searchContacts() { return new searchContacts(); }
EXPORT auto td_bridge_obj_searchContacts_query(searchContacts *obj) { return &obj->query_; }
EXPORT auto td_bridge_obj_searchContacts_limit(searchContacts *obj) { return &obj->limit_; }

EXPORT removeContacts *td_bridge_newobj_removeContacts() { return new removeContacts(); }
EXPORT auto td_bridge_obj_removeContacts_user_ids(removeContacts *obj) { return &obj->user_ids_; }

EXPORT getImportedContactCount *td_bridge_newobj_getImportedContactCount() { return new getImportedContactCount(); }

EXPORT changeImportedContacts *td_bridge_newobj_changeImportedContacts() { return new changeImportedContacts(); }
EXPORT auto td_bridge_obj_changeImportedContacts_contacts(changeImportedContacts *obj) { return &obj->contacts_; }

EXPORT clearImportedContacts *td_bridge_newobj_clearImportedContacts() { return new clearImportedContacts(); }

EXPORT getUserProfilePhotos *td_bridge_newobj_getUserProfilePhotos() { return new getUserProfilePhotos(); }
EXPORT auto td_bridge_obj_getUserProfilePhotos_user_id(getUserProfilePhotos *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_getUserProfilePhotos_offset(getUserProfilePhotos *obj) { return &obj->offset_; }
EXPORT auto td_bridge_obj_getUserProfilePhotos_limit(getUserProfilePhotos *obj) { return &obj->limit_; }

EXPORT getStickers *td_bridge_newobj_getStickers() { return new getStickers(); }
EXPORT auto td_bridge_obj_getStickers_emoji(getStickers *obj) { return &obj->emoji_; }
EXPORT auto td_bridge_obj_getStickers_limit(getStickers *obj) { return &obj->limit_; }

EXPORT searchStickers *td_bridge_newobj_searchStickers() { return new searchStickers(); }
EXPORT auto td_bridge_obj_searchStickers_emoji(searchStickers *obj) { return &obj->emoji_; }
EXPORT auto td_bridge_obj_searchStickers_limit(searchStickers *obj) { return &obj->limit_; }

EXPORT getInstalledStickerSets *td_bridge_newobj_getInstalledStickerSets() { return new getInstalledStickerSets(); }
EXPORT auto td_bridge_obj_getInstalledStickerSets_is_masks(getInstalledStickerSets *obj) { return &obj->is_masks_; }

EXPORT getArchivedStickerSets *td_bridge_newobj_getArchivedStickerSets() { return new getArchivedStickerSets(); }
EXPORT auto td_bridge_obj_getArchivedStickerSets_is_masks(getArchivedStickerSets *obj) { return &obj->is_masks_; }
EXPORT auto td_bridge_obj_getArchivedStickerSets_offset_sticker_set_id(getArchivedStickerSets *obj) { return &obj->offset_sticker_set_id_; }
EXPORT auto td_bridge_obj_getArchivedStickerSets_limit(getArchivedStickerSets *obj) { return &obj->limit_; }

EXPORT getTrendingStickerSets *td_bridge_newobj_getTrendingStickerSets() { return new getTrendingStickerSets(); }

EXPORT getAttachedStickerSets *td_bridge_newobj_getAttachedStickerSets() { return new getAttachedStickerSets(); }
EXPORT auto td_bridge_obj_getAttachedStickerSets_file_id(getAttachedStickerSets *obj) { return &obj->file_id_; }

EXPORT getStickerSet *td_bridge_newobj_getStickerSet() { return new getStickerSet(); }
EXPORT auto td_bridge_obj_getStickerSet_set_id(getStickerSet *obj) { return &obj->set_id_; }

EXPORT searchStickerSet *td_bridge_newobj_searchStickerSet() { return new searchStickerSet(); }
EXPORT auto td_bridge_obj_searchStickerSet_name(searchStickerSet *obj) { return &obj->name_; }

EXPORT searchInstalledStickerSets *td_bridge_newobj_searchInstalledStickerSets() { return new searchInstalledStickerSets(); }
EXPORT auto td_bridge_obj_searchInstalledStickerSets_is_masks(searchInstalledStickerSets *obj) { return &obj->is_masks_; }
EXPORT auto td_bridge_obj_searchInstalledStickerSets_query(searchInstalledStickerSets *obj) { return &obj->query_; }
EXPORT auto td_bridge_obj_searchInstalledStickerSets_limit(searchInstalledStickerSets *obj) { return &obj->limit_; }

EXPORT searchStickerSets *td_bridge_newobj_searchStickerSets() { return new searchStickerSets(); }
EXPORT auto td_bridge_obj_searchStickerSets_query(searchStickerSets *obj) { return &obj->query_; }

EXPORT changeStickerSet *td_bridge_newobj_changeStickerSet() { return new changeStickerSet(); }
EXPORT auto td_bridge_obj_changeStickerSet_set_id(changeStickerSet *obj) { return &obj->set_id_; }
EXPORT auto td_bridge_obj_changeStickerSet_is_installed(changeStickerSet *obj) { return &obj->is_installed_; }
EXPORT auto td_bridge_obj_changeStickerSet_is_archived(changeStickerSet *obj) { return &obj->is_archived_; }

EXPORT viewTrendingStickerSets *td_bridge_newobj_viewTrendingStickerSets() { return new viewTrendingStickerSets(); }
EXPORT auto td_bridge_obj_viewTrendingStickerSets_sticker_set_ids(viewTrendingStickerSets *obj) { return &obj->sticker_set_ids_; }

EXPORT reorderInstalledStickerSets *td_bridge_newobj_reorderInstalledStickerSets() { return new reorderInstalledStickerSets(); }
EXPORT auto td_bridge_obj_reorderInstalledStickerSets_is_masks(reorderInstalledStickerSets *obj) { return &obj->is_masks_; }
EXPORT auto td_bridge_obj_reorderInstalledStickerSets_sticker_set_ids(reorderInstalledStickerSets *obj) { return &obj->sticker_set_ids_; }

EXPORT getRecentStickers *td_bridge_newobj_getRecentStickers() { return new getRecentStickers(); }
EXPORT auto td_bridge_obj_getRecentStickers_is_attached(getRecentStickers *obj) { return &obj->is_attached_; }

EXPORT addRecentSticker *td_bridge_newobj_addRecentSticker() { return new addRecentSticker(); }
EXPORT auto td_bridge_obj_addRecentSticker_is_attached(addRecentSticker *obj) { return &obj->is_attached_; }
EXPORT auto td_bridge_obj_addRecentSticker_sticker(addRecentSticker *obj) { return &obj->sticker_; }

EXPORT removeRecentSticker *td_bridge_newobj_removeRecentSticker() { return new removeRecentSticker(); }
EXPORT auto td_bridge_obj_removeRecentSticker_is_attached(removeRecentSticker *obj) { return &obj->is_attached_; }
EXPORT auto td_bridge_obj_removeRecentSticker_sticker(removeRecentSticker *obj) { return &obj->sticker_; }

EXPORT clearRecentStickers *td_bridge_newobj_clearRecentStickers() { return new clearRecentStickers(); }
EXPORT auto td_bridge_obj_clearRecentStickers_is_attached(clearRecentStickers *obj) { return &obj->is_attached_; }

EXPORT getFavoriteStickers *td_bridge_newobj_getFavoriteStickers() { return new getFavoriteStickers(); }

EXPORT addFavoriteSticker *td_bridge_newobj_addFavoriteSticker() { return new addFavoriteSticker(); }
EXPORT auto td_bridge_obj_addFavoriteSticker_sticker(addFavoriteSticker *obj) { return &obj->sticker_; }

EXPORT removeFavoriteSticker *td_bridge_newobj_removeFavoriteSticker() { return new removeFavoriteSticker(); }
EXPORT auto td_bridge_obj_removeFavoriteSticker_sticker(removeFavoriteSticker *obj) { return &obj->sticker_; }

EXPORT getStickerEmojis *td_bridge_newobj_getStickerEmojis() { return new getStickerEmojis(); }
EXPORT auto td_bridge_obj_getStickerEmojis_sticker(getStickerEmojis *obj) { return &obj->sticker_; }

EXPORT getSavedAnimations *td_bridge_newobj_getSavedAnimations() { return new getSavedAnimations(); }

EXPORT addSavedAnimation *td_bridge_newobj_addSavedAnimation() { return new addSavedAnimation(); }
EXPORT auto td_bridge_obj_addSavedAnimation_animation(addSavedAnimation *obj) { return &obj->animation_; }

EXPORT removeSavedAnimation *td_bridge_newobj_removeSavedAnimation() { return new removeSavedAnimation(); }
EXPORT auto td_bridge_obj_removeSavedAnimation_animation(removeSavedAnimation *obj) { return &obj->animation_; }

EXPORT getRecentInlineBots *td_bridge_newobj_getRecentInlineBots() { return new getRecentInlineBots(); }

EXPORT searchHashtags *td_bridge_newobj_searchHashtags() { return new searchHashtags(); }
EXPORT auto td_bridge_obj_searchHashtags_prefix(searchHashtags *obj) { return &obj->prefix_; }
EXPORT auto td_bridge_obj_searchHashtags_limit(searchHashtags *obj) { return &obj->limit_; }

EXPORT removeRecentHashtag *td_bridge_newobj_removeRecentHashtag() { return new removeRecentHashtag(); }
EXPORT auto td_bridge_obj_removeRecentHashtag_hashtag(removeRecentHashtag *obj) { return &obj->hashtag_; }

EXPORT getWebPagePreview *td_bridge_newobj_getWebPagePreview() { return new getWebPagePreview(); }
EXPORT auto td_bridge_obj_getWebPagePreview_text(getWebPagePreview *obj) { return &obj->text_; }

EXPORT getWebPageInstantView *td_bridge_newobj_getWebPageInstantView() { return new getWebPageInstantView(); }
EXPORT auto td_bridge_obj_getWebPageInstantView_url(getWebPageInstantView *obj) { return &obj->url_; }
EXPORT auto td_bridge_obj_getWebPageInstantView_force_full(getWebPageInstantView *obj) { return &obj->force_full_; }

EXPORT setProfilePhoto *td_bridge_newobj_setProfilePhoto() { return new setProfilePhoto(); }
EXPORT auto td_bridge_obj_setProfilePhoto_photo(setProfilePhoto *obj) { return &obj->photo_; }

EXPORT deleteProfilePhoto *td_bridge_newobj_deleteProfilePhoto() { return new deleteProfilePhoto(); }
EXPORT auto td_bridge_obj_deleteProfilePhoto_profile_photo_id(deleteProfilePhoto *obj) { return &obj->profile_photo_id_; }

EXPORT setName *td_bridge_newobj_setName() { return new setName(); }
EXPORT auto td_bridge_obj_setName_first_name(setName *obj) { return &obj->first_name_; }
EXPORT auto td_bridge_obj_setName_last_name(setName *obj) { return &obj->last_name_; }

EXPORT setBio *td_bridge_newobj_setBio() { return new setBio(); }
EXPORT auto td_bridge_obj_setBio_bio(setBio *obj) { return &obj->bio_; }

EXPORT setUsername *td_bridge_newobj_setUsername() { return new setUsername(); }
EXPORT auto td_bridge_obj_setUsername_username(setUsername *obj) { return &obj->username_; }

EXPORT changePhoneNumber *td_bridge_newobj_changePhoneNumber() { return new changePhoneNumber(); }
EXPORT auto td_bridge_obj_changePhoneNumber_phone_number(changePhoneNumber *obj) { return &obj->phone_number_; }
EXPORT auto td_bridge_obj_changePhoneNumber_allow_flash_call(changePhoneNumber *obj) { return &obj->allow_flash_call_; }
EXPORT auto td_bridge_obj_changePhoneNumber_is_current_phone_number(changePhoneNumber *obj) { return &obj->is_current_phone_number_; }

EXPORT resendChangePhoneNumberCode *td_bridge_newobj_resendChangePhoneNumberCode() { return new resendChangePhoneNumberCode(); }

EXPORT checkChangePhoneNumberCode *td_bridge_newobj_checkChangePhoneNumberCode() { return new checkChangePhoneNumberCode(); }
EXPORT auto td_bridge_obj_checkChangePhoneNumberCode_code(checkChangePhoneNumberCode *obj) { return &obj->code_; }

EXPORT getActiveSessions *td_bridge_newobj_getActiveSessions() { return new getActiveSessions(); }

EXPORT terminateSession *td_bridge_newobj_terminateSession() { return new terminateSession(); }
EXPORT auto td_bridge_obj_terminateSession_session_id(terminateSession *obj) { return &obj->session_id_; }

EXPORT terminateAllOtherSessions *td_bridge_newobj_terminateAllOtherSessions() { return new terminateAllOtherSessions(); }

EXPORT getConnectedWebsites *td_bridge_newobj_getConnectedWebsites() { return new getConnectedWebsites(); }

EXPORT disconnectWebsite *td_bridge_newobj_disconnectWebsite() { return new disconnectWebsite(); }
EXPORT auto td_bridge_obj_disconnectWebsite_website_id(disconnectWebsite *obj) { return &obj->website_id_; }

EXPORT disconnectAllWebsites *td_bridge_newobj_disconnectAllWebsites() { return new disconnectAllWebsites(); }

EXPORT toggleBasicGroupAdministrators *td_bridge_newobj_toggleBasicGroupAdministrators() { return new toggleBasicGroupAdministrators(); }
EXPORT auto td_bridge_obj_toggleBasicGroupAdministrators_basic_group_id(toggleBasicGroupAdministrators *obj) { return &obj->basic_group_id_; }
EXPORT auto td_bridge_obj_toggleBasicGroupAdministrators_everyone_is_administrator(toggleBasicGroupAdministrators *obj) { return &obj->everyone_is_administrator_; }

EXPORT setSupergroupUsername *td_bridge_newobj_setSupergroupUsername() { return new setSupergroupUsername(); }
EXPORT auto td_bridge_obj_setSupergroupUsername_supergroup_id(setSupergroupUsername *obj) { return &obj->supergroup_id_; }
EXPORT auto td_bridge_obj_setSupergroupUsername_username(setSupergroupUsername *obj) { return &obj->username_; }

EXPORT setSupergroupStickerSet *td_bridge_newobj_setSupergroupStickerSet() { return new setSupergroupStickerSet(); }
EXPORT auto td_bridge_obj_setSupergroupStickerSet_supergroup_id(setSupergroupStickerSet *obj) { return &obj->supergroup_id_; }
EXPORT auto td_bridge_obj_setSupergroupStickerSet_sticker_set_id(setSupergroupStickerSet *obj) { return &obj->sticker_set_id_; }

EXPORT toggleSupergroupInvites *td_bridge_newobj_toggleSupergroupInvites() { return new toggleSupergroupInvites(); }
EXPORT auto td_bridge_obj_toggleSupergroupInvites_supergroup_id(toggleSupergroupInvites *obj) { return &obj->supergroup_id_; }
EXPORT auto td_bridge_obj_toggleSupergroupInvites_anyone_can_invite(toggleSupergroupInvites *obj) { return &obj->anyone_can_invite_; }

EXPORT toggleSupergroupSignMessages *td_bridge_newobj_toggleSupergroupSignMessages() { return new toggleSupergroupSignMessages(); }
EXPORT auto td_bridge_obj_toggleSupergroupSignMessages_supergroup_id(toggleSupergroupSignMessages *obj) { return &obj->supergroup_id_; }
EXPORT auto td_bridge_obj_toggleSupergroupSignMessages_sign_messages(toggleSupergroupSignMessages *obj) { return &obj->sign_messages_; }

EXPORT toggleSupergroupIsAllHistoryAvailable *td_bridge_newobj_toggleSupergroupIsAllHistoryAvailable() { return new toggleSupergroupIsAllHistoryAvailable(); }
EXPORT auto td_bridge_obj_toggleSupergroupIsAllHistoryAvailable_supergroup_id(toggleSupergroupIsAllHistoryAvailable *obj) { return &obj->supergroup_id_; }
EXPORT auto td_bridge_obj_toggleSupergroupIsAllHistoryAvailable_is_all_history_available(toggleSupergroupIsAllHistoryAvailable *obj) { return &obj->is_all_history_available_; }

EXPORT setSupergroupDescription *td_bridge_newobj_setSupergroupDescription() { return new setSupergroupDescription(); }
EXPORT auto td_bridge_obj_setSupergroupDescription_supergroup_id(setSupergroupDescription *obj) { return &obj->supergroup_id_; }
EXPORT auto td_bridge_obj_setSupergroupDescription_description(setSupergroupDescription *obj) { return &obj->description_; }

EXPORT pinSupergroupMessage *td_bridge_newobj_pinSupergroupMessage() { return new pinSupergroupMessage(); }
EXPORT auto td_bridge_obj_pinSupergroupMessage_supergroup_id(pinSupergroupMessage *obj) { return &obj->supergroup_id_; }
EXPORT auto td_bridge_obj_pinSupergroupMessage_message_id(pinSupergroupMessage *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_pinSupergroupMessage_disable_notification(pinSupergroupMessage *obj) { return &obj->disable_notification_; }

EXPORT unpinSupergroupMessage *td_bridge_newobj_unpinSupergroupMessage() { return new unpinSupergroupMessage(); }
EXPORT auto td_bridge_obj_unpinSupergroupMessage_supergroup_id(unpinSupergroupMessage *obj) { return &obj->supergroup_id_; }

EXPORT reportSupergroupSpam *td_bridge_newobj_reportSupergroupSpam() { return new reportSupergroupSpam(); }
EXPORT auto td_bridge_obj_reportSupergroupSpam_supergroup_id(reportSupergroupSpam *obj) { return &obj->supergroup_id_; }
EXPORT auto td_bridge_obj_reportSupergroupSpam_user_id(reportSupergroupSpam *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_reportSupergroupSpam_message_ids(reportSupergroupSpam *obj) { return &obj->message_ids_; }

EXPORT getSupergroupMembers *td_bridge_newobj_getSupergroupMembers() { return new getSupergroupMembers(); }
EXPORT auto td_bridge_obj_getSupergroupMembers_supergroup_id(getSupergroupMembers *obj) { return &obj->supergroup_id_; }
EXPORT auto td_bridge_obj_getSupergroupMembers_filter(getSupergroupMembers *obj) { return &obj->filter_; }
EXPORT auto td_bridge_obj_getSupergroupMembers_offset(getSupergroupMembers *obj) { return &obj->offset_; }
EXPORT auto td_bridge_obj_getSupergroupMembers_limit(getSupergroupMembers *obj) { return &obj->limit_; }

EXPORT deleteSupergroup *td_bridge_newobj_deleteSupergroup() { return new deleteSupergroup(); }
EXPORT auto td_bridge_obj_deleteSupergroup_supergroup_id(deleteSupergroup *obj) { return &obj->supergroup_id_; }

EXPORT closeSecretChat *td_bridge_newobj_closeSecretChat() { return new closeSecretChat(); }
EXPORT auto td_bridge_obj_closeSecretChat_secret_chat_id(closeSecretChat *obj) { return &obj->secret_chat_id_; }

EXPORT getChatEventLog *td_bridge_newobj_getChatEventLog() { return new getChatEventLog(); }
EXPORT auto td_bridge_obj_getChatEventLog_chat_id(getChatEventLog *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_getChatEventLog_query(getChatEventLog *obj) { return &obj->query_; }
EXPORT auto td_bridge_obj_getChatEventLog_from_event_id(getChatEventLog *obj) { return &obj->from_event_id_; }
EXPORT auto td_bridge_obj_getChatEventLog_limit(getChatEventLog *obj) { return &obj->limit_; }
EXPORT auto td_bridge_obj_getChatEventLog_filters(getChatEventLog *obj) { return &obj->filters_; }
EXPORT auto td_bridge_obj_getChatEventLog_user_ids(getChatEventLog *obj) { return &obj->user_ids_; }

EXPORT getPaymentForm *td_bridge_newobj_getPaymentForm() { return new getPaymentForm(); }
EXPORT auto td_bridge_obj_getPaymentForm_chat_id(getPaymentForm *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_getPaymentForm_message_id(getPaymentForm *obj) { return &obj->message_id_; }

EXPORT validateOrderInfo *td_bridge_newobj_validateOrderInfo() { return new validateOrderInfo(); }
EXPORT auto td_bridge_obj_validateOrderInfo_chat_id(validateOrderInfo *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_validateOrderInfo_message_id(validateOrderInfo *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_validateOrderInfo_order_info(validateOrderInfo *obj) { return &obj->order_info_; }
EXPORT auto td_bridge_obj_validateOrderInfo_allow_save(validateOrderInfo *obj) { return &obj->allow_save_; }

EXPORT sendPaymentForm *td_bridge_newobj_sendPaymentForm() { return new sendPaymentForm(); }
EXPORT auto td_bridge_obj_sendPaymentForm_chat_id(sendPaymentForm *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_sendPaymentForm_message_id(sendPaymentForm *obj) { return &obj->message_id_; }
EXPORT auto td_bridge_obj_sendPaymentForm_order_info_id(sendPaymentForm *obj) { return &obj->order_info_id_; }
EXPORT auto td_bridge_obj_sendPaymentForm_shipping_option_id(sendPaymentForm *obj) { return &obj->shipping_option_id_; }
EXPORT auto td_bridge_obj_sendPaymentForm_credentials(sendPaymentForm *obj) { return &obj->credentials_; }

EXPORT getPaymentReceipt *td_bridge_newobj_getPaymentReceipt() { return new getPaymentReceipt(); }
EXPORT auto td_bridge_obj_getPaymentReceipt_chat_id(getPaymentReceipt *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_getPaymentReceipt_message_id(getPaymentReceipt *obj) { return &obj->message_id_; }

EXPORT getSavedOrderInfo *td_bridge_newobj_getSavedOrderInfo() { return new getSavedOrderInfo(); }

EXPORT deleteSavedOrderInfo *td_bridge_newobj_deleteSavedOrderInfo() { return new deleteSavedOrderInfo(); }

EXPORT deleteSavedCredentials *td_bridge_newobj_deleteSavedCredentials() { return new deleteSavedCredentials(); }

EXPORT getSupportUser *td_bridge_newobj_getSupportUser() { return new getSupportUser(); }

EXPORT getWallpapers *td_bridge_newobj_getWallpapers() { return new getWallpapers(); }

EXPORT getLocalizationTargetInfo *td_bridge_newobj_getLocalizationTargetInfo() { return new getLocalizationTargetInfo(); }
EXPORT auto td_bridge_obj_getLocalizationTargetInfo_only_local(getLocalizationTargetInfo *obj) { return &obj->only_local_; }

EXPORT getLanguagePackStrings *td_bridge_newobj_getLanguagePackStrings() { return new getLanguagePackStrings(); }
EXPORT auto td_bridge_obj_getLanguagePackStrings_language_pack_id(getLanguagePackStrings *obj) { return &obj->language_pack_id_; }
EXPORT auto td_bridge_obj_getLanguagePackStrings_keys(getLanguagePackStrings *obj) { return &obj->keys_; }

EXPORT setCustomLanguagePack *td_bridge_newobj_setCustomLanguagePack() { return new setCustomLanguagePack(); }
EXPORT auto td_bridge_obj_setCustomLanguagePack_info(setCustomLanguagePack *obj) { return &obj->info_; }
EXPORT auto td_bridge_obj_setCustomLanguagePack_strings(setCustomLanguagePack *obj) { return &obj->strings_; }

EXPORT editCustomLanguagePackInfo *td_bridge_newobj_editCustomLanguagePackInfo() { return new editCustomLanguagePackInfo(); }
EXPORT auto td_bridge_obj_editCustomLanguagePackInfo_info(editCustomLanguagePackInfo *obj) { return &obj->info_; }

EXPORT setCustomLanguagePackString *td_bridge_newobj_setCustomLanguagePackString() { return new setCustomLanguagePackString(); }
EXPORT auto td_bridge_obj_setCustomLanguagePackString_language_pack_id(setCustomLanguagePackString *obj) { return &obj->language_pack_id_; }
EXPORT auto td_bridge_obj_setCustomLanguagePackString_new_string(setCustomLanguagePackString *obj) { return &obj->new_string_; }

EXPORT deleteLanguagePack *td_bridge_newobj_deleteLanguagePack() { return new deleteLanguagePack(); }
EXPORT auto td_bridge_obj_deleteLanguagePack_language_pack_id(deleteLanguagePack *obj) { return &obj->language_pack_id_; }

EXPORT registerDevice *td_bridge_newobj_registerDevice() { return new registerDevice(); }
EXPORT auto td_bridge_obj_registerDevice_device_token(registerDevice *obj) { return &obj->device_token_; }
EXPORT auto td_bridge_obj_registerDevice_other_user_ids(registerDevice *obj) { return &obj->other_user_ids_; }

EXPORT getRecentlyVisitedTMeUrls *td_bridge_newobj_getRecentlyVisitedTMeUrls() { return new getRecentlyVisitedTMeUrls(); }
EXPORT auto td_bridge_obj_getRecentlyVisitedTMeUrls_referrer(getRecentlyVisitedTMeUrls *obj) { return &obj->referrer_; }

EXPORT setUserPrivacySettingRules *td_bridge_newobj_setUserPrivacySettingRules() { return new setUserPrivacySettingRules(); }
EXPORT auto td_bridge_obj_setUserPrivacySettingRules_setting(setUserPrivacySettingRules *obj) { return &obj->setting_; }
EXPORT auto td_bridge_obj_setUserPrivacySettingRules_rules(setUserPrivacySettingRules *obj) { return &obj->rules_; }

EXPORT getUserPrivacySettingRules *td_bridge_newobj_getUserPrivacySettingRules() { return new getUserPrivacySettingRules(); }
EXPORT auto td_bridge_obj_getUserPrivacySettingRules_setting(getUserPrivacySettingRules *obj) { return &obj->setting_; }

EXPORT getOption *td_bridge_newobj_getOption() { return new getOption(); }
EXPORT auto td_bridge_obj_getOption_name(getOption *obj) { return &obj->name_; }

EXPORT setOption *td_bridge_newobj_setOption() { return new setOption(); }
EXPORT auto td_bridge_obj_setOption_name(setOption *obj) { return &obj->name_; }
EXPORT auto td_bridge_obj_setOption_value(setOption *obj) { return &obj->value_; }

EXPORT setAccountTtl *td_bridge_newobj_setAccountTtl() { return new setAccountTtl(); }
EXPORT auto td_bridge_obj_setAccountTtl_ttl(setAccountTtl *obj) { return &obj->ttl_; }

EXPORT getAccountTtl *td_bridge_newobj_getAccountTtl() { return new getAccountTtl(); }

EXPORT deleteAccount *td_bridge_newobj_deleteAccount() { return new deleteAccount(); }
EXPORT auto td_bridge_obj_deleteAccount_reason(deleteAccount *obj) { return &obj->reason_; }

EXPORT getChatReportSpamState *td_bridge_newobj_getChatReportSpamState() { return new getChatReportSpamState(); }
EXPORT auto td_bridge_obj_getChatReportSpamState_chat_id(getChatReportSpamState *obj) { return &obj->chat_id_; }

EXPORT changeChatReportSpamState *td_bridge_newobj_changeChatReportSpamState() { return new changeChatReportSpamState(); }
EXPORT auto td_bridge_obj_changeChatReportSpamState_chat_id(changeChatReportSpamState *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_changeChatReportSpamState_is_spam_chat(changeChatReportSpamState *obj) { return &obj->is_spam_chat_; }

EXPORT reportChat *td_bridge_newobj_reportChat() { return new reportChat(); }
EXPORT auto td_bridge_obj_reportChat_chat_id(reportChat *obj) { return &obj->chat_id_; }
EXPORT auto td_bridge_obj_reportChat_reason(reportChat *obj) { return &obj->reason_; }
EXPORT auto td_bridge_obj_reportChat_message_ids(reportChat *obj) { return &obj->message_ids_; }

EXPORT getStorageStatistics *td_bridge_newobj_getStorageStatistics() { return new getStorageStatistics(); }
EXPORT auto td_bridge_obj_getStorageStatistics_chat_limit(getStorageStatistics *obj) { return &obj->chat_limit_; }

EXPORT getStorageStatisticsFast *td_bridge_newobj_getStorageStatisticsFast() { return new getStorageStatisticsFast(); }

EXPORT optimizeStorage *td_bridge_newobj_optimizeStorage() { return new optimizeStorage(); }
EXPORT auto td_bridge_obj_optimizeStorage_size(optimizeStorage *obj) { return &obj->size_; }
EXPORT auto td_bridge_obj_optimizeStorage_ttl(optimizeStorage *obj) { return &obj->ttl_; }
EXPORT auto td_bridge_obj_optimizeStorage_count(optimizeStorage *obj) { return &obj->count_; }
EXPORT auto td_bridge_obj_optimizeStorage_immunity_delay(optimizeStorage *obj) { return &obj->immunity_delay_; }
EXPORT auto td_bridge_obj_optimizeStorage_file_types(optimizeStorage *obj) { return &obj->file_types_; }
EXPORT auto td_bridge_obj_optimizeStorage_chat_ids(optimizeStorage *obj) { return &obj->chat_ids_; }
EXPORT auto td_bridge_obj_optimizeStorage_exclude_chat_ids(optimizeStorage *obj) { return &obj->exclude_chat_ids_; }
EXPORT auto td_bridge_obj_optimizeStorage_chat_limit(optimizeStorage *obj) { return &obj->chat_limit_; }

EXPORT setNetworkType *td_bridge_newobj_setNetworkType() { return new setNetworkType(); }
EXPORT auto td_bridge_obj_setNetworkType_type(setNetworkType *obj) { return &obj->type_; }

EXPORT getNetworkStatistics *td_bridge_newobj_getNetworkStatistics() { return new getNetworkStatistics(); }
EXPORT auto td_bridge_obj_getNetworkStatistics_only_current(getNetworkStatistics *obj) { return &obj->only_current_; }

EXPORT addNetworkStatistics *td_bridge_newobj_addNetworkStatistics() { return new addNetworkStatistics(); }
EXPORT auto td_bridge_obj_addNetworkStatistics_entry(addNetworkStatistics *obj) { return &obj->entry_; }

EXPORT resetNetworkStatistics *td_bridge_newobj_resetNetworkStatistics() { return new resetNetworkStatistics(); }

EXPORT getPassportElement *td_bridge_newobj_getPassportElement() { return new getPassportElement(); }
EXPORT auto td_bridge_obj_getPassportElement_type(getPassportElement *obj) { return &obj->type_; }
EXPORT auto td_bridge_obj_getPassportElement_password(getPassportElement *obj) { return &obj->password_; }

EXPORT getAllPassportElements *td_bridge_newobj_getAllPassportElements() { return new getAllPassportElements(); }
EXPORT auto td_bridge_obj_getAllPassportElements_password(getAllPassportElements *obj) { return &obj->password_; }

EXPORT setPassportElement *td_bridge_newobj_setPassportElement() { return new setPassportElement(); }
EXPORT auto td_bridge_obj_setPassportElement_element(setPassportElement *obj) { return &obj->element_; }
EXPORT auto td_bridge_obj_setPassportElement_password(setPassportElement *obj) { return &obj->password_; }

EXPORT deletePassportElement *td_bridge_newobj_deletePassportElement() { return new deletePassportElement(); }
EXPORT auto td_bridge_obj_deletePassportElement_type(deletePassportElement *obj) { return &obj->type_; }

EXPORT setPassportElementErrors *td_bridge_newobj_setPassportElementErrors() { return new setPassportElementErrors(); }
EXPORT auto td_bridge_obj_setPassportElementErrors_user_id(setPassportElementErrors *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_setPassportElementErrors_errors(setPassportElementErrors *obj) { return &obj->errors_; }

EXPORT getPreferredCountryLanguage *td_bridge_newobj_getPreferredCountryLanguage() { return new getPreferredCountryLanguage(); }
EXPORT auto td_bridge_obj_getPreferredCountryLanguage_country_code(getPreferredCountryLanguage *obj) { return &obj->country_code_; }

EXPORT sendPhoneNumberVerificationCode *td_bridge_newobj_sendPhoneNumberVerificationCode() { return new sendPhoneNumberVerificationCode(); }
EXPORT auto td_bridge_obj_sendPhoneNumberVerificationCode_phone_number(sendPhoneNumberVerificationCode *obj) { return &obj->phone_number_; }
EXPORT auto td_bridge_obj_sendPhoneNumberVerificationCode_allow_flash_call(sendPhoneNumberVerificationCode *obj) { return &obj->allow_flash_call_; }
EXPORT auto td_bridge_obj_sendPhoneNumberVerificationCode_is_current_phone_number(sendPhoneNumberVerificationCode *obj) { return &obj->is_current_phone_number_; }

EXPORT resendPhoneNumberVerificationCode *td_bridge_newobj_resendPhoneNumberVerificationCode() { return new resendPhoneNumberVerificationCode(); }

EXPORT checkPhoneNumberVerificationCode *td_bridge_newobj_checkPhoneNumberVerificationCode() { return new checkPhoneNumberVerificationCode(); }
EXPORT auto td_bridge_obj_checkPhoneNumberVerificationCode_code(checkPhoneNumberVerificationCode *obj) { return &obj->code_; }

EXPORT sendEmailAddressVerificationCode *td_bridge_newobj_sendEmailAddressVerificationCode() { return new sendEmailAddressVerificationCode(); }
EXPORT auto td_bridge_obj_sendEmailAddressVerificationCode_email_address(sendEmailAddressVerificationCode *obj) { return &obj->email_address_; }

EXPORT resendEmailAddressVerificationCode *td_bridge_newobj_resendEmailAddressVerificationCode() { return new resendEmailAddressVerificationCode(); }

EXPORT checkEmailAddressVerificationCode *td_bridge_newobj_checkEmailAddressVerificationCode() { return new checkEmailAddressVerificationCode(); }
EXPORT auto td_bridge_obj_checkEmailAddressVerificationCode_code(checkEmailAddressVerificationCode *obj) { return &obj->code_; }

EXPORT getPassportAuthorizationForm *td_bridge_newobj_getPassportAuthorizationForm() { return new getPassportAuthorizationForm(); }
EXPORT auto td_bridge_obj_getPassportAuthorizationForm_bot_user_id(getPassportAuthorizationForm *obj) { return &obj->bot_user_id_; }
EXPORT auto td_bridge_obj_getPassportAuthorizationForm_scope(getPassportAuthorizationForm *obj) { return &obj->scope_; }
EXPORT auto td_bridge_obj_getPassportAuthorizationForm_public_key(getPassportAuthorizationForm *obj) { return &obj->public_key_; }
EXPORT auto td_bridge_obj_getPassportAuthorizationForm_nonce(getPassportAuthorizationForm *obj) { return &obj->nonce_; }
EXPORT auto td_bridge_obj_getPassportAuthorizationForm_password(getPassportAuthorizationForm *obj) { return &obj->password_; }

EXPORT sendPassportAuthorizationForm *td_bridge_newobj_sendPassportAuthorizationForm() { return new sendPassportAuthorizationForm(); }
EXPORT auto td_bridge_obj_sendPassportAuthorizationForm_autorization_form_id(sendPassportAuthorizationForm *obj) { return &obj->autorization_form_id_; }
EXPORT auto td_bridge_obj_sendPassportAuthorizationForm_types(sendPassportAuthorizationForm *obj) { return &obj->types_; }

EXPORT sendPhoneNumberConfirmationCode *td_bridge_newobj_sendPhoneNumberConfirmationCode() { return new sendPhoneNumberConfirmationCode(); }
EXPORT auto td_bridge_obj_sendPhoneNumberConfirmationCode_hash(sendPhoneNumberConfirmationCode *obj) { return &obj->hash_; }
EXPORT auto td_bridge_obj_sendPhoneNumberConfirmationCode_phone_number(sendPhoneNumberConfirmationCode *obj) { return &obj->phone_number_; }
EXPORT auto td_bridge_obj_sendPhoneNumberConfirmationCode_allow_flash_call(sendPhoneNumberConfirmationCode *obj) { return &obj->allow_flash_call_; }
EXPORT auto td_bridge_obj_sendPhoneNumberConfirmationCode_is_current_phone_number(sendPhoneNumberConfirmationCode *obj) { return &obj->is_current_phone_number_; }

EXPORT resendPhoneNumberConfirmationCode *td_bridge_newobj_resendPhoneNumberConfirmationCode() { return new resendPhoneNumberConfirmationCode(); }

EXPORT checkPhoneNumberConfirmationCode *td_bridge_newobj_checkPhoneNumberConfirmationCode() { return new checkPhoneNumberConfirmationCode(); }
EXPORT auto td_bridge_obj_checkPhoneNumberConfirmationCode_code(checkPhoneNumberConfirmationCode *obj) { return &obj->code_; }

EXPORT setBotUpdatesStatus *td_bridge_newobj_setBotUpdatesStatus() { return new setBotUpdatesStatus(); }
EXPORT auto td_bridge_obj_setBotUpdatesStatus_pending_update_count(setBotUpdatesStatus *obj) { return &obj->pending_update_count_; }
EXPORT auto td_bridge_obj_setBotUpdatesStatus_error_message(setBotUpdatesStatus *obj) { return &obj->error_message_; }

EXPORT uploadStickerFile *td_bridge_newobj_uploadStickerFile() { return new uploadStickerFile(); }
EXPORT auto td_bridge_obj_uploadStickerFile_user_id(uploadStickerFile *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_uploadStickerFile_png_sticker(uploadStickerFile *obj) { return &obj->png_sticker_; }

EXPORT createNewStickerSet *td_bridge_newobj_createNewStickerSet() { return new createNewStickerSet(); }
EXPORT auto td_bridge_obj_createNewStickerSet_user_id(createNewStickerSet *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_createNewStickerSet_title(createNewStickerSet *obj) { return &obj->title_; }
EXPORT auto td_bridge_obj_createNewStickerSet_name(createNewStickerSet *obj) { return &obj->name_; }
EXPORT auto td_bridge_obj_createNewStickerSet_is_masks(createNewStickerSet *obj) { return &obj->is_masks_; }
EXPORT auto td_bridge_obj_createNewStickerSet_stickers(createNewStickerSet *obj) { return &obj->stickers_; }

EXPORT addStickerToSet *td_bridge_newobj_addStickerToSet() { return new addStickerToSet(); }
EXPORT auto td_bridge_obj_addStickerToSet_user_id(addStickerToSet *obj) { return &obj->user_id_; }
EXPORT auto td_bridge_obj_addStickerToSet_name(addStickerToSet *obj) { return &obj->name_; }
EXPORT auto td_bridge_obj_addStickerToSet_sticker(addStickerToSet *obj) { return &obj->sticker_; }

EXPORT setStickerPositionInSet *td_bridge_newobj_setStickerPositionInSet() { return new setStickerPositionInSet(); }
EXPORT auto td_bridge_obj_setStickerPositionInSet_sticker(setStickerPositionInSet *obj) { return &obj->sticker_; }
EXPORT auto td_bridge_obj_setStickerPositionInSet_position(setStickerPositionInSet *obj) { return &obj->position_; }

EXPORT removeStickerFromSet *td_bridge_newobj_removeStickerFromSet() { return new removeStickerFromSet(); }
EXPORT auto td_bridge_obj_removeStickerFromSet_sticker(removeStickerFromSet *obj) { return &obj->sticker_; }

EXPORT getMapThumbnailFile *td_bridge_newobj_getMapThumbnailFile() { return new getMapThumbnailFile(); }
EXPORT auto td_bridge_obj_getMapThumbnailFile_location(getMapThumbnailFile *obj) { return &obj->location_; }
EXPORT auto td_bridge_obj_getMapThumbnailFile_zoom(getMapThumbnailFile *obj) { return &obj->zoom_; }
EXPORT auto td_bridge_obj_getMapThumbnailFile_width(getMapThumbnailFile *obj) { return &obj->width_; }
EXPORT auto td_bridge_obj_getMapThumbnailFile_height(getMapThumbnailFile *obj) { return &obj->height_; }
EXPORT auto td_bridge_obj_getMapThumbnailFile_scale(getMapThumbnailFile *obj) { return &obj->scale_; }
EXPORT auto td_bridge_obj_getMapThumbnailFile_chat_id(getMapThumbnailFile *obj) { return &obj->chat_id_; }

EXPORT acceptTermsOfService *td_bridge_newobj_acceptTermsOfService() { return new acceptTermsOfService(); }
EXPORT auto td_bridge_obj_acceptTermsOfService_terms_of_service_id(acceptTermsOfService *obj) { return &obj->terms_of_service_id_; }

EXPORT sendCustomRequest *td_bridge_newobj_sendCustomRequest() { return new sendCustomRequest(); }
EXPORT auto td_bridge_obj_sendCustomRequest_method(sendCustomRequest *obj) { return &obj->method_; }
EXPORT auto td_bridge_obj_sendCustomRequest_parameters(sendCustomRequest *obj) { return &obj->parameters_; }

EXPORT answerCustomQuery *td_bridge_newobj_answerCustomQuery() { return new answerCustomQuery(); }
EXPORT auto td_bridge_obj_answerCustomQuery_custom_query_id(answerCustomQuery *obj) { return &obj->custom_query_id_; }
EXPORT auto td_bridge_obj_answerCustomQuery_data(answerCustomQuery *obj) { return &obj->data_; }

EXPORT setAlarm *td_bridge_newobj_setAlarm() { return new setAlarm(); }
EXPORT auto td_bridge_obj_setAlarm_seconds(setAlarm *obj) { return &obj->seconds_; }

EXPORT getCountryCode *td_bridge_newobj_getCountryCode() { return new getCountryCode(); }

EXPORT getInviteText *td_bridge_newobj_getInviteText() { return new getInviteText(); }

EXPORT getDeepLinkInfo *td_bridge_newobj_getDeepLinkInfo() { return new getDeepLinkInfo(); }
EXPORT auto td_bridge_obj_getDeepLinkInfo_link(getDeepLinkInfo *obj) { return &obj->link_; }

EXPORT addProxy *td_bridge_newobj_addProxy() { return new addProxy(); }
EXPORT auto td_bridge_obj_addProxy_server(addProxy *obj) { return &obj->server_; }
EXPORT auto td_bridge_obj_addProxy_port(addProxy *obj) { return &obj->port_; }
EXPORT auto td_bridge_obj_addProxy_enable(addProxy *obj) { return &obj->enable_; }
EXPORT auto td_bridge_obj_addProxy_type(addProxy *obj) { return &obj->type_; }

EXPORT editProxy *td_bridge_newobj_editProxy() { return new editProxy(); }
EXPORT auto td_bridge_obj_editProxy_proxy_id(editProxy *obj) { return &obj->proxy_id_; }
EXPORT auto td_bridge_obj_editProxy_server(editProxy *obj) { return &obj->server_; }
EXPORT auto td_bridge_obj_editProxy_port(editProxy *obj) { return &obj->port_; }
EXPORT auto td_bridge_obj_editProxy_enable(editProxy *obj) { return &obj->enable_; }
EXPORT auto td_bridge_obj_editProxy_type(editProxy *obj) { return &obj->type_; }

EXPORT enableProxy *td_bridge_newobj_enableProxy() { return new enableProxy(); }
EXPORT auto td_bridge_obj_enableProxy_proxy_id(enableProxy *obj) { return &obj->proxy_id_; }

EXPORT disableProxy *td_bridge_newobj_disableProxy() { return new disableProxy(); }

EXPORT removeProxy *td_bridge_newobj_removeProxy() { return new removeProxy(); }
EXPORT auto td_bridge_obj_removeProxy_proxy_id(removeProxy *obj) { return &obj->proxy_id_; }

EXPORT getProxies *td_bridge_newobj_getProxies() { return new getProxies(); }

EXPORT getProxyLink *td_bridge_newobj_getProxyLink() { return new getProxyLink(); }
EXPORT auto td_bridge_obj_getProxyLink_proxy_id(getProxyLink *obj) { return &obj->proxy_id_; }

EXPORT pingProxy *td_bridge_newobj_pingProxy() { return new pingProxy(); }
EXPORT auto td_bridge_obj_pingProxy_proxy_id(pingProxy *obj) { return &obj->proxy_id_; }

EXPORT testCallEmpty *td_bridge_newobj_testCallEmpty() { return new testCallEmpty(); }

EXPORT testCallString *td_bridge_newobj_testCallString() { return new testCallString(); }
EXPORT auto td_bridge_obj_testCallString_x(testCallString *obj) { return &obj->x_; }

EXPORT testCallBytes *td_bridge_newobj_testCallBytes() { return new testCallBytes(); }
EXPORT auto td_bridge_obj_testCallBytes_x(testCallBytes *obj) { return &obj->x_; }

EXPORT testCallVectorInt *td_bridge_newobj_testCallVectorInt() { return new testCallVectorInt(); }
EXPORT auto td_bridge_obj_testCallVectorInt_x(testCallVectorInt *obj) { return &obj->x_; }

EXPORT testCallVectorIntObject *td_bridge_newobj_testCallVectorIntObject() { return new testCallVectorIntObject(); }
EXPORT auto td_bridge_obj_testCallVectorIntObject_x(testCallVectorIntObject *obj) { return &obj->x_; }

EXPORT testCallVectorString *td_bridge_newobj_testCallVectorString() { return new testCallVectorString(); }
EXPORT auto td_bridge_obj_testCallVectorString_x(testCallVectorString *obj) { return &obj->x_; }

EXPORT testCallVectorStringObject *td_bridge_newobj_testCallVectorStringObject() { return new testCallVectorStringObject(); }
EXPORT auto td_bridge_obj_testCallVectorStringObject_x(testCallVectorStringObject *obj) { return &obj->x_; }

EXPORT testSquareInt *td_bridge_newobj_testSquareInt() { return new testSquareInt(); }
EXPORT auto td_bridge_obj_testSquareInt_x(testSquareInt *obj) { return &obj->x_; }

EXPORT testNetwork *td_bridge_newobj_testNetwork() { return new testNetwork(); }

EXPORT testGetDifference *td_bridge_newobj_testGetDifference() { return new testGetDifference(); }

EXPORT testUseUpdate *td_bridge_newobj_testUseUpdate() { return new testUseUpdate(); }

EXPORT testUseError *td_bridge_newobj_testUseError() { return new testUseError(); }

