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
// #include "javax/microedition/media/Control.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/audio/BasicPlayer.h"

typedef struct NoPlayer NoPlayer;
struct NoPlayer {
    BasicPlayer base;
};

NoPlayer* NoPlayer_NO_PLAYER;

NoPlayer* NoPlayer_new(void);

void NoPlayer_init(NoPlayer* this);
void NoPlayer_close(NoPlayer* this);
const char* NoPlayer_getContentType(NoPlayer* this);
Control* NoPlayer_getControl(NoPlayer* this, const char* controlType);
Control** NoPlayer_getControls(NoPlayer* this);

// Static fields with runtime initializers: call this once at startup
void NoPlayer_staticInit(void) {
    NoPlayer_NO_PLAYER = NoPlayer_new();
}


void NoPlayer_init(NoPlayer* this) {
    BasicPlayer_init(&this->base);
}

NoPlayer* NoPlayer_new(void) {
    NoPlayer* this = calloc(1, sizeof(NoPlayer));
    NoPlayer_init(this);
    return this;
}


void NoPlayer_close(NoPlayer* this) {
}


const char* NoPlayer_getContentType(NoPlayer* this) {
        return StringUtil_getInstance()->NULL_STRING;
}


Control* NoPlayer_getControl(NoPlayer* this, const char* controlType) {
        return NullControl_new();
}


Control** NoPlayer_getControls(NoPlayer* this) {
        return ((Control**) java_array_new(sizeof(Control*), 0));
}

