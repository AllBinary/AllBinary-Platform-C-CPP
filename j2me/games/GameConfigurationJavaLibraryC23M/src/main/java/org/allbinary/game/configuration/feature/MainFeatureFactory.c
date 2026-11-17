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

typedef struct MainFeatureFactory MainFeatureFactory;
struct MainFeatureFactory {
    Feature* FULL_SCREEN;
    Feature* TITLE_BAR;
    Feature* STATIC;
    Feature* LOAD_ONDEMAND;
    Feature* LOAD_ALL;
};

static MainFeatureFactory* MainFeatureFactory_instance;

MainFeatureFactory* MainFeatureFactory_new(void);
MainFeatureFactory* MainFeatureFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void MainFeatureFactory_staticInit(void) {
    MainFeatureFactory_instance = MainFeatureFactory_new();
}

static void MainFeatureFactory_initFields(MainFeatureFactory* this) {
    this->FULL_SCREEN = Feature_new("Full Screen");
    this->TITLE_BAR = Feature_new("Title Bar");
    this->STATIC = Feature_new("Static Dependent Feature");
    this->LOAD_ONDEMAND = Feature_new("Load OnDemand");
    this->LOAD_ALL = Feature_new("Load All");
}

void MainFeatureFactory_init(MainFeatureFactory* this) {
    MainFeatureFactory_initFields(this);
}

MainFeatureFactory* MainFeatureFactory_new(void) {
    MainFeatureFactory* this = calloc(1, sizeof(MainFeatureFactory));
    MainFeatureFactory_init(this);
    return this;
}


MainFeatureFactory* MainFeatureFactory_getInstance(void) {
        return MainFeatureFactory_instance;
}

