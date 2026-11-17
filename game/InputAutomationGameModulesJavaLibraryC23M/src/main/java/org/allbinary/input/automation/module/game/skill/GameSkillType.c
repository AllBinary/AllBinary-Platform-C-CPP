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
// package org.allbinary.input.automation.module.game.skill

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GameSkillType GameSkillType;
struct GameSkillType {
    const char* SPELL_GAME_SKILL_TYPE;
    const char* name;
};

GameSkillType* GameSkillType_MANA;
GameSkillType* GameSkillType_REPLENISH;
GameSkillType* GameSkillType_TIMED;
GameSkillType* GameSkillType_ATTACK;
GameSkillType* GameSkillType_TRANSPORT;

GameSkillType* GameSkillType_new(const char* name);

void GameSkillType_init(GameSkillType* this, const char* name);
const char* GameSkillType_getName(GameSkillType* this);
void GameSkillType_setName(GameSkillType* this, const char* name);
const char* GameSkillType_toString(GameSkillType* this);

// Static fields with runtime initializers: call this once at startup
void GameSkillType_staticInit(void) {
    GameSkillType_MANA = GameSkillType_new("Mana");
    GameSkillType_REPLENISH = GameSkillType_new("Replenish");
    GameSkillType_TIMED = GameSkillType_new("Timed");
    GameSkillType_ATTACK = GameSkillType_new("Attack");
    GameSkillType_TRANSPORT = GameSkillType_new("Transport");
}

static void GameSkillType_initFields(GameSkillType* this) {
    this->SPELL_GAME_SKILL_TYPE = "SpellGameSkillType: ";
    this->name = nullptr;
}


void GameSkillType_init(GameSkillType* this, const char* name) {
    GameSkillType_initFields(this);
        GameSkillType_setName(this, name);
}

GameSkillType* GameSkillType_new(const char* name) {
    GameSkillType* this = calloc(1, sizeof(GameSkillType));
    GameSkillType_init(this, name);
    return this;
}


const char* GameSkillType_getName(GameSkillType* this) {
        return this->name;
}


void GameSkillType_setName(GameSkillType* this, const char* name) {
        this->name = name;
}


const char* GameSkillType_toString(GameSkillType* this) {
        return java_concat(this->SPELL_GAME_SKILL_TYPE, GameSkillType_getName(this));
}

