/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/feature/MultiPlayerGameFeatureFactory.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"

typedef struct PostGameCommandFactory PostGameCommandFactory;
struct PostGameCommandFactory {
    char unused;
};

static PostGameCommandFactory* PostGameCommandFactory_instance;

PostGameCommandFactory* PostGameCommandFactory_new(void);
PostGameCommandFactory* PostGameCommandFactory_getInstance(void);
void PostGameCommandFactory_addCommands(PostGameCommandFactory* this, MyCanvas* canvas);

// Static fields with runtime initializers: call this once at startup
void PostGameCommandFactory_staticInit(void) {
    PostGameCommandFactory_instance = PostGameCommandFactory_new();
}

void PostGameCommandFactory_init(PostGameCommandFactory* this) {
}

PostGameCommandFactory* PostGameCommandFactory_new(void) {
    PostGameCommandFactory* this = calloc(1, sizeof(PostGameCommandFactory));
    PostGameCommandFactory_init(this);
    return this;
}


PostGameCommandFactory* PostGameCommandFactory_getInstance(void) {
        return PostGameCommandFactory_instance;
}


void PostGameCommandFactory_addCommands(PostGameCommandFactory* this, MyCanvas* canvas) {
        GenericOperatingSystem* operatingSystemInterface = OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance());
        GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
        if (!GenericOperatingSystem_isOverScan(operatingSystemInterface)) {
            MyCanvas_addCommand(canvas, gameCommandsFactory->TOGGLE_KEYBOARD);
        }
        MultiPlayerGameFeatureFactory_addCommands(MultiPlayerGameFeatureFactory_getInstance(), canvas);
}

