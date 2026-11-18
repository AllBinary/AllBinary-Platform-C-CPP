#ifndef ORG_ALLBINARY_GAME_SCORE_RECORDSTOREHIGHSCORES_H
#define ORG_ALLBINARY_GAME_SCORE_RECORDSTOREHIGHSCORES_H
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
typedef struct HighScores HighScores;
typedef struct HighScore HighScore;
typedef struct ScoreComparator ScoreComparator;
typedef struct RecordComparator RecordComparator;
typedef struct RecordEnumeration RecordEnumeration;
typedef struct RecordStore RecordStore;
typedef struct RecordStoreException RecordStoreException;
typedef struct RecordStoreNotFoundException RecordStoreNotFoundException;
typedef struct TsUtil TsUtil;
typedef struct GameInfo GameInfo;
typedef struct NullRecordComparator NullRecordComparator;
typedef struct NullRecordFilter NullRecordFilter;
typedef struct NullRecordStore NullRecordStore;
typedef struct StdUtil StdUtil;
typedef struct LogUtil LogUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct PlatformRecordIdUtil PlatformRecordIdUtil;
typedef struct CommonSeps CommonSeps;
typedef struct CommonStrings CommonStrings;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "java/io/ByteArrayInputStream.h"
#include "java/io/DataInputStream.h"
#include "java/io/EOFException.h"
#include "java/io/IOException.h"
#if __has_include("javax/microedition/rms/RecordComparator.h")
#include "javax/microedition/rms/RecordComparator.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/game/GameInfo.h")
#include "org/allbinary/game/GameInfo.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h")
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#endif
#if __has_include("org/allbinary/persistance/PlatformRecordIdUtil.h")
#include "org/allbinary/persistance/PlatformRecordIdUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif
#include "org/allbinary/game/score/HighScores.h"

typedef struct RecordStoreHighScores RecordStoreHighScores;
struct RecordStoreHighScores {
    HighScores base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    PlatformRecordIdUtil* platformRecordIdUtil;
    TsUtil* tsUtil;
    const char* RECORD_ID;
    int32_t MAXHIGHSCORES;
    GameInfo* gameInfo;
    AbeClientInformationInterface* abeClientInformation;
    RecordComparator* recordComparatorInterface;
};


RecordStoreHighScores* RecordStoreHighScores_new(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, const char* name, const char* heading, const char* columnTwoHeading, RecordComparator* recordComparatorInterface);

void RecordStoreHighScores_init(RecordStoreHighScores* this, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, const char* name, const char* heading, const char* columnTwoHeading, RecordComparator* recordComparatorInterface);

HighScores* RecordStoreHighScores_getInstance(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, const char* highScoreName, const char* heading, const char* columnTwoHeading, RecordComparator* recordComparatorInterface);


void RecordStoreHighScores_addHighScore(RecordStoreHighScores* this, HighScore* newHighScore);




bool RecordStoreHighScores_isBestScore(RecordStoreHighScores* this, HighScore* newHighScore);

const char* RecordStoreHighScores_toString(RecordStoreHighScores* this);
#define RecordStoreHighScores_new6 RecordStoreHighScores_new
#define RecordStoreHighScores_init6 RecordStoreHighScores_init
#ifndef RecordStoreHighScores_setList
#define RecordStoreHighScores_setList HighScores_setList
#endif
#ifndef RecordStoreHighScores_getList
#define RecordStoreHighScores_getList HighScores_getList
#endif
#ifndef RecordStoreHighScores_getName
#define RecordStoreHighScores_getName HighScores_getName
#endif
#ifndef RecordStoreHighScores_getTotal
#define RecordStoreHighScores_getTotal HighScores_getTotal
#endif
#ifndef RecordStoreHighScores_getHeading
#define RecordStoreHighScores_getHeading HighScores_getHeading
#endif
#ifndef RecordStoreHighScores_getColumnOneHeading
#define RecordStoreHighScores_getColumnOneHeading HighScores_getColumnOneHeading
#endif
#ifndef RecordStoreHighScores_getColumnTwoHeading
#define RecordStoreHighScores_getColumnTwoHeading HighScores_getColumnTwoHeading
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RecordStoreHighScores_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RecordStoreHighScores_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_RECORDSTOREHIGHSCORES_H
