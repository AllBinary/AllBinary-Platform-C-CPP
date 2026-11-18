#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONTEXTINPUT_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONTEXTINPUT_H
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
typedef struct TextField TextField;
typedef struct StdUtil StdUtil;
typedef struct StringUtil StringUtil;
typedef struct ABHashtable ABHashtable;
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

typedef struct GameConfigurationTextInput GameConfigurationTextInput;
struct GameConfigurationTextInput {
    const char* label;
    const char* text;
};

extern GameConfigurationTextInput* GameConfigurationTextInput_SIMULATOR_IP;
extern GameConfigurationTextInput* GameConfigurationTextInput_SIMULATOR_PORT;

GameConfigurationTextInput* GameConfigurationTextInput_new(const char* label, const char* text);

void GameConfigurationTextInput_init(GameConfigurationTextInput* this, const char* label, const char* text);

void GameConfigurationTextInput_update(TextField* textField);

void GameConfigurationTextInput_setText(GameConfigurationTextInput* this, const char* text);

const char* GameConfigurationTextInput_getText(GameConfigurationTextInput* this);

void GameConfigurationTextInput_setLabel(GameConfigurationTextInput* this, const char* label);

const char* GameConfigurationTextInput_getLabel(GameConfigurationTextInput* this);

ABHashtable* GameConfigurationTextInput_getHashtable(void);
#define GameConfigurationTextInput_new2 GameConfigurationTextInput_new
#define GameConfigurationTextInput_init2 GameConfigurationTextInput_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameConfigurationTextInput_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameConfigurationTextInput_register(void);

#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONTEXTINPUT_H
