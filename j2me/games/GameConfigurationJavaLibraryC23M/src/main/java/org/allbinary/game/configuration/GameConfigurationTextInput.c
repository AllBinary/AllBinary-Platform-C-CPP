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
// #include "javax/microedition/lcdui/TextField.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct GameConfigurationTextInput GameConfigurationTextInput;
struct GameConfigurationTextInput {
    const char* label;
    const char* text;
};

static ABHashtable* GameConfigurationTextInput_hashtable;
GameConfigurationTextInput* GameConfigurationTextInput_SIMULATOR_IP;
GameConfigurationTextInput* GameConfigurationTextInput_SIMULATOR_PORT;

GameConfigurationTextInput* GameConfigurationTextInput_new(const char* label, const char* text);

void GameConfigurationTextInput_init(GameConfigurationTextInput* this, const char* label, const char* text);
void GameConfigurationTextInput_update(TextField* textField);
void GameConfigurationTextInput_setText(GameConfigurationTextInput* this, const char* text);
const char* GameConfigurationTextInput_getText(GameConfigurationTextInput* this);
void GameConfigurationTextInput_setLabel(GameConfigurationTextInput* this, const char* label);
const char* GameConfigurationTextInput_getLabel(GameConfigurationTextInput* this);
ABHashtable* GameConfigurationTextInput_getHashtable(void);

// Static fields with runtime initializers: call this once at startup
void GameConfigurationTextInput_staticInit(void) {
    GameConfigurationTextInput_hashtable = StdUtil_createHashtable(StdUtil_getInstance());
    GameConfigurationTextInput_SIMULATOR_IP = GameConfigurationTextInput_new("IP: ", "192.168.1.3");
    GameConfigurationTextInput_SIMULATOR_PORT = GameConfigurationTextInput_new("Port: ", "8010");
}

static void GameConfigurationTextInput_initFields(GameConfigurationTextInput* this) {
    this->label = StringUtil_getInstance()->EMPTY_STRING;
    this->text = StringUtil_getInstance()->EMPTY_STRING;
}


void GameConfigurationTextInput_init(GameConfigurationTextInput* this, const char* label, const char* text) {
    GameConfigurationTextInput_initFields(this);
        GameConfigurationTextInput_setText(this, text);
        GameConfigurationTextInput_setLabel(this, label);
        JAVA_CALL(GameConfigurationTextInput_hashtable, put, GameConfigurationTextInput_getLabel(this), this);
}

GameConfigurationTextInput* GameConfigurationTextInput_new(const char* label, const char* text) {
    GameConfigurationTextInput* this = calloc(1, sizeof(GameConfigurationTextInput));
    GameConfigurationTextInput_init(this, label, text);
    return this;
}


void GameConfigurationTextInput_update(TextField* textField) {
        Any* anyType = ((Any*) TextField_getLabel(textField));
        GameConfigurationTextInput* gameConfigurationTextInput = ((GameConfigurationTextInput*) JAVA_CALL(GameConfigurationTextInput_hashtable, get, anyType));
        GameConfigurationTextInput_setText(gameConfigurationTextInput, TextField_getString(textField));
}


void GameConfigurationTextInput_setText(GameConfigurationTextInput* this, const char* text) {
        this->text = text;
}


const char* GameConfigurationTextInput_getText(GameConfigurationTextInput* this) {
        return this->text;
}


void GameConfigurationTextInput_setLabel(GameConfigurationTextInput* this, const char* label) {
        this->label = label;
}


const char* GameConfigurationTextInput_getLabel(GameConfigurationTextInput* this) {
        return this->label;
}


ABHashtable* GameConfigurationTextInput_getHashtable(void) {
        return GameConfigurationTextInput_hashtable;
}

