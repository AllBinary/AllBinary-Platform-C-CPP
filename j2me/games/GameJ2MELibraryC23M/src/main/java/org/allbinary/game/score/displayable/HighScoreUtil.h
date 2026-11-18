#ifndef ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCOREUTIL_H
#define ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCOREUTIL_H
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
// package org.allbinary.game.score.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Command Command;
typedef struct CommandListener CommandListener;
typedef struct GameInfo GameInfo;
typedef struct HighScore HighScore;
typedef struct HighScoreNamePersistanceSingleton HighScoreNamePersistanceSingleton;
typedef struct HighScores HighScores;
typedef struct HighScoresFactoryInterface HighScoresFactoryInterface;
typedef struct HighScoresHelperBaseInterface HighScoresHelperBaseInterface;
typedef struct HighScoresResultsListener HighScoresResultsListener;
typedef struct MyCanvas MyCanvas;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct CommonStrings CommonStrings;
#if __has_include("javax/microedition/lcdui/Command.h")
#include "javax/microedition/lcdui/Command.h"
#endif
#if __has_include("org/allbinary/game/GameInfo.h")
#include "org/allbinary/game/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/score/HighScore.h")
#include "org/allbinary/game/score/HighScore.h"
#endif
#if __has_include("org/allbinary/game/score/HighScores.h")
#include "org/allbinary/game/score/HighScores.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresFactoryInterface.h")
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresHelperBaseInterface.h")
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"
#endif
#include "org/allbinary/game/score/HighScoresResultsListener.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h")
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif

typedef struct HighScoreUtil HighScoreUtil;
struct HighScoreUtil {
    HighScoresResultsListener HighScoresResultsListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    HighScoresFactoryInterface* highScoresFactoryInterface;
    HighScores** highScoresArray;
    HighScore* highScore;
    AbeClientInformationInterface* abeClientInformation;
    GameInfo* gameInfo;
    HighScoresHelperBaseInterface* highScoresHelper;
    bool firstTime;
};

extern Command* HighScoreUtil_SUBMIT_TEXTBOX_COMMAND;

HighScoreUtil* HighScoreUtil_new(HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, const char* name, HighScore* highScore);

void HighScoreUtil_init(HighScoreUtil* this, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, const char* name, HighScore* highScore);

void HighScoreUtil_setHighScoresArray(HighScoreUtil* this, HighScores** highScoresArray);

void HighScoreUtil_update(HighScoreUtil* this, const char* name);

void HighScoreUtil_saveHighScore(HighScoreUtil* this);

void HighScoreUtil_submit(HighScoreUtil* this, MyCanvas* myCanvas);
#define HighScoreUtil_new7 HighScoreUtil_new
#define HighScoreUtil_init7 HighScoreUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoreUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HighScoreUtil_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCOREUTIL_H
