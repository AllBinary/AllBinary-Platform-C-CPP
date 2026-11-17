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
// package org.allbinary.graphics.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct OpenGLOptions OpenGLOptions;
struct OpenGLOptions {
    char unused;
};


OpenGLOptions* OpenGLOptions_new(void);
void OpenGLOptions_init(OpenGLOptions* this);

void OpenGLOptions_init(OpenGLOptions* this) {
}

OpenGLOptions* OpenGLOptions_new(void) {
    OpenGLOptions* this = calloc(1, sizeof(OpenGLOptions));
    OpenGLOptions_init(this);
    return this;
}


void OpenGLOptions_init(OpenGLOptions* this) {
        OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
        if (Features_isFeature(Features_getInstance(), openGLFeatureFactory->OPENGL_OPTIONS)) {
            BasicArrayList* openGLMultipleList = BasicArrayListD_new();
            BasicArrayList_add(openGLMultipleList, openGLFeatureFactory->OPENGL);
            JAVA_CALL(GameFeatureChoiceGroups_getMultipleInstance(), add, "OpenGL (Complete Restart)", openGLMultipleList);
            BasicArrayList* openGLVersionSelectorMultipleList = BasicArrayListD_new();
            BasicArrayList_add(openGLVersionSelectorMultipleList, openGLFeatureFactory->OPENGL_AUTO_SELECT);
            BasicArrayList_add(openGLVersionSelectorMultipleList, openGLFeatureFactory->OPENGL_MINIMUM);
            JAVA_CALL(GameFeatureChoiceGroups_getExclusiveInstance(), add, "OpenGL Version Selector", openGLVersionSelectorMultipleList);
            BasicArrayList* openGLImageColorMultipleList = BasicArrayListD_new();
            BasicArrayList_add(openGLImageColorMultipleList, openGLFeatureFactory->IMAGE_COLOR_DEPTH_4444);
            BasicArrayList_add(openGLImageColorMultipleList, openGLFeatureFactory->IMAGE_COLOR_DEPTH_8888);
            JAVA_CALL(GameFeatureChoiceGroups_getExclusiveInstance(), add, "OpenGL Image Color RGBA", openGLImageColorMultipleList);
        }
}

