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

typedef struct SelectedRTSLayersPlayerUpgradeGameInputProcessor SelectedRTSLayersPlayerUpgradeGameInputProcessor;
struct SelectedRTSLayersPlayerUpgradeGameInputProcessor {
    SelectedRTSLayersPlayerGameInputProcessor base;
};


SelectedRTSLayersPlayerUpgradeGameInputProcessor* SelectedRTSLayersPlayerUpgradeGameInputProcessor_new(SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput);

void SelectedRTSLayersPlayerUpgradeGameInputProcessor_init(SelectedRTSLayersPlayerUpgradeGameInputProcessor* this, SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput);
void SelectedRTSLayersPlayerUpgradeGameInputProcessor_processEvent(SelectedRTSLayersPlayerUpgradeGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);


void SelectedRTSLayersPlayerUpgradeGameInputProcessor_init(SelectedRTSLayersPlayerUpgradeGameInputProcessor* this, SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput) {
        SelectedRTSLayersPlayerGameInputProcessor_init(&this->base, selectedRTSLayersPlayerGameInput);
}

SelectedRTSLayersPlayerUpgradeGameInputProcessor* SelectedRTSLayersPlayerUpgradeGameInputProcessor_new(SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput) {
    SelectedRTSLayersPlayerUpgradeGameInputProcessor* this = calloc(1, sizeof(SelectedRTSLayersPlayerUpgradeGameInputProcessor));
    SelectedRTSLayersPlayerUpgradeGameInputProcessor_init(this, selectedRTSLayersPlayerGameInput);
    return this;
}


// throws Exception
void SelectedRTSLayersPlayerUpgradeGameInputProcessor_processEvent(SelectedRTSLayersPlayerUpgradeGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        SelectedRTSLayersPlayerGameInput_upgrade(this->selectedRTSLayersPlayerGameInput);
}

