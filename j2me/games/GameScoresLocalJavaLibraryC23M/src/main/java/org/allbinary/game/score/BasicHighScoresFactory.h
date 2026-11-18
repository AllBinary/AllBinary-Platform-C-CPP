#ifndef ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_H
#define ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_H
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
typedef struct HighScoresBase HighScoresBase;
typedef struct HighScores HighScores;
typedef struct HighScoresResultsListener HighScoresResultsListener;
typedef struct RecordStoreHighScores RecordStoreHighScores;
typedef struct ScoreComparator ScoreComparator;
typedef struct HighScoresHelper2 HighScoresHelper2;
typedef struct HighScoresHelperBaseInterface HighScoresHelperBaseInterface;
typedef struct GameInfo GameInfo;
typedef struct LogUtil LogUtil;
typedef struct SoftwareInformation SoftwareInformation;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h")
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#endif
#include "org/allbinary/game/score/HighScoresBase.h"
#if __has_include("org/allbinary/game/score/HighScores.h")
#include "org/allbinary/game/score/HighScores.h"
#endif

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
#define BasicHighScoresFactory_new2 BasicHighScoresFactory_new
#define BasicHighScoresFactory_init2 BasicHighScoresFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicHighScoresFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicHighScoresFactory_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_H
