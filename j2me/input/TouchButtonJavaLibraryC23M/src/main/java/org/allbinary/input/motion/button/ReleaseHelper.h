#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_RELEASEHELPER_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_RELEASEHELPER_H
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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct TouchButtonRecognizer TouchButtonRecognizer;
typedef struct TouchButtonInput TouchButtonInput;
typedef struct GameKeyEvent GameKeyEvent;
#if __has_include("org/allbinary/input/motion/button/TouchButtonRecognizer.h")
#include "org/allbinary/input/motion/button/TouchButtonRecognizer.h"
#endif

typedef struct ReleaseHelper ReleaseHelper;
struct ReleaseHelper {
    TouchButtonRecognizer* touchButtonRecognizer;
};


ReleaseHelper* ReleaseHelper_new(TouchButtonRecognizer* touchButtonRecognizer);

void ReleaseHelper_init(ReleaseHelper* this, TouchButtonRecognizer* touchButtonRecognizer);

void ReleaseHelper_release(ReleaseHelper* this, TouchButtonInput* touchButtonInput, int32_t deviceId);
#define ReleaseHelper_new1 ReleaseHelper_new
#define ReleaseHelper_init1 ReleaseHelper_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ReleaseHelper_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ReleaseHelper_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_RELEASEHELPER_H
