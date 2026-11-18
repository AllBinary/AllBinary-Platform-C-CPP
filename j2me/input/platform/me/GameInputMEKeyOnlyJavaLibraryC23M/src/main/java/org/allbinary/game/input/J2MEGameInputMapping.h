#ifndef ORG_ALLBINARY_GAME_INPUT_J2MEGAMEINPUTMAPPING_H
#define ORG_ALLBINARY_GAME_INPUT_J2MEGAMEINPUTMAPPING_H
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
typedef struct J2MEKeyFactory J2MEKeyFactory;
typedef struct GameKeyFactory GameKeyFactory;
typedef struct Input Input;
typedef struct GamePersistanceStrings GamePersistanceStrings;
typedef struct PersistentInputMapping PersistentInputMapping;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"

typedef struct J2MEGameInputMapping J2MEGameInputMapping;
struct J2MEGameInputMapping {
    PersistentInputMapping base;
};


J2MEGameInputMapping* J2MEGameInputMapping_new(void);

void J2MEGameInputMapping_init(J2MEGameInputMapping* this);

void J2MEGameInputMapping_initMethod(J2MEGameInputMapping* this, AbeClientInformationInterface* abeClientInformation);

bool J2MEGameInputMapping_isDelete(J2MEGameInputMapping* this, Input* input);

bool J2MEGameInputMapping_isSystemInput(J2MEGameInputMapping* this, Input* input);
#define J2MEGameInputMapping_new0 J2MEGameInputMapping_new
#define J2MEGameInputMapping_init0 J2MEGameInputMapping_init
#ifndef J2MEGameInputMapping_getNullInstance
#define J2MEGameInputMapping_getNullInstance PersistentInputMapping_getNullInstance
#endif
#ifndef J2MEGameInputMapping_getTotalMapped
#define J2MEGameInputMapping_getTotalMapped PersistentInputMapping_getTotalMapped
#endif
#ifndef J2MEGameInputMapping_isDefaultNew
#define J2MEGameInputMapping_isDefaultNew PersistentInputMapping_isDefaultNew
#endif
#ifndef J2MEGameInputMapping_getDefault
#define J2MEGameInputMapping_getDefault PersistentInputMapping_getDefault
#endif
#ifndef J2MEGameInputMapping_setDefault
#define J2MEGameInputMapping_setDefault PersistentInputMapping_setDefault
#endif
#ifndef J2MEGameInputMapping_update
#define J2MEGameInputMapping_update PersistentInputMapping_update
#endif
#ifndef J2MEGameInputMapping_save
#define J2MEGameInputMapping_save PersistentInputMapping_save
#endif
#ifndef J2MEGameInputMapping_setInputMappingEventListenerInterface
#define J2MEGameInputMapping_setInputMappingEventListenerInterface PersistentInputMapping_setInputMappingEventListenerInterface
#endif
#ifndef J2MEGameInputMapping_getInputMappingEventListenerInterface
#define J2MEGameInputMapping_getInputMappingEventListenerInterface PersistentInputMapping_getInputMappingEventListenerInterface
#endif
#ifndef J2MEGameInputMapping_getInputMapping
#define J2MEGameInputMapping_getInputMapping PersistentInputMapping_getInputMapping
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void J2MEGameInputMapping_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void J2MEGameInputMapping_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_J2MEGAMEINPUTMAPPING_H
