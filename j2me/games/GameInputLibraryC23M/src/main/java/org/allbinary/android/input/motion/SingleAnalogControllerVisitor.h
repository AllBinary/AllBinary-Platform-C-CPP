#ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_SINGLEANALOGCONTROLLERVISITOR_H
#define ORG_ALLBINARY_ANDROID_INPUT_MOTION_SINGLEANALOGCONTROLLERVISITOR_H
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
// package org.allbinary.android.input.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AnalogControllerVisitor AnalogControllerVisitor;
typedef struct AnalogLocationInputProcessor AnalogLocationInputProcessor;
typedef struct AnalogLocationInput AnalogLocationInput;
typedef struct AnalogLocationInputFactory AnalogLocationInputFactory;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#include "org/allbinary/android/input/motion/AnalogControllerVisitor.h"

typedef struct SingleAnalogControllerVisitor SingleAnalogControllerVisitor;
struct SingleAnalogControllerVisitor {
    AnalogControllerVisitor base;
    int32_t playerInputId;
};


SingleAnalogControllerVisitor* SingleAnalogControllerVisitor_new(int32_t playerInputId);

void SingleAnalogControllerVisitor_init(SingleAnalogControllerVisitor* this, int32_t playerInputId);

void SingleAnalogControllerVisitor_process(SingleAnalogControllerVisitor* this, AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInputProcessor* analogLocationInputProcessor);
#define SingleAnalogControllerVisitor_new1 SingleAnalogControllerVisitor_new
#define SingleAnalogControllerVisitor_init1 SingleAnalogControllerVisitor_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SingleAnalogControllerVisitor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SingleAnalogControllerVisitor_register(void);


#endif // ORG_ALLBINARY_ANDROID_INPUT_MOTION_SINGLEANALOGCONTROLLERVISITOR_H
