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
// package org.allbinary.animation.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/image/AnimationFactoryImageScaleUtil.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct BaseImageAnimationFactory BaseImageAnimationFactory;
struct BaseImageAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    AnimationFactoryImageScaleUtil* animationFactoryImageScaleUtil;
    Image* image;
    AnimationBehaviorFactory* animationBehaviorFactory;
    int32_t* sequenceArray;
    AnimationFactoryInitializationVisitor* animationFactoryInitializationVisitor;
    ScaleProperties* scaleProperties;
};


BaseImageAnimationFactory* BaseImageAnimationFactory_new(Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
BaseImageAnimationFactory* BaseImageAnimationFactory_createFactoryBase(Image* image, int32_t* sequenceArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory);

void BaseImageAnimationFactory_init(BaseImageAnimationFactory* this, Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* BaseImageAnimationFactory_getInstance(BaseImageAnimationFactory* this, int32_t instanceId);
Image* BaseImageAnimationFactory_getImage(BaseImageAnimationFactory* this);
int32_t* BaseImageAnimationFactory_getSequenceArray(BaseImageAnimationFactory* this);
void BaseImageAnimationFactory_setInitialScale(BaseImageAnimationFactory* this, ScaleProperties* scaleProperties);
AnimationFactoryInitializationVisitor* BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP(BaseImageAnimationFactory* this);
ScaleProperties* BaseImageAnimationFactory_getScalePropertiesP(BaseImageAnimationFactory* this);
const char* BaseImageAnimationFactory_toString(BaseImageAnimationFactory* this);

static void BaseImageAnimationFactory_initFields(BaseImageAnimationFactory* this) {
    this->animationFactoryImageScaleUtil = AnimationFactoryImageScaleUtil_getInstance();
    
    
    
    
    this->scaleProperties = ScaleProperties_instance;
}


// throws Exception
BaseImageAnimationFactory* BaseImageAnimationFactory_createFactoryBase(Image* image, int32_t* sequenceArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory) {
        return BaseImageAnimationFactory_new(image, sequenceArray, width, height, 0, 0, animationBehaviorFactory);
}


void BaseImageAnimationFactory_init(BaseImageAnimationFactory* this, Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    BaseImageAnimationFactory_initFields(this);
        this->animationFactoryInitializationVisitor = AnimationFactoryInitializationVisitor_new();
        this->image = image;
        this->animationFactoryInitializationVisitor->width = width;
        this->animationFactoryInitializationVisitor->height = height;
        this->animationBehaviorFactory = animationBehaviorFactory;
        this->sequenceArray = sequenceArray;
        this->animationFactoryInitializationVisitor->dx = dx;
        this->animationFactoryInitializationVisitor->dy = dy;
}

BaseImageAnimationFactory* BaseImageAnimationFactory_new(Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    BaseImageAnimationFactory* this = calloc(1, sizeof(BaseImageAnimationFactory));
    BaseImageAnimationFactory_init(this, image, sequenceArray, width, height, dx, dy, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* BaseImageAnimationFactory_getInstance(BaseImageAnimationFactory* this, int32_t instanceId) {
        return JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, instanceId);
}


Image* BaseImageAnimationFactory_getImage(BaseImageAnimationFactory* this) {
        return this->image;
}


int32_t* BaseImageAnimationFactory_getSequenceArray(BaseImageAnimationFactory* this) {
        return this->sequenceArray;
}


void BaseImageAnimationFactory_setInitialScale(BaseImageAnimationFactory* this, ScaleProperties* scaleProperties) {
        this->scaleProperties = scaleProperties;
        if (this->scaleProperties->shouldScale) {
            this->scaleProperties->scaleWidth = ((int32_t) (this->animationFactoryInitializationVisitor->width * this->scaleProperties->scaleX));
            this->scaleProperties->scaleHeight = ((int32_t) (this->animationFactoryInitializationVisitor->height * this->scaleProperties->scaleY));
        } else {
        }
}


AnimationFactoryInitializationVisitor* BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP(BaseImageAnimationFactory* this) {
        return this->animationFactoryInitializationVisitor;
}


ScaleProperties* BaseImageAnimationFactory_getScalePropertiesP(BaseImageAnimationFactory* this) {
        return this->scaleProperties;
}


const char* BaseImageAnimationFactory_toString(BaseImageAnimationFactory* this) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        CommonLabels* commonLabels = CommonLabels_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, _toString((&this->base)));
        StringMaker_append(stringBuffer, commonLabels->HEIGHT_LABEL);
        StringMaker_appendint(stringBuffer, ((int32_t) Image_getHeight(this->image)));
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, AnimationFactoryInitializationVisitor_toString(this->animationFactoryInitializationVisitor));
        return StringMaker_toString(stringBuffer);
}

