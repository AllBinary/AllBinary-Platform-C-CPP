#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONFACTORY_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONFACTORY_H
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
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct TouchButtonFactory TouchButtonFactory;
struct TouchButtonFactory {
    BasicArrayList* LIST;
    BasicArrayList* list;
    BasicArrayList* savedList;
    bool saved;
};


TouchButtonFactory* TouchButtonFactory_new(void);

TouchButtonFactory* TouchButtonFactory_getInstance(void);

void TouchButtonFactory_init(TouchButtonFactory* this);

void TouchButtonFactory_defaultList(TouchButtonFactory* this);

void TouchButtonFactory_toggle(TouchButtonFactory* this, bool save, BasicArrayList* list);

void TouchButtonFactory_setList(TouchButtonFactory* this, BasicArrayList* list);

BasicArrayList* TouchButtonFactory_getList(TouchButtonFactory* this);
#define TouchButtonFactory_new0 TouchButtonFactory_new
#define TouchButtonFactory_init0 TouchButtonFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchButtonFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchButtonFactory_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONFACTORY_H
