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
// package org.allbinary.game.score.remote

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Enumeration.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/score/HighScore.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/RemoteErrorHighScoresSingletonFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/SoftwareInformation.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/EnumerationUtil.h"

typedef struct RemoteHighScores RemoteHighScores;
struct RemoteHighScores {
    HighScores base;
    LogUtil* logUtil;
    EnumerationUtil* enumerationUtil;
    AbeClientInformationInterface* abeClientInformation;
    SoftwareInformation* softwareInformation;
    bool ascending;
    const char* ASCENDING;
};

static ABHashtable* RemoteHighScores_hashTable;

RemoteHighScores* RemoteHighScores_new(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation, GameInfo* gameInfo, const char* heading, const char* columnTwoHeading, bool ascending, bool preload);

void RemoteHighScores_init(RemoteHighScores* this, AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation, GameInfo* gameInfo, const char* heading, const char* columnTwoHeading, bool ascending, bool preload);
HighScores* RemoteHighScores_getInstance(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation, GameInfo* gameInfo, const char* heading, const char* columnTwoHeading, bool isAscending);
HighScores* RemoteHighScores_getInstancePreload(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation, GameInfo* gameInfo, const char* heading, const char* columnTwoHeading, bool isAscending, bool preload);
void RemoteHighScores_addHighScore(RemoteHighScores* this, HighScore* newHighScore);
void RemoteHighScores_update(RemoteHighScores* this, ABHashtable* hashtable);
static void RemoteHighScores_setAscending(RemoteHighScores* this, bool ascending);
bool RemoteHighScores_getAscending(RemoteHighScores* this);
SoftwareInformation* RemoteHighScores_getSoftwareInformation(RemoteHighScores* this);

// Static fields with runtime initializers: call this once at startup
void RemoteHighScores_staticInit(void) {
    RemoteHighScores_hashTable = StdUtil_createHashtable(StdUtil_getInstance());
}

static void RemoteHighScores_initFields(RemoteHighScores* this) {
    this->logUtil = LogUtil_getInstance();
    this->enumerationUtil = EnumerationUtil_getInstance();
    
    
    this->ascending = nullptr;
    this->ASCENDING = "ASCENDING";
}


void RemoteHighScores_init(RemoteHighScores* this, AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation, GameInfo* gameInfo, const char* heading, const char* columnTwoHeading, bool ascending, bool preload) {
        HighScores_init(&this->base, GameInfo_toString(gameInfo), heading, columnTwoHeading);
        RemoteHighScores_initFields(this);
        this->abeClientInformation = abeClientInformation;
        this->softwareInformation = softwareInformation;
        RemoteHighScores_setAscending(this, ascending);
        if (preload) {
            RemoteHighScoresProcessorFactory_process(RemoteHighScoresProcessorFactory_getInstance(), this, this->abeClientInformation, gameInfo);
        }
}

RemoteHighScores* RemoteHighScores_new(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation, GameInfo* gameInfo, const char* heading, const char* columnTwoHeading, bool ascending, bool preload) {
    RemoteHighScores* this = calloc(1, sizeof(RemoteHighScores));
    RemoteHighScores_init(this, abeClientInformation, softwareInformation, gameInfo, heading, columnTwoHeading, ascending, preload);
    return this;
}


// synchronized
HighScores* RemoteHighScores_getInstance(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation, GameInfo* gameInfo, const char* heading, const char* columnTwoHeading, bool isAscending) {
        return RemoteHighScores_getInstancePreload(abeClientInformation, softwareInformation, gameInfo, heading, columnTwoHeading, isAscending, true);
}


// synchronized
HighScores* RemoteHighScores_getInstancePreload(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation, GameInfo* gameInfo, const char* heading, const char* columnTwoHeading, bool isAscending, bool preload) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            HighScores* highScores = ((HighScores*) JAVA_CALL(RemoteHighScores_hashTable, get, gameInfo));
            if (highScores == nullptr) {
                highScores = RemoteHighScores_new(abeClientInformation, softwareInformation, gameInfo, heading, columnTwoHeading, isAscending, preload);
                JAVA_CALL(RemoteHighScores_hashTable, put, gameInfo, highScores);
            }
            return highScores;
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(logUtil, commonStrings->EXCEPTION, RemoteErrorHighScoresSingletonFactory_getInstance(), commonStrings->GET_INSTANCE, e);
            return RemoteErrorHighScoresSingletonFactory_getInstance();
        } JAVA_END_TRY;
}


void RemoteHighScores_addHighScore(RemoteHighScores* this, HighScore* newHighScore) {
        RemoteHighScoresSubmissionProcessorFactory_process(RemoteHighScoresSubmissionProcessorFactory_getInstance(), this, this->abeClientInformation, newHighScore);
}


void RemoteHighScores_update(RemoteHighScores* this, ABHashtable* hashtable) {
        JAVA_CALL(RemoteHighScores_getList(this), clear);
        BasicArrayList* vector = ((BasicArrayList*) ABHashtable_get(hashtable, ((Any*) RemoteHighScoresData_getInstance()->HIGH_SCORES)));
        if (vector != nullptr) {
            int32_t size = BasicArrayList_size(vector);
            for (int32_t index = 0; index < size; index++) {
                BasicArrayList* highScoreVector = ((BasicArrayList*) BasicArrayList_get(vector, index));
                const char* displayName = ((const char*) BasicArrayList_get(highScoreVector, 0));
                const char* score = ((const char*) BasicArrayList_get(highScoreVector, 1));
                int64_t longScore = ((int64_t) strtoll(score, nullptr, 10));
                HighScore* highScore = HighScore_new(-1, displayName, nullptr, longScore);
                JAVA_CALL(RemoteHighScores_getList(this), add, highScore);
            }
        } else {
            const char* NEXT_ELEMENT = JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->NEXT), append, "Element: "), toString);
            CommonStrings* commonStrings = CommonStrings_getInstance();
            Enumeration* enumeration = ABHashtable_elements(hashtable);
            Any* nextElement = nullptr;
            while (EnumerationUtil_hasMoreElements(this->enumerationUtil, enumeration)) {
                nextElement = EnumerationUtil_nextElement(this->enumerationUtil, enumeration);
                LogUtil_putF(this->logUtil, java_concat(NEXT_ELEMENT, java_string_of(nextElement)), this, commonStrings->PROCESS);
            }
        }
}


static void RemoteHighScores_setAscending(RemoteHighScores* this, bool ascending) {
        this->ascending = ascending;
}


bool RemoteHighScores_getAscending(RemoteHighScores* this) {
        return this->ascending;
}


SoftwareInformation* RemoteHighScores_getSoftwareInformation(RemoteHighScores* this) {
        return this->softwareInformation;
}

