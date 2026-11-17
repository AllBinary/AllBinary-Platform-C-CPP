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
// package org.allbinary.animation.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/NullRotationAnimationFactory.h"
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/image/ImageCache.h"
#include "org/allbinary/image/ImageCacheFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/util/CircularIndexUtil.h"

typedef struct LazyImageRotationAnimation LazyImageRotationAnimation;
struct LazyImageRotationAnimation {
    RotationAnimation base;
    LogUtil* logUtil;
    int32_t layoutIndex;
    int32_t instanceId;
    BaseImageAnimationFactory* animationInterfaceFactoryInterface;
    IndexedAnimation* NULL_INDEX_ANIMATION;
    IndexedAnimation* animation;
    ScaleProperties* scaleProperties;
};

static const char* LazyImageRotationAnimation_SET_REAL_ANIMATION = "setRealAnimation";

LazyImageRotationAnimation* LazyImageRotationAnimation_new(int32_t layoutIndex, int32_t instanceId, ScaleProperties* scaleProperties, BaseImageAnimationFactory* animationInterfaceFactoryInterface, AnimationBehavior* animationBehavior);

void LazyImageRotationAnimation_init(LazyImageRotationAnimation* this, int32_t layoutIndex, int32_t instanceId, ScaleProperties* scaleProperties, BaseImageAnimationFactory* animationInterfaceFactoryInterface, AnimationBehavior* animationBehavior);
void LazyImageRotationAnimation_setRealAnimation(LazyImageRotationAnimation* this);
void LazyImageRotationAnimation_setScale(LazyImageRotationAnimation* this, float scaleX, float scaleY);
AnimationBehavior* LazyImageRotationAnimation_getAnimationBehavior(LazyImageRotationAnimation* this);
void LazyImageRotationAnimation_set(LazyImageRotationAnimation* this, GL* gl);
void LazyImageRotationAnimation_setAlpha(LazyImageRotationAnimation* this, int32_t alpha);
void LazyImageRotationAnimation_setDx(LazyImageRotationAnimation* this, int32_t dx);
void LazyImageRotationAnimation_setDy(LazyImageRotationAnimation* this, int32_t dy);
void LazyImageRotationAnimation_setMaxScale(LazyImageRotationAnimation* this, float maxScaleX, float maxScaleY);
void LazyImageRotationAnimation_nextRotation(LazyImageRotationAnimation* this);
void LazyImageRotationAnimation_previousRotation(LazyImageRotationAnimation* this);
void LazyImageRotationAnimation_nextRotationX(LazyImageRotationAnimation* this);
void LazyImageRotationAnimation_previousRotationX(LazyImageRotationAnimation* this);
void LazyImageRotationAnimation_nextRotationZ(LazyImageRotationAnimation* this);
void LazyImageRotationAnimation_previousRotationZ(LazyImageRotationAnimation* this);
void LazyImageRotationAnimation_changeBasicColor(LazyImageRotationAnimation* this, BasicColor* basicColor);
BasicColor* LazyImageRotationAnimation_getBasicColorP(LazyImageRotationAnimation* this);
BasicColor* LazyImageRotationAnimation_getChangeBasicColor(LazyImageRotationAnimation* this);
int32_t LazyImageRotationAnimation_getChangeColor(LazyImageRotationAnimation* this);
int32_t LazyImageRotationAnimation_getColor(LazyImageRotationAnimation* this);
int32_t LazyImageRotationAnimation_getDx(LazyImageRotationAnimation* this);
int32_t LazyImageRotationAnimation_getDy(LazyImageRotationAnimation* this);
bool LazyImageRotationAnimation_isThreed(LazyImageRotationAnimation* this);
void LazyImageRotationAnimation_nextFrame(LazyImageRotationAnimation* this);
void LazyImageRotationAnimation_reset(LazyImageRotationAnimation* this);
void LazyImageRotationAnimation_setFrame(LazyImageRotationAnimation* this, int32_t index);
int32_t LazyImageRotationAnimation_getFrame(LazyImageRotationAnimation* this);
int32_t LazyImageRotationAnimation_getAnimationSize(LazyImageRotationAnimation* this);
int32_t LazyImageRotationAnimation_getSize(LazyImageRotationAnimation* this);
void LazyImageRotationAnimation_previousFrame(LazyImageRotationAnimation* this);
bool LazyImageRotationAnimation_isLastFrame(LazyImageRotationAnimation* this);
void LazyImageRotationAnimation_setSequence(LazyImageRotationAnimation* this, int32_t* sequence);
int32_t* LazyImageRotationAnimation_getSequence(LazyImageRotationAnimation* this);
int32_t LazyImageRotationAnimation_getWidth(LazyImageRotationAnimation* this);
void LazyImageRotationAnimation_paintXY(LazyImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void LazyImageRotationAnimation_paintThreedXYZ(LazyImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);
const char* LazyImageRotationAnimation_toString(LazyImageRotationAnimation* this);

static void LazyImageRotationAnimation_initFields(LazyImageRotationAnimation* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    
    
    this->scaleProperties = ScaleProperties_instance;
}


void LazyImageRotationAnimation_init(LazyImageRotationAnimation* this, int32_t layoutIndex, int32_t instanceId, ScaleProperties* scaleProperties, BaseImageAnimationFactory* animationInterfaceFactoryInterface, AnimationBehavior* animationBehavior) {
        RotationAnimation_init(&this->base, AngleInfo_getInstance(AngleFactory_getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil_createInstance(4), animationBehavior);
        LazyImageRotationAnimation_initFields(this);
        this->layoutIndex = layoutIndex;
        this->instanceId = instanceId;
        this->animationInterfaceFactoryInterface = animationInterfaceFactoryInterface;
        ImageCache* imageCache = ImageCacheFactory_getInstance();
        ImageCache_add(imageCache, this);
        this->scaleProperties = scaleProperties;
        this->NULL_INDEX_ANIMATION = ((IndexedAnimation*) JAVA_CALL(NullRotationAnimationFactory_getFactoryInstance(), getInstance, 0));
        #if 0 /* Java local class: move it to file scope */
typedef struct ActualRotationAnimation ActualRotationAnimation;
struct ActualRotationAnimation {
    RotationAnimation base;
    LazyImageRotationAnimation* lazyImageRotationAnimation;
    int32_t index;
};


ActualRotationAnimation* ActualRotationAnimation_new(LazyImageRotationAnimation* lazyImageRotationAnimation);
        
        void LazyImageRotationAnimation_init(LazyImageRotationAnimation* this, LazyImageRotationAnimation* lazyImageRotationAnimation);
        void LazyImageRotationAnimation_setFrame(LazyImageRotationAnimation* this, int32_t index);
        int32_t LazyImageRotationAnimation_getFrame(LazyImageRotationAnimation* this);
        void LazyImageRotationAnimation_paintXY(LazyImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);
        void LazyImageRotationAnimation_paintThreedXYZ(LazyImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);

static void ActualRotationAnimation_initFields(ActualRotationAnimation* this) {
            
            this->index = 0;
}
        

        void LazyImageRotationAnimation_init(LazyImageRotationAnimation* this, LazyImageRotationAnimation* lazyImageRotationAnimation) {
                RotationAnimation_init(&this->base, AngleInfo_getInstance(AngleFactory_getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil_createInstance(4), this->base.animationBehavior);
                LazyImageRotationAnimation_initFields(this);
                this->lazyImageRotationAnimation = lazyImageRotationAnimation;
        }

        LazyImageRotationAnimation* LazyImageRotationAnimation_new(LazyImageRotationAnimation* lazyImageRotationAnimation) {
            LazyImageRotationAnimation* this = calloc(1, sizeof(LazyImageRotationAnimation));
            LazyImageRotationAnimation_init(this, lazyImageRotationAnimation);
            return this;
        }
        

        void LazyImageRotationAnimation_setFrame(LazyImageRotationAnimation* this, int32_t index) {
                this->index = index;
        }
        

        int32_t LazyImageRotationAnimation_getFrame(LazyImageRotationAnimation* this) {
                return this->index;
        }
        

        void LazyImageRotationAnimation_paintXY(LazyImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
                JAVA_TRY {
                    ImageCacheFactory_insertFirst(ImageCacheFactory_getInstance(), this);
                    this->lazyImageRotationAnimation->animation = this->lazyImageRotationAnimation->NULL_INDEX_ANIMATION;
                } JAVA_CATCH(Exception, e) {
                    LogUtil* logUtil = LogUtil_getInstance();
                    LogUtil_put(logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, e);
                } JAVA_END_TRY;
        }
        

        void LazyImageRotationAnimation_paintThreedXYZ(LazyImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
                JAVA_TRY {
                    ImageCacheFactory_insertFirst(ImageCacheFactory_getInstance(), this);
                    this->lazyImageRotationAnimation->animation = this->lazyImageRotationAnimation->NULL_INDEX_ANIMATION;
                } JAVA_CATCH(Exception, e) {
                    LogUtil* logUtil = LogUtil_getInstance();
                    LogUtil_put(logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, e);
                } JAVA_END_TRY;
        }
#endif
        this->animation = ActualRotationAnimation_new(this);
}

LazyImageRotationAnimation* LazyImageRotationAnimation_new(int32_t layoutIndex, int32_t instanceId, ScaleProperties* scaleProperties, BaseImageAnimationFactory* animationInterfaceFactoryInterface, AnimationBehavior* animationBehavior) {
    LazyImageRotationAnimation* this = calloc(1, sizeof(LazyImageRotationAnimation));
    LazyImageRotationAnimation_init(this, layoutIndex, instanceId, scaleProperties, animationInterfaceFactoryInterface, animationBehavior);
    return this;
}


void LazyImageRotationAnimation_setRealAnimation(LazyImageRotationAnimation* this) {
        JAVA_TRY {
            IndexedAnimation* animation = this->animation;
            BaseImageAnimationFactory_setInitialScale(this->animationInterfaceFactoryInterface, this->scaleProperties);
            this->animation = ((IndexedAnimation*) BaseImageAnimationFactory_getInstance(this->animationInterfaceFactoryInterface, this->instanceId));
            IndexedAnimation_setState(this->animation, animation);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, LazyImageRotationAnimation_SET_REAL_ANIMATION, e);
        } JAVA_END_TRY;
}


void LazyImageRotationAnimation_setScale(LazyImageRotationAnimation* this, float scaleX, float scaleY) {
        IndexedAnimation_setScale(this->animation, scaleX, scaleY);
}


AnimationBehavior* LazyImageRotationAnimation_getAnimationBehavior(LazyImageRotationAnimation* this) {
        return IndexedAnimation_getAnimationBehavior(this->animation);
}


// throws Exception
void LazyImageRotationAnimation_set(LazyImageRotationAnimation* this, GL* gl) {
        IndexedAnimation_set(this->animation, gl);
}


void LazyImageRotationAnimation_setAlpha(LazyImageRotationAnimation* this, int32_t alpha) {
        IndexedAnimation_setAlpha(this->animation, alpha);
}


void LazyImageRotationAnimation_setDx(LazyImageRotationAnimation* this, int32_t dx) {
        IndexedAnimation_setDx(this->animation, dx);
}


void LazyImageRotationAnimation_setDy(LazyImageRotationAnimation* this, int32_t dy) {
        IndexedAnimation_setDy(this->animation, dy);
}


void LazyImageRotationAnimation_setMaxScale(LazyImageRotationAnimation* this, float maxScaleX, float maxScaleY) {
        IndexedAnimation_setMaxScale(this->animation, maxScaleX, maxScaleY);
}


void LazyImageRotationAnimation_nextRotation(LazyImageRotationAnimation* this) {
        RotationAnimation* rotationAnimation = (((RotationAnimation*) this->animation));
        RotationAnimation_nextRotation(rotationAnimation);
}


void LazyImageRotationAnimation_previousRotation(LazyImageRotationAnimation* this) {
        RotationAnimation* rotationAnimation = (((RotationAnimation*) this->animation));
        RotationAnimation_previousRotation(rotationAnimation);
}


void LazyImageRotationAnimation_nextRotationX(LazyImageRotationAnimation* this) {
        RotationAnimation* rotationAnimation = (((RotationAnimation*) this->animation));
        RotationAnimation_nextRotationX(rotationAnimation);
}


void LazyImageRotationAnimation_previousRotationX(LazyImageRotationAnimation* this) {
        RotationAnimation* rotationAnimation = (((RotationAnimation*) this->animation));
        RotationAnimation_previousRotationX(rotationAnimation);
}


void LazyImageRotationAnimation_nextRotationZ(LazyImageRotationAnimation* this) {
        RotationAnimation* rotationAnimation = (((RotationAnimation*) this->animation));
        RotationAnimation_nextRotationZ(rotationAnimation);
}


void LazyImageRotationAnimation_previousRotationZ(LazyImageRotationAnimation* this) {
        RotationAnimation* rotationAnimation = (((RotationAnimation*) this->animation));
        RotationAnimation_previousRotationZ(rotationAnimation);
}


void LazyImageRotationAnimation_changeBasicColor(LazyImageRotationAnimation* this, BasicColor* basicColor) {
        IndexedAnimation_changeBasicColor(this->animation, basicColor);
}


BasicColor* LazyImageRotationAnimation_getBasicColorP(LazyImageRotationAnimation* this) {
        return IndexedAnimation_getBasicColorP(this->animation);
}


BasicColor* LazyImageRotationAnimation_getChangeBasicColor(LazyImageRotationAnimation* this) {
        return IndexedAnimation_getChangeBasicColor(this->animation);
}


int32_t LazyImageRotationAnimation_getChangeColor(LazyImageRotationAnimation* this) {
        return IndexedAnimation_getChangeColor(this->animation);
}


int32_t LazyImageRotationAnimation_getColor(LazyImageRotationAnimation* this) {
        return IndexedAnimation_getColor(this->animation);
}


int32_t LazyImageRotationAnimation_getDx(LazyImageRotationAnimation* this) {
        return IndexedAnimation_getDx(this->animation);
}


int32_t LazyImageRotationAnimation_getDy(LazyImageRotationAnimation* this) {
        return IndexedAnimation_getDy(this->animation);
}


bool LazyImageRotationAnimation_isThreed(LazyImageRotationAnimation* this) {
        return IndexedAnimation_isThreed(this->animation);
}


// throws Exception
void LazyImageRotationAnimation_nextFrame(LazyImageRotationAnimation* this) {
        IndexedAnimation_nextFrame(this->animation);
}


void LazyImageRotationAnimation_reset(LazyImageRotationAnimation* this) {
        IndexedAnimation_reset(this->animation);
}


void LazyImageRotationAnimation_setFrame(LazyImageRotationAnimation* this, int32_t index) {
        IndexedAnimation_setFrame(this->animation, index);
}


int32_t LazyImageRotationAnimation_getFrame(LazyImageRotationAnimation* this) {
        return IndexedAnimation_getFrame(this->animation);
}


// throws Exception
int32_t LazyImageRotationAnimation_getAnimationSize(LazyImageRotationAnimation* this) {
        return IndexedAnimation_getAnimationSize(this->animation);
}


int32_t LazyImageRotationAnimation_getSize(LazyImageRotationAnimation* this) {
        return IndexedAnimation_getSize(this->animation);
}


void LazyImageRotationAnimation_previousFrame(LazyImageRotationAnimation* this) {
        IndexedAnimation_previousFrame(this->animation);
}


bool LazyImageRotationAnimation_isLastFrame(LazyImageRotationAnimation* this) {
        return IndexedAnimation_isLastFrame(this->animation);
}


void LazyImageRotationAnimation_setSequence(LazyImageRotationAnimation* this, int32_t* sequence) {
        IndexedAnimation_setSequence(this->animation, sequence);
}


int32_t* LazyImageRotationAnimation_getSequence(LazyImageRotationAnimation* this) {
        return IndexedAnimation_getSequence(this->animation);
}


int32_t LazyImageRotationAnimation_getWidth(LazyImageRotationAnimation* this) {
        return IndexedAnimation_getWidth(this->animation);
}


void LazyImageRotationAnimation_paintXY(LazyImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_TRY {
            IndexedAnimation_paintXY(this->animation, graphics, x, y);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, e);
        } JAVA_END_TRY;
}


void LazyImageRotationAnimation_paintThreedXYZ(LazyImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        JAVA_TRY {
            IndexedAnimation_paintThreedXYZ(this->animation, graphics, x, y, z);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, e);
        } JAVA_END_TRY;
}


const char* LazyImageRotationAnimation_toString(LazyImageRotationAnimation* this) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        Image* image = BaseImageAnimationFactory_getImage(this->animationInterfaceFactoryInterface);
        return JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), RotationAnimation_toString((&this->base))), append, commonSeps->SPACE), append, Image_getName(image)), append, commonSeps->SPACE), appendint, ((int32_t) Image_getWidth(image))), append, commonSeps->SPACE), appendint, ((int32_t) Image_getHeight(image))), toString);
}

