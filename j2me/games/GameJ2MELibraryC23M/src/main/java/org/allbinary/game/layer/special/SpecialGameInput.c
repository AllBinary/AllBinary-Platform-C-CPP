/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.game.layer.special

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"

typedef struct SpecialGameInput SpecialGameInput;
struct SpecialGameInput {
    SpecialGameInputInterface SpecialGameInputInterface_interface;
};


SpecialGameInput* SpecialGameInput_new(void);
void SpecialGameInput_up(SpecialGameInput* this);
void SpecialGameInput_down(SpecialGameInput* this);
void SpecialGameInput_right(SpecialGameInput* this);
void SpecialGameInput_left(SpecialGameInput* this);
void SpecialGameInput_strafeLeft(SpecialGameInput* this);
void SpecialGameInput_strafeRight(SpecialGameInput* this);
void SpecialGameInput_fire(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
void SpecialGameInput_special1(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
void SpecialGameInput_special2(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
void SpecialGameInput_special3(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
void SpecialGameInput_special4(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
void SpecialGameInput_special5(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
void SpecialGameInput_paint(SpecialGameInput* this, Graphics* graphics);
void SpecialGameInput_paintThreed(SpecialGameInput* this, Graphics* graphics);

void SpecialGameInput_init(SpecialGameInput* this) {
}

SpecialGameInput* SpecialGameInput_new(void) {
    SpecialGameInput* this = calloc(1, sizeof(SpecialGameInput));
    SpecialGameInput_init(this);
    return this;
}


// throws Exception
void SpecialGameInput_up(SpecialGameInput* this) {
}


// throws Exception
void SpecialGameInput_down(SpecialGameInput* this) {
}


// throws Exception
void SpecialGameInput_right(SpecialGameInput* this) {
}


// throws Exception
void SpecialGameInput_left(SpecialGameInput* this) {
}


// throws Exception
void SpecialGameInput_strafeLeft(SpecialGameInput* this) {
}


// throws Exception
void SpecialGameInput_strafeRight(SpecialGameInput* this) {
}


// throws Exception
void SpecialGameInput_fire(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void SpecialGameInput_special1(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void SpecialGameInput_special2(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void SpecialGameInput_special3(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void SpecialGameInput_special4(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void SpecialGameInput_special5(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


void SpecialGameInput_paint(SpecialGameInput* this, Graphics* graphics) {
}


void SpecialGameInput_paintThreed(SpecialGameInput* this, Graphics* graphics) {
}

