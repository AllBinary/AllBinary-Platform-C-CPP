// Generated Code Do Not Modify
#include "org/allbinary/game/layer/pickup/IconLayer.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/view/ViewPosition.h"
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif


IconLayer* IconLayer_NULL_ICON_LAYER;





void IconLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    IconLayer_NULL_ICON_LAYER = IconLayer_new(NullAnimationFactory_getInstance(NullAnimationFactory_getFactoryInstance(), 0), 0, 0);
}

void IconLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("IconLayer", "AllBinaryLayer");
    java_register_method("IconLayer", "paint", (void*) IconLayer_paint);
    java_register_method("IconLayer", "paintThreed", (void*) IconLayer_paintThreed);
    java_register_method("IconLayer", "getAnimationInterface", (void*) IconLayer_getAnimationInterface);
}

static void IconLayer_initFields(IconLayer* this) {
    
}


void IconLayer_init(IconLayer* this, Animation* animationInterface, int32_t width, int32_t height) {
    IconLayer_register();
        AllBinaryLayer_init(&this->base, StringUtil_getInstance()->EMPTY_STRING, Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, width, height), ViewPosition_getInstanceD());
        IconLayer_initFields(this);
        this->animationInterface = animationInterface;
}

IconLayer* IconLayer_new(Animation* animationInterface, int32_t width, int32_t height) {
    IconLayer* this = java_object_alloc(sizeof(IconLayer), "IconLayer");
    IconLayer_init(this, animationInterface, width, height);
    return this;
}


void IconLayer_paint(IconLayer* this, Graphics* graphics) {
        Animation_paintXY(this->animationInterface, graphics, this->base.base.x, this->base.base.y);
}


void IconLayer_paintThreed(IconLayer* this, Graphics* graphics) {
        Animation_paintThreedXYZ(this->animationInterface, graphics, this->base.base.x, this->base.base.y, this->base.base.z);
}


Animation* IconLayer_getAnimationInterface(IconLayer* this) {
        return this->animationInterface;
}

