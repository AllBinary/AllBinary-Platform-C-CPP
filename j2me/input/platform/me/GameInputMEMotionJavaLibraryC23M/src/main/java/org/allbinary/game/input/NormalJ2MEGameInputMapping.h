#ifndef ORG_ALLBINARY_GAME_INPUT_NORMALJ2MEGAMEINPUTMAPPING_H
#define ORG_ALLBINARY_GAME_INPUT_NORMALJ2MEGAMEINPUTMAPPING_H
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
typedef struct NormalJ2MEDefaultGameInputMapping NormalJ2MEDefaultGameInputMapping;
typedef struct InputToGameKeyMapping InputToGameKeyMapping;
#include "org/allbinary/game/input/J2MEGameInputMapping.h"

typedef struct NormalJ2MEGameInputMapping NormalJ2MEGameInputMapping;
struct NormalJ2MEGameInputMapping {
    J2MEGameInputMapping base;
};


NormalJ2MEGameInputMapping* NormalJ2MEGameInputMapping_new(void);
void NormalJ2MEGameInputMapping_init(NormalJ2MEGameInputMapping* this);

InputToGameKeyMapping* NormalJ2MEGameInputMapping_getDefault(NormalJ2MEGameInputMapping* this);
#ifndef NormalJ2MEGameInputMapping_isDelete
#define NormalJ2MEGameInputMapping_isDelete J2MEGameInputMapping_isDelete
#endif
#ifndef NormalJ2MEGameInputMapping_isSystemInput
#define NormalJ2MEGameInputMapping_isSystemInput J2MEGameInputMapping_isSystemInput
#endif
#ifndef NormalJ2MEGameInputMapping_getNullInstance
#define NormalJ2MEGameInputMapping_getNullInstance PersistentInputMapping_getNullInstance
#endif
#ifndef NormalJ2MEGameInputMapping_getTotalMapped
#define NormalJ2MEGameInputMapping_getTotalMapped PersistentInputMapping_getTotalMapped
#endif
#ifndef NormalJ2MEGameInputMapping_isDefaultNew
#define NormalJ2MEGameInputMapping_isDefaultNew PersistentInputMapping_isDefaultNew
#endif
#ifndef NormalJ2MEGameInputMapping_setDefault
#define NormalJ2MEGameInputMapping_setDefault PersistentInputMapping_setDefault
#endif
#ifndef NormalJ2MEGameInputMapping_update
#define NormalJ2MEGameInputMapping_update PersistentInputMapping_update
#endif
#ifndef NormalJ2MEGameInputMapping_save
#define NormalJ2MEGameInputMapping_save PersistentInputMapping_save
#endif
#ifndef NormalJ2MEGameInputMapping_setInputMappingEventListenerInterface
#define NormalJ2MEGameInputMapping_setInputMappingEventListenerInterface PersistentInputMapping_setInputMappingEventListenerInterface
#endif
#ifndef NormalJ2MEGameInputMapping_getInputMappingEventListenerInterface
#define NormalJ2MEGameInputMapping_getInputMappingEventListenerInterface PersistentInputMapping_getInputMappingEventListenerInterface
#endif
#ifndef NormalJ2MEGameInputMapping_getInputMapping
#define NormalJ2MEGameInputMapping_getInputMapping PersistentInputMapping_getInputMapping
#endif
#ifndef NormalJ2MEGameInputMapping_isDelete
#define NormalJ2MEGameInputMapping_isDelete PersistentInputMapping_isDelete
#endif
#ifndef NormalJ2MEGameInputMapping_isSystemInput
#define NormalJ2MEGameInputMapping_isSystemInput PersistentInputMapping_isSystemInput
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NormalJ2MEGameInputMapping_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NormalJ2MEGameInputMapping_register(void);

#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif

#endif // ORG_ALLBINARY_GAME_INPUT_NORMALJ2MEGAMEINPUTMAPPING_H
