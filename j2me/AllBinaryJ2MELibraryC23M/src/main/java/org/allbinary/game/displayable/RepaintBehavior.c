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

typedef struct RepaintBehavior RepaintBehavior;
struct RepaintBehavior {
    LogUtil* logUtil;
    const char* NAME;
};

static RepaintBehavior* RepaintBehavior_instance;

RepaintBehavior* RepaintBehavior_new(void);
RepaintBehavior* RepaintBehavior_getInstance(void);
void RepaintBehavior_repaint(RepaintBehavior* this, Canvas* canvas);
void RepaintBehavior_onChangeRepaint(RepaintBehavior* this, Canvas* canvas);

// Static fields with runtime initializers: call this once at startup
void RepaintBehavior_staticInit(void) {
    RepaintBehavior_instance = RepaintBehavior_new();
}

static void RepaintBehavior_initFields(RepaintBehavior* this) {
    this->logUtil = LogUtil_getInstance();
    this->NAME = "RepaintBehavior";
}

void RepaintBehavior_init(RepaintBehavior* this) {
    RepaintBehavior_initFields(this);
}

RepaintBehavior* RepaintBehavior_new(void) {
    RepaintBehavior* this = calloc(1, sizeof(RepaintBehavior));
    RepaintBehavior_init(this);
    return this;
}


RepaintBehavior* RepaintBehavior_getInstance(void) {
        return RepaintBehavior_instance;
}


void RepaintBehavior_repaint(RepaintBehavior* this, Canvas* canvas) {
}


void RepaintBehavior_onChangeRepaint(RepaintBehavior* this, Canvas* canvas) {
        Features* features = Features_getInstance();
        OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
        if (Features_isFeature(features, openGLFeatureFactory->OPENGL)) {
            DisplayInfoSingleton_process(DisplayInfoSingleton_getInstance());
        } else {
            Thread* thread = Thread_new(RepaintRunnable_new(canvas), this->NAME);
            Thread_start(thread);
        }
}

