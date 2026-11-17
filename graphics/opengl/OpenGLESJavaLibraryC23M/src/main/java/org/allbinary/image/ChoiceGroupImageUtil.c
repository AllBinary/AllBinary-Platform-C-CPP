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
// package org.allbinary.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL.h"
// #include "javax/microedition/lcdui/ChoiceGroupImageFactory.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/Features.h"

typedef struct ChoiceGroupImageUtil ChoiceGroupImageUtil;
struct ChoiceGroupImageUtil {
    char unused;
};

static ChoiceGroupImageUtil* ChoiceGroupImageUtil_instance;

ChoiceGroupImageUtil* ChoiceGroupImageUtil_new(void);
ChoiceGroupImageUtil* ChoiceGroupImageUtil_getInstance(void);
void ChoiceGroupImageUtil_init(ChoiceGroupImageUtil* this);
void ChoiceGroupImageUtil_update(ChoiceGroupImageUtil* this, GL* gl);
void ChoiceGroupImageUtil_update(ChoiceGroupImageUtil* this, Graphics* graphics);

// Static fields with runtime initializers: call this once at startup
void ChoiceGroupImageUtil_staticInit(void) {
    ChoiceGroupImageUtil_instance = ChoiceGroupImageUtil_new();
}

void ChoiceGroupImageUtil_init(ChoiceGroupImageUtil* this) {
}

ChoiceGroupImageUtil* ChoiceGroupImageUtil_new(void) {
    ChoiceGroupImageUtil* this = calloc(1, sizeof(ChoiceGroupImageUtil));
    ChoiceGroupImageUtil_init(this);
    return this;
}


ChoiceGroupImageUtil* ChoiceGroupImageUtil_getInstance(void) {
        return ChoiceGroupImageUtil_instance;
}


void ChoiceGroupImageUtil_init(ChoiceGroupImageUtil* this) {
        Features* features = Features_getInstance();
        ChoiceGroupImageFactory* choiceGroupFactory = ChoiceGroupImageFactory_getInstance();
        Image** imageArray = ChoiceGroupImageFactory_getImageArray(choiceGroupFactory);
        if (Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL)) {
            PreResourceImageUtil* preResourceImageUtil = PreResourceImageUtil_getInstance();
            int32_t size = java_array_length(imageArray);
            for (int32_t index = 0; index < size; index++) {
                imageArray[index] = PreResourceImageUtil_encapsulate(preResourceImageUtil, imageArray[index]);
            }
            ChoiceGroupImageFactory_init(choiceGroupFactory, imageArray);
        }
}


void ChoiceGroupImageUtil_update(ChoiceGroupImageUtil* this, GL* gl) {
        Features* features = Features_getInstance();
        ChoiceGroupImageFactory* choiceGroupFactory = ChoiceGroupImageFactory_getInstance();
        Image** imageArray = ChoiceGroupImageFactory_getImageArray(choiceGroupFactory);
        if (Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL)) {
            PreResourceImageUtil* preResourceImageUtil = PreResourceImageUtil_getInstance();
            int32_t size = java_array_length(imageArray);
            for (int32_t index = 0; index < size; index++) {
                PreResourceImageUtil_updateGL(preResourceImageUtil, gl, imageArray[index]);
            }
        }
        ChoiceGroupImageFactory_init(choiceGroupFactory, imageArray);
}


// Java overloaded method: C needs a different name
void ChoiceGroupImageUtil_update(ChoiceGroupImageUtil* this, Graphics* graphics) {
        Features* features = Features_getInstance();
        ChoiceGroupImageFactory* choiceGroupFactory = ChoiceGroupImageFactory_getInstance();
        Image** imageArray = ChoiceGroupImageFactory_getImageArray(choiceGroupFactory);
        if (Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL)) {
            PreResourceImageUtil* preResourceImageUtil = PreResourceImageUtil_getInstance();
            int32_t size = java_array_length(imageArray);
            for (int32_t index = 0; index < size; index++) {
                PreResourceImageUtil_update(preResourceImageUtil, graphics, imageArray[index]);
            }
        }
        ChoiceGroupImageFactory_init(choiceGroupFactory, imageArray);
}

