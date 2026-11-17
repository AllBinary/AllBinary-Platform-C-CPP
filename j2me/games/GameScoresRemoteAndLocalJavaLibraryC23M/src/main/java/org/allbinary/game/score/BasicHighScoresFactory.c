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
#include "org/allbinary/thread/ARunnable.h"
#include "org/allbinary/game/BasicHighScoresGameInfoFactory.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/GameType.h"
#include "org/allbinary/game/GameTypeFactory.h"
#include "org/allbinary/game/score/remote/RemoteHighScores.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/system/SoftwareInformation.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/thread/SecondaryThreadPool.h"
#include "org/allbinary/game/score/HighScoresBase.h"

typedef struct BasicHighScoresFactory BasicHighScoresFactory;
struct BasicHighScoresFactory {
    HighScoresBase base;
    LogUtil* logUtil;
    AbeClientInformationInterface* abeClientInformation;
    SoftwareInformation* softwareInformation;
    HighScores** highScoresArray;
    const char* TOP;
    const char* SCORES;
    const char* PERSONAL_HIGH_SCORES;
    const char* WORLD_TOP_SCORES;
    const char* FETCH;
};


BasicHighScoresFactory* BasicHighScoresFactory_new(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation);

void BasicHighScoresFactory_init(BasicHighScoresFactory* this, AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation);
void BasicHighScoresFactory_fetchHighScores(BasicHighScoresFactory* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener);
void BasicHighScoresFactory_fetchHighScoresPreload(BasicHighScoresFactory* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener, bool preload);
HighScoresHelperBaseInterface* BasicHighScoresFactory_createHighScoresHelper(BasicHighScoresFactory* this);
bool BasicHighScoresFactory_loaded(int32_t index2);

static void BasicHighScoresFactory_initFields(BasicHighScoresFactory* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    this->highScoresArray = ((HighScores**) java_array_new(sizeof(HighScores*), 2));
    this->TOP = "Top";
    this->SCORES = "Scores";
    this->PERSONAL_HIGH_SCORES = "Personal Top Scores";
    this->WORLD_TOP_SCORES = "World Top Scores";
    this->FETCH = "fetchHighScores";
}


void BasicHighScoresFactory_init(BasicHighScoresFactory* this, AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation) {
    HighScoresBase_init(&this->base);
    BasicHighScoresFactory_initFields(this);
        this->abeClientInformation = abeClientInformation;
        this->softwareInformation = softwareInformation;
}

BasicHighScoresFactory* BasicHighScoresFactory_new(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation) {
    BasicHighScoresFactory* this = calloc(1, sizeof(BasicHighScoresFactory));
    BasicHighScoresFactory_init(this, abeClientInformation, softwareInformation);
    return this;
}


void BasicHighScoresFactory_fetchHighScores(BasicHighScoresFactory* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener) {
        LogUtil_putF(this->logUtil, "Getting Remote/Local HighScores", this, this->FETCH);
        BasicHighScoresFactory_fetchHighScoresPreload(this, gameInfo, highScoresResultsListener, true);
}


void BasicHighScoresFactory_fetchHighScoresPreload(BasicHighScoresFactory* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener, bool preload) {
        SecondaryThreadPool_runTask(SecondaryThreadPool_getInstance(), ARunnable_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void BasicHighScoresFactory_run(BasicHighScoresFactory* this) {
                LogUtil* logUtil = LogUtil_getInstance();
                JAVA_TRY {
                    LogUtil_putF(logUtil, this->commonStrings->START, this, this->FETCH);
                    this->highScoresArray[0] = RecordStoreHighScores_getInstance(this->abeClientInformation, gameInfo, this->TOP, this->PERSONAL_HIGH_SCORES, this->SCORES, ScoreComparator_new(true));
                    GameType* gameType = GameInfo_getGameType(gameInfo);
                    GameTypeFactory* gameTypeFactory = GameTypeFactory_getInstance();
                    GameInfo* gameInfo2 = gameInfo;
                    if (gameType == gameTypeFactory->SINGLE_PLAYER || gameType == gameTypeFactory->BOT) {
                        gameInfo2 = BasicHighScoresGameInfoFactory_getInstance()->SINGLE_PLAYER_SERVER;
                    } else if (gameType == gameTypeFactory->MULTI_PLAYER) {
                        gameInfo2 = BasicHighScoresGameInfoFactory_getInstance()->MULTI_PLAYER_SERVER;
                    }
                    this->highScoresArray[1] = RemoteHighScores_getInstancePreload(this->abeClientInformation, this->softwareInformation, gameInfo2, this->WORLD_TOP_SCORES, this->SCORES, BooleanFactory_getInstance()->FALSE, preload);
                    LogUtil_putF(logUtil, this->commonStrings->END, this, this->FETCH);
                    LastFetchHighScoresFactory_getInstance()->highScoresArray = this->highScoresArray;
                    HighScoresResultsListener_setHighScoresArray(highScoresResultsListener, this->highScoresArray);
                } JAVA_CATCH(Exception, e) {
                    LogUtil_put(logUtil, this->base.commonStrings->EXCEPTION, this, this->FETCH, e);
                } JAVA_END_TRY;
        }
#endif
);
}


HighScoresHelperBaseInterface* BasicHighScoresFactory_createHighScoresHelper(BasicHighScoresFactory* this) {
        return HighScoresHelper2_new();
}


bool BasicHighScoresFactory_loaded(int32_t index2) {
        if (index2 >= 0) {
            return true;
        }
        return false;
}

