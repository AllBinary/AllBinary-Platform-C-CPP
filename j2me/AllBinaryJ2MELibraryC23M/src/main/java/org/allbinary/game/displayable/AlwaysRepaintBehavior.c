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
// package org.allbinary.game.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/NullRunnable.h"
#include "org/allbinary/game/displayable/RepaintBehavior.h"

typedef struct AlwaysRepaintBehavior AlwaysRepaintBehavior;
struct AlwaysRepaintBehavior {
    RepaintBehavior base;
    const char* NAME;
};

static AlwaysRepaintBehavior* AlwaysRepaintBehavior_instanceC;

AlwaysRepaintBehavior* AlwaysRepaintBehavior_new(void);
AlwaysRepaintBehavior* AlwaysRepaintBehavior_getInstance(void);
void AlwaysRepaintBehavior_repaint(AlwaysRepaintBehavior* this, Canvas* canvas);
void AlwaysRepaintBehavior_onChangeRepaint(AlwaysRepaintBehavior* this, Canvas* canvas);

// Static fields with runtime initializers: call this once at startup
void AlwaysRepaintBehavior_staticInit(void) {
    AlwaysRepaintBehavior_instanceC = AlwaysRepaintBehavior_new();
}

static void AlwaysRepaintBehavior_initFields(AlwaysRepaintBehavior* this) {
    this->NAME = "AlwaysRepaintBehavior";
}

void AlwaysRepaintBehavior_init(AlwaysRepaintBehavior* this) {
    RepaintBehavior_init(&this->base);
    AlwaysRepaintBehavior_initFields(this);
}

AlwaysRepaintBehavior* AlwaysRepaintBehavior_new(void) {
    AlwaysRepaintBehavior* this = calloc(1, sizeof(AlwaysRepaintBehavior));
    AlwaysRepaintBehavior_init(this);
    return this;
}


AlwaysRepaintBehavior* AlwaysRepaintBehavior_getInstance(void) {
        return AlwaysRepaintBehavior_instanceC;
}


void AlwaysRepaintBehavior_repaint(AlwaysRepaintBehavior* this, Canvas* canvas) {
        Features* features = Features_getInstance();
        OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
        if (Features_isFeature(features, openGLFeatureFactory->OPENGL)) {
            DisplayInfoSingleton_process(DisplayInfoSingleton_getInstance());
        } else {
            Thread* thread = Thread_new(RepaintRunnable_new(canvas), this->NAME);
            Thread_start(thread);
        }
}


void AlwaysRepaintBehavior_onChangeRepaint(AlwaysRepaintBehavior* this, Canvas* canvas) {
}

