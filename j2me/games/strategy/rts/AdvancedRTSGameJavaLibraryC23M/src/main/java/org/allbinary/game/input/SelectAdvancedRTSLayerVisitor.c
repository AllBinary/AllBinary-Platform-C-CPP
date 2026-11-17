/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
#include "org/allbinary/game/input/form/AssignWaypointsUtil.h"
#include "org/allbinary/game/layer/AdvancedRTSGameLayer.h"
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/building/BuildingLayer.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/game/layer/unit/UnitLayer.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"

typedef struct SelectAdvancedRTSLayerVisitor SelectAdvancedRTSLayerVisitor;
struct SelectAdvancedRTSLayerVisitor {
    Visitor base;
    SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput;
};


SelectAdvancedRTSLayerVisitor* SelectAdvancedRTSLayerVisitor_new(SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput);

void SelectAdvancedRTSLayerVisitor_init(SelectAdvancedRTSLayerVisitor* this, SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput);
Any* SelectAdvancedRTSLayerVisitor_visit(SelectAdvancedRTSLayerVisitor* this, Any* anyType);

static void SelectAdvancedRTSLayerVisitor_initFields(SelectAdvancedRTSLayerVisitor* this) {
    
}


void SelectAdvancedRTSLayerVisitor_init(SelectAdvancedRTSLayerVisitor* this, SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput) {
    Visitor_init(&this->base);
    SelectAdvancedRTSLayerVisitor_initFields(this);
        this->selectedRTSLayersPlayerGameInput = selectedRTSLayersPlayerGameInput;
}

SelectAdvancedRTSLayerVisitor* SelectAdvancedRTSLayerVisitor_new(SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput) {
    SelectAdvancedRTSLayerVisitor* this = calloc(1, sizeof(SelectAdvancedRTSLayerVisitor));
    SelectAdvancedRTSLayerVisitor_init(this, selectedRTSLayersPlayerGameInput);
    return this;
}


Any* SelectAdvancedRTSLayerVisitor_visit(SelectAdvancedRTSLayerVisitor* this, Any* anyType) {
        CollidableDestroyableDamageableLayer* selectedLayer = ((CollidableDestroyableDamageableLayer*) anyType);
        if (selectedLayer != CollidableDestroyableDamageableLayer_getNullInstance() && CollidableDestroyableDamageableLayer_getType(selectedLayer) == BuildingLayer_getStaticType()) {
            AdvancedRTSGameLayer* rtsGameLayer = ((AdvancedRTSGameLayer*) selectedLayer);
            AssignWaypointsUtil* assignWaypointsUtil = AssignWaypointsUtil_getInstance();
            BasicArrayList* list = SelectedRTSLayersPlayerGameInput_getSelectedBasicArrayList(this->selectedRTSLayersPlayerGameInput);
            RTSLayer* currentRTSLayer = nullptr;
            UnitLayer* unitLayer = nullptr;
            for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
                currentRTSLayer = ((RTSLayer*) BasicArrayList_get(list, index));
                if (RTSLayer_getType(currentRTSLayer) == UnitLayer_getStaticType()) {
                    unitLayer = ((UnitLayer*) currentRTSLayer);
                    UnitLayer_setParentLayer(unitLayer, rtsGameLayer);
                    AssignWaypointsUtil_set(assignWaypointsUtil, unitLayer, rtsGameLayer);
                }
            }
        }
        return NullUtil_getInstance()->NULL_OBJECT;
}

