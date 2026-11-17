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
// package org.allbinary.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ScreenCapture ScreenCapture;
struct ScreenCapture {
    char unused;
};


ScreenCapture* ScreenCapture_new(void);
void ScreenCapture_saveFrame(ScreenCapture* this);
void ScreenCapture_startRecording(ScreenCapture* this);
void ScreenCapture_endRecording(ScreenCapture* this);

void ScreenCapture_init(ScreenCapture* this) {
}

ScreenCapture* ScreenCapture_new(void) {
    ScreenCapture* this = calloc(1, sizeof(ScreenCapture));
    ScreenCapture_init(this);
    return this;
}


void ScreenCapture_saveFrame(ScreenCapture* this) {
}


void ScreenCapture_startRecording(ScreenCapture* this) {
}


void ScreenCapture_endRecording(ScreenCapture* this) {
}

