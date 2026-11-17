/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// #include "java/io/IOException.h"
// #include "javax/sound/sampled/AudioFormat.h"
// #include "javax/sound/sampled/AudioInputStream.h"
// #include "javax/sound/sampled/BooleanControl.h"
// #include "javax/sound/sampled/Clip.h"
// #include "javax/sound/sampled/Control.h"
// #include "javax/sound/sampled/Control/Type.h"
// #include "javax/sound/sampled/Line/Info.h"
// #include "javax/sound/sampled/LineListener.h"
// #include "javax/sound/sampled/LineUnavailableException.h"

typedef struct NullClip NullClip;
struct NullClip {
    Clip Clip_interface;
};

NullJ2SEControl* NullClip_NULL_CONTROL;

NullClip* NullClip_new(void);
void NullClip_open(NullClip* this, AudioFormat* format, int8_t* data, int32_t offset, int32_t bufferSize);
void NullClip_open(NullClip* this, AudioInputStream* stream);
int32_t NullClip_getFrameLength(NullClip* this);
int64_t NullClip_getMicrosecondLength(NullClip* this);
void NullClip_setFramePosition(NullClip* this, int32_t frames);
void NullClip_setMicrosecondPosition(NullClip* this, int64_t microseconds);
void NullClip_setLoopPoints(NullClip* this, int32_t start, int32_t end);
void NullClip_loop(NullClip* this, int32_t count);
void NullClip_drain(NullClip* this);
void NullClip_flush(NullClip* this);
void NullClip_start(NullClip* this);
void NullClip_stop(NullClip* this);
bool NullClip_isRunning(NullClip* this);
bool NullClip_isActive(NullClip* this);
AudioFormat* NullClip_getFormat(NullClip* this);
int32_t NullClip_getBufferSize(NullClip* this);
int32_t NullClip_available(NullClip* this);
int32_t NullClip_getFramePosition(NullClip* this);
int64_t NullClip_getLongFramePosition(NullClip* this);
int64_t NullClip_getMicrosecondPosition(NullClip* this);
float NullClip_getLevel(NullClip* this);
Info* NullClip_getLineInfo(NullClip* this);
void NullClip_open(NullClip* this);
void NullClip_close(NullClip* this);
bool NullClip_isOpen(NullClip* this);
Control** NullClip_getControls(NullClip* this);
bool NullClip_isControlSupported(NullClip* this, Type* control);
Control* NullClip_getControl(NullClip* this, Type* control);
void NullClip_addLineListener(NullClip* this, LineListener* listener);
void NullClip_removeLineListener(NullClip* this, LineListener* listener);

// Static fields with runtime initializers: call this once at startup
void NullClip_staticInit(void) {
    NullClip_NULL_CONTROL = NullJ2SEControl_new(BooleanControl_Type->MUTE);
}

void NullClip_init(NullClip* this) {
}

NullClip* NullClip_new(void) {
    NullClip* this = calloc(1, sizeof(NullClip));
    NullClip_init(this);
    return this;
}


// throws LineUnavailableException
void NullClip_open(NullClip* this, AudioFormat* format, int8_t* data, int32_t offset, int32_t bufferSize) {
}


// throws LineUnavailableException, IOException
// Java overloaded method: C needs a different name
void NullClip_open(NullClip* this, AudioInputStream* stream) {
}


int32_t NullClip_getFrameLength(NullClip* this) {
        return 0;
}


int64_t NullClip_getMicrosecondLength(NullClip* this) {
        return 0LL;
}


void NullClip_setFramePosition(NullClip* this, int32_t frames) {
}


void NullClip_setMicrosecondPosition(NullClip* this, int64_t microseconds) {
}


void NullClip_setLoopPoints(NullClip* this, int32_t start, int32_t end) {
}


void NullClip_loop(NullClip* this, int32_t count) {
}


void NullClip_drain(NullClip* this) {
}


void NullClip_flush(NullClip* this) {
}


void NullClip_start(NullClip* this) {
}


void NullClip_stop(NullClip* this) {
}


bool NullClip_isRunning(NullClip* this) {
        return false;
}


bool NullClip_isActive(NullClip* this) {
        return false;
}


AudioFormat* NullClip_getFormat(NullClip* this) {
        return NullAudioFormat_NULL_AUDIO_FORMAT;
}


int32_t NullClip_getBufferSize(NullClip* this) {
        return 0;
}


int32_t NullClip_available(NullClip* this) {
        return 0;
}


int32_t NullClip_getFramePosition(NullClip* this) {
        return 0;
}


int64_t NullClip_getLongFramePosition(NullClip* this) {
        return 0LL;
}


int64_t NullClip_getMicrosecondPosition(NullClip* this) {
        return 0LL;
}


float NullClip_getLevel(NullClip* this) {
        return 0.0f;
}


Info* NullClip_getLineInfo(NullClip* this) {
        return Info_new(java_class_of(this), NullAudioFormat_NULL_AUDIO_FORMAT);
}


// throws LineUnavailableException
// Java overloaded method: C needs a different name
void NullClip_open(NullClip* this) {
}


void NullClip_close(NullClip* this) {
}


bool NullClip_isOpen(NullClip* this) {
        return false;
}


Control** NullClip_getControls(NullClip* this) {
        return ((Control**) java_array_new(sizeof(Control*), 0));
}


bool NullClip_isControlSupported(NullClip* this, Type* control) {
        return false;
}


Control* NullClip_getControl(NullClip* this, Type* control) {
        return NullClip_NULL_CONTROL;
}


void NullClip_addLineListener(NullClip* this, LineListener* listener) {
}


void NullClip_removeLineListener(NullClip* this, LineListener* listener) {
}

