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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct PlatformInputMappingFactory PlatformInputMappingFactory;
struct PlatformInputMappingFactory {
    LogUtil* logUtil;
    PersistentInputMapping* inputToGameKeyMapping;
};

static PlatformInputMappingFactory* PlatformInputMappingFactory_instance;

PlatformInputMappingFactory* PlatformInputMappingFactory_new(void);
PlatformInputMappingFactory* PlatformInputMappingFactory_getInstance(void);
PersistentInputMapping* PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory* this);

// Static fields with runtime initializers: call this once at startup
void PlatformInputMappingFactory_staticInit(void) {
    PlatformInputMappingFactory_instance = PlatformInputMappingFactory_new();
}

static void PlatformInputMappingFactory_initFields(PlatformInputMappingFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->inputToGameKeyMapping = PersistentInputMapping_getNullInstance();
}

void PlatformInputMappingFactory_init(PlatformInputMappingFactory* this) {
    PlatformInputMappingFactory_initFields(this);
}

PlatformInputMappingFactory* PlatformInputMappingFactory_new(void) {
    PlatformInputMappingFactory* this = calloc(1, sizeof(PlatformInputMappingFactory));
    PlatformInputMappingFactory_init(this);
    return this;
}


PlatformInputMappingFactory* PlatformInputMappingFactory_getInstance(void) {
        return PlatformInputMappingFactory_instance;
}


PersistentInputMapping* PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory* this) {
        JAVA_TRY {
            if (this->inputToGameKeyMapping == PersistentInputMapping_getNullInstance()) {
                this->inputToGameKeyMapping = NormalJ2MEGameInputMapping_new();
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
        } JAVA_END_TRY;
        return this->inputToGameKeyMapping;
}

