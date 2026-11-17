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
// package org.allbinary.game.input.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/identification/GroupCommonFactory.h"
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/item/LayerInterfaceFactoryImageItem.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/direction/DirectionFactory.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/LayerInterfaceFactoryInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct RTSFormInput RTSFormInput;
struct RTSFormInput {
    LogUtil* logUtil;
    GroupCommonFactory* groupCommonFactory;
    ABHashtable* hashtable;
    CollidableDestroyableDamageableLayer** newUnconstructedRTSLayerInterfaceArray;
    Group** groupInterfaceArray;
    GeographicMapCellPosition* selectedGeographicCellPosition;
    bool stickyItemSelected;
    int32_t selectedStickyItemIndex;
    ABCustomItem* selectedStickyItem;
};


RTSFormInput* RTSFormInput_new(Group** groupInterfaceArray);

void RTSFormInput_init(RTSFormInput* this, Group** groupInterfaceArray);
void RTSFormInput_setAllBinaryGameLayerManager(RTSFormInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
void RTSFormInput_processAtPoint(RTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point);
void RTSFormInput_process(RTSFormInput* this, AllBinaryLayerManager* layerManager);
void RTSFormInput_processGameSpecific(RTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index);
bool RTSFormInput_processSticky(RTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point);
void RTSFormInput_processStickyGameSpecific(RTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index);
ABCustomItem* RTSFormInput_getItemAt(RTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, GPoint* point);
int32_t RTSFormInput_getIndexAt(RTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, GPoint* point);
CollidableDestroyableDamageableLayer* RTSFormInput_getInstance(RTSFormInput* this, AllBinaryLayerManager* layerManager, ABCustomItem* aItem, GeographicMapCellPosition* geographicMapCellPosition);
GeographicMapCellPosition* RTSFormInput_getSelectedGeographicCellPosition(RTSFormInput* this);
void RTSFormInput_setSelectedGeographicCellPosition(RTSFormInput* this, GeographicMapCellPosition* selectedGeographicCellPosition);
bool RTSFormInput_isStickyItemSelected(RTSFormInput* this);
void RTSFormInput_setStickyItemSelected(RTSFormInput* this, bool stickyItemSelected);
ABCustomItem* RTSFormInput_getSelectedStickyItem(RTSFormInput* this);
void RTSFormInput_setSelectedStickyItem(RTSFormInput* this, ABCustomItem* selectedStickyItem);
int32_t RTSFormInput_getSelectedStickyItemIndex(RTSFormInput* this);
void RTSFormInput_setSelectedStickyItemIndex(RTSFormInput* this, int32_t selectedStickyItemIndex);
ABHashtable* RTSFormInput_getHashtable(RTSFormInput* this);

static void RTSFormInput_initFields(RTSFormInput* this) {
    this->logUtil = LogUtil_getInstance();
    this->groupCommonFactory = GroupCommonFactory_getInstance();
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
    this->newUnconstructedRTSLayerInterfaceArray = ((CollidableDestroyableDamageableLayer**) java_array_new(sizeof(CollidableDestroyableDamageableLayer*), 7));
    
    this->selectedGeographicCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    this->stickyItemSelected = false;
    this->selectedStickyItemIndex = 0;
    this->selectedStickyItem = ABCustomItem_getNullInstance();
}


void RTSFormInput_init(RTSFormInput* this, Group** groupInterfaceArray) {
    RTSFormInput_initFields(this);
        int32_t size = java_array_length(this->newUnconstructedRTSLayerInterfaceArray);
        for (int32_t index = 0; index < size; index++) {
            this->newUnconstructedRTSLayerInterfaceArray[index] = CollidableDestroyableDamageableLayer_getNullInstance();
        }
        this->groupInterfaceArray = groupInterfaceArray;
        ABHashtable_put(this->hashtable, DirectionFactory_getInstance()->NAME, DirectionFactory_getInstance()->DOWN);
        if (groupInterfaceArray != nullptr) {
            ABHashtable_put(this->hashtable, this->groupCommonFactory->ID, groupInterfaceArray);
        }
}

RTSFormInput* RTSFormInput_new(Group** groupInterfaceArray) {
    RTSFormInput* this = calloc(1, sizeof(RTSFormInput));
    RTSFormInput_init(this, groupInterfaceArray);
    return this;
}


// throws Exception
void RTSFormInput_setAllBinaryGameLayerManager(RTSFormInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
}


// throws Exception
void RTSFormInput_processAtPoint(RTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point) {
        int32_t index = RTSFormInput_getIndexAt(this, rtsPlayerLayerInterface, point);
        if (index < 0) {
            return;
        }
        ScrollSelectionForm* scrollSelectionForm = RTSPlayerLayerInterface_getCurrentScrollSelectionForm(rtsPlayerLayerInterface);
        ABCustomItem* item = ScrollSelectionForm_get(scrollSelectionForm, index);
        if (item == nullptr) {
            return;
        }
        RTSFormInput_processGameSpecific(this, associatedRtsLayer, rtsPlayerLayerInterface, layerManager, item, index);
}


// throws Exception
void RTSFormInput_process(RTSFormInput* this, AllBinaryLayerManager* layerManager) {
        RTSFormInput_setAllBinaryGameLayerManager(this, ((AllBinaryGameLayerManager*) layerManager));
}


// throws Exception
void RTSFormInput_processGameSpecific(RTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index) {
}


// throws Exception
bool RTSFormInput_processSticky(RTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point) {
        int32_t index = RTSFormInput_getIndexAt(this, rtsPlayerLayerInterface, point);
        if (index < 0) {
            return false;
        }
        ScrollSelectionForm* scrollSelectionForm = RTSPlayerLayerInterface_getCurrentScrollSelectionForm(rtsPlayerLayerInterface);
        ABCustomItem* item = ScrollSelectionForm_get(scrollSelectionForm, index);
        if (item == nullptr) {
            return false;
        }
        RTSFormInput_processStickyGameSpecific(this, associatedRtsLayer, rtsPlayerLayerInterface, layerManager, item, index);
        return true;
}


// throws Exception
void RTSFormInput_processStickyGameSpecific(RTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index) {
}


// throws Exception
ABCustomItem* RTSFormInput_getItemAt(RTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, GPoint* point) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Point: "), append, StringUtil_toString(StringUtil_getInstance(), point)), toString), this, "getItemAt");
        ScrollSelectionForm* scrollSelectionForm = RTSPlayerLayerInterface_getCurrentScrollSelectionForm(rtsPlayerLayerInterface);
        return ScrollSelectionForm_getSelectedItem(scrollSelectionForm, point);
}


// throws Exception
int32_t RTSFormInput_getIndexAt(RTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, GPoint* point) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Point: "), append, StringUtil_toString(StringUtil_getInstance(), point)), toString), this, "getItemAt");
        ScrollSelectionForm* scrollSelectionForm = RTSPlayerLayerInterface_getCurrentScrollSelectionForm(rtsPlayerLayerInterface);
        return ScrollSelectionForm_getSelectedIndexForPoint(scrollSelectionForm, point);
}


// throws Exception
CollidableDestroyableDamageableLayer* RTSFormInput_getInstance(RTSFormInput* this, AllBinaryLayerManager* layerManager, ABCustomItem* aItem, GeographicMapCellPosition* geographicMapCellPosition) {
        LayerInterfaceFactoryImageItem* item = ((LayerInterfaceFactoryImageItem*) aItem);
        LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface = ABCustomItem_getLayerInterfaceFactoryInterface(item);
        GPoint* cellPoint = GeographicMapCellPosition_getPoint(geographicMapCellPosition);
        if (layerInterfaceFactoryInterface != nullptr) {
            ABHashtable_put(this->hashtable, AllBinaryGameLayerManager_ID, layerManager);
            return ((RTSLayer*) LayerInterfaceFactoryInterface_getNextInstance(layerInterfaceFactoryInterface, RTSFormInput_getHashtable(this), GPoint_getX(cellPoint), GPoint_getY(cellPoint), GPoint_getZ(cellPoint)));
        }
        return CollidableDestroyableDamageableLayer_getNullInstance();
}


GeographicMapCellPosition* RTSFormInput_getSelectedGeographicCellPosition(RTSFormInput* this) {
        return this->selectedGeographicCellPosition;
}


void RTSFormInput_setSelectedGeographicCellPosition(RTSFormInput* this, GeographicMapCellPosition* selectedGeographicCellPosition) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Selected GeographicMapCellPosition: "), append, GeographicMapCellPosition_toString(selectedGeographicCellPosition)), toString), this, "setSelectedGeographicCellPosition");
        this->selectedGeographicCellPosition = selectedGeographicCellPosition;
}


bool RTSFormInput_isStickyItemSelected(RTSFormInput* this) {
        return this->stickyItemSelected;
}


void RTSFormInput_setStickyItemSelected(RTSFormInput* this, bool stickyItemSelected) {
        this->stickyItemSelected = stickyItemSelected;
}


ABCustomItem* RTSFormInput_getSelectedStickyItem(RTSFormInput* this) {
        return this->selectedStickyItem;
}


void RTSFormInput_setSelectedStickyItem(RTSFormInput* this, ABCustomItem* selectedStickyItem) {
        this->selectedStickyItem = selectedStickyItem;
}


int32_t RTSFormInput_getSelectedStickyItemIndex(RTSFormInput* this) {
        return this->selectedStickyItemIndex;
}


void RTSFormInput_setSelectedStickyItemIndex(RTSFormInput* this, int32_t selectedStickyItemIndex) {
        this->selectedStickyItemIndex = selectedStickyItemIndex;
}


ABHashtable* RTSFormInput_getHashtable(RTSFormInput* this) {
        return this->hashtable;
}

