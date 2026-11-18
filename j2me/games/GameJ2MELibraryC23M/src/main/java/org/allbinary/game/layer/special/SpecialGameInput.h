#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUT_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUT_H
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
typedef struct SpecialGameInputInterface SpecialGameInputInterface;
typedef struct Graphics Graphics;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"

typedef struct SpecialGameInput SpecialGameInput;
struct SpecialGameInput {
    SpecialGameInputInterface SpecialGameInputInterface_interface;
};


SpecialGameInput* SpecialGameInput_new(void);
void SpecialGameInput_init(SpecialGameInput* this);

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
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialGameInput_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialGameInput_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUT_H
