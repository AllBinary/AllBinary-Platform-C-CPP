#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORENAMEPERSISTANCESINGLETON_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORENAMEPERSISTANCESINGLETON_H
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
// package org.allbinary.game.score

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct RecordEnumeration RecordEnumeration;
typedef struct RecordStore RecordStore;
typedef struct RecordStoreException RecordStoreException;
typedef struct TsUtil TsUtil;
typedef struct GameInfo GameInfo;
typedef struct NullRecordComparator NullRecordComparator;
typedef struct NullRecordFilter NullRecordFilter;
typedef struct NullRecordStore NullRecordStore;
typedef struct LogUtil LogUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct ExceptionUtil ExceptionUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct PlatformRecordIdUtil PlatformRecordIdUtil;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "java/io/ByteArrayInputStream.h"
#include "java/io/ByteArrayOutputStream.h"
#include "java/io/DataInputStream.h"
#include "java/io/DataOutputStream.h"
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
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

typedef struct HighScoreNamePersistanceSingleton HighScoreNamePersistanceSingleton;
struct HighScoreNamePersistanceSingleton {
    LogUtil* logUtil;
    TsUtil* tsUtil;
    CommonStrings* commonStrings;
    PlatformRecordIdUtil* platformRecordIdUtil;
    const char* RECORD_ID;
    const char* name;
    BasicArrayList* nameBasicArrayList;
};


HighScoreNamePersistanceSingleton* HighScoreNamePersistanceSingleton_new(void);
void HighScoreNamePersistanceSingleton_init(HighScoreNamePersistanceSingleton* this);

HighScoreNamePersistanceSingleton* HighScoreNamePersistanceSingleton_getInstance(void);

void HighScoreNamePersistanceSingleton_clear(HighScoreNamePersistanceSingleton* this);

void HighScoreNamePersistanceSingleton_deleteAll(HighScoreNamePersistanceSingleton* this, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo);


void HighScoreNamePersistanceSingleton_delete(HighScoreNamePersistanceSingleton* this, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, int32_t deleteId);

BasicArrayList* HighScoreNamePersistanceSingleton_getIds(HighScoreNamePersistanceSingleton* this);

const char* HighScoreNamePersistanceSingleton_load(HighScoreNamePersistanceSingleton* this, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo);

void HighScoreNamePersistanceSingleton_save(HighScoreNamePersistanceSingleton* this, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, const char* name);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoreNamePersistanceSingleton_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HighScoreNamePersistanceSingleton_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORENAMEPERSISTANCESINGLETON_H
