#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H
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
typedef struct Canvas Canvas;
typedef struct GameCommandsFactory GameCommandsFactory;

typedef struct MultiPlayerGameFeatureFactory MultiPlayerGameFeatureFactory;
struct MultiPlayerGameFeatureFactory {
    char unused;
};


MultiPlayerGameFeatureFactory* MultiPlayerGameFeatureFactory_new(void);

MultiPlayerGameFeatureFactory* MultiPlayerGameFeatureFactory_getInstance(void);

void MultiPlayerGameFeatureFactory_init(MultiPlayerGameFeatureFactory* this);

void MultiPlayerGameFeatureFactory_addCommands(MultiPlayerGameFeatureFactory* this, void* anyType);
#define MultiPlayerGameFeatureFactory_new0 MultiPlayerGameFeatureFactory_new
#define MultiPlayerGameFeatureFactory_init0 MultiPlayerGameFeatureFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MultiPlayerGameFeatureFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MultiPlayerGameFeatureFactory_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H
