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
// package org.allbinary.android

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/graphics/Canvas.h"
#include "android/media/MediaPlayer.h"

typedef struct NullAndroidCanvas NullAndroidCanvas;
struct NullAndroidCanvas {
    char unused;
};

Canvas* NullAndroidCanvas_NULL_CANVAS;
MediaPlayer* NullAndroidCanvas_NULL_MEDIA_PLAYER;

NullAndroidCanvas* NullAndroidCanvas_new(void);

// Static fields with runtime initializers: call this once at startup
void NullAndroidCanvas_staticInit(void) {
    NullAndroidCanvas_NULL_CANVAS = Canvas_new();
    NullAndroidCanvas_NULL_MEDIA_PLAYER = MediaPlayer_new();
}

void NullAndroidCanvas_init(NullAndroidCanvas* this) {
}

NullAndroidCanvas* NullAndroidCanvas_new(void) {
    NullAndroidCanvas* this = calloc(1, sizeof(NullAndroidCanvas));
    NullAndroidCanvas_init(this);
    return this;
}

