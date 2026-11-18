// Generated Code Do Not Modify
#include "org/allbinary/animation/vector/LineAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/NullUtil.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif










void LineAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LineAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LineAnimation", "Animation");
    java_register_method("LineAnimation", "init", (void*) LineAnimation_initMethod);
    java_register_method("LineAnimation", "setPosition", (void*) LineAnimation_setPosition);
    java_register_method("LineAnimation", "paintXY", (void*) LineAnimation_paintXY);
    java_register_method("LineAnimation", "nextFrame", (void*) LineAnimation_nextFrame);
    java_register_method("LineAnimation", "getBasicColorP", (void*) LineAnimation_getBasicColorP);
    java_register_method("LineAnimation", "setBasicColorP", (void*) LineAnimation_setBasicColorP);
}

static void LineAnimation_initFields(LineAnimation* this) {
    this->newLine = ((int32_t**) java_array_new2(sizeof(int32_t), 2, 2));
    this->tempLine = NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY;
    this->line = ((int32_t**) java_array_new2(sizeof(int32_t), 2, 2));
}


void LineAnimation_init(LineAnimation* this, BasicColor* basicColor) {
    LineAnimation_register();
    Animation_init(&this->base);
    LineAnimation_initFields(this);
        LineAnimation_setBasicColorP(this, basicColor);
}

LineAnimation* LineAnimation_new(BasicColor* basicColor) {
    LineAnimation* this = java_object_alloc(sizeof(LineAnimation), "LineAnimation");
    LineAnimation_init(this, basicColor);
    return this;
}


void LineAnimation_initMethod(LineAnimation* this, int32_t x, int32_t y) {
        this->newLine[0][0] = x;
        this->newLine[0][1] = y;
        this->newLine[1][0] = x;
        this->newLine[1][1] = y;
        this->tempLine = this->line;
        this->line = this->newLine;
        this->newLine = this->tempLine;
}


void LineAnimation_setPosition(LineAnimation* this, int32_t x, int32_t y, int32_t z) {
        this->newLine[0][0] = this->line[1][0];
        this->newLine[0][1] = this->line[1][1];
        this->newLine[1][0] = x;
        this->newLine[1][1] = y;
        this->tempLine = this->line;
        this->line = this->newLine;
        this->newLine = this->tempLine;
}


void LineAnimation_paintXY(LineAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        int32_t** currentLine = this->line;
        BasicColorSetUtil_setBasicColorP3(this->base.basicSetColorUtil, graphics, LineAnimation_getBasicColorP(this), Animation_getColor(this));
        Graphics_drawLine(graphics, currentLine[0][0], currentLine[0][1], currentLine[1][0], currentLine[1][1]);
}


void LineAnimation_nextFrame(LineAnimation* this) {
}


BasicColor* LineAnimation_getBasicColorP(LineAnimation* this) {
        return Animation_getBasicColorP((&this->base));
}


void LineAnimation_setBasicColorP(LineAnimation* this, BasicColor* basicColor) {
        Animation_setBasicColorP((&this->base), basicColor);
}

