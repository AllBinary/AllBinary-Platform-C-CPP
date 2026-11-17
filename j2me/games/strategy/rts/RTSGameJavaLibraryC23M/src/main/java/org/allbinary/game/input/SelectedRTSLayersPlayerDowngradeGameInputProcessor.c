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
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/input/SelectedRTSLayersPlayerGameInputProcessor.h"

typedef struct SelectedRTSLayersPlayerDowngradeGameInputProcessor SelectedRTSLayersPlayerDowngradeGameInputProcessor;
struct SelectedRTSLayersPlayerDowngradeGameInputProcessor {
    SelectedRTSLayersPlayerGameInputProcessor base;
};


SelectedRTSLayersPlayerDowngradeGameInputProcessor* SelectedRTSLayersPlayerDowngradeGameInputProcessor_new(SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput);

void SelectedRTSLayersPlayerDowngradeGameInputProcessor_init(SelectedRTSLayersPlayerDowngradeGameInputProcessor* this, SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput);
void SelectedRTSLayersPlayerDowngradeGameInputProcessor_processEvent(SelectedRTSLayersPlayerDowngradeGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);


void SelectedRTSLayersPlayerDowngradeGameInputProcessor_init(SelectedRTSLayersPlayerDowngradeGameInputProcessor* this, SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput) {
        SelectedRTSLayersPlayerGameInputProcessor_init(&this->base, selectedRTSLayersPlayerGameInput);
}

SelectedRTSLayersPlayerDowngradeGameInputProcessor* SelectedRTSLayersPlayerDowngradeGameInputProcessor_new(SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput) {
    SelectedRTSLayersPlayerDowngradeGameInputProcessor* this = calloc(1, sizeof(SelectedRTSLayersPlayerDowngradeGameInputProcessor));
    SelectedRTSLayersPlayerDowngradeGameInputProcessor_init(this, selectedRTSLayersPlayerGameInput);
    return this;
}


// throws Exception
void SelectedRTSLayersPlayerDowngradeGameInputProcessor_processEvent(SelectedRTSLayersPlayerDowngradeGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        SelectedRTSLayersPlayerGameInput_downgrade(this->selectedRTSLayersPlayerGameInput);
}

