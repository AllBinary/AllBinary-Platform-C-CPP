#ifndef ORG_ALLBINARY_GAME_INPUT_NORMALJ2MEDEFAULTGAMEINPUTMAPPING_H
#define ORG_ALLBINARY_GAME_INPUT_NORMALJ2MEDEFAULTGAMEINPUTMAPPING_H
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
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"

typedef struct NormalJ2MEDefaultGameInputMapping NormalJ2MEDefaultGameInputMapping;
struct NormalJ2MEDefaultGameInputMapping {
    PersistentInputMapping base;
};


NormalJ2MEDefaultGameInputMapping* NormalJ2MEDefaultGameInputMapping_new(void);

void NormalJ2MEDefaultGameInputMapping_init(NormalJ2MEDefaultGameInputMapping* this);
#define NormalJ2MEDefaultGameInputMapping_new0 NormalJ2MEDefaultGameInputMapping_new
#define NormalJ2MEDefaultGameInputMapping_init0 NormalJ2MEDefaultGameInputMapping_init
#ifndef NormalJ2MEDefaultGameInputMapping_getNullInstance
#define NormalJ2MEDefaultGameInputMapping_getNullInstance PersistentInputMapping_getNullInstance
#endif
#ifndef NormalJ2MEDefaultGameInputMapping_getTotalMapped
#define NormalJ2MEDefaultGameInputMapping_getTotalMapped PersistentInputMapping_getTotalMapped
#endif
#ifndef NormalJ2MEDefaultGameInputMapping_isDefaultNew
#define NormalJ2MEDefaultGameInputMapping_isDefaultNew PersistentInputMapping_isDefaultNew
#endif
#ifndef NormalJ2MEDefaultGameInputMapping_getDefault
#define NormalJ2MEDefaultGameInputMapping_getDefault PersistentInputMapping_getDefault
#endif
#ifndef NormalJ2MEDefaultGameInputMapping_setDefault
#define NormalJ2MEDefaultGameInputMapping_setDefault PersistentInputMapping_setDefault
#endif
#ifndef NormalJ2MEDefaultGameInputMapping_update
#define NormalJ2MEDefaultGameInputMapping_update PersistentInputMapping_update
#endif
#ifndef NormalJ2MEDefaultGameInputMapping_save
#define NormalJ2MEDefaultGameInputMapping_save PersistentInputMapping_save
#endif
#ifndef NormalJ2MEDefaultGameInputMapping_setInputMappingEventListenerInterface
#define NormalJ2MEDefaultGameInputMapping_setInputMappingEventListenerInterface PersistentInputMapping_setInputMappingEventListenerInterface
#endif
#ifndef NormalJ2MEDefaultGameInputMapping_getInputMappingEventListenerInterface
#define NormalJ2MEDefaultGameInputMapping_getInputMappingEventListenerInterface PersistentInputMapping_getInputMappingEventListenerInterface
#endif
#ifndef NormalJ2MEDefaultGameInputMapping_getInputMapping
#define NormalJ2MEDefaultGameInputMapping_getInputMapping PersistentInputMapping_getInputMapping
#endif
#ifndef NormalJ2MEDefaultGameInputMapping_isDelete
#define NormalJ2MEDefaultGameInputMapping_isDelete PersistentInputMapping_isDelete
#endif
#ifndef NormalJ2MEDefaultGameInputMapping_isSystemInput
#define NormalJ2MEDefaultGameInputMapping_isSystemInput PersistentInputMapping_isSystemInput
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NormalJ2MEDefaultGameInputMapping_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NormalJ2MEDefaultGameInputMapping_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_NORMALJ2MEDEFAULTGAMEINPUTMAPPING_H
