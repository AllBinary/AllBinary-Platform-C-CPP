/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
 *  
 * By agreeing to this license you and any business entity you represent are 
 * legally bound to the AllBinary Open License Version 1 legal agreement. 
 *  
 * You may obtain the AllBinary Open License Version 1 legal agreement from 
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
 *  
 * Created By: Travis Berthelot  
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
#include "org/allbinary/game/layer/AdvancedPlayerOwnedRTSLayers.h"
#include "org/allbinary/game/layer/AdvancedRTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/RTSLayerEvent.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/building/event/BuildingEventHandler.h"
#include "org/allbinary/game/layer/building/event/LocalPlayerBuildingEventHandler.h"
#include "org/allbinary/game/layer/waypoint/WaypointCellPositionHistory.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/NullPathFindingLayer.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/media/audio/ErrorSound.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h"
#include "org/allbinary/game/input/form/BuildingRTSFormInput.h"

typedef struct BuildingAdvancedRTSFormInput BuildingAdvancedRTSFormInput;
struct BuildingAdvancedRTSFormInput {
    BuildingRTSFormInput base;
    GameNotificationEvent* atLeastOneHouseGameNotificationEvent;
    RTSLayerEvent* BUILD_BUILDING_RTS_LAYER_EVENT;
};


BuildingAdvancedRTSFormInput* BuildingAdvancedRTSFormInput_new(Group** groupInterface, bool isUnitProducer);

void BuildingAdvancedRTSFormInput_init(BuildingAdvancedRTSFormInput* this, Group** groupInterface, bool isUnitProducer);
void BuildingAdvancedRTSFormInput_setAllBinaryGameLayerManager(BuildingAdvancedRTSFormInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
bool BuildingAdvancedRTSFormInput_isPositionBlocked(BuildingAdvancedRTSFormInput* this);
bool BuildingAdvancedRTSFormInput_isBuildAttemptValid(BuildingAdvancedRTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, RTSLayer* layerInterface);
void BuildingAdvancedRTSFormInput_add(BuildingAdvancedRTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, RTSLayer* layerInterface);

static void BuildingAdvancedRTSFormInput_initFields(BuildingAdvancedRTSFormInput* this) {
    
    this->BUILD_BUILDING_RTS_LAYER_EVENT = RTSLayerEvent_new(NullPathFindingLayer_NULL_PATH_FINDING_LAYER);
}


void BuildingAdvancedRTSFormInput_init(BuildingAdvancedRTSFormInput* this, Group** groupInterface, bool isUnitProducer) {
        BuildingRTSFormInput_init(&this->base, groupInterface, isUnitProducer);
        BuildingAdvancedRTSFormInput_initFields(this);
        BasicColorFactory* basicColorFactory = BasicColorFactory_getInstance();
        this->atLeastOneHouseGameNotificationEvent = GameNotificationEvent_new(this, "Build At Least One House First", SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 2), basicColorFactory->WHITE, BooleanFactory_getInstance()->FALSE);
}

BuildingAdvancedRTSFormInput* BuildingAdvancedRTSFormInput_new(Group** groupInterface, bool isUnitProducer) {
    BuildingAdvancedRTSFormInput* this = calloc(1, sizeof(BuildingAdvancedRTSFormInput));
    BuildingAdvancedRTSFormInput_init(this, groupInterface, isUnitProducer);
    return this;
}


// throws Exception
void BuildingAdvancedRTSFormInput_setAllBinaryGameLayerManager(BuildingAdvancedRTSFormInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        BuildingRTSFormInput_setAllBinaryGameLayerManager((&this->base), allBinaryGameLayerManager);
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) allBinaryGameLayerManager);
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        GameNotificationEvent_setBasicColorP(this->atLeastOneHouseGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
}


bool BuildingAdvancedRTSFormInput_isPositionBlocked(BuildingAdvancedRTSFormInput* this) {
        if (DropCellPositionHistory_isCellPositionWithDrop(DropCellPositionHistory_getInstance(), BuildingAdvancedRTSFormInput_getSelectedGeographicCellPosition(this)) || WaypointCellPositionHistory_isCellPositionWithDrop(WaypointCellPositionHistory_getInstance(), BuildingAdvancedRTSFormInput_getSelectedGeographicCellPosition(this))) {
            return true;
        } else {
            return false;
        }
}


// throws Exception
bool BuildingAdvancedRTSFormInput_isBuildAttemptValid(BuildingAdvancedRTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, RTSLayer* layerInterface) {
        AdvancedRTSPlayerLayerInterface* advancedRTSPlayerLayerInterface = ((AdvancedRTSPlayerLayerInterface*) rtsPlayerLayerInterface);
        AdvancedPlayerOwnedRTSLayers* advancedPlayerOwnedRTSLayers = AdvancedRTSPlayerLayerInterface_getAdvancedPlayerOwnedRTSLayers(advancedRTSPlayerLayerInterface);
        int32_t totalHouses = JAVA_CALL(AdvancedPlayerOwnedRTSLayers_getHouseList(advancedPlayerOwnedRTSLayers), size);
        if (totalHouses < 1 && JAVA_CALL(RTSLayer_getName(layerInterface), indexOf, " House") < 0) {
            RTSPlayerLayerInterface_add(rtsPlayerLayerInterface, ErrorSound_getInstance());
            if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(rtsPlayerLayerInterface)) {
                GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->atLeastOneHouseGameNotificationEvent);
            }
            return false;
        }
        return BuildingRTSFormInput_isBuildAttemptValid((&this->base), rtsPlayerLayerInterface, layerInterface);
}


// throws Exception
void BuildingAdvancedRTSFormInput_add(BuildingAdvancedRTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, RTSLayer* layerInterface) {
        RTSLayerEvent_setRtsLayer(this->BUILD_BUILDING_RTS_LAYER_EVENT, layerInterface);
        BuildingEventHandler_fireEvent(BuildingEventHandler_getInstance(), this->BUILD_BUILDING_RTS_LAYER_EVENT);
        if (AdvancedRTSPlayerLayerInterface_isLocalPlayer((((AdvancedRTSPlayerLayerInterface*) rtsPlayerLayerInterface)))) {
            LocalPlayerBuildingEventHandler_fireEvent(LocalPlayerBuildingEventHandler_getInstance(), this->BUILD_BUILDING_RTS_LAYER_EVENT);
        }
        BuildingRTSFormInput_add((&this->base), rtsPlayerLayerInterface, layerManager, layerInterface);
}

