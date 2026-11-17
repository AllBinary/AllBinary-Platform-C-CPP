// Generated Code Do Not Modify
// package org.allbinary.animation.vector

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/animation/vector/RectangleFilledAnimation.h"

typedef struct ARectangleFilledAnimation ARectangleFilledAnimation;
struct ARectangleFilledAnimation {
    RectangleFilledAnimation base;
    int32_t x;
    int32_t y;
};


ARectangleFilledAnimation* ARectangleFilledAnimation_new(void);

void ARectangleFilledAnimation_init(ARectangleFilledAnimation* this);
void ARectangleFilledAnimation_nextFrame(ARectangleFilledAnimation* this);
void ARectangleFilledAnimation_paintXY(ARectangleFilledAnimation* this, Graphics* graphics, int32_t unusedX, int32_t unusedY);

static void ARectangleFilledAnimation_initFields(ARectangleFilledAnimation* this) {
    this->x = 0;
    this->y = 0;
}


void ARectangleFilledAnimation_init(ARectangleFilledAnimation* this) {
        RectangleFilledAnimation_init(&this->base, 0, 0, BasicColorFactory_getInstance()->BLACK);
        ARectangleFilledAnimation_initFields(this);
}

ARectangleFilledAnimation* ARectangleFilledAnimation_new(void) {
    ARectangleFilledAnimation* this = calloc(1, sizeof(ARectangleFilledAnimation));
    ARectangleFilledAnimation_init(this);
    return this;
}


void ARectangleFilledAnimation_nextFrame(ARectangleFilledAnimation* this) {
}


void ARectangleFilledAnimation_paintXY(ARectangleFilledAnimation* this, Graphics* graphics, int32_t unusedX, int32_t unusedY) {
        RectangleFilledAnimation_paintXY((&this->base), graphics, this->x, this->y);
}

