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
// package org.allbinary.game.configuration.feature

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

typedef struct GameFeatureCanvas GameFeatureCanvas;
struct GameFeatureCanvas {
    Canvas base;
};


GameFeatureCanvas* GameFeatureCanvas_new(void);

void GameFeatureCanvas_init(GameFeatureCanvas* this);
void GameFeatureCanvas_paint(GameFeatureCanvas* this, Graphics* graphics);


void GameFeatureCanvas_init(GameFeatureCanvas* this) {
    Canvas_init(&this->base);
}

GameFeatureCanvas* GameFeatureCanvas_new(void) {
    GameFeatureCanvas* this = calloc(1, sizeof(GameFeatureCanvas));
    GameFeatureCanvas_init(this);
    return this;
}


void GameFeatureCanvas_paint(GameFeatureCanvas* this, Graphics* graphics) {
}

