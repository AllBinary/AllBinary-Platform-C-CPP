// Generated Code Do Not Modify
// package org.allbinary.animation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/animation/IndexedAnimation.h"

typedef struct FillAnimation FillAnimation;
struct FillAnimation {
    IndexedAnimation base;
    int32_t* pixelBuffer;
    int32_t width;
    int32_t height;
};


FillAnimation* FillAnimation_new(int32_t* pixelBuffer, int32_t width, int32_t height, AnimationBehavior* animationBehavior);

void FillAnimation_init(FillAnimation* this, int32_t* pixelBuffer, int32_t width, int32_t height, AnimationBehavior* animationBehavior);
void FillAnimation_setBasicColorP(FillAnimation* this, BasicColor* basicColor);
void FillAnimation_changeBasicColor(FillAnimation* this, BasicColor* basicColor);
void FillAnimation_setAlpha(FillAnimation* this, int32_t alpha);
void FillAnimation_setScale(FillAnimation* this, float scaleX, float scaleY);
void FillAnimation_setMaxScale(FillAnimation* this, float maxScaleX, float maxScaleY);
static void FillAnimation_updateModifiers(FillAnimation* this);
void FillAnimation_paint(FillAnimation* this, Graphics* g);

static void FillAnimation_initFields(FillAnimation* this) {
    
    
    
}


void FillAnimation_init(FillAnimation* this, int32_t* pixelBuffer, int32_t width, int32_t height, AnimationBehavior* animationBehavior) {
        IndexedAnimation_init(&this->base, animationBehavior);
        FillAnimation_initFields(this);
        this->width = 100;
        this->height = 100;
        this->pixelBuffer = pixelBuffer;
}

FillAnimation* FillAnimation_new(int32_t* pixelBuffer, int32_t width, int32_t height, AnimationBehavior* animationBehavior) {
    FillAnimation* this = calloc(1, sizeof(FillAnimation));
    FillAnimation_init(this, pixelBuffer, width, height, animationBehavior);
    return this;
}


void FillAnimation_setBasicColorP(FillAnimation* this, BasicColor* basicColor) {
        bool changed = false;
        if (FillAnimation_getBasicColorP(this) == nullptr || JAVA_CALL(FillAnimation_getBasicColorP(this), intValue) != BasicColor_intValue(basicColor)) {
            changed = true;
        }
        IndexedAnimation_setBasicColorP((&this->base), basicColor);
        if (changed) {
            FillAnimation_updateModifiers(this);
        }
}


void FillAnimation_changeBasicColor(FillAnimation* this, BasicColor* basicColor) {
        bool changed = false;
        if (FillAnimation_getChangeBasicColor(this) == nullptr || JAVA_CALL(FillAnimation_getChangeBasicColor(this), intValue) != BasicColor_intValue(basicColor)) {
            changed = true;
        }
        IndexedAnimation_changeBasicColor((&this->base), basicColor);
        if (changed) {
            FillAnimation_updateModifiers(this);
        }
}


void FillAnimation_setAlpha(FillAnimation* this, int32_t alpha) {
        bool changed = false;
        if (this->alphaP != alpha) {
            changed = true;
        }
        IndexedAnimation_setAlpha((&this->base), alpha);
        if (changed) {
            FillAnimation_updateModifiers(this);
        }
}


void FillAnimation_setScale(FillAnimation* this, float scaleX, float scaleY) {
}


void FillAnimation_setMaxScale(FillAnimation* this, float maxScaleX, float maxScaleY) {
}


static void FillAnimation_updateModifiers(FillAnimation* this) {
}


void FillAnimation_paint(FillAnimation* this, Graphics* g) {
        Graphics_drawRGB(g, this->pixelBuffer, 0, this->width, 0, 0, this->width, this->height, true);
}

