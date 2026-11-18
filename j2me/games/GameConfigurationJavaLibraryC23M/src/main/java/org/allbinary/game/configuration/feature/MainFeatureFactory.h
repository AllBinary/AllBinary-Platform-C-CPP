#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MAINFEATUREFACTORY_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MAINFEATUREFACTORY_H
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
typedef struct Feature Feature;
#if __has_include("org/allbinary/game/configuration/feature/Feature.h")
#include "org/allbinary/game/configuration/feature/Feature.h"
#endif

typedef struct MainFeatureFactory MainFeatureFactory;
struct MainFeatureFactory {
    Feature* FULL_SCREEN;
    Feature* TITLE_BAR;
    Feature* STATIC;
    Feature* LOAD_ONDEMAND;
    Feature* LOAD_ALL;
};


MainFeatureFactory* MainFeatureFactory_new(void);
void MainFeatureFactory_init(MainFeatureFactory* this);

MainFeatureFactory* MainFeatureFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MainFeatureFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MainFeatureFactory_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MAINFEATUREFACTORY_H
