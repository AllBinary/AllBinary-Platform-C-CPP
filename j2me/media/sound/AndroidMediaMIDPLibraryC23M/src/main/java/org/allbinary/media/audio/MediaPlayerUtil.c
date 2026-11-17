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
#include "android/media/MediaPlayer.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct MediaPlayerUtil MediaPlayerUtil;
struct MediaPlayerUtil {
    LogUtil* logUtil;
};

static MediaPlayerUtil* MediaPlayerUtil_instance;

MediaPlayerUtil* MediaPlayerUtil_new(void);
MediaPlayerUtil* MediaPlayerUtil_getInstance(void);
void MediaPlayerUtil_waitForMediaPlayer(MediaPlayerUtil* this, MediaPlayer* mediaPlayer);

// Static fields with runtime initializers: call this once at startup
void MediaPlayerUtil_staticInit(void) {
    MediaPlayerUtil_instance = MediaPlayerUtil_new();
}

static void MediaPlayerUtil_initFields(MediaPlayerUtil* this) {
    this->logUtil = LogUtil_getInstance();
}

void MediaPlayerUtil_init(MediaPlayerUtil* this) {
    MediaPlayerUtil_initFields(this);
}

MediaPlayerUtil* MediaPlayerUtil_new(void) {
    MediaPlayerUtil* this = calloc(1, sizeof(MediaPlayerUtil));
    MediaPlayerUtil_init(this);
    return this;
}


MediaPlayerUtil* MediaPlayerUtil_getInstance(void) {
        return MediaPlayerUtil_instance;
}


// throws Exception
void MediaPlayerUtil_waitForMediaPlayer(MediaPlayerUtil* this, MediaPlayer* mediaPlayer) {
        const char* MESSAGE = "Not Stopped Waiting";
        const char* METHOD_NAME = "wait";
        int32_t index = 0;
        while (MediaPlayer_isPlaying(mediaPlayer) && index < 50) {
            LogUtil_putF(this->logUtil, MESSAGE, this, METHOD_NAME);
            java_sleep(100);
            index++;
        }
}

