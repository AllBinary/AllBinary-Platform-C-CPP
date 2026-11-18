#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_MULTITOUCHRELEASEHELPER_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_MULTITOUCHRELEASEHELPER_H
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
typedef struct ReleaseHelper ReleaseHelper;
typedef struct TouchButtonRecognizer TouchButtonRecognizer;
typedef struct CancelTouchButtonInputFactory CancelTouchButtonInputFactory;
typedef struct TouchButtonInput TouchButtonInput;
typedef struct GameKeyEvent GameKeyEvent;
#include "org/allbinary/input/motion/button/ReleaseHelper.h"

typedef struct MultitouchReleaseHelper MultitouchReleaseHelper;
struct MultitouchReleaseHelper {
    ReleaseHelper base;
};


MultitouchReleaseHelper* MultitouchReleaseHelper_new(TouchButtonRecognizer* touchButtonRecognizer);

void MultitouchReleaseHelper_init(MultitouchReleaseHelper* this, TouchButtonRecognizer* touchButtonRecognizer);

void MultitouchReleaseHelper_release(MultitouchReleaseHelper* this, TouchButtonInput* touchButtonInput, int32_t deviceId);
#define MultitouchReleaseHelper_new1 MultitouchReleaseHelper_new
#define MultitouchReleaseHelper_init1 MultitouchReleaseHelper_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MultitouchReleaseHelper_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MultitouchReleaseHelper_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_MULTITOUCHRELEASEHELPER_H
