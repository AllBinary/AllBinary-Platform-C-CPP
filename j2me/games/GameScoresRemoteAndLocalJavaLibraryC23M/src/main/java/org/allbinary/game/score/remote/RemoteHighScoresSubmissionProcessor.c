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
#include "org/allbinary/game/GameInfoData.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/game/score/HighScore.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/system/security/crypt/jcehelper/NoCrypt.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/HashtableUtil.h"
#include "org/allbinary/game/score/remote/RemoteHighScoresSubmissionProcessorInterface.h"

typedef struct RemoteHighScoresSubmissionProcessor RemoteHighScoresSubmissionProcessor;
struct RemoteHighScoresSubmissionProcessor {
    RemoteHighScoresSubmissionProcessorInterface RemoteHighScoresSubmissionProcessorInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    NoCrypt* noCrypt;
};


RemoteHighScoresSubmissionProcessor* RemoteHighScoresSubmissionProcessor_new(void);

void RemoteHighScoresSubmissionProcessor_init(RemoteHighScoresSubmissionProcessor* this);
void RemoteHighScoresSubmissionProcessor_process(RemoteHighScoresSubmissionProcessor* this, RemoteHighScores* remoteHighScores, AbeClientInformationInterface* abeClientInformation, HighScore* highScore);

static void RemoteHighScoresSubmissionProcessor_initFields(RemoteHighScoresSubmissionProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->noCrypt = NoCrypt_new();
}


void RemoteHighScoresSubmissionProcessor_init(RemoteHighScoresSubmissionProcessor* this) {
    RemoteHighScoresSubmissionProcessor_initFields(this);
}

RemoteHighScoresSubmissionProcessor* RemoteHighScoresSubmissionProcessor_new(void) {
    RemoteHighScoresSubmissionProcessor* this = calloc(1, sizeof(RemoteHighScoresSubmissionProcessor));
    RemoteHighScoresSubmissionProcessor_init(this);
    return this;
}


// synchronized
void RemoteHighScoresSubmissionProcessor_process(RemoteHighScoresSubmissionProcessor* this, RemoteHighScores* remoteHighScores, AbeClientInformationInterface* abeClientInformation, HighScore* highScore) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, "Begin Remote HighScores Submission", this, this->commonStrings->PROCESS);
            GameInfoData* gameInfoData = GameInfoData_getInstance();
            ABHashtable* hashtable = AbeClientInformationInterface_toHashtable(abeClientInformation);
            HashtableUtil_putAll(HashtableUtil_getInstance(), JAVA_CALL(HighScore_getGameInfo(highScore), toHashtable), hashtable);
            ABHashtable_put(hashtable, RemoteHighScoresData_getInstance()->CUSTOMER_USER_NAME, "None");
            ABHashtable_put(hashtable, RemoteHighScoresData_getInstance()->DISPLAY_NAME, HighScore_getName(highScore));
            ABHashtable_put(hashtable, gameInfoData->SOFTWARE_INFORMATION, JAVA_CALL(RemoteHighScores_getSoftwareInformation(remoteHighScores), toString));
            ABHashtable_put(hashtable, remoteHighScores->ASCENDING, JAVA_CALL(RemoteHighScores_getAscending(remoteHighScores), toString));
            DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton_getInstance();
            ABHashtable_put(hashtable, displayInfoSingleton->ORIENTATION, BooleanFactory_toStringb(BooleanFactory_getInstance(), DisplayInfoSingleton_isPortrait(displayInfoSingleton)));
            ABHashtable_put(hashtable, RemoteHighScoresData_getInstance()->GAME_CONFIGURATION, GameConfigurationCentral_toString(GameConfigurationCentral_getInstance()));
            ABHashtable_put(hashtable, RemoteHighScoresData_getInstance()->SCORE, java_string_of(HighScore_getScore(highScore)));
            if (XmlRpcAbeClient_isOnline) {
                ABHashtable* resultHashtable = ((ABHashtable*) XmlRpcRemoteHighScoresClient_get(XmlRpcRemoteHighScoresClient_new(abeClientInformation, "highscoresubmissionservicessl.php", "HighScoreSubmissionService.process"), hashtable, this->noCrypt));
                RemoteHighScores_update(remoteHighScores, resultHashtable);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, e);
        } JAVA_END_TRY;
}

