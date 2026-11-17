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
// package org.allbinary.game.configuration.feature

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct Feature Feature;
struct Feature {
    const char* name;
};

static ABHashtable* Feature_hashtable;

Feature* Feature_new(const char* name);

void Feature_init(Feature* this, const char* name);
Feature* Feature_getInstance(const char* name);
static void Feature_add(const char* name, Feature* gameFeature);
const char* Feature_toString(Feature* this);
const char* Feature_getName(Feature* this);

// Static fields with runtime initializers: call this once at startup
void Feature_staticInit(void) {
    Feature_hashtable = StdUtil_createHashtable(StdUtil_getInstance());
}

static void Feature_initFields(Feature* this) {
    
}


void Feature_init(Feature* this, const char* name) {
    Feature_initFields(this);
        this->name = name;
        Feature_add(name, this);
        ChangedGameFeatureListener_add(ChangedGameFeatureListener_getInstance(), this);
}

Feature* Feature_new(const char* name) {
    Feature* this = calloc(1, sizeof(Feature));
    Feature_init(this, name);
    return this;
}


Feature* Feature_getInstance(const char* name) {
        return ((Feature*) JAVA_CALL(Feature_hashtable, get, name));
}


static void Feature_add(const char* name, Feature* gameFeature) {
        JAVA_CALL(Feature_hashtable, put, name, gameFeature);
}


const char* Feature_toString(Feature* this) {
        return Feature_getName(this);
}


const char* Feature_getName(Feature* this) {
        return this->name;
}

