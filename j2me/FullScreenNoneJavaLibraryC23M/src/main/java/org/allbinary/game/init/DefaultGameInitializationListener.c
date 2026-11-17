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
// package org.allbinary.game.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/event/GameInitializedEvent.h"
#include "org/allbinary/game/configuration/event/GameInitializedEventHandler.h"
#include "org/allbinary/game/configuration/event/GameInitializedListenerInterface.h"
#include "org/allbinary/game/resource/FeatureResourceInitializationUtil.h"
#include "org/allbinary/graphics/threed/SWTJOGLProcessor.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct DefaultGameInitializationListener DefaultGameInitializationListener;
struct DefaultGameInitializationListener {
    GameInitializedListenerInterface GameInitializedListenerInterface_interface;
    LogUtil* logUtil;
    SWTJOGLProcessor* swtJOGLProcessor;
    bool firstTime;
};


DefaultGameInitializationListener* DefaultGameInitializationListener_new(void);

void DefaultGameInitializationListener_init(DefaultGameInitializationListener* this);
void DefaultGameInitializationListener_onEvent(DefaultGameInitializationListener* this, AllBinaryEventObject* eventObject);
void DefaultGameInitializationListener_onGameInitialized(DefaultGameInitializationListener* this, GameInitializedEvent* gameInitializedEvent);

static void DefaultGameInitializationListener_initFields(DefaultGameInitializationListener* this) {
    this->logUtil = LogUtil_getInstance();
    this->swtJOGLProcessor = SWTJOGLProcessor_getInstance();
    this->firstTime = true;
}


void DefaultGameInitializationListener_init(DefaultGameInitializationListener* this) {
    DefaultGameInitializationListener_initFields(this);
        GameInitializedEventHandler* gameInitializedEventHandler = GameInitializedEventHandler_getInstance();
        GameInitializedEventHandler_removeAllListeners(gameInitializedEventHandler);
        GameInitializedEventHandler_addListenerInterface(gameInitializedEventHandler, ((GameInitializedListenerInterface*) this));
}

DefaultGameInitializationListener* DefaultGameInitializationListener_new(void) {
    DefaultGameInitializationListener* this = calloc(1, sizeof(DefaultGameInitializationListener));
    DefaultGameInitializationListener_init(this);
    return this;
}


void DefaultGameInitializationListener_onEvent(DefaultGameInitializationListener* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void DefaultGameInitializationListener_onGameInitialized(DefaultGameInitializationListener* this, GameInitializedEvent* gameInitializedEvent) {
        const char* ON_GAME_INITIALIZED = "onGameInitialized";
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            LogUtil_putF(this->logUtil, commonStrings->START, this, ON_GAME_INITIALIZED);
            while (!SWTJOGLProcessor_isHolderCreated(this->swtJOGLProcessor)) {
                LogUtil_putF(this->logUtil, commonStrings->UPDATE, this, ON_GAME_INITIALIZED);
                java_sleep(20);
            }
            FeatureResourceInitializationUtil_init(FeatureResourceInitializationUtil_getInstance(), GameInitializedEvent_getLevel(gameInitializedEvent));
            if (this->firstTime) {
                this->firstTime = false;
            } else {
                SWTJOGLProcessor_onSurfaceChanged(this->swtJOGLProcessor);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, ON_GAME_INITIALIZED, e);
        } JAVA_END_TRY;
}

