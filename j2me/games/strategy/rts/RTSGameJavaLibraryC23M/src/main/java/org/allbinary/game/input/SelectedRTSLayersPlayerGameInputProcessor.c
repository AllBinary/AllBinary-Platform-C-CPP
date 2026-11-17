/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/GameInputProcessor.h"

typedef struct SelectedRTSLayersPlayerGameInputProcessor SelectedRTSLayersPlayerGameInputProcessor;
struct SelectedRTSLayersPlayerGameInputProcessor {
    GameInputProcessor base;
    SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput;
};


SelectedRTSLayersPlayerGameInputProcessor* SelectedRTSLayersPlayerGameInputProcessor_new(SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput);

void SelectedRTSLayersPlayerGameInputProcessor_init(SelectedRTSLayersPlayerGameInputProcessor* this, SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput);

static void SelectedRTSLayersPlayerGameInputProcessor_initFields(SelectedRTSLayersPlayerGameInputProcessor* this) {
    
}


void SelectedRTSLayersPlayerGameInputProcessor_init(SelectedRTSLayersPlayerGameInputProcessor* this, SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput) {
    GameInputProcessor_init(&this->base);
    SelectedRTSLayersPlayerGameInputProcessor_initFields(this);
        this->selectedRTSLayersPlayerGameInput = selectedRTSLayersPlayerGameInput;
}

SelectedRTSLayersPlayerGameInputProcessor* SelectedRTSLayersPlayerGameInputProcessor_new(SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput) {
    SelectedRTSLayersPlayerGameInputProcessor* this = calloc(1, sizeof(SelectedRTSLayersPlayerGameInputProcessor));
    SelectedRTSLayersPlayerGameInputProcessor_init(this, selectedRTSLayersPlayerGameInput);
    return this;
}

