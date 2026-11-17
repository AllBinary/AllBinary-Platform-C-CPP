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
// package org.allbinary.game.layer.resources

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct BasicGameResources BasicGameResources;
struct BasicGameResources {
    LogUtil* logUtil;
    const char* RESOURCE;
    const char* RESOURCE_DESTROY;
};

StringMaker* BasicGameResources_stringBuffer;

BasicGameResources* BasicGameResources_new(void);

void BasicGameResources_init(BasicGameResources* this);
void BasicGameResources_init(BasicGameResources* this, const char* ROOT, const char** SIZE);
void BasicGameResources_append(BasicGameResources* this, const char* ROOT, const char* sizeString);
const char* BasicGameResources_getString(BasicGameResources* this);

// Static fields with runtime initializers: call this once at startup
void BasicGameResources_staticInit(void) {
    BasicGameResources_stringBuffer = StringMaker_new();
}

static void BasicGameResources_initFields(BasicGameResources* this) {
    this->logUtil = LogUtil_getInstance();
    this->RESOURCE = StringUtil_getInstance()->EMPTY_STRING;
    this->RESOURCE_DESTROY = StringUtil_getInstance()->EMPTY_STRING;
}


void BasicGameResources_init(BasicGameResources* this) {
    BasicGameResources_initFields(this);
}

BasicGameResources* BasicGameResources_new(void) {
    BasicGameResources* this = calloc(1, sizeof(BasicGameResources));
    BasicGameResources_init(this);
    return this;
}


void BasicGameResources_init(BasicGameResources* this, const char* ROOT, const char** SIZE) {
        JAVA_TRY {
            int32_t scale = JAVA_CALL(JAVA_CALL(GameConfigurationCentral_getInstance()->SCALE, getValue), intValue);
            if (scale > 1 && scale - 1 < java_array_length(SIZE)) {
                BasicGameResources_append(this, ROOT, SIZE[scale - 1]);
            } else {
                java_throw(java_exception_new("Exception", JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Invalid Value: "), appendint, scale), toString)));
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->INIT, e);
        } JAVA_END_TRY;
}


// throws Exception
void BasicGameResources_append(BasicGameResources* this, const char* ROOT, const char* sizeString) {
        const char* DESTROY = "_destroy";
        const char* string = BasicGameResources_getString(this);
        JAVA_CALL(BasicGameResources_stringBuffer, delete, 0, JAVA_CALL(BasicGameResources_stringBuffer, length));
        JAVA_CALL(BasicGameResources_stringBuffer, append, ROOT);
        JAVA_CALL(BasicGameResources_stringBuffer, append, string);
        JAVA_CALL(BasicGameResources_stringBuffer, append, sizeString);
        this->RESOURCE = JAVA_CALL(BasicGameResources_stringBuffer, toString);
        JAVA_CALL(BasicGameResources_stringBuffer, delete, 0, JAVA_CALL(BasicGameResources_stringBuffer, length));
        JAVA_CALL(BasicGameResources_stringBuffer, append, ROOT);
        JAVA_CALL(BasicGameResources_stringBuffer, append, DESTROY);
        JAVA_CALL(BasicGameResources_stringBuffer, append, string);
        JAVA_CALL(BasicGameResources_stringBuffer, append, sizeString);
        this->RESOURCE_DESTROY = JAVA_CALL(BasicGameResources_stringBuffer, toString);
}


// throws Exception
const char* BasicGameResources_getString(BasicGameResources* this) {
        return GameGraphicsResourceUtil_getName(GameGraphicsResourceUtil_getInstance());
}

