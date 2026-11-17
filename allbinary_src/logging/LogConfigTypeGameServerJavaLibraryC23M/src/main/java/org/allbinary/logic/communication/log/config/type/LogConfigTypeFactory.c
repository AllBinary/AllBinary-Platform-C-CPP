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
// package org.allbinary.logic.communication.log.config.type

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"

typedef struct LogConfigTypeFactory LogConfigTypeFactory;
struct LogConfigTypeFactory {
    const char* NO_DESCRIPTION;
    LogConfigType* INIT_SERVER;
    LogConfigType* LOBBY_SERVER;
    LogConfigType* GAME_SERVER;
    LogConfigType* GAME_SIMULATOR;
    LogConfigType* CUSTOM_TYPES;
};

static LogConfigTypeFactory* LogConfigTypeFactory_instance;

LogConfigTypeFactory* LogConfigTypeFactory_new(void);
LogConfigTypeFactory* LogConfigTypeFactory_getInstance(void);

void LogConfigTypeFactory_init(LogConfigTypeFactory* this);

// Static fields with runtime initializers: call this once at startup
void LogConfigTypeFactory_staticInit(void) {
    LogConfigTypeFactory_instance = LogConfigTypeFactory_new();
}

static void LogConfigTypeFactory_initFields(LogConfigTypeFactory* this) {
    this->NO_DESCRIPTION = "No Description";
    this->INIT_SERVER = LogConfigType_new("Init Server", this->NO_DESCRIPTION);
    this->LOBBY_SERVER = LogConfigType_new("Lobby Server", this->NO_DESCRIPTION);
    this->GAME_SERVER = LogConfigType_new("Game Server", this->NO_DESCRIPTION);
    this->GAME_SIMULATOR = LogConfigType_new("Game Simulator", this->NO_DESCRIPTION);
    this->CUSTOM_TYPES = LogConfigType_new("Custom Types", this->NO_DESCRIPTION);
}


LogConfigTypeFactory* LogConfigTypeFactory_getInstance(void) {
        return LogConfigTypeFactory_instance;
}


void LogConfigTypeFactory_init(LogConfigTypeFactory* this) {
    LogConfigTypeFactory_initFields(this);
        JAVA_CALL(LogConfigTypes_LOGGING, add, this->INIT_SERVER);
}

LogConfigTypeFactory* LogConfigTypeFactory_new(void) {
    LogConfigTypeFactory* this = calloc(1, sizeof(LogConfigTypeFactory));
    LogConfigTypeFactory_init(this);
    return this;
}

