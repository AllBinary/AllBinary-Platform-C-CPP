#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_KEYVALUEPERSISTANCE_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_KEYVALUEPERSISTANCE_H
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
// package org.allbinary.game.configuration.persistance

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicPersitance BasicPersitance;
typedef struct NullRecordStore NullRecordStore;
typedef struct NullRecordFilter NullRecordFilter;
typedef struct NullRecordComparator NullRecordComparator;
typedef struct RecordEnumeration RecordEnumeration;
typedef struct RecordStore RecordStore;
typedef struct TsUtil TsUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct CommonSeps CommonSeps;
typedef struct ABHashtable ABHashtable;
typedef struct HashtableUtil HashtableUtil;
#include "java/io/ByteArrayInputStream.h"
#include "java/io/ByteArrayOutputStream.h"
#include "java/io/DataInputStream.h"
#include "java/io/DataOutputStream.h"
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#include "org/allbinary/game/configuration/persistance/BasicPersitance.h"

typedef struct KeyValuePersistance KeyValuePersistance;
struct KeyValuePersistance {
    BasicPersitance base;
    TsUtil* tsUtil;
};


KeyValuePersistance* KeyValuePersistance_new(const char* recordId);

void KeyValuePersistance_init(KeyValuePersistance* this, const char* recordId);

void KeyValuePersistance_loadAll(KeyValuePersistance* this, AbeClientInformationInterface* abeClientInformation);

void KeyValuePersistance_loadAllSize(KeyValuePersistance* this, AbeClientInformationInterface* abeClientInformation, int32_t size);

void KeyValuePersistance_save(KeyValuePersistance* this, AbeClientInformationInterface* abeClientInformation, ABHashtable* hashtable);

ABHashtable* KeyValuePersistance_get(KeyValuePersistance* this, int32_t index);
#define KeyValuePersistance_new1 KeyValuePersistance_new
#define KeyValuePersistance_init1 KeyValuePersistance_init
#ifndef KeyValuePersistance_deleteRecoreStore
#define KeyValuePersistance_deleteRecoreStore BasicPersitance_deleteRecoreStore
#endif
#ifndef KeyValuePersistance_deleteAll
#define KeyValuePersistance_deleteAll BasicPersitance_deleteAll
#endif
#ifndef KeyValuePersistance_delete
#define KeyValuePersistance_delete BasicPersitance_delete
#endif
#ifndef KeyValuePersistance_getRecordId
#define KeyValuePersistance_getRecordId BasicPersitance_getRecordId
#endif
#ifndef KeyValuePersistance_getList
#define KeyValuePersistance_getList BasicPersitance_getList
#endif
#ifndef KeyValuePersistance_getIds
#define KeyValuePersistance_getIds BasicPersitance_getIds
#endif
#ifndef KeyValuePersistance_clear
#define KeyValuePersistance_clear BasicPersitance_clear
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void KeyValuePersistance_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void KeyValuePersistance_register(void);

#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_KEYVALUEPERSISTANCE_H
