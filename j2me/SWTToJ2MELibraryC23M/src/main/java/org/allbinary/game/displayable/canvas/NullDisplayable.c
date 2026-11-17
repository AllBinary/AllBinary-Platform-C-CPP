// Generated Code Do Not Modify
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/canvas/BaseGameStatistics.h"
#include "org/allbinary/canvas/GameStatisticsFactory.h"

//SWTToJ2ME
typedef struct NullDisplayable NullDisplayable;
struct NullDisplayable {
    Canvas base;
    BaseGameStatistics* baseGameStatistics;
};

static NullDisplayable* NullDisplayable_SINGLETON;

NullDisplayable* NullDisplayable_new(void);
NullDisplayable* NullDisplayable_getInstance(void);

void NullDisplayable_init(NullDisplayable* this);
void NullDisplayable_paint(NullDisplayable* this, Graphics* graphics);

// Static fields with runtime initializers: call this once at startup
void NullDisplayable_staticInit(void) {
    NullDisplayable_SINGLETON = NullDisplayable_new();
}

static void NullDisplayable_initFields(NullDisplayable* this) {
    this->baseGameStatistics = GameStatisticsFactory_getInstance();
}


NullDisplayable* NullDisplayable_getInstance(void) {
        return NullDisplayable_SINGLETON;
}


void NullDisplayable_init(NullDisplayable* this) {
    Canvas_init(&this->base);
    NullDisplayable_initFields(this);
}

NullDisplayable* NullDisplayable_new(void) {
    NullDisplayable* this = calloc(1, sizeof(NullDisplayable));
    NullDisplayable_init(this);
    return this;
}


void NullDisplayable_paint(NullDisplayable* this, Graphics* graphics) {
        BaseGameStatistics_nextRefresh(this->baseGameStatistics);
}

