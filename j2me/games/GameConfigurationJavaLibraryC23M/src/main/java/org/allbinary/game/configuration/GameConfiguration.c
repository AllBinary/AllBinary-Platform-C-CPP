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
// package org.allbinary.game.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/event/GameFeatureEvent.h"
#include "org/allbinary/game/configuration/event/GameFeatureEventHandler.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct GameConfiguration GameConfiguration;
struct GameConfiguration {
    const char* name;
    int32_t defaultValue;
    int32_t value;
    int32_t minValue;
    int32_t maxValue;
    bool modifiable;
};

static int32_t GameConfiguration_MIN_VALUE;

GameConfiguration* GameConfiguration_new(const char* name, int32_t defaultValue, int32_t minValue, int32_t maxValue);

void GameConfiguration_init(GameConfiguration* this, const char* name, int32_t defaultValue, int32_t minValue, int32_t maxValue);
void GameConfiguration_setValue(GameConfiguration* this, int32_t value);
int32_t GameConfiguration_getValue(GameConfiguration* this);
void GameConfiguration_setMaxValue(GameConfiguration* this, int32_t maxValue);
int32_t GameConfiguration_getMaxValue(GameConfiguration* this);
void GameConfiguration_setMinValue(GameConfiguration* this, int32_t minValue);
int32_t GameConfiguration_getMinValue(GameConfiguration* this);
void GameConfiguration_setName(GameConfiguration* this, const char* name);
const char* GameConfiguration_getName(GameConfiguration* this);
void GameConfiguration_setDefaultValue(GameConfiguration* this, int32_t defaultValue);
int32_t GameConfiguration_getDefaultValue(GameConfiguration* this);
void GameConfiguration_setDefault(GameConfiguration* this);
const char* GameConfiguration_toString(GameConfiguration* this);
void GameConfiguration_setModifiable(GameConfiguration* this, bool modifiable);
bool GameConfiguration_isModifiable(GameConfiguration* this);

// Static fields with runtime initializers: call this once at startup
void GameConfiguration_staticInit(void) {
    GameConfiguration_MIN_VALUE = Integer_MIN_VALUE;
}

static void GameConfiguration_initFields(GameConfiguration* this) {
    this->name = StringUtil_getInstance()->EMPTY_STRING;
    this->defaultValue = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 0);
    this->value = GameConfiguration_MIN_VALUE;
    this->minValue = this->defaultValue;
    this->maxValue = this->defaultValue;
    this->modifiable = BooleanFactory_getInstance()->TRUE;
}


void GameConfiguration_init(GameConfiguration* this, const char* name, int32_t defaultValue, int32_t minValue, int32_t maxValue) {
    GameConfiguration_initFields(this);
        GameConfiguration_setName(this, name);
        GameConfiguration_setDefaultValue(this, defaultValue);
        this->value = GameConfiguration_getDefaultValue(this);
        GameConfiguration_setMinValue(this, minValue);
        GameConfiguration_setMaxValue(this, maxValue);
        JAVA_CALL(GameConfigurationSingleton_getHashtable(GameConfigurationSingleton_getInstance()), put, GameConfiguration_getName(this), this);
}

GameConfiguration* GameConfiguration_new(const char* name, int32_t defaultValue, int32_t minValue, int32_t maxValue) {
    GameConfiguration* this = calloc(1, sizeof(GameConfiguration));
    GameConfiguration_init(this, name, defaultValue, minValue, maxValue);
    return this;
}


// throws Exception
void GameConfiguration_setValue(GameConfiguration* this, int32_t value) {
        if (this->value != value) {
            int32_t oldValue = this->value;
            this->value = value;
            GameFeatureEventHandler_fireEvent(GameFeatureEventHandler_getInstance(), GameFeatureEvent_new(this, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->name), append, " value: from: "), appendint, ((int32_t) Integer_intValue(oldValue))), append, " to "), appendint, ((int32_t) Integer_intValue(this->value))), toString)));
        }
}


int32_t GameConfiguration_getValue(GameConfiguration* this) {
        return this->value;
}


void GameConfiguration_setMaxValue(GameConfiguration* this, int32_t maxValue) {
        this->maxValue = maxValue;
}


int32_t GameConfiguration_getMaxValue(GameConfiguration* this) {
        return this->maxValue;
}


void GameConfiguration_setMinValue(GameConfiguration* this, int32_t minValue) {
        this->minValue = minValue;
}


int32_t GameConfiguration_getMinValue(GameConfiguration* this) {
        return this->minValue;
}


void GameConfiguration_setName(GameConfiguration* this, const char* name) {
        this->name = name;
}


const char* GameConfiguration_getName(GameConfiguration* this) {
        return this->name;
}


void GameConfiguration_setDefaultValue(GameConfiguration* this, int32_t defaultValue) {
        this->defaultValue = defaultValue;
}


int32_t GameConfiguration_getDefaultValue(GameConfiguration* this) {
        return this->defaultValue;
}


// throws Exception
void GameConfiguration_setDefault(GameConfiguration* this) {
        GameConfiguration_setValue(this, GameConfiguration_getDefaultValue(this));
}


const char* GameConfiguration_toString(GameConfiguration* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Name: ");
        StringMaker_append(stringBuffer, this->name);
        StringMaker_append(stringBuffer, " Min: ");
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getMinValue(this), intValue)));
        StringMaker_append(stringBuffer, " Max: ");
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getMaxValue(this), intValue)));
        StringMaker_append(stringBuffer, " Value: ");
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getValue(this), intValue)));
        StringMaker_append(stringBuffer, " Default: ");
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getDefaultValue(this), intValue)));
        StringMaker_append(stringBuffer, " Modifiable: ");
        StringMaker_appendboolean(stringBuffer, JAVA_CALL(GameConfiguration_isModifiable(this), booleanValue));
        return StringMaker_toString(stringBuffer);
}


void GameConfiguration_setModifiable(GameConfiguration* this, bool modifiable) {
        this->modifiable = modifiable;
}


bool GameConfiguration_isModifiable(GameConfiguration* this) {
        return this->modifiable;
}

