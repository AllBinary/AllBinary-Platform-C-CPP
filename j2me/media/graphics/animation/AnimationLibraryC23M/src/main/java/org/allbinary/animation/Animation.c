// Generated Code Do Not Modify
#include "org/allbinary/animation/Animation.h"
#include "javax/microedition/khronos/opengles/GL.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "org/allbinary/animation/AnimationInterface.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif























void Animation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Animation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Animation", nullptr);
    java_register_method("Animation", "setAlpha", (void*) Animation_setAlpha);
    java_register_method("Animation", "nextFrame", (void*) Animation_nextFrame);
    java_register_method("Animation", "paintXY", (void*) Animation_paintXY);
    java_register_method("Animation", "paintThreedXYZ", (void*) Animation_paintThreedXYZ);
    java_register_method("Animation", "isThreed", (void*) Animation_isThreed);
    java_register_method("Animation", "getBasicColorP", (void*) Animation_getBasicColorP);
    java_register_method("Animation", "setBasicColorP", (void*) Animation_setBasicColorP);
    java_register_method("Animation", "setBackgroundBasicColorP", (void*) Animation_setBackgroundBasicColorP);
    java_register_method("Animation", "getChangeBasicColor", (void*) Animation_getChangeBasicColor);
    java_register_method("Animation", "changeBasicColor", (void*) Animation_changeBasicColor);
    java_register_method("Animation", "getChangeColor", (void*) Animation_getChangeColor);
    java_register_method("Animation", "getColor", (void*) Animation_getColor);
    java_register_method("Animation", "setScale", (void*) Animation_setScale);
    java_register_method("Animation", "setMaxScale", (void*) Animation_setMaxScale);
    java_register_method("Animation", "set", (void*) Animation_set);
    java_register_method("Animation", "setDx", (void*) Animation_setDx);
    java_register_method("Animation", "getDx", (void*) Animation_getDx);
    java_register_method("Animation", "setDy", (void*) Animation_setDy);
    java_register_method("Animation", "getDy", (void*) Animation_getDy);
}

static void Animation_initFields(Animation* this) {
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    this->basicColor = BasicColorFactory_getInstance()->WHITE;
    this->colorP = 0;
    this->changeBasicColorP = BasicColorFactory_getInstance()->NULL_COLOR;
    this->changeColorP = 0;
    this->alphaP = 0;
}


void Animation_init(Animation* this) {
    Animation_register();
    Animation_initFields(this);
}

Animation* Animation_new(void) {
    Animation* this = java_object_alloc(sizeof(Animation), "Animation");
    Animation_init(this);
    return this;
}


void Animation_setAlpha(Animation* this, int32_t alpha) {
        this->alphaP = alpha;
}


// throws Exception
void Animation_nextFrame(Animation* this) {
}


void Animation_paintXY(Animation* this, Graphics* graphics, int32_t x, int32_t y) {
        BasicColorSetUtil_setBasicColorP3(this->basicSetColorUtil, graphics, Animation_getBasicColorP(this), Animation_getColor(this));
}


void Animation_paintThreedXYZ(Animation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
}


bool Animation_isThreed(Animation* this) {
        return false;
}


BasicColor* Animation_getBasicColorP(Animation* this) {
        return this->basicColor;
}


void Animation_setBasicColorP(Animation* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
        this->colorP = BasicColor_intValue(this->basicColor);
}


void Animation_setBackgroundBasicColorP(Animation* this, BasicColor* basicColor) {
}


BasicColor* Animation_getChangeBasicColor(Animation* this) {
        return this->changeBasicColorP;
}


void Animation_changeBasicColor(Animation* this, BasicColor* basicColor) {
        this->changeBasicColorP = basicColor;
        this->changeColorP = BasicColor_intValue(this->changeBasicColorP);
}


int32_t Animation_getChangeColor(Animation* this) {
        return this->changeColorP;
}


int32_t Animation_getColor(Animation* this) {
        return this->colorP;
}


void Animation_setScale(Animation* this, float scaleX, float scaleY) {
}


void Animation_setMaxScale(Animation* this, float maxScaleX, float maxScaleY) {
}


// throws Exception
void Animation_set(Animation* this, GL* gl) {
}


void Animation_setDx(Animation* this, int32_t dx) {
}


int32_t Animation_getDx(Animation* this) {
        return 0;
}


void Animation_setDy(Animation* this, int32_t dy) {
}


int32_t Animation_getDy(Animation* this) {
        return 0;
}

