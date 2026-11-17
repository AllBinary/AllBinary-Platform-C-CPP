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
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/SoftwareInformation.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/game/score/HighScoresBase.h"

typedef struct BasicHighScoresFactory BasicHighScoresFactory;
struct BasicHighScoresFactory {
    HighScoresBase base;
    LogUtil* logUtil;
    AbeClientInformationInterface* abeClientInformation;
    HighScores** highScoresArray;
    const char* TOP;
    const char* SCORES;
    const char* PERSONAL_HIGH_SCORES;
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
    
    this->highScoresArray = ((HighScores**) java_array_new(sizeof(HighScores*), 1));
    this->TOP = "Top";
    this->SCORES = "Scores";
    this->PERSONAL_HIGH_SCORES = "Personal Top Scores";
    this->FETCH = "fetchHighScores";
}


void BasicHighScoresFactory_init(BasicHighScoresFactory* this, AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation) {
    HighScoresBase_init(&this->base);
    BasicHighScoresFactory_initFields(this);
        this->abeClientInformation = abeClientInformation;
}

BasicHighScoresFactory* BasicHighScoresFactory_new(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation) {
    BasicHighScoresFactory* this = calloc(1, sizeof(BasicHighScoresFactory));
    BasicHighScoresFactory_init(this, abeClientInformation, softwareInformation);
    return this;
}


void BasicHighScoresFactory_fetchHighScores(BasicHighScoresFactory* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener) {
        LogUtil_putF(this->logUtil, "Getting Local HighScores", this, this->FETCH);
        BasicHighScoresFactory_fetchHighScoresPreload(this, gameInfo, highScoresResultsListener, true);
}


void BasicHighScoresFactory_fetchHighScoresPreload(BasicHighScoresFactory* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener, bool preload) {
        JAVA_TRY {
            this->highScoresArray[0] = RecordStoreHighScores_getInstance(this->abeClientInformation, gameInfo, this->TOP, this->PERSONAL_HIGH_SCORES, this->SCORES, ScoreComparator_new(true));
            HighScoresResultsListener_setHighScoresArray(highScoresResultsListener, this->highScoresArray);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->FETCH, e);
        } JAVA_END_TRY;
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

