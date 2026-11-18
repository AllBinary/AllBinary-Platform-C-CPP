#ifndef ORG_ALLBINARY_GAME_INPUT_MOTIONLAPTOPGAMEINPUTMAPPING_H
#define ORG_ALLBINARY_GAME_INPUT_MOTIONLAPTOPGAMEINPUTMAPPING_H
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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct PCGameInputMapping PCGameInputMapping;
typedef struct MotionLaptopDefaultGameInputMapping MotionLaptopDefaultGameInputMapping;
typedef struct InputToGameKeyMapping InputToGameKeyMapping;
#include "org/allbinary/game/input/PCGameInputMapping.h"

typedef struct MotionLaptopGameInputMapping MotionLaptopGameInputMapping;
struct MotionLaptopGameInputMapping {
    PCGameInputMapping base;
};


MotionLaptopGameInputMapping* MotionLaptopGameInputMapping_new(void);
void MotionLaptopGameInputMapping_init(MotionLaptopGameInputMapping* this);

InputToGameKeyMapping* MotionLaptopGameInputMapping_getDefault(MotionLaptopGameInputMapping* this);
#ifndef MotionLaptopGameInputMapping_isDelete
#define MotionLaptopGameInputMapping_isDelete PCGameInputMapping_isDelete
#endif
#ifndef MotionLaptopGameInputMapping_isSystemInput
#define MotionLaptopGameInputMapping_isSystemInput PCGameInputMapping_isSystemInput
#endif
#ifndef MotionLaptopGameInputMapping_getNullInstance
#define MotionLaptopGameInputMapping_getNullInstance PersistentInputMapping_getNullInstance
#endif
#ifndef MotionLaptopGameInputMapping_getTotalMapped
#define MotionLaptopGameInputMapping_getTotalMapped PersistentInputMapping_getTotalMapped
#endif
#ifndef MotionLaptopGameInputMapping_isDefaultNew
#define MotionLaptopGameInputMapping_isDefaultNew PersistentInputMapping_isDefaultNew
#endif
#ifndef MotionLaptopGameInputMapping_setDefault
#define MotionLaptopGameInputMapping_setDefault PersistentInputMapping_setDefault
#endif
#ifndef MotionLaptopGameInputMapping_update
#define MotionLaptopGameInputMapping_update PersistentInputMapping_update
#endif
#ifndef MotionLaptopGameInputMapping_save
#define MotionLaptopGameInputMapping_save PersistentInputMapping_save
#endif
#ifndef MotionLaptopGameInputMapping_setInputMappingEventListenerInterface
#define MotionLaptopGameInputMapping_setInputMappingEventListenerInterface PersistentInputMapping_setInputMappingEventListenerInterface
#endif
#ifndef MotionLaptopGameInputMapping_getInputMappingEventListenerInterface
#define MotionLaptopGameInputMapping_getInputMappingEventListenerInterface PersistentInputMapping_getInputMappingEventListenerInterface
#endif
#ifndef MotionLaptopGameInputMapping_getInputMapping
#define MotionLaptopGameInputMapping_getInputMapping PersistentInputMapping_getInputMapping
#endif
#ifndef MotionLaptopGameInputMapping_isDelete
#define MotionLaptopGameInputMapping_isDelete PersistentInputMapping_isDelete
#endif
#ifndef MotionLaptopGameInputMapping_isSystemInput
#define MotionLaptopGameInputMapping_isSystemInput PersistentInputMapping_isSystemInput
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MotionLaptopGameInputMapping_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MotionLaptopGameInputMapping_register(void);

#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif

#endif // ORG_ALLBINARY_GAME_INPUT_MOTIONLAPTOPGAMEINPUTMAPPING_H
