#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_BASICPERSITANCE_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_BASICPERSITANCE_H
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
typedef struct PersistanceStrings PersistanceStrings;
typedef struct NullRecordStore NullRecordStore;
typedef struct RecordStore RecordStore;
typedef struct LogUtil LogUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct PlatformRecordIdUtil PlatformRecordIdUtil;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/persistance/PlatformRecordIdUtil.h")
#include "org/allbinary/persistance/PlatformRecordIdUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "java/lang/Integer.h"
#if __has_include("org/allbinary/game/configuration/persistance/PersistanceStrings.h")
#include "org/allbinary/game/configuration/persistance/PersistanceStrings.h"
#endif

typedef struct BasicPersitance BasicPersitance;
struct BasicPersitance {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    PersistanceStrings* persistanceStrings;
    PlatformRecordIdUtil* platformRecordIdUtil;
    const char* recordId;
    BasicArrayList* valueList;
    BasicArrayList* idList;
};


BasicPersitance* BasicPersitance_new(const char* recordId);

void BasicPersitance_init(BasicPersitance* this, const char* recordId);

void BasicPersitance_deleteRecoreStore(BasicPersitance* this, AbeClientInformationInterface* abeClientInformation);

void BasicPersitance_deleteAll(BasicPersitance* this, AbeClientInformationInterface* abeClientInformation);

void BasicPersitance_delete(BasicPersitance* this, AbeClientInformationInterface* abeClientInformation, int32_t deleteId);

const char* BasicPersitance_getRecordId(BasicPersitance* this, AbeClientInformationInterface* abeClientInformation);

BasicArrayList* BasicPersitance_getList(BasicPersitance* this);

BasicArrayList* BasicPersitance_getIds(BasicPersitance* this);

void BasicPersitance_clear(BasicPersitance* this);
#define BasicPersitance_new1 BasicPersitance_new
#define BasicPersitance_init1 BasicPersitance_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicPersitance_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicPersitance_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_BASICPERSITANCE_H
