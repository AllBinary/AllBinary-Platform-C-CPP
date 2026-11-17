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
// package org.allbinary.game.identification

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/NullUtil.h"

typedef struct BasicGroupFactory BasicGroupFactory;
struct BasicGroupFactory {
    const char* NAME;
    const char* NO_SUCH_GROUP;
    Group* GOOD;
    Group* ENEMY;
    Group* ENEMY_ON_LEVEL;
    Group* NONE;
    Group** GOOD_ARRAY;
    Group** ENEMY_ARRAY;
    Group** ENEMY_ON_LEVEL_ARRAY;
    Group** NONE_ARRAY;
};

static Any* BasicGroupFactory_instance;

BasicGroupFactory* BasicGroupFactory_new(void);
BasicGroupFactory* BasicGroupFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void BasicGroupFactory_staticInit(void) {
    BasicGroupFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void BasicGroupFactory_initFields(BasicGroupFactory* this) {
    this->NAME = "GROUP_NAME";
    this->NO_SUCH_GROUP = "No Such Group: ";
    this->GOOD = Group_new("Good Guys", ((int16_t) 0));
    this->ENEMY = Group_new("Bad Guys", ((int16_t) 1));
    this->ENEMY_ON_LEVEL = Group_new("Bad Guys on Level", ((int16_t) 2));
    this->NONE = Group_new("Not On A Team", ((int16_t) 3));
    this->GOOD_ARRAY = ((Group**) java_array_from(sizeof(Group*), sizeof((Group*[]){ this->GOOD }) / sizeof(Group*), (Group*[]){ this->GOOD }));
    this->ENEMY_ARRAY = ((Group**) java_array_from(sizeof(Group*), sizeof((Group*[]){ this->ENEMY }) / sizeof(Group*), (Group*[]){ this->ENEMY }));
    this->ENEMY_ON_LEVEL_ARRAY = ((Group**) java_array_from(sizeof(Group*), sizeof((Group*[]){ this->ENEMY, this->ENEMY_ON_LEVEL }) / sizeof(Group*), (Group*[]){ this->ENEMY, this->ENEMY_ON_LEVEL }));
    this->NONE_ARRAY = ((Group**) java_array_from(sizeof(Group*), sizeof((Group*[]){ this->NONE }) / sizeof(Group*), (Group*[]){ this->NONE }));
}

void BasicGroupFactory_init(BasicGroupFactory* this) {
    BasicGroupFactory_initFields(this);
}

BasicGroupFactory* BasicGroupFactory_new(void) {
    BasicGroupFactory* this = calloc(1, sizeof(BasicGroupFactory));
    BasicGroupFactory_init(this);
    return this;
}


BasicGroupFactory* BasicGroupFactory_getInstance(void) {
        if (BasicGroupFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            BasicGroupFactory_instance = BasicGroupFactory_new();
        }
        return ((BasicGroupFactory*) BasicGroupFactory_instance);
}

