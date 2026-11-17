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
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"

typedef struct MultiPlayerGameFeatureFactory MultiPlayerGameFeatureFactory;
struct MultiPlayerGameFeatureFactory {
    char unused;
};

static MultiPlayerGameFeatureFactory* MultiPlayerGameFeatureFactory_instance;

MultiPlayerGameFeatureFactory* MultiPlayerGameFeatureFactory_new(void);
MultiPlayerGameFeatureFactory* MultiPlayerGameFeatureFactory_getInstance(void);

void MultiPlayerGameFeatureFactory_init(MultiPlayerGameFeatureFactory* this);
void MultiPlayerGameFeatureFactory_addCommands(MultiPlayerGameFeatureFactory* this, Any* anyType);

// Static fields with runtime initializers: call this once at startup
void MultiPlayerGameFeatureFactory_staticInit(void) {
    MultiPlayerGameFeatureFactory_instance = MultiPlayerGameFeatureFactory_new();
}


MultiPlayerGameFeatureFactory* MultiPlayerGameFeatureFactory_getInstance(void) {
        return MultiPlayerGameFeatureFactory_instance;
}


void MultiPlayerGameFeatureFactory_init(MultiPlayerGameFeatureFactory* this) {
}

MultiPlayerGameFeatureFactory* MultiPlayerGameFeatureFactory_new(void) {
    MultiPlayerGameFeatureFactory* this = calloc(1, sizeof(MultiPlayerGameFeatureFactory));
    MultiPlayerGameFeatureFactory_init(this);
    return this;
}


void MultiPlayerGameFeatureFactory_addCommands(MultiPlayerGameFeatureFactory* this, Any* anyType) {
        GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
        Canvas* canvas = ((Canvas*) anyType);
        Canvas_addCommand(canvas, gameCommandsFactory->QUIT_COMMAND);
}

