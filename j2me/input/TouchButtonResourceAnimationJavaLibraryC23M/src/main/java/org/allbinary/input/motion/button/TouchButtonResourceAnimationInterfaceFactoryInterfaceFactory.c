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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/animation/image/sprite/OneRowSpriteIndexedAnimationFactory.h"
#include "org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/image/ImageCache.h"
#include "org/allbinary/image/ImageCacheFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/media/image/ImageCompleteUtil.h"

typedef struct TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory;
struct TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory {
    BaseResourceAnimationInterfaceFactoryInterfaceFactory base;
};


TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_new(const char* name);
TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_createFactory(void);

void TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_init(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* name);
void TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_init(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, int32_t level);
void TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_initImageCache(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, ImageCache* imageCache, int32_t level);
bool TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_isLoadingLevel(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, int32_t level);
bool TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_isFeature(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this);


TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_createFactory(void) {
        return TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_new("TouchButton Animations");
}


void TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_init(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* name) {
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_init(&this->base, name, StdUtil_createHashtable(StdUtil_getInstance()), StdUtil_createHashtable(StdUtil_getInstance()), StdUtil_createHashtable(StdUtil_getInstance()));
}

TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_new(const char* name) {
    TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this = calloc(1, sizeof(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory));
    TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_init(this, name);
    return this;
}


// throws Exception
void TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_init(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, int32_t level) {
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_initImageCache(this, ImageCacheFactory_getInstance(), level);
}


// throws Exception
void TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_initImageCache(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, ImageCache* imageCache, int32_t level) {
        if (TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_isInitialized(this)) {
            return;
        }
        int32_t portion = 140;
        const char* loadingString = JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_toString(this)), append, " Loading: "), toString);
        int32_t index = 0;
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        TouchButtonResource* touchButtonBlankResource = TouchButtonBlankResource_getInstance();
        TouchButtonResource* touchButtonGenericActionResource = TouchButtonGenericActionResource_getInstance();
        TouchButtonResource* touchButtonStartResource = TouchButtonStartResource_getInstance();
        TouchButtonResource* touchButtonUpResource = TouchButtonUpResource_getInstance();
        TouchButtonResource* touchButtonDownResource = TouchButtonDownResource_getInstance();
        TouchButtonResource* touchButtonTurnLeftResource = TouchButtonTurnLeftResource_getInstance();
        TouchButtonResource* touchButtonTurnRightResource = TouchButtonTurnRightResource_getInstance();
        TouchButtonResource* touchButtonStrafeLeftResource = TouchButtonStrafeLeftResource_getInstance();
        TouchButtonResource* touchButtonStrafeRightResource = TouchButtonStrafeRightResource_getInstance();
        Image* touchButtonBlankResourceImage = ImageCache_getWithKey(imageCache, touchButtonBlankResource->RESOURCE);
        Image* touchButtonGenericActionResourceImage = ImageCache_getWithKey(imageCache, touchButtonGenericActionResource->RESOURCE);
        Image* touchButtonStartResourceImage = ImageCache_getWithKey(imageCache, touchButtonStartResource->RESOURCE);
        Image* touchButtonUpResourceImage = ImageCache_getWithKey(imageCache, touchButtonUpResource->RESOURCE);
        Image* touchButtonDownResourceImage = ImageCache_getWithKey(imageCache, touchButtonDownResource->RESOURCE);
        Image* touchButtonTurnLeftResourceImage = ImageCache_getWithKey(imageCache, touchButtonTurnLeftResource->RESOURCE);
        Image* touchButtonTurnRightResourceImage = ImageCache_getWithKey(imageCache, touchButtonTurnRightResource->RESOURCE);
        Image* touchButtonStrafeLeftResourceImage = ImageCache_getWithKey(imageCache, touchButtonStrafeLeftResource->RESOURCE);
        Image* touchButtonStrafeRightResourceImage = ImageCache_getWithKey(imageCache, touchButtonStrafeRightResource->RESOURCE);
        NullAnimationFactory* nullAnimationFactory = NullAnimationFactory_getFactoryInstance();
        if (JAVA_CALL(OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance()), isOverScan)) {
            ImageCache_getWithKey(imageCache, TouchButtonStartResource_getInstance()->HINT);
        }
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil* imageCompleteUtil = ImageCompleteUtil_getInstance();
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonBlankResourceImage, touchButtonBlankResource->RESOURCE);
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonBlankResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonBlankResourceImage, AnimationBehaviorFactory_getInstance()));
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonBlankResource->HINT, nullAnimationFactory);
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonGenericActionResourceImage, touchButtonGenericActionResource->RESOURCE);
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonGenericActionResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonGenericActionResourceImage, AnimationBehaviorFactory_getInstance()));
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonGenericActionResource->HINT, nullAnimationFactory);
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonStartResourceImage, touchButtonStartResource->RESOURCE);
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonStartResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonStartResourceImage, AnimationBehaviorFactory_getInstance()));
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonUpResourceImage, touchButtonUpResource->RESOURCE);
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonUpResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonUpResourceImage, AnimationBehaviorFactory_getInstance()));
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonUpResource->HINT, nullAnimationFactory);
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonDownResourceImage, touchButtonDownResource->RESOURCE);
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonDownResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonDownResourceImage, AnimationBehaviorFactory_getInstance()));
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonDownResource->HINT, nullAnimationFactory);
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonTurnLeftResourceImage, touchButtonTurnLeftResource->RESOURCE);
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonTurnLeftResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonTurnLeftResourceImage, AnimationBehaviorFactory_getInstance()));
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonTurnLeftResource->HINT, nullAnimationFactory);
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonTurnRightResourceImage, touchButtonTurnRightResource->RESOURCE);
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonTurnRightResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonTurnRightResourceImage, AnimationBehaviorFactory_getInstance()));
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonTurnRightResource->HINT, nullAnimationFactory);
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonStrafeLeftResourceImage, touchButtonStrafeLeftResource->RESOURCE);
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonStrafeLeftResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonStrafeLeftResourceImage, AnimationBehaviorFactory_getInstance()));
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonStrafeLeftResource->HINT, nullAnimationFactory);
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonStrafeRightResourceImage, touchButtonStrafeRightResource->RESOURCE);
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonStrafeRightResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonStrafeRightResourceImage, AnimationBehaviorFactory_getInstance()));
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonStrafeRightResource->HINT, nullAnimationFactory);
        if (JAVA_CALL(OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance()), isOverScan)) {
            Image* touchButtonStartHintResource = ImageCache_getWithKey(imageCache, TouchButtonStartResource_getInstance()->HINT);
            TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonStartResource->HINT, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonStartHintResource, AnimationBehaviorFactory_getInstance()));
        } else {
            TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonStartResource->HINT, nullAnimationFactory);
        }
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_init((&this->base), level);
}


bool TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_isLoadingLevel(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, int32_t level) {
        ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
        if (level == JAVA_CALL(resourceLoadingLevelFactory->LOAD_TOUCH, getLevel)) {
            return true;
        } else {
            return BaseResourceAnimationInterfaceFactoryInterfaceFactory_isLoadingLevel((&this->base), level);
        }
}


bool TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_isFeature(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this) {
        if (!Features_isDefault(Features_getInstance(), OpenGLFeatureFactory_getInstance()->OPENGL)) {
            return true;
        } else {
            return false;
        }
}

