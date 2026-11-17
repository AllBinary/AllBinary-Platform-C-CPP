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
// #include "javax/microedition/lcdui/Command.h"
// #include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/score/HighScore.h"
#include "org/allbinary/game/score/HighScoreNamePersistanceSingleton.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"
#include "org/allbinary/game/score/HighScoresResultsListener.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"

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

Command* HighScoreUtil_SUBMIT_TEXTBOX_COMMAND;

HighScoreUtil* HighScoreUtil_new(HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, const char* name, HighScore* highScore);

void HighScoreUtil_init(HighScoreUtil* this, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, const char* name, HighScore* highScore);
void HighScoreUtil_setHighScoresArray(HighScoreUtil* this, HighScores** highScoresArray);
void HighScoreUtil_update(HighScoreUtil* this, const char* name);
void HighScoreUtil_saveHighScore(HighScoreUtil* this);
void HighScoreUtil_submit(HighScoreUtil* this, MyCanvas* myCanvas);

// Static fields with runtime initializers: call this once at startup
void HighScoreUtil_staticInit(void) {
    HighScoreUtil_SUBMIT_TEXTBOX_COMMAND = Command_new("Submit", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
}

static void HighScoreUtil_initFields(HighScoreUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    
    
    
    
    this->firstTime = true;
}


void HighScoreUtil_init(HighScoreUtil* this, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, const char* name, HighScore* highScore) {
    HighScoreUtil_initFields(this);
        this->highScoresFactoryInterface = highScoresFactoryInterface;
        this->highScoresHelper = highScoresHelper;
        this->highScoresArray = HighScoresHelperBaseInterface_getHighScoresArray(this->highScoresHelper);
        this->highScore = highScore;
        this->abeClientInformation = abeClientInformation;
        this->gameInfo = gameInfo;
}

HighScoreUtil* HighScoreUtil_new(HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, const char* name, HighScore* highScore) {
    HighScoreUtil* this = calloc(1, sizeof(HighScoreUtil));
    HighScoreUtil_init(this, highScoresFactoryInterface, highScoresHelper, abeClientInformation, gameInfo, cmdListener, name, highScore);
    return this;
}


void HighScoreUtil_setHighScoresArray(HighScoreUtil* this, HighScores** highScoresArray) {
        this->highScoresArray = highScoresArray;
        this->firstTime = false;
        HighScoreUtil_saveHighScore(this);
}


void HighScoreUtil_update(HighScoreUtil* this, const char* name) {
        HighScoreNamePersistanceSingleton_save(HighScoreNamePersistanceSingleton_getInstance(), this->abeClientInformation, this->gameInfo, name);
        HighScore_setName(this->highScore, name);
}


void HighScoreUtil_saveHighScore(HighScoreUtil* this) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->START), append, StringUtil_toString(StringUtil_getInstance(), this->highScore)), toString), this, "saveHighScore");
        int32_t size = java_array_length(this->highScoresArray);
        if (this->firstTime && size == 0) {
            LogUtil_putF(this->logUtil, "Games canvas did not give us any HighScores", this, "saveHighScore");
            HighScoresFactoryInterface_fetchHighScores(this->highScoresFactoryInterface, this->gameInfo, this);
            return;
        }
        HighScores* highScores = nullptr;
        const char* highScoresAsString = nullptr;
        for (int32_t index = 0; index < size; index++) {
            highScores = this->highScoresArray[index];
            HighScores_addHighScore(highScores, this->highScore);
            highScoresAsString = HighScores_toString(highScores);
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Added/Adding Score: "), append, highScoresAsString), toString), this, "saveHighScore");
        }
        HighScoresHelperBaseInterface_setHighScoresArray(this->highScoresHelper, this->highScoresArray);
}


void HighScoreUtil_submit(HighScoreUtil* this, MyCanvas* myCanvas) {
        CommandListener* commandListener = MyCanvas_getCustomCommandListener(myCanvas);
        CommandListener_commandAction(commandListener, HighScoreUtil_SUBMIT_TEXTBOX_COMMAND, myCanvas);
}

