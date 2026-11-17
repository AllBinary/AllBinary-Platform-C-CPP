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
// #include "javax/microedition/media/PlayerListener.h"
#include "android/media/MediaPlayer.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct AndroidMediaPlayerWrapperListener AndroidMediaPlayerWrapperListener;
struct AndroidMediaPlayerWrapperListener {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    AndroidMediaPlayerWrapper* androidMediaPlayerWrapper;
    OnBufferingUpdateListener* mOnBufferingUpdateListener;
    OnPreparedListener* mOnPreparedListener;
    OnErrorListener* mOnErrorListener;
    OnCompletionListener* mOnCompletionListener;
};


AndroidMediaPlayerWrapperListener* AndroidMediaPlayerWrapperListener_new(AndroidMediaPlayerWrapper* androidMediaPlayerWrapper);

void AndroidMediaPlayerWrapperListener_init(AndroidMediaPlayerWrapperListener* this, AndroidMediaPlayerWrapper* androidMediaPlayerWrapper);

static void AndroidMediaPlayerWrapperListener_initFields(AndroidMediaPlayerWrapperListener* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->androidMediaPlayerWrapper = AndroidMediaPlayerWrapper_NULL_ANDROID_MEDIA_PLAYER_WRAPPER;
    this->mOnBufferingUpdateListener = AndroidMediaPlayerOnBufferingUpdateListener_new(this);
    this->mOnPreparedListener = AndroidMediaPlayerOnPreparedListener_new(this);
    this->mOnErrorListener = AndroidMediaPlayerOnErrorListener_new(this);
    this->mOnCompletionListener = AndroidMediaPlayerOnCompletionListener_new(this);
}


void AndroidMediaPlayerWrapperListener_init(AndroidMediaPlayerWrapperListener* this, AndroidMediaPlayerWrapper* androidMediaPlayerWrapper) {
    AndroidMediaPlayerWrapperListener_initFields(this);
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
            this->androidMediaPlayerWrapper = androidMediaPlayerWrapper;
            MediaPlayer* mediaPlayer = AndroidMediaPlayerWrapper_getMediaPlayer(androidMediaPlayerWrapper);
            MediaPlayer_setOnCompletionListener(mediaPlayer, this->mOnCompletionListener);
            MediaPlayer_setOnBufferingUpdateListener(mediaPlayer, this->mOnBufferingUpdateListener);
            MediaPlayer_setOnPreparedListener(mediaPlayer, this->mOnPreparedListener);
            MediaPlayer_setOnErrorListener(mediaPlayer, this->mOnErrorListener);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

AndroidMediaPlayerWrapperListener* AndroidMediaPlayerWrapperListener_new(AndroidMediaPlayerWrapper* androidMediaPlayerWrapper) {
    AndroidMediaPlayerWrapperListener* this = calloc(1, sizeof(AndroidMediaPlayerWrapperListener));
    AndroidMediaPlayerWrapperListener_init(this, androidMediaPlayerWrapper);
    return this;
}

typedef struct MediaPlayerOnBufferingUpdateListener MediaPlayerOnBufferingUpdateListener;
struct MediaPlayerOnBufferingUpdateListener {
    OnBufferingUpdateListener OnBufferingUpdateListener_interface;
};


MediaPlayerOnBufferingUpdateListener* MediaPlayerOnBufferingUpdateListener_new(void);
    void AndroidMediaPlayerWrapperListener_onBufferingUpdate(AndroidMediaPlayerWrapperListener* this, MediaPlayer* mediaPlayer, int32_t i);

void MediaPlayerOnBufferingUpdateListener_init(MediaPlayerOnBufferingUpdateListener* this) {
}

MediaPlayerOnBufferingUpdateListener* MediaPlayerOnBufferingUpdateListener_new(void) {
    MediaPlayerOnBufferingUpdateListener* this = calloc(1, sizeof(MediaPlayerOnBufferingUpdateListener));
    MediaPlayerOnBufferingUpdateListener_init(this);
    return this;
}
    

    void AndroidMediaPlayerWrapperListener_onBufferingUpdate(AndroidMediaPlayerWrapperListener* this, MediaPlayer* mediaPlayer, int32_t i) {
    }

typedef struct MediaPlayerOnPreparedListener MediaPlayerOnPreparedListener;
struct MediaPlayerOnPreparedListener {
    OnPreparedListener OnPreparedListener_interface;
};


MediaPlayerOnPreparedListener* MediaPlayerOnPreparedListener_new(void);
    void AndroidMediaPlayerWrapperListener_onPrepared(AndroidMediaPlayerWrapperListener* this, MediaPlayer* mp);

void MediaPlayerOnPreparedListener_init(MediaPlayerOnPreparedListener* this) {
}

MediaPlayerOnPreparedListener* MediaPlayerOnPreparedListener_new(void) {
    MediaPlayerOnPreparedListener* this = calloc(1, sizeof(MediaPlayerOnPreparedListener));
    MediaPlayerOnPreparedListener_init(this);
    return this;
}
    

    void AndroidMediaPlayerWrapperListener_onPrepared(AndroidMediaPlayerWrapperListener* this, MediaPlayer* mp) {
    }

typedef struct MediaPlayerOnErrorListener MediaPlayerOnErrorListener;
struct MediaPlayerOnErrorListener {
    OnErrorListener OnErrorListener_interface;
};


MediaPlayerOnErrorListener* MediaPlayerOnErrorListener_new(void);
    bool AndroidMediaPlayerWrapperListener_onError(AndroidMediaPlayerWrapperListener* this, MediaPlayer* mp, int32_t what, int32_t extra);

void MediaPlayerOnErrorListener_init(MediaPlayerOnErrorListener* this) {
}

MediaPlayerOnErrorListener* MediaPlayerOnErrorListener_new(void) {
    MediaPlayerOnErrorListener* this = calloc(1, sizeof(MediaPlayerOnErrorListener));
    MediaPlayerOnErrorListener_init(this);
    return this;
}
    

    bool AndroidMediaPlayerWrapperListener_onError(AndroidMediaPlayerWrapperListener* this, MediaPlayer* mp, int32_t what, int32_t extra) {
            return false;
    }

typedef struct MediaPlayerOnCompletionListener MediaPlayerOnCompletionListener;
struct MediaPlayerOnCompletionListener {
    OnCompletionListener OnCompletionListener_interface;
};


MediaPlayerOnCompletionListener* MediaPlayerOnCompletionListener_new(void);
    void AndroidMediaPlayerWrapperListener_onCompletion(AndroidMediaPlayerWrapperListener* this, MediaPlayer* mp);

void MediaPlayerOnCompletionListener_init(MediaPlayerOnCompletionListener* this) {
}

MediaPlayerOnCompletionListener* MediaPlayerOnCompletionListener_new(void) {
    MediaPlayerOnCompletionListener* this = calloc(1, sizeof(MediaPlayerOnCompletionListener));
    MediaPlayerOnCompletionListener_init(this);
    return this;
}
    

    void AndroidMediaPlayerWrapperListener_onCompletion(AndroidMediaPlayerWrapperListener* this, MediaPlayer* mp) {
    }

typedef struct AndroidMediaPlayerOnBufferingUpdateListener AndroidMediaPlayerOnBufferingUpdateListener;
struct AndroidMediaPlayerOnBufferingUpdateListener {
    MediaPlayerOnBufferingUpdateListener base;
    const char* ON_BUFFERING_UPDATE;
    AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener;
};


AndroidMediaPlayerOnBufferingUpdateListener* AndroidMediaPlayerOnBufferingUpdateListener_new(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener);
    
    void AndroidMediaPlayerWrapperListener_init(AndroidMediaPlayerWrapperListener* this, AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener);
    void AndroidMediaPlayerWrapperListener_onBufferingUpdate(AndroidMediaPlayerWrapperListener* this, MediaPlayer* mediaPlayer, int32_t i);

static void AndroidMediaPlayerOnBufferingUpdateListener_initFields(AndroidMediaPlayerOnBufferingUpdateListener* this) {
        this->ON_BUFFERING_UPDATE = "onBufferingUpdate()";
        
}
    

    void AndroidMediaPlayerWrapperListener_init(AndroidMediaPlayerWrapperListener* this, AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener) {
    MediaPlayerOnBufferingUpdateListener_init(&this->base);
        AndroidMediaPlayerWrapperListener_initFields(this);
            this->androidMediaPlayerWrapperListener = androidMediaPlayerWrapperListener;
    }

    AndroidMediaPlayerWrapperListener* AndroidMediaPlayerWrapperListener_new(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener) {
        AndroidMediaPlayerWrapperListener* this = calloc(1, sizeof(AndroidMediaPlayerWrapperListener));
        AndroidMediaPlayerWrapperListener_init(this, androidMediaPlayerWrapperListener);
        return this;
    }
    

    void AndroidMediaPlayerWrapperListener_onBufferingUpdate(AndroidMediaPlayerWrapperListener* this, MediaPlayer* mediaPlayer, int32_t i) {
            LogUtil* logUtil = LogUtil_getInstance();
            LogUtil_putF(logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Update buffer: "), appendint, i), append, "%"), toString), this, this->ON_BUFFERING_UPDATE);
            JAVA_CALL(this->androidMediaPlayerWrapperListener->androidMediaPlayerWrapper, update, PlayerListener_DEVICE_UNAVAILABLE);
    }

typedef struct AndroidMediaPlayerOnPreparedListener AndroidMediaPlayerOnPreparedListener;
struct AndroidMediaPlayerOnPreparedListener {
    MediaPlayerOnPreparedListener base;
    const char* ON_PREPARE;
    AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener;
};


AndroidMediaPlayerOnPreparedListener* AndroidMediaPlayerOnPreparedListener_new(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener);
    
    void AndroidMediaPlayerWrapperListener_init(AndroidMediaPlayerWrapperListener* this, AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener);
    void AndroidMediaPlayerWrapperListener_onPrepared(AndroidMediaPlayerWrapperListener* this, MediaPlayer* mp);

static void AndroidMediaPlayerOnPreparedListener_initFields(AndroidMediaPlayerOnPreparedListener* this) {
        this->ON_PREPARE = "onPrepare()";
        
}
    

    void AndroidMediaPlayerWrapperListener_init(AndroidMediaPlayerWrapperListener* this, AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener) {
    MediaPlayerOnPreparedListener_init(&this->base);
        AndroidMediaPlayerWrapperListener_initFields(this);
            this->androidMediaPlayerWrapperListener = androidMediaPlayerWrapperListener;
    }

    AndroidMediaPlayerWrapperListener* AndroidMediaPlayerWrapperListener_new(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener) {
        AndroidMediaPlayerWrapperListener* this = calloc(1, sizeof(AndroidMediaPlayerWrapperListener));
        AndroidMediaPlayerWrapperListener_init(this, androidMediaPlayerWrapperListener);
        return this;
    }
    

    void AndroidMediaPlayerWrapperListener_onPrepared(AndroidMediaPlayerWrapperListener* this, MediaPlayer* mp) {
            LogUtil* logUtil = LogUtil_getInstance();
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(logUtil, commonStrings->START, this, this->ON_PREPARE);
            JAVA_CALL(this->androidMediaPlayerWrapperListener->androidMediaPlayerWrapper, update, PlayerListener_DEVICE_AVAILABLE);
    }

typedef struct AndroidMediaPlayerOnErrorListener AndroidMediaPlayerOnErrorListener;
struct AndroidMediaPlayerOnErrorListener {
    MediaPlayerOnErrorListener base;
    const char* ON_ERROR;
    AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener;
};


AndroidMediaPlayerOnErrorListener* AndroidMediaPlayerOnErrorListener_new(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener);
    
    void AndroidMediaPlayerWrapperListener_init(AndroidMediaPlayerWrapperListener* this, AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener);
    bool AndroidMediaPlayerWrapperListener_onError(AndroidMediaPlayerWrapperListener* this, MediaPlayer* mp, int32_t what, int32_t extra);

static void AndroidMediaPlayerOnErrorListener_initFields(AndroidMediaPlayerOnErrorListener* this) {
        this->ON_ERROR = "onError()";
        
}
    

    void AndroidMediaPlayerWrapperListener_init(AndroidMediaPlayerWrapperListener* this, AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener) {
    MediaPlayerOnErrorListener_init(&this->base);
        AndroidMediaPlayerWrapperListener_initFields(this);
            this->androidMediaPlayerWrapperListener = androidMediaPlayerWrapperListener;
    }

    AndroidMediaPlayerWrapperListener* AndroidMediaPlayerWrapperListener_new(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener) {
        AndroidMediaPlayerWrapperListener* this = calloc(1, sizeof(AndroidMediaPlayerWrapperListener));
        AndroidMediaPlayerWrapperListener_init(this, androidMediaPlayerWrapperListener);
        return this;
    }
    

    bool AndroidMediaPlayerWrapperListener_onError(AndroidMediaPlayerWrapperListener* this, MediaPlayer* mp, int32_t what, int32_t extra) {
            LogUtil* logUtil = LogUtil_getInstance();
            LogUtil_putF(logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), append, "What: "), appendint, what), append, " Extra: "), appendint, extra), toString), this, this->ON_ERROR);
            JAVA_CALL(this->androidMediaPlayerWrapperListener->androidMediaPlayerWrapper, update, PlayerListener_ERROR);
            return true;
    }

typedef struct AndroidMediaPlayerOnCompletionListener AndroidMediaPlayerOnCompletionListener;
struct AndroidMediaPlayerOnCompletionListener {
    MediaPlayerOnCompletionListener base;
    const char* ON_COMPLETE;
    AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener;
};


AndroidMediaPlayerOnCompletionListener* AndroidMediaPlayerOnCompletionListener_new(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener);
    
    void AndroidMediaPlayerWrapperListener_init(AndroidMediaPlayerWrapperListener* this, AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener);
    void AndroidMediaPlayerWrapperListener_onCompletion(AndroidMediaPlayerWrapperListener* this, MediaPlayer* mp);

static void AndroidMediaPlayerOnCompletionListener_initFields(AndroidMediaPlayerOnCompletionListener* this) {
        this->ON_COMPLETE = "onComplete()";
        
}
    

    void AndroidMediaPlayerWrapperListener_init(AndroidMediaPlayerWrapperListener* this, AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener) {
    MediaPlayerOnCompletionListener_init(&this->base);
        AndroidMediaPlayerWrapperListener_initFields(this);
            this->androidMediaPlayerWrapperListener = androidMediaPlayerWrapperListener;
    }

    AndroidMediaPlayerWrapperListener* AndroidMediaPlayerWrapperListener_new(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener) {
        AndroidMediaPlayerWrapperListener* this = calloc(1, sizeof(AndroidMediaPlayerWrapperListener));
        AndroidMediaPlayerWrapperListener_init(this, androidMediaPlayerWrapperListener);
        return this;
    }
    

    void AndroidMediaPlayerWrapperListener_onCompletion(AndroidMediaPlayerWrapperListener* this, MediaPlayer* mp) {
            LogUtil* logUtil = LogUtil_getInstance();
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(logUtil, commonStrings->START, this, this->ON_COMPLETE);
            JAVA_CALL(this->androidMediaPlayerWrapperListener->androidMediaPlayerWrapper, update, PlayerListener_END_OF_MEDIA);
    }

