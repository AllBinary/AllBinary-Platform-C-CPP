#ifndef ORG_ALLBINARY_GAME_INPUT_PCGAMEINPUTMAPPING_H
#define ORG_ALLBINARY_GAME_INPUT_PCGAMEINPUTMAPPING_H
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
typedef struct Input Input;
typedef struct GamePersistanceStrings GamePersistanceStrings;
typedef struct PersistentInputMapping PersistentInputMapping;
typedef struct BasicTouchInputFactory BasicTouchInputFactory;
typedef struct TouchMotionGestureFactory TouchMotionGestureFactory;
typedef struct TrackballMotionGestureFactory TrackballMotionGestureFactory;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"

typedef struct PCGameInputMapping PCGameInputMapping;
struct PCGameInputMapping {
    PersistentInputMapping base;
};


PCGameInputMapping* PCGameInputMapping_new(void);

void PCGameInputMapping_init(PCGameInputMapping* this);

void PCGameInputMapping_initMethod(PCGameInputMapping* this, AbeClientInformationInterface* abeClientInformation);

bool PCGameInputMapping_isDelete(PCGameInputMapping* this, Input* input);

bool PCGameInputMapping_isSystemInput(PCGameInputMapping* this, Input* input);
#define PCGameInputMapping_new0 PCGameInputMapping_new
#define PCGameInputMapping_init0 PCGameInputMapping_init
#ifndef PCGameInputMapping_getNullInstance
#define PCGameInputMapping_getNullInstance PersistentInputMapping_getNullInstance
#endif
#ifndef PCGameInputMapping_getTotalMapped
#define PCGameInputMapping_getTotalMapped PersistentInputMapping_getTotalMapped
#endif
#ifndef PCGameInputMapping_isDefaultNew
#define PCGameInputMapping_isDefaultNew PersistentInputMapping_isDefaultNew
#endif
#ifndef PCGameInputMapping_getDefault
#define PCGameInputMapping_getDefault PersistentInputMapping_getDefault
#endif
#ifndef PCGameInputMapping_setDefault
#define PCGameInputMapping_setDefault PersistentInputMapping_setDefault
#endif
#ifndef PCGameInputMapping_update
#define PCGameInputMapping_update PersistentInputMapping_update
#endif
#ifndef PCGameInputMapping_save
#define PCGameInputMapping_save PersistentInputMapping_save
#endif
#ifndef PCGameInputMapping_setInputMappingEventListenerInterface
#define PCGameInputMapping_setInputMappingEventListenerInterface PersistentInputMapping_setInputMappingEventListenerInterface
#endif
#ifndef PCGameInputMapping_getInputMappingEventListenerInterface
#define PCGameInputMapping_getInputMappingEventListenerInterface PersistentInputMapping_getInputMappingEventListenerInterface
#endif
#ifndef PCGameInputMapping_getInputMapping
#define PCGameInputMapping_getInputMapping PersistentInputMapping_getInputMapping
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PCGameInputMapping_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PCGameInputMapping_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_PCGAMEINPUTMAPPING_H
