#ifndef ORG_ALLBINARY_GAME_INPUT_LAPTOPGAMEINPUTMAPPING_H
#define ORG_ALLBINARY_GAME_INPUT_LAPTOPGAMEINPUTMAPPING_H
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
typedef struct LaptopDefaultGameInputMapping LaptopDefaultGameInputMapping;
typedef struct InputToGameKeyMapping InputToGameKeyMapping;
#include "org/allbinary/game/input/PCGameInputMapping.h"

typedef struct LaptopGameInputMapping LaptopGameInputMapping;
struct LaptopGameInputMapping {
    PCGameInputMapping base;
};


LaptopGameInputMapping* LaptopGameInputMapping_new(void);
void LaptopGameInputMapping_init(LaptopGameInputMapping* this);

InputToGameKeyMapping* LaptopGameInputMapping_getDefault(LaptopGameInputMapping* this);
#ifndef LaptopGameInputMapping_isDelete
#define LaptopGameInputMapping_isDelete PCGameInputMapping_isDelete
#endif
#ifndef LaptopGameInputMapping_isSystemInput
#define LaptopGameInputMapping_isSystemInput PCGameInputMapping_isSystemInput
#endif
#ifndef LaptopGameInputMapping_getNullInstance
#define LaptopGameInputMapping_getNullInstance PersistentInputMapping_getNullInstance
#endif
#ifndef LaptopGameInputMapping_getTotalMapped
#define LaptopGameInputMapping_getTotalMapped PersistentInputMapping_getTotalMapped
#endif
#ifndef LaptopGameInputMapping_isDefaultNew
#define LaptopGameInputMapping_isDefaultNew PersistentInputMapping_isDefaultNew
#endif
#ifndef LaptopGameInputMapping_setDefault
#define LaptopGameInputMapping_setDefault PersistentInputMapping_setDefault
#endif
#ifndef LaptopGameInputMapping_update
#define LaptopGameInputMapping_update PersistentInputMapping_update
#endif
#ifndef LaptopGameInputMapping_save
#define LaptopGameInputMapping_save PersistentInputMapping_save
#endif
#ifndef LaptopGameInputMapping_setInputMappingEventListenerInterface
#define LaptopGameInputMapping_setInputMappingEventListenerInterface PersistentInputMapping_setInputMappingEventListenerInterface
#endif
#ifndef LaptopGameInputMapping_getInputMappingEventListenerInterface
#define LaptopGameInputMapping_getInputMappingEventListenerInterface PersistentInputMapping_getInputMappingEventListenerInterface
#endif
#ifndef LaptopGameInputMapping_getInputMapping
#define LaptopGameInputMapping_getInputMapping PersistentInputMapping_getInputMapping
#endif
#ifndef LaptopGameInputMapping_isDelete
#define LaptopGameInputMapping_isDelete PersistentInputMapping_isDelete
#endif
#ifndef LaptopGameInputMapping_isSystemInput
#define LaptopGameInputMapping_isSystemInput PersistentInputMapping_isSystemInput
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LaptopGameInputMapping_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LaptopGameInputMapping_register(void);

#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif

#endif // ORG_ALLBINARY_GAME_INPUT_LAPTOPGAMEINPUTMAPPING_H
