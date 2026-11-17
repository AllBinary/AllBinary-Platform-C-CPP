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
#include "org/allbinary/thread/ARunnable.h"
// #include "java/io/ByteArrayInputStream.h"
// #include "java/io/InputStream.h"
// #include "javax/microedition/media/Control.h"
// #include "javax/microedition/media/MediaException.h"
// #include "javax/microedition/media/PlayerListener.h"
// #include "javax/sound/sampled/AudioInputStream.h"
// #include "javax/sound/sampled/AudioSystem.h"
// #include "javax/sound/sampled/Clip.h"
// #include "javax/sound/sampled/FloatControl.h"
// #include "javax/sound/sampled/LineEvent.h"
// #include "javax/sound/sampled/LineListener.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/thread/MusicThreadPool.h"
#include "org/allbinary/media/audio/BasicPlayer.h"

typedef struct PCClipWavPlayer PCClipWavPlayer;
struct PCClipWavPlayer {
    BasicPlayer base;
    LineListener LineListener_interface;
    LogUtil* logUtil;
    AudioInputStream* audioInputStream;
    Clip* clip;
};


PCClipWavPlayer* PCClipWavPlayer_new(InputStream* inputStream);

void PCClipWavPlayer_init(PCClipWavPlayer* this, InputStream* inputStream);
void PCClipWavPlayer_close(PCClipWavPlayer* this);
static void PCClipWavPlayer_close2(PCClipWavPlayer* this);
const char* PCClipWavPlayer_getContentType(PCClipWavPlayer* this);
void PCClipWavPlayer_start(PCClipWavPlayer* this);
static void PCClipWavPlayer_start2(PCClipWavPlayer* this);
static Clip* PCClipWavPlayer_create(PCClipWavPlayer* this, AudioInputStream* audioInputStream);
void PCClipWavPlayer_stop(PCClipWavPlayer* this);
static void PCClipWavPlayer_stop2(PCClipWavPlayer* this);
Control* PCClipWavPlayer_getControl(PCClipWavPlayer* this, const char* controlType);
Control** PCClipWavPlayer_getControls(PCClipWavPlayer* this);
void PCClipWavPlayer_setVolume(PCClipWavPlayer* this, int32_t leftVolume, int32_t rightVolume);
static float PCClipWavPlayer_getVolume(PCClipWavPlayer* this);
static void PCClipWavPlayer_setVolumeF(PCClipWavPlayer* this, float volume);
int64_t PCClipWavPlayer_getDuration(PCClipWavPlayer* this);
void PCClipWavPlayer_update(PCClipWavPlayer* this, LineEvent* event);

static void PCClipWavPlayer_initFields(PCClipWavPlayer* this) {
    this->logUtil = LogUtil_getInstance();
    
    
}


void PCClipWavPlayer_init(PCClipWavPlayer* this, InputStream* inputStream) {
    BasicPlayer_init(&this->base);
    PCClipWavPlayer_initFields(this);
        AudioInputStream* audioInputStream = AudioInputStream_new(ByteArrayInputStream_new(NullUtil_getInstance()->NULL_BYTE_ARRAY), NullAudioFormat_NULL_AUDIO_FORMAT, 0);
        Clip* clip = NullClip_new();
        JAVA_TRY {
            audioInputStream = AudioSystem_getAudioInputStream(inputStream);
            clip = PCClipWavPlayer_create(this, audioInputStream);
            if (clip == nullptr) {
                LogUtil_put(this->logUtil, "Clip was null", this, this->commonStrings->CONSTRUCTOR, java_exception_new("Exception", ""));
                java_throw(java_exception_new("RuntimeException", ""));
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
        this->audioInputStream = audioInputStream;
        this->clip = clip;
}

PCClipWavPlayer* PCClipWavPlayer_new(InputStream* inputStream) {
    PCClipWavPlayer* this = calloc(1, sizeof(PCClipWavPlayer));
    PCClipWavPlayer_init(this, inputStream);
    return this;
}


void PCClipWavPlayer_close(PCClipWavPlayer* this) {
        MusicThreadPool_runTask(MusicThreadPool_getInstance(), ARunnable_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void PCClipWavPlayer_run(PCClipWavPlayer* this) {
                JAVA_TRY {
                    PCClipWavPlayer_close2(this);
                } JAVA_CATCH(Exception, e) {
                    PreLogUtil_putOE(this->base.commonStrings->EXCEPTION, this, this->base.commonStrings->PROCESS, e);
                } JAVA_END_TRY;
        }
#endif
);
}


// throws Exception
static void PCClipWavPlayer_close2(PCClipWavPlayer* this) {
        Clip_drain(this->clip);
        Clip_flush(this->clip);
        Clip_close(this->clip);
}


const char* PCClipWavPlayer_getContentType(PCClipWavPlayer* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


// throws MediaException
// synchronized
void PCClipWavPlayer_start(PCClipWavPlayer* this) {
        MusicThreadPool_runTask(MusicThreadPool_getInstance(), ARunnable_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void PCClipWavPlayer_run(PCClipWavPlayer* this) {
                JAVA_TRY {
                    PCClipWavPlayer_start2(this);
                } JAVA_CATCH(Exception, e) {
                    PreLogUtil_putOE(this->base.commonStrings->EXCEPTION, this, this->base.commonStrings->PROCESS, e);
                } JAVA_END_TRY;
        }
#endif
);
}


// throws Exception
static void PCClipWavPlayer_start2(PCClipWavPlayer* this) {
        Clip_setFramePosition(this->clip, 0);
        Clip_loop(this->clip, PCClipWavPlayer_getLoopCount(this));
        Clip_start(this->clip);
        BasicPlayer_start((&this->base));
}


// throws Exception
static Clip* PCClipWavPlayer_create(PCClipWavPlayer* this, AudioInputStream* audioInputStream) {
        Clip* clip = AudioSystem_getClip();
        Clip_addLineListener(clip, this);
        Clip_open(clip, audioInputStream);
        return clip;
}


// throws MediaException
// synchronized
void PCClipWavPlayer_stop(PCClipWavPlayer* this) {
        MusicThreadPool_runTask(MusicThreadPool_getInstance(), ARunnable_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void PCClipWavPlayer_run(PCClipWavPlayer* this) {
                JAVA_TRY {
                    PCClipWavPlayer_stop2(this);
                } JAVA_CATCH(Exception, e) {
                    PreLogUtil_putOE(this->base.commonStrings->EXCEPTION, this, this->base.commonStrings->PROCESS, e);
                } JAVA_END_TRY;
        }
#endif
);
}


// throws Exception
static void PCClipWavPlayer_stop2(PCClipWavPlayer* this) {
        Clip_stop(this->clip);
        BasicPlayer_stop((&this->base));
}


Control* PCClipWavPlayer_getControl(PCClipWavPlayer* this, const char* controlType) {
        return NullControl_new();
}


Control** PCClipWavPlayer_getControls(PCClipWavPlayer* this) {
        return ((Control**) java_array_new(sizeof(Control*), 0));
}


void PCClipWavPlayer_setVolume(PCClipWavPlayer* this, int32_t leftVolume, int32_t rightVolume) {
        PCClipWavPlayer_setVolumeF(this, (((float) leftVolume)) / 100.0f);
}


static float PCClipWavPlayer_getVolume(PCClipWavPlayer* this) {
        FloatControl* masterGainFloatControl = ((FloatControl*) Clip_getControl(this->clip, FloatControl_Type->MASTER_GAIN));
        return ((float) pow(10.0f, FloatControl_getValue(masterGainFloatControl) / 20.0f));
}


static void PCClipWavPlayer_setVolumeF(PCClipWavPlayer* this, float volume) {
        if (volume < 0.0f || volume > 1.0f) {
            java_throw(java_exception_new("IllegalArgumentException", java_concat("Volume: ", java_string_of(volume))));
        }
        FloatControl* masterGainFloatControl = ((FloatControl*) Clip_getControl(this->clip, FloatControl_Type->MASTER_GAIN));
        FloatControl_setValue(masterGainFloatControl, 20.0f * ((float) log10(volume)));
}


int64_t PCClipWavPlayer_getDuration(PCClipWavPlayer* this) {
        return Clip_getMicrosecondLength(this->clip) / 1000;
}


void PCClipWavPlayer_update(PCClipWavPlayer* this, LineEvent* event) {
        if (JAVA_CALL(LineEvent_getType(event), equals, LineEvent_Type->STOP)) {
            int32_t size = JAVA_CALL(this->listenersList, size);
            for (int32_t index = 0; index < size; index++) {
                PlayerListener* listener = ((PlayerListener*) JAVA_CALL(this->listenersList, get, size));
                PlayerListener_playerUpdate(listener, this, PlayerListener_END_OF_MEDIA, nullptr);
            }
        }
}

