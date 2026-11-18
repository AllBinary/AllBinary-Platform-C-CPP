#ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_PERSISTENTINPUTMAPPING_H
#define ORG_ALLBINARY_GAME_INPUT_MAPPING_PERSISTENTINPUTMAPPING_H
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
// package org.allbinary.game.input.mapping

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct InputToGameKeyMapping InputToGameKeyMapping;
typedef struct GamePersistanceStrings GamePersistanceStrings;
typedef struct Input Input;
typedef struct InputPersistance InputPersistance;
typedef struct InputMappingEvent InputMappingEvent;
typedef struct InputMappingEventListenerInterface InputMappingEventListenerInterface;
typedef struct NullInputMappingEventListener NullInputMappingEventListener;
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct EnumerationUtil EnumerationUtil;
typedef struct ABHashtable ABHashtable;
#include "java/util/Enumeration.h"
#if __has_include("org/allbinary/game/input/InputPersistance.h")
#include "org/allbinary/game/input/InputPersistance.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/event/InputMappingEvent.h")
#include "org/allbinary/game/input/mapping/event/InputMappingEvent.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h")
#include "org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/EnumerationUtil.h")
#include "org/allbinary/util/EnumerationUtil.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif

//GameInputNoPersistanceLibrary
typedef struct PersistentInputMapping PersistentInputMapping;
struct PersistentInputMapping {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    EnumerationUtil* enumerationUtil;
    InputToGameKeyMapping* inputMapping;
    InputMappingEventListenerInterface* inputMappingEventListenerInterface;
    InputPersistance* inputPersistance;
    InputMappingEvent* inputMappingEvent;
};

extern void* PersistentInputMapping_instance;

PersistentInputMapping* PersistentInputMapping_new(const char* name);

PersistentInputMapping* PersistentInputMapping_getNullInstance(void);

void PersistentInputMapping_init(PersistentInputMapping* this, const char* name);

int32_t PersistentInputMapping_getTotalMapped(PersistentInputMapping* this);

bool PersistentInputMapping_isDefaultNew(PersistentInputMapping* this);

InputToGameKeyMapping* PersistentInputMapping_getDefault(PersistentInputMapping* this);

void PersistentInputMapping_setDefault(PersistentInputMapping* this, AbeClientInformationInterface* abeClientInformation);

void PersistentInputMapping_update(PersistentInputMapping* this, AbeClientInformationInterface* abeClientInformation);

void PersistentInputMapping_save(PersistentInputMapping* this, AbeClientInformationInterface* abeClientInformation);

void PersistentInputMapping_initMethod(PersistentInputMapping* this, AbeClientInformationInterface* abeClientInformation);

void PersistentInputMapping_setInputMappingEventListenerInterface(PersistentInputMapping* this, InputMappingEventListenerInterface* inputMappingEventListenerInterface);


InputToGameKeyMapping* PersistentInputMapping_getInputMapping(PersistentInputMapping* this);

bool PersistentInputMapping_isDelete(PersistentInputMapping* this, Input* input);

bool PersistentInputMapping_isSystemInput(PersistentInputMapping* this, Input* input);
#define PersistentInputMapping_new1 PersistentInputMapping_new
#define PersistentInputMapping_init1 PersistentInputMapping_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PersistentInputMapping_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PersistentInputMapping_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_MAPPING_PERSISTENTINPUTMAPPING_H
