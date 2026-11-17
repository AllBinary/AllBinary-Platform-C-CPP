/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.media.audio

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/media/MediaException.h"
// #include "javax/microedition/media/Player.h"
// #include "javax/microedition/media/PlayerListener.h"
#include "android/media/MediaPlayer.h"
#include "org/allbinary/android/NullAndroidCanvas.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/audio/BasicPlayer.h"

typedef struct AndroidMediaPlayerWrapper AndroidMediaPlayerWrapper;
struct AndroidMediaPlayerWrapper {
    BasicPlayer base;
    LogUtil* logUtil;
    MediaPlayer* mediaPlayer;
};

AndroidMediaPlayerWrapper* AndroidMediaPlayerWrapper_NULL_ANDROID_MEDIA_PLAYER_WRAPPER;

AndroidMediaPlayerWrapper* AndroidMediaPlayerWrapper_new(const char* resource);
AndroidMediaPlayerWrapper* AndroidMediaPlayerWrapper_createPlayerWrapper(void);

void AndroidMediaPlayerWrapper_init(AndroidMediaPlayerWrapper* this, const char* resource);
void AndroidMediaPlayerWrapper_setLoopCount(AndroidMediaPlayerWrapper* this, int32_t count);
void AndroidMediaPlayerWrapper_addPlayerListener(AndroidMediaPlayerWrapper* this, PlayerListener* playerListener);
void AndroidMediaPlayerWrapper_removePlayerListener(AndroidMediaPlayerWrapper* this, PlayerListener* playerListener);
int32_t AndroidMediaPlayerWrapper_getState(AndroidMediaPlayerWrapper* this);
void AndroidMediaPlayerWrapper_close(AndroidMediaPlayerWrapper* this);
void AndroidMediaPlayerWrapper_start(AndroidMediaPlayerWrapper* this);
void AndroidMediaPlayerWrapper_stop(AndroidMediaPlayerWrapper* this);
void AndroidMediaPlayerWrapper_update(AndroidMediaPlayerWrapper* this, const char* event);
void AndroidMediaPlayerWrapper_setVolume(AndroidMediaPlayerWrapper* this, int32_t leftVolume, int32_t rightVolume);
int64_t AndroidMediaPlayerWrapper_getDuration(AndroidMediaPlayerWrapper* this);
void AndroidMediaPlayerWrapper_setMediaPlayer(AndroidMediaPlayerWrapper* this, MediaPlayer* mediaPlayer);
MediaPlayer* AndroidMediaPlayerWrapper_getMediaPlayer(AndroidMediaPlayerWrapper* this);

// Static fields with runtime initializers: call this once at startup
void AndroidMediaPlayerWrapper_staticInit(void) {
    AndroidMediaPlayerWrapper_NULL_ANDROID_MEDIA_PLAYER_WRAPPER = AndroidMediaPlayerWrapper_createPlayerWrapper();
}

static void AndroidMediaPlayerWrapper_initFields(AndroidMediaPlayerWrapper* this) {
    this->logUtil = LogUtil_getInstance();
    this->mediaPlayer = NullAndroidCanvas_NULL_MEDIA_PLAYER;
}


AndroidMediaPlayerWrapper* AndroidMediaPlayerWrapper_createPlayerWrapper(void) {
        JAVA_TRY {
            return AndroidMediaPlayerWrapper_new(StringUtil_getInstance()->EMPTY_STRING);
        } JAVA_CATCH(Exception, e) {
            java_throw(java_exception_new("RuntimeException", ""));
        } JAVA_END_TRY;
}


void AndroidMediaPlayerWrapper_init(AndroidMediaPlayerWrapper* this, const char* resource) {
    BasicPlayer_init(&this->base);
    AndroidMediaPlayerWrapper_initFields(this);
        JAVA_TRY {
            if (resource == StringUtil_getInstance()->EMPTY_STRING) {
            } else {
                ResourceUtil* resourceUtil = ResourceUtil_getInstance();
                MediaPlayer* mediaPlayer = MediaPlayer_create(ResourceUtil_getContext(resourceUtil), JAVA_CALL(ResourceUtil_getResourceId(resourceUtil, resource), intValue));
                if (mediaPlayer == nullptr) {
                    java_throw(java_exception_new("Exception", JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Failed to create media player for: "), append, resource), append, " with id: "), append, JAVA_CALL(ResourceUtil_getResourceId(resourceUtil, resource), toString)), toString)));
                }
                AndroidMediaPlayerWrapper_setMediaPlayer(this, mediaPlayer);
                MediaPlayer_setLooping(this->mediaPlayer, false);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, java_concat(java_string_of(this->commonStrings->EXCEPTION_LABEL), resource), this, this->commonStrings->CONSTRUCTOR, e);
            java_throw(e);
        } JAVA_END_TRY;
}

AndroidMediaPlayerWrapper* AndroidMediaPlayerWrapper_new(const char* resource) {
    AndroidMediaPlayerWrapper* this = calloc(1, sizeof(AndroidMediaPlayerWrapper));
    AndroidMediaPlayerWrapper_init(this, resource);
    return this;
}


void AndroidMediaPlayerWrapper_setLoopCount(AndroidMediaPlayerWrapper* this, int32_t count) {
        BasicPlayer_setLoopCount((&this->base), count);
        if (this->mediaPlayer != NullAndroidCanvas_NULL_MEDIA_PLAYER && this->mediaPlayer != nullptr) {
            if (count == 0) {
                MediaPlayer_setLooping(this->mediaPlayer, false);
            } else {
            }
        }
}


// synchronized
void AndroidMediaPlayerWrapper_addPlayerListener(AndroidMediaPlayerWrapper* this, PlayerListener* playerListener) {
        BasicPlayer_addPlayerListener((&this->base), playerListener);
}


void AndroidMediaPlayerWrapper_removePlayerListener(AndroidMediaPlayerWrapper* this, PlayerListener* playerListener) {
        BasicPlayer_removePlayerListener((&this->base), playerListener);
}


int32_t AndroidMediaPlayerWrapper_getState(AndroidMediaPlayerWrapper* this) {
        if (MediaPlayer_isPlaying(this->mediaPlayer)) {
            return Player_STARTED;
        } else {
            return Player_PREFETCHED;
        }
}


void AndroidMediaPlayerWrapper_close(AndroidMediaPlayerWrapper* this) {
        JAVA_TRY {
            MediaPlayer_release(this->mediaPlayer);
            this->mediaPlayer = NullAndroidCanvas_NULL_MEDIA_PLAYER;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CLOSE, e);
        } JAVA_END_TRY;
}


// throws MediaException
// synchronized
void AndroidMediaPlayerWrapper_start(AndroidMediaPlayerWrapper* this) {
        JAVA_TRY {
            if (MediaPlayer_isPlaying(this->mediaPlayer)) {
                MediaPlayer_pause(this->mediaPlayer);
                MediaPlayer_seekTo(this->mediaPlayer, 0);
            }
            MediaPlayer_start(this->mediaPlayer);
            BasicPlayer_start((&this->base));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->START_METHOD_NAME, e);
        } JAVA_END_TRY;
}


// throws MediaException
// synchronized
void AndroidMediaPlayerWrapper_stop(AndroidMediaPlayerWrapper* this) {
        JAVA_TRY {
            MediaPlayer_stop(this->mediaPlayer);
            MediaPlayer_prepare(this->mediaPlayer);
            BasicPlayer_stop((&this->base));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "stop", e);
        } JAVA_END_TRY;
}


void AndroidMediaPlayerWrapper_update(AndroidMediaPlayerWrapper* this, const char* event) {
        LogUtil_putF(this->logUtil, java_concat("LineEvent: ", event), this, this->commonStrings->UPDATE);
        int32_t size = JAVA_CALL(this->listenersList, size);
        for (int32_t index = 0; index < size; index++) {
            PlayerListener* listener = ((PlayerListener*) this->listenersList->objectArray[index]);
            PlayerListener_playerUpdate(listener, this, event, NullUtil_getInstance()->NULL_OBJECT);
        }
}


void AndroidMediaPlayerWrapper_setVolume(AndroidMediaPlayerWrapper* this, int32_t leftVolume, int32_t rightVolume) {
        MediaPlayer_setVolume(this->mediaPlayer, (((float) leftVolume)) / 100.0f, (((float) rightVolume)) / 100.0f);
}


int64_t AndroidMediaPlayerWrapper_getDuration(AndroidMediaPlayerWrapper* this) {
        return ((int64_t) MediaPlayer_getDuration(this->mediaPlayer));
}


void AndroidMediaPlayerWrapper_setMediaPlayer(AndroidMediaPlayerWrapper* this, MediaPlayer* mediaPlayer) {
        this->mediaPlayer = mediaPlayer;
}


MediaPlayer* AndroidMediaPlayerWrapper_getMediaPlayer(AndroidMediaPlayerWrapper* this) {
        return this->mediaPlayer;
}

