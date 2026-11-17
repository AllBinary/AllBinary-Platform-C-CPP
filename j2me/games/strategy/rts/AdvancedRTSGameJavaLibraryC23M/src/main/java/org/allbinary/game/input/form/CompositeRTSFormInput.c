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
// package org.allbinary.game.input.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/game/input/form/RTSFormInput.h"

typedef struct CompositeRTSFormInput CompositeRTSFormInput;
struct CompositeRTSFormInput {
    RTSFormInput base;
    RTSFormInput** rtsFormInputArray;
    int32_t* itemIndex;
    bool isPrimaryWaypointCreator;
};


CompositeRTSFormInput* CompositeRTSFormInput_new(Group** groupInterface, bool isPrimaryWaypointCreator, int32_t* itemIndex);

void CompositeRTSFormInput_init(CompositeRTSFormInput* this, Group** groupInterface, bool isPrimaryWaypointCreator, int32_t* itemIndex);
void CompositeRTSFormInput_setAllBinaryGameLayerManager(CompositeRTSFormInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
void CompositeRTSFormInput_processAtPoint(CompositeRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point);
void CompositeRTSFormInput_processGameSpecific(CompositeRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index);
bool CompositeRTSFormInput_processSticky(CompositeRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point);
void CompositeRTSFormInput_processStickyGameSpecific(CompositeRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index);
int32_t CompositeRTSFormInput_getSelectedStickyItemIndex(CompositeRTSFormInput* this);
bool CompositeRTSFormInput_isStickyItemSelected(CompositeRTSFormInput* this);
void CompositeRTSFormInput_setStickyItemSelected(CompositeRTSFormInput* this, bool stickyItemSelected);
ABCustomItem* CompositeRTSFormInput_getSelectedStickyItem(CompositeRTSFormInput* this);
void CompositeRTSFormInput_setSelectedStickyItem(CompositeRTSFormInput* this, ABCustomItem* selectedStickyItem);

static void CompositeRTSFormInput_initFields(CompositeRTSFormInput* this) {
    
    
    
}


void CompositeRTSFormInput_init(CompositeRTSFormInput* this, Group** groupInterface, bool isPrimaryWaypointCreator, int32_t* itemIndex) {
        RTSFormInput_init(&this->base, groupInterface);
        CompositeRTSFormInput_initFields(this);
        this->itemIndex = itemIndex;
        this->isPrimaryWaypointCreator = isPrimaryWaypointCreator;
        this->rtsFormInputArray = ((RTSFormInput**) java_array_new(sizeof(RTSFormInput*), 2));
        this->rtsFormInputArray[0] = WaypointRTSFormInput_new(this->groupInterfaceArray, isPrimaryWaypointCreator);
        this->rtsFormInputArray[1] = UnitRTSFormInput_new(this->groupInterfaceArray);
}

CompositeRTSFormInput* CompositeRTSFormInput_new(Group** groupInterface, bool isPrimaryWaypointCreator, int32_t* itemIndex) {
    CompositeRTSFormInput* this = calloc(1, sizeof(CompositeRTSFormInput));
    CompositeRTSFormInput_init(this, groupInterface, isPrimaryWaypointCreator, itemIndex);
    return this;
}


// throws Exception
void CompositeRTSFormInput_setAllBinaryGameLayerManager(CompositeRTSFormInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        RTSFormInput_setAllBinaryGameLayerManager((&this->base), allBinaryGameLayerManager);
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) allBinaryGameLayerManager);
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        int32_t size = java_array_length(this->rtsFormInputArray);
        for (int32_t index = 0; index < size; index++) {
            JAVA_CALL(this->rtsFormInputArray[index], setAllBinaryGameLayerManager, allBinaryGameLayerManager);
        }
}


// throws Exception
void CompositeRTSFormInput_processAtPoint(CompositeRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point) {
        ScrollSelectionForm* scrollSelectionForm = RTSPlayerLayerInterface_getCurrentScrollSelectionForm(rtsPlayerLayerInterface);
        int32_t index = ScrollSelectionForm_getSelectedIndexForPoint(scrollSelectionForm, point);
        if (CompositeRTSFormInput_isStickyItemSelected(this) && associatedRtsLayer == CollidableDestroyableDamageableLayer_getNullInstance()) {
            if (CompositeRTSFormInput_getSelectedStickyItemIndex(this) <= this->itemIndex[0]) {
                JAVA_CALL(this->rtsFormInputArray[0], processAtPoint, associatedRtsLayer, rtsPlayerLayerInterface, layerManager, point);
            }
        } else if (index > this->itemIndex[0]) {
            JAVA_CALL(this->rtsFormInputArray[1], processAtPoint, associatedRtsLayer, rtsPlayerLayerInterface, layerManager, point);
        }
}


// throws Exception
void CompositeRTSFormInput_processGameSpecific(CompositeRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_CALL(this->logUtil, putF, java_concat(java_concat(java_string_of(CommonLabels_getInstance()->INDEX_LABEL + index), " > "), java_string_of(this->itemIndex[0])), this, commonStrings->PROCESS);
        if (CompositeRTSFormInput_isStickyItemSelected(this) && associatedRtsLayer == CollidableDestroyableDamageableLayer_getNullInstance()) {
            if (CompositeRTSFormInput_getSelectedStickyItemIndex(this) <= this->itemIndex[0]) {
                JAVA_CALL(this->rtsFormInputArray[0], processGameSpecific, associatedRtsLayer, rtsPlayerLayerInterface, layerManager, item, index);
            }
        } else if (index > this->itemIndex[0]) {
            JAVA_CALL(this->rtsFormInputArray[1], processGameSpecific, associatedRtsLayer, rtsPlayerLayerInterface, layerManager, item, index);
        }
}


// throws Exception
bool CompositeRTSFormInput_processSticky(CompositeRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point) {
        return JAVA_CALL(this->rtsFormInputArray[0], processSticky, associatedRtsLayer, rtsPlayerLayerInterface, layerManager, point);
}


// throws Exception
void CompositeRTSFormInput_processStickyGameSpecific(CompositeRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index) {
        JAVA_CALL(this->rtsFormInputArray[0], processStickyGameSpecific, associatedRtsLayer, rtsPlayerLayerInterface, layerManager, item, index);
}


int32_t CompositeRTSFormInput_getSelectedStickyItemIndex(CompositeRTSFormInput* this) {
        return JAVA_CALL(this->rtsFormInputArray[0], getSelectedStickyItemIndex);
}


bool CompositeRTSFormInput_isStickyItemSelected(CompositeRTSFormInput* this) {
        return JAVA_CALL(this->rtsFormInputArray[0], isStickyItemSelected);
}


void CompositeRTSFormInput_setStickyItemSelected(CompositeRTSFormInput* this, bool stickyItemSelected) {
        JAVA_CALL(this->rtsFormInputArray[0], setStickyItemSelected, stickyItemSelected);
}


ABCustomItem* CompositeRTSFormInput_getSelectedStickyItem(CompositeRTSFormInput* this) {
        return JAVA_CALL(this->rtsFormInputArray[0], getSelectedStickyItem);
}


void CompositeRTSFormInput_setSelectedStickyItem(CompositeRTSFormInput* this, ABCustomItem* selectedStickyItem) {
        JAVA_CALL(this->rtsFormInputArray[0], setSelectedStickyItem, selectedStickyItem);
}

