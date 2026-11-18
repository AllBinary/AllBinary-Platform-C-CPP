#ifndef ORG_ALLBINARY_GAME_INPUT_MOTIONLAPTOPDEFAULTGAMEINPUTMAPPING_H
#define ORG_ALLBINARY_GAME_INPUT_MOTIONLAPTOPDEFAULTGAMEINPUTMAPPING_H
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
typedef struct PCKeyFactory PCKeyFactory;
typedef struct GameKeyFactory GameKeyFactory;
typedef struct GamePersistanceStrings GamePersistanceStrings;
typedef struct InputToGameKeyMapping InputToGameKeyMapping;
typedef struct PersistentInputMapping PersistentInputMapping;
typedef struct BasicTouchInputFactory BasicTouchInputFactory;
typedef struct TouchMotionGestureFactory TouchMotionGestureFactory;
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"

typedef struct MotionLaptopDefaultGameInputMapping MotionLaptopDefaultGameInputMapping;
struct MotionLaptopDefaultGameInputMapping {
    PersistentInputMapping base;
};


MotionLaptopDefaultGameInputMapping* MotionLaptopDefaultGameInputMapping_new(void);

void MotionLaptopDefaultGameInputMapping_init(MotionLaptopDefaultGameInputMapping* this);
#define MotionLaptopDefaultGameInputMapping_new0 MotionLaptopDefaultGameInputMapping_new
#define MotionLaptopDefaultGameInputMapping_init0 MotionLaptopDefaultGameInputMapping_init
#ifndef MotionLaptopDefaultGameInputMapping_getNullInstance
#define MotionLaptopDefaultGameInputMapping_getNullInstance PersistentInputMapping_getNullInstance
#endif
#ifndef MotionLaptopDefaultGameInputMapping_getTotalMapped
#define MotionLaptopDefaultGameInputMapping_getTotalMapped PersistentInputMapping_getTotalMapped
#endif
#ifndef MotionLaptopDefaultGameInputMapping_isDefaultNew
#define MotionLaptopDefaultGameInputMapping_isDefaultNew PersistentInputMapping_isDefaultNew
#endif
#ifndef MotionLaptopDefaultGameInputMapping_getDefault
#define MotionLaptopDefaultGameInputMapping_getDefault PersistentInputMapping_getDefault
#endif
#ifndef MotionLaptopDefaultGameInputMapping_setDefault
#define MotionLaptopDefaultGameInputMapping_setDefault PersistentInputMapping_setDefault
#endif
#ifndef MotionLaptopDefaultGameInputMapping_update
#define MotionLaptopDefaultGameInputMapping_update PersistentInputMapping_update
#endif
#ifndef MotionLaptopDefaultGameInputMapping_save
#define MotionLaptopDefaultGameInputMapping_save PersistentInputMapping_save
#endif
#ifndef MotionLaptopDefaultGameInputMapping_setInputMappingEventListenerInterface
#define MotionLaptopDefaultGameInputMapping_setInputMappingEventListenerInterface PersistentInputMapping_setInputMappingEventListenerInterface
#endif
#ifndef MotionLaptopDefaultGameInputMapping_getInputMappingEventListenerInterface
#define MotionLaptopDefaultGameInputMapping_getInputMappingEventListenerInterface PersistentInputMapping_getInputMappingEventListenerInterface
#endif
#ifndef MotionLaptopDefaultGameInputMapping_getInputMapping
#define MotionLaptopDefaultGameInputMapping_getInputMapping PersistentInputMapping_getInputMapping
#endif
#ifndef MotionLaptopDefaultGameInputMapping_isDelete
#define MotionLaptopDefaultGameInputMapping_isDelete PersistentInputMapping_isDelete
#endif
#ifndef MotionLaptopDefaultGameInputMapping_isSystemInput
#define MotionLaptopDefaultGameInputMapping_isSystemInput PersistentInputMapping_isSystemInput
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MotionLaptopDefaultGameInputMapping_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MotionLaptopDefaultGameInputMapping_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_MOTIONLAPTOPDEFAULTGAMEINPUTMAPPING_H
