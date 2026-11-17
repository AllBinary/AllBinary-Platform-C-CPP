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
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/GameInfoData.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/system/security/crypt/jcehelper/NoCrypt.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/HashtableUtil.h"
#include "org/allbinary/game/score/remote/RemoteHighScoresProcessorInterface.h"

typedef struct RemoteHighScoresProcessor RemoteHighScoresProcessor;
struct RemoteHighScoresProcessor {
    RemoteHighScoresProcessorInterface RemoteHighScoresProcessorInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    NoCrypt* noCrypt;
};


RemoteHighScoresProcessor* RemoteHighScoresProcessor_new(void);

void RemoteHighScoresProcessor_init(RemoteHighScoresProcessor* this);
void RemoteHighScoresProcessor_process(RemoteHighScoresProcessor* this, RemoteHighScores* remoteHighScores, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo);

static void RemoteHighScoresProcessor_initFields(RemoteHighScoresProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->noCrypt = NoCrypt_new();
}


void RemoteHighScoresProcessor_init(RemoteHighScoresProcessor* this) {
    RemoteHighScoresProcessor_initFields(this);
}

RemoteHighScoresProcessor* RemoteHighScoresProcessor_new(void) {
    RemoteHighScoresProcessor* this = calloc(1, sizeof(RemoteHighScoresProcessor));
    RemoteHighScoresProcessor_init(this);
    return this;
}


// throws Exception
// synchronized
void RemoteHighScoresProcessor_process(RemoteHighScoresProcessor* this, RemoteHighScores* remoteHighScores, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo) {
        LogUtil_putF(this->logUtil, "Begin Remote HighScores Retrieval", this, this->commonStrings->PROCESS);
        GameInfoData* gameInfoData = GameInfoData_getInstance();
        ABHashtable* hashtable = AbeClientInformationInterface_toHashtable(abeClientInformation);
        HashtableUtil_putAll(HashtableUtil_getInstance(), GameInfo_toHashtable(gameInfo), hashtable);
        ABHashtable_put(hashtable, gameInfoData->SOFTWARE_INFORMATION, JAVA_CALL(RemoteHighScores_getSoftwareInformation(remoteHighScores), toString));
        ABHashtable_put(hashtable, remoteHighScores->ASCENDING, JAVA_CALL(RemoteHighScores_getAscending(remoteHighScores), toString));
        DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton_getInstance();
        ABHashtable_put(hashtable, displayInfoSingleton->ORIENTATION, BooleanFactory_toStringb(BooleanFactory_getInstance(), DisplayInfoSingleton_isPortrait(displayInfoSingleton)));
        ABHashtable_put(hashtable, RemoteHighScoresData_getInstance()->GAME_CONFIGURATION, GameConfigurationCentral_toString(GameConfigurationCentral_getInstance()));
        if (XmlRpcAbeClient_isOnline) {
            ABHashtable* resultHashtable = ((ABHashtable*) XmlRpcRemoteHighScoresClient_get(XmlRpcRemoteHighScoresClient_new(abeClientInformation, "highscoresservicessl.php", "HighScoresService.process"), hashtable, this->noCrypt));
            RemoteHighScores_update(remoteHighScores, resultHashtable);
        }
}

