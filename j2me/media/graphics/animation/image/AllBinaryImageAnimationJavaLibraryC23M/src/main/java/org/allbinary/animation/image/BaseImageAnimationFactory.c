// Generated Code Do Not Modify
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/image/AnimationFactoryImageScaleUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/animation/image/AnimationFactoryInitializationVisitor.h"
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif












void BaseImageAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BaseImageAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BaseImageAnimationFactory", nullptr);
    java_register_method("BaseImageAnimationFactory", "getInstance", (void*) BaseImageAnimationFactory_getInstance);
    java_register_method("BaseImageAnimationFactory", "getImage", (void*) BaseImageAnimationFactory_getImage);
    java_register_method("BaseImageAnimationFactory", "getSequenceArray", (void*) BaseImageAnimationFactory_getSequenceArray);
    java_register_method("BaseImageAnimationFactory", "setInitialScale", (void*) BaseImageAnimationFactory_setInitialScale);
    java_register_method("BaseImageAnimationFactory", "getAnimationFactoryInitializationVisitorP", (void*) BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP);
    java_register_method("BaseImageAnimationFactory", "getScalePropertiesP", (void*) BaseImageAnimationFactory_getScalePropertiesP);
    java_register_method("BaseImageAnimationFactory", "toString", (void*) BaseImageAnimationFactory_toString);
}

static void BaseImageAnimationFactory_initFields(BaseImageAnimationFactory* this) {
    this->animationFactoryImageScaleUtil = AnimationFactoryImageScaleUtil_getInstance();
    
    
    
    
    this->scaleProperties = (ScaleProperties_staticInit(), ScaleProperties_instance);
}


// throws Exception
BaseImageAnimationFactory* BaseImageAnimationFactory_createFactoryBase(Image* image, int32_t* sequenceArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory) {
        return BaseImageAnimationFactory_new(image, sequenceArray, width, height, 0, 0, animationBehaviorFactory);
}


void BaseImageAnimationFactory_init(BaseImageAnimationFactory* this, Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    BaseImageAnimationFactory_register();
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
    BaseImageAnimationFactory* this = java_object_alloc(sizeof(BaseImageAnimationFactory), "BaseImageAnimationFactory");
    BaseImageAnimationFactory_init(this, image, sequenceArray, width, height, dx, dy, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* BaseImageAnimationFactory_getInstance(BaseImageAnimationFactory* this, int32_t instanceId) {
        return NullAnimationFactory_getInstance(NullAnimationFactory_getFactoryInstance(), instanceId);
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
            this->scaleProperties->scaleWidth = ((int32_t) (((float) this->animationFactoryInitializationVisitor->width) * this->scaleProperties->scaleX));
            this->scaleProperties->scaleHeight = ((int32_t) (((float) this->animationFactoryInitializationVisitor->height) * this->scaleProperties->scaleY));
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
        StringMaker_append(stringBuffer, java_object_toString(this));
        StringMaker_append(stringBuffer, commonLabels->HEIGHT_LABEL);
        StringMaker_appendint(stringBuffer, Image_getHeight(this->image));
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, java_string_of(this->animationFactoryInitializationVisitor));
        return java_string_of(stringBuffer);
}

