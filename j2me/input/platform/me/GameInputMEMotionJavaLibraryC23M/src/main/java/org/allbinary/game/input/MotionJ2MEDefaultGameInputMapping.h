#ifndef ORG_ALLBINARY_GAME_INPUT_MOTIONJ2MEDEFAULTGAMEINPUTMAPPING_H
#define ORG_ALLBINARY_GAME_INPUT_MOTIONJ2MEDEFAULTGAMEINPUTMAPPING_H
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
typedef struct GameKeyFactory GameKeyFactory;
typedef struct GamePersistanceStrings GamePersistanceStrings;
typedef struct InputToGameKeyMapping InputToGameKeyMapping;
typedef struct PersistentInputMapping PersistentInputMapping;
typedef struct BasicTouchInputFactory BasicTouchInputFactory;
typedef struct TouchMotionGestureFactory TouchMotionGestureFactory;
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"

typedef struct MotionJ2MEDefaultGameInputMapping MotionJ2MEDefaultGameInputMapping;
struct MotionJ2MEDefaultGameInputMapping {
    PersistentInputMapping base;
};


MotionJ2MEDefaultGameInputMapping* MotionJ2MEDefaultGameInputMapping_new(void);

void MotionJ2MEDefaultGameInputMapping_init(MotionJ2MEDefaultGameInputMapping* this);
#define MotionJ2MEDefaultGameInputMapping_new0 MotionJ2MEDefaultGameInputMapping_new
#define MotionJ2MEDefaultGameInputMapping_init0 MotionJ2MEDefaultGameInputMapping_init
#ifndef MotionJ2MEDefaultGameInputMapping_getNullInstance
#define MotionJ2MEDefaultGameInputMapping_getNullInstance PersistentInputMapping_getNullInstance
#endif
#ifndef MotionJ2MEDefaultGameInputMapping_getTotalMapped
#define MotionJ2MEDefaultGameInputMapping_getTotalMapped PersistentInputMapping_getTotalMapped
#endif
#ifndef MotionJ2MEDefaultGameInputMapping_isDefaultNew
#define MotionJ2MEDefaultGameInputMapping_isDefaultNew PersistentInputMapping_isDefaultNew
#endif
#ifndef MotionJ2MEDefaultGameInputMapping_getDefault
#define MotionJ2MEDefaultGameInputMapping_getDefault PersistentInputMapping_getDefault
#endif
#ifndef MotionJ2MEDefaultGameInputMapping_setDefault
#define MotionJ2MEDefaultGameInputMapping_setDefault PersistentInputMapping_setDefault
#endif
#ifndef MotionJ2MEDefaultGameInputMapping_update
#define MotionJ2MEDefaultGameInputMapping_update PersistentInputMapping_update
#endif
#ifndef MotionJ2MEDefaultGameInputMapping_save
#define MotionJ2MEDefaultGameInputMapping_save PersistentInputMapping_save
#endif
#ifndef MotionJ2MEDefaultGameInputMapping_setInputMappingEventListenerInterface
#define MotionJ2MEDefaultGameInputMapping_setInputMappingEventListenerInterface PersistentInputMapping_setInputMappingEventListenerInterface
#endif
#ifndef MotionJ2MEDefaultGameInputMapping_getInputMappingEventListenerInterface
#define MotionJ2MEDefaultGameInputMapping_getInputMappingEventListenerInterface PersistentInputMapping_getInputMappingEventListenerInterface
#endif
#ifndef MotionJ2MEDefaultGameInputMapping_getInputMapping
#define MotionJ2MEDefaultGameInputMapping_getInputMapping PersistentInputMapping_getInputMapping
#endif
#ifndef MotionJ2MEDefaultGameInputMapping_isDelete
#define MotionJ2MEDefaultGameInputMapping_isDelete PersistentInputMapping_isDelete
#endif
#ifndef MotionJ2MEDefaultGameInputMapping_isSystemInput
#define MotionJ2MEDefaultGameInputMapping_isSystemInput PersistentInputMapping_isSystemInput
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MotionJ2MEDefaultGameInputMapping_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MotionJ2MEDefaultGameInputMapping_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_MOTIONJ2MEDEFAULTGAMEINPUTMAPPING_H
