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
// package org.allbinary.game.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/game/resource/ResourceInitialization.h"
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/init/BaseGameInitialization.h"

typedef struct CommonGameInitialization CommonGameInitialization;
struct CommonGameInitialization {
    BaseGameInitialization base;
    CommonStrings* commonStrings;
};


CommonGameInitialization* CommonGameInitialization_new(ResourceInitialization** resourceInitializationArray, int32_t portion);

void CommonGameInitialization_init(CommonGameInitialization* this, ResourceInitialization** resourceInitializationArray, int32_t portion);
void CommonGameInitialization_init(CommonGameInitialization* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, int32_t level);
void CommonGameInitialization_initGame(CommonGameInitialization* this);

static void CommonGameInitialization_initFields(CommonGameInitialization* this) {
    this->commonStrings = CommonStrings_getInstance();
}


void CommonGameInitialization_init(CommonGameInitialization* this, ResourceInitialization** resourceInitializationArray, int32_t portion) {
        BaseGameInitialization_init(&this->base, resourceInitializationArray, portion);
        CommonGameInitialization_initFields(this);
}

CommonGameInitialization* CommonGameInitialization_new(ResourceInitialization** resourceInitializationArray, int32_t portion) {
    CommonGameInitialization* this = calloc(1, sizeof(CommonGameInitialization));
    CommonGameInitialization_init(this, resourceInitializationArray, portion);
    return this;
}


// throws Exception
void CommonGameInitialization_init(CommonGameInitialization* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, int32_t level) {
        BaseGameInitialization_init((&this->base), abeClientInformation, commandListener, level);
        ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
        if (!CommonGameInitialization_isGameInitialized(this) && level == JAVA_CALL(resourceLoadingLevelFactory->LOAD_ALL, getLevel)) {
            CommonGameInitialization_setGameInitialized(this, true);
            ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
            SmallIntegerSingletonFactory_init(SmallIntegerSingletonFactory_getInstance());
            ProgressCanvas_addNormalPortion(progressCanvas, 50, "Integers");
            PointFactory_init(PointFactory_getInstance());
            ProgressCanvas_addNormalPortion(progressCanvas, 50, "Points");
            AngleFactory_getInstance();
            ProgressCanvas_addNormalPortion(progressCanvas, 50, "Angles");
            CommonGameInitialization_initGame(this);
            JAVA_CALL(this->resourceInitializationArray[this->GAME_RESOURCES], init);
        }
        BaseGameInitialization_resourceInitialization((&this->base), level);
}


// throws Exception
void CommonGameInitialization_initGame(CommonGameInitialization* this) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}

