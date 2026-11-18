#ifndef ORG_ALLBINARY_GAME_INPUT_MOTIONJ2MEGAMEINPUTMAPPING_H
#define ORG_ALLBINARY_GAME_INPUT_MOTIONJ2MEGAMEINPUTMAPPING_H
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
typedef struct J2MEGameInputMapping J2MEGameInputMapping;
typedef struct MotionJ2MEDefaultGameInputMapping MotionJ2MEDefaultGameInputMapping;
typedef struct InputToGameKeyMapping InputToGameKeyMapping;
#include "org/allbinary/game/input/J2MEGameInputMapping.h"

typedef struct MotionJ2MEGameInputMapping MotionJ2MEGameInputMapping;
struct MotionJ2MEGameInputMapping {
    J2MEGameInputMapping base;
};


MotionJ2MEGameInputMapping* MotionJ2MEGameInputMapping_new(void);
void MotionJ2MEGameInputMapping_init(MotionJ2MEGameInputMapping* this);

InputToGameKeyMapping* MotionJ2MEGameInputMapping_getDefault(MotionJ2MEGameInputMapping* this);
#ifndef MotionJ2MEGameInputMapping_isDelete
#define MotionJ2MEGameInputMapping_isDelete J2MEGameInputMapping_isDelete
#endif
#ifndef MotionJ2MEGameInputMapping_isSystemInput
#define MotionJ2MEGameInputMapping_isSystemInput J2MEGameInputMapping_isSystemInput
#endif
#ifndef MotionJ2MEGameInputMapping_getNullInstance
#define MotionJ2MEGameInputMapping_getNullInstance PersistentInputMapping_getNullInstance
#endif
#ifndef MotionJ2MEGameInputMapping_getTotalMapped
#define MotionJ2MEGameInputMapping_getTotalMapped PersistentInputMapping_getTotalMapped
#endif
#ifndef MotionJ2MEGameInputMapping_isDefaultNew
#define MotionJ2MEGameInputMapping_isDefaultNew PersistentInputMapping_isDefaultNew
#endif
#ifndef MotionJ2MEGameInputMapping_setDefault
#define MotionJ2MEGameInputMapping_setDefault PersistentInputMapping_setDefault
#endif
#ifndef MotionJ2MEGameInputMapping_update
#define MotionJ2MEGameInputMapping_update PersistentInputMapping_update
#endif
#ifndef MotionJ2MEGameInputMapping_save
#define MotionJ2MEGameInputMapping_save PersistentInputMapping_save
#endif
#ifndef MotionJ2MEGameInputMapping_setInputMappingEventListenerInterface
#define MotionJ2MEGameInputMapping_setInputMappingEventListenerInterface PersistentInputMapping_setInputMappingEventListenerInterface
#endif
#ifndef MotionJ2MEGameInputMapping_getInputMappingEventListenerInterface
#define MotionJ2MEGameInputMapping_getInputMappingEventListenerInterface PersistentInputMapping_getInputMappingEventListenerInterface
#endif
#ifndef MotionJ2MEGameInputMapping_getInputMapping
#define MotionJ2MEGameInputMapping_getInputMapping PersistentInputMapping_getInputMapping
#endif
#ifndef MotionJ2MEGameInputMapping_isDelete
#define MotionJ2MEGameInputMapping_isDelete PersistentInputMapping_isDelete
#endif
#ifndef MotionJ2MEGameInputMapping_isSystemInput
#define MotionJ2MEGameInputMapping_isSystemInput PersistentInputMapping_isSystemInput
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MotionJ2MEGameInputMapping_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MotionJ2MEGameInputMapping_register(void);

#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif

#endif // ORG_ALLBINARY_GAME_INPUT_MOTIONJ2MEGAMEINPUTMAPPING_H
