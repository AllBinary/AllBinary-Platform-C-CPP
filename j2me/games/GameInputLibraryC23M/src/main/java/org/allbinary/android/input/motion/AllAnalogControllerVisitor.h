#ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_ALLANALOGCONTROLLERVISITOR_H
#define ORG_ALLBINARY_ANDROID_INPUT_MOTION_ALLANALOGCONTROLLERVISITOR_H
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
typedef struct BasicArrayList BasicArrayList;
#include "org/allbinary/android/input/motion/AnalogControllerVisitor.h"

typedef struct AllAnalogControllerVisitor AllAnalogControllerVisitor;
struct AllAnalogControllerVisitor {
    AnalogControllerVisitor base;
};


AllAnalogControllerVisitor* AllAnalogControllerVisitor_new(void);
void AllAnalogControllerVisitor_init(AllAnalogControllerVisitor* this);

void AllAnalogControllerVisitor_process(AllAnalogControllerVisitor* this, AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInputProcessor* analogLocationInputProcessor);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllAnalogControllerVisitor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllAnalogControllerVisitor_register(void);


#endif // ORG_ALLBINARY_ANDROID_INPUT_MOTION_ALLANALOGCONTROLLERVISITOR_H
