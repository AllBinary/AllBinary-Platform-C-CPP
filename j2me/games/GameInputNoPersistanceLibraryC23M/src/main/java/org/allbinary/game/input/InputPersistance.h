#ifndef ORG_ALLBINARY_GAME_INPUT_INPUTPERSISTANCE_H
#define ORG_ALLBINARY_GAME_INPUT_INPUTPERSISTANCE_H
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
typedef struct Input Input;
typedef struct RecordEnumeration RecordEnumeration;
typedef struct RecordStore RecordStore;
typedef struct BasicPersitance BasicPersitance;
typedef struct NullRecordComparator NullRecordComparator;
typedef struct NullRecordFilter NullRecordFilter;
typedef struct PreLogUtil PreLogUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct BasicArrayList BasicArrayList;
typedef struct HashtableUtil HashtableUtil;
typedef struct StdUtil StdUtil;
typedef struct ABHashtable ABHashtable;
#include "org/allbinary/game/configuration/persistance/BasicPersitance.h"
#if __has_include("org/allbinary/util/HashtableUtil.h")
#include "org/allbinary/util/HashtableUtil.h"
#endif

//GameInputNoPersistanceLibrary
typedef struct InputPersistance InputPersistance;
struct InputPersistance {
    BasicPersitance base;
    HashtableUtil* hashtableUtil;
};


InputPersistance* InputPersistance_new(const char* name);

void InputPersistance_init(InputPersistance* this, const char* name);

void InputPersistance_loadAll(InputPersistance* this, AbeClientInformationInterface* abeClientInformation);

void InputPersistance_save(InputPersistance* this, AbeClientInformationInterface* abeClientInformation, ABHashtable* hashtable);
#define InputPersistance_new1 InputPersistance_new
#define InputPersistance_init1 InputPersistance_init
#ifndef InputPersistance_deleteRecoreStore
#define InputPersistance_deleteRecoreStore BasicPersitance_deleteRecoreStore
#endif
#ifndef InputPersistance_deleteAll
#define InputPersistance_deleteAll BasicPersitance_deleteAll
#endif
#ifndef InputPersistance_delete
#define InputPersistance_delete BasicPersitance_delete
#endif
#ifndef InputPersistance_getRecordId
#define InputPersistance_getRecordId BasicPersitance_getRecordId
#endif
#ifndef InputPersistance_getList
#define InputPersistance_getList BasicPersitance_getList
#endif
#ifndef InputPersistance_getIds
#define InputPersistance_getIds BasicPersitance_getIds
#endif
#ifndef InputPersistance_clear
#define InputPersistance_clear BasicPersitance_clear
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InputPersistance_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InputPersistance_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_INPUTPERSISTANCE_H
