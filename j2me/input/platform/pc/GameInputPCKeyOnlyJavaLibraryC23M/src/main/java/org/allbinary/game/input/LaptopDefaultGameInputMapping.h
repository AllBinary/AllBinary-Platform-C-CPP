#ifndef ORG_ALLBINARY_GAME_INPUT_LAPTOPDEFAULTGAMEINPUTMAPPING_H
#define ORG_ALLBINARY_GAME_INPUT_LAPTOPDEFAULTGAMEINPUTMAPPING_H
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
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"

typedef struct LaptopDefaultGameInputMapping LaptopDefaultGameInputMapping;
struct LaptopDefaultGameInputMapping {
    PersistentInputMapping base;
};


LaptopDefaultGameInputMapping* LaptopDefaultGameInputMapping_new(void);

void LaptopDefaultGameInputMapping_init(LaptopDefaultGameInputMapping* this);
#define LaptopDefaultGameInputMapping_new0 LaptopDefaultGameInputMapping_new
#define LaptopDefaultGameInputMapping_init0 LaptopDefaultGameInputMapping_init
#ifndef LaptopDefaultGameInputMapping_getNullInstance
#define LaptopDefaultGameInputMapping_getNullInstance PersistentInputMapping_getNullInstance
#endif
#ifndef LaptopDefaultGameInputMapping_getTotalMapped
#define LaptopDefaultGameInputMapping_getTotalMapped PersistentInputMapping_getTotalMapped
#endif
#ifndef LaptopDefaultGameInputMapping_isDefaultNew
#define LaptopDefaultGameInputMapping_isDefaultNew PersistentInputMapping_isDefaultNew
#endif
#ifndef LaptopDefaultGameInputMapping_getDefault
#define LaptopDefaultGameInputMapping_getDefault PersistentInputMapping_getDefault
#endif
#ifndef LaptopDefaultGameInputMapping_setDefault
#define LaptopDefaultGameInputMapping_setDefault PersistentInputMapping_setDefault
#endif
#ifndef LaptopDefaultGameInputMapping_update
#define LaptopDefaultGameInputMapping_update PersistentInputMapping_update
#endif
#ifndef LaptopDefaultGameInputMapping_save
#define LaptopDefaultGameInputMapping_save PersistentInputMapping_save
#endif
#ifndef LaptopDefaultGameInputMapping_setInputMappingEventListenerInterface
#define LaptopDefaultGameInputMapping_setInputMappingEventListenerInterface PersistentInputMapping_setInputMappingEventListenerInterface
#endif
#ifndef LaptopDefaultGameInputMapping_getInputMappingEventListenerInterface
#define LaptopDefaultGameInputMapping_getInputMappingEventListenerInterface PersistentInputMapping_getInputMappingEventListenerInterface
#endif
#ifndef LaptopDefaultGameInputMapping_getInputMapping
#define LaptopDefaultGameInputMapping_getInputMapping PersistentInputMapping_getInputMapping
#endif
#ifndef LaptopDefaultGameInputMapping_isDelete
#define LaptopDefaultGameInputMapping_isDelete PersistentInputMapping_isDelete
#endif
#ifndef LaptopDefaultGameInputMapping_isSystemInput
#define LaptopDefaultGameInputMapping_isSystemInput PersistentInputMapping_isSystemInput
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LaptopDefaultGameInputMapping_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LaptopDefaultGameInputMapping_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_LAPTOPDEFAULTGAMEINPUTMAPPING_H
