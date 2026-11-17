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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/game/input/RTSPlayerGameInput.h"
#include "org/allbinary/game/layer/AdvancedRTSGameLayer.h"
#include "org/allbinary/game/layer/AdvancedRTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/RTSGameStrings.h"
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/RTSLayerEvent.h"
#include "org/allbinary/game/layer/RTSLayerUtil.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/capital/Capital.h"
#include "org/allbinary/game/layer/waypoint/WaypointCellPositionHistory.h"
#include "org/allbinary/game/layer/waypoint/WaypointLayer.h"
#include "org/allbinary/game/layer/waypoint/event/WaypointEventHandlerFactory.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h"
#include "org/allbinary/game/layer/NullPathFindingLayer.h"
#include "org/allbinary/game/layer/NullRTSLayer.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/Layer.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/media/audio/ErrorSound.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h"
#include "org/allbinary/game/input/form/RTSFormInput.h"

typedef struct WaypointRTSFormInput WaypointRTSFormInput;
struct WaypointRTSFormInput {
    RTSFormInput base;
    RTSLayerEvent* WAYPOINT_EVENT;
    GameNotificationEvent* dragToSpotGameNotificationEvent;
    GameNotificationEvent* spotTakenGameNotificationEvent;
    GameNotificationEvent* buildingCollisionGameNotificationEvent;
    GameNotificationEvent* roadCollisionGameNotificationEvent;
    GameNotificationEvent* newWaypointGameNotificationEvent;
    GameNotificationEvent* noMoneyGameNotificationEvent;
    bool isPrimaryWaypointCreator;
    PathFindingLayerInterface* stickyAssociatedRtsLayer;
};


WaypointRTSFormInput* WaypointRTSFormInput_new(Group** groupInterface, bool isPrimaryWaypointCreator);

void WaypointRTSFormInput_init(WaypointRTSFormInput* this, Group** groupInterface, bool isPrimaryWaypointCreator);
void WaypointRTSFormInput_setAllBinaryGameLayerManager(WaypointRTSFormInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
void WaypointRTSFormInput_processAtPoint(WaypointRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point);
static void WaypointRTSFormInput_processCellPosition(WaypointRTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GeographicMapCellPosition* geographicMapCellPosition);
void WaypointRTSFormInput_processStickyGameSpecific(WaypointRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index);
bool WaypointRTSFormInput_attemptBuild(WaypointRTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, RTSLayer* layerInterface, int32_t itemIndex);
static void WaypointRTSFormInput_addWayPoint(WaypointRTSFormInput* this, WaypointLayer* layerInterface);

static void WaypointRTSFormInput_initFields(WaypointRTSFormInput* this) {
    this->WAYPOINT_EVENT = RTSLayerEvent_new(NullRTSLayer_NULL_RTS_LAYER);
    
    
    
    
    
    
    
    this->stickyAssociatedRtsLayer = NullPathFindingLayer_NULL_PATH_FINDING_LAYER;
}


void WaypointRTSFormInput_init(WaypointRTSFormInput* this, Group** groupInterface, bool isPrimaryWaypointCreator) {
        RTSFormInput_init(&this->base, groupInterface);
        WaypointRTSFormInput_initFields(this);
        this->isPrimaryWaypointCreator = isPrimaryWaypointCreator;
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        BasicColorFactory* basicColorFactory = BasicColorFactory_getInstance();
        this->dragToSpotGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->DRAG_TO_SPOT, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->WHITE, BooleanFactory_getInstance()->FALSE);
        this->spotTakenGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->SPOT_TAKEN, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->WHITE, BooleanFactory_getInstance()->FALSE);
        this->buildingCollisionGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->BUILDING_COLLISION, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->WHITE, BooleanFactory_getInstance()->FALSE);
        this->roadCollisionGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->ROAD_COLLISION, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->WHITE, BooleanFactory_getInstance()->FALSE);
        this->newWaypointGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->NEW_WAYPOINT, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->WHITE, BooleanFactory_getInstance()->FALSE);
        this->noMoneyGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->NO_MONEY, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->WHITE, BooleanFactory_getInstance()->FALSE);
}

WaypointRTSFormInput* WaypointRTSFormInput_new(Group** groupInterface, bool isPrimaryWaypointCreator) {
    WaypointRTSFormInput* this = calloc(1, sizeof(WaypointRTSFormInput));
    WaypointRTSFormInput_init(this, groupInterface, isPrimaryWaypointCreator);
    return this;
}


// throws Exception
void WaypointRTSFormInput_setAllBinaryGameLayerManager(WaypointRTSFormInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        RTSFormInput_setAllBinaryGameLayerManager((&this->base), allBinaryGameLayerManager);
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) allBinaryGameLayerManager);
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        GameNotificationEvent_setBasicColorP(this->dragToSpotGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
        GameNotificationEvent_setBasicColorP(this->spotTakenGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
        GameNotificationEvent_setBasicColorP(this->buildingCollisionGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
        GameNotificationEvent_setBasicColorP(this->roadCollisionGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
        GameNotificationEvent_setBasicColorP(this->newWaypointGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
        GameNotificationEvent_setBasicColorP(this->noMoneyGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
}


// throws Exception
void WaypointRTSFormInput_processAtPoint(WaypointRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point) {
        RTSFormInput_process((&this->base), layerManager);
        if (WaypointRTSFormInput_isStickyItemSelected(this) || associatedRtsLayer == CollidableDestroyableDamageableLayer_getNullInstance()) {
            if (WaypointRTSFormInput_isStickyItemSelected(this) && associatedRtsLayer == CollidableDestroyableDamageableLayer_getNullInstance()) {
                GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) layerManager);
                BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
                AllBinaryTiledLayer* allBinaryTiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface);
                int32_t x = GPoint_getX(point) + AllBinaryTiledLayer_getXP(allBinaryTiledLayer);
                int32_t y = GPoint_getY(point) + AllBinaryTiledLayer_getYP(allBinaryTiledLayer);
                GeographicMapCellPosition* geographicMapCellPosition = BasicGeographicMap_getCellPositionAtXY(geographicMapInterface, x, y);
                WaypointRTSFormInput_processCellPosition(this, rtsPlayerLayerInterface, layerManager, geographicMapCellPosition);
            } else {
                if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(rtsPlayerLayerInterface)) {
                    GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->dragToSpotGameNotificationEvent);
                }
            }
        } else {
            if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(rtsPlayerLayerInterface)) {
                GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->spotTakenGameNotificationEvent);
            }
        }
}


// throws Exception
static void WaypointRTSFormInput_processCellPosition(WaypointRTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GeographicMapCellPosition* geographicMapCellPosition) {
        int32_t itemIndex = WaypointRTSFormInput_getSelectedStickyItemIndex(this);
        if (this->newUnconstructedRTSLayerInterfaceArray[itemIndex] == CollidableDestroyableDamageableLayer_getNullInstance()) {
            this->newUnconstructedRTSLayerInterfaceArray[itemIndex] = WaypointRTSFormInput_getInstance(this, layerManager, WaypointRTSFormInput_getSelectedStickyItem(this), geographicMapCellPosition);
        } else {
            GPoint* cellPoint = GeographicMapCellPosition_getPoint(geographicMapCellPosition);
            RTSLayer* rtsLayer = ((RTSLayer*) this->newUnconstructedRTSLayerInterfaceArray[itemIndex]);
            RTSLayer_setPosition(rtsLayer, GPoint_getX(cellPoint), GPoint_getY(cellPoint), RTSLayer_getZP(rtsLayer));
            GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) rtsLayer->allBinaryGameLayerManagerP);
            BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
            JAVA_CALL(rtsLayer->geographicMapCellPositionAreaBase, update, geographicMapInterface);
        }
        WaypointRTSFormInput_attemptBuild(this, rtsPlayerLayerInterface, layerManager, ((RTSLayer*) this->newUnconstructedRTSLayerInterfaceArray[itemIndex]), itemIndex);
}


// throws Exception
void WaypointRTSFormInput_processStickyGameSpecific(WaypointRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index) {
        JAVA_CALL(this->logUtil, putF, java_concat("Set Sticking Item: ", java_string_of(item)), this, "processSticky");
        WaypointRTSFormInput_setSelectedStickyItem(this, item);
        WaypointRTSFormInput_setSelectedStickyItemIndex(this, index);
        WaypointRTSFormInput_setStickyItemSelected(this, true);
        this->stickyAssociatedRtsLayer = ((RTSLayer*) associatedRtsLayer);
        JAVA_CALL(WaypointRTSFormInput_getHashtable(this), put, Layer_ID, associatedRtsLayer);
}


// throws Exception
bool WaypointRTSFormInput_attemptBuild(WaypointRTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, RTSLayer* layerInterface, int32_t itemIndex) {
        JAVA_CALL(this->logUtil, putF, java_concat("Layer: ", java_string_of(layerInterface)), this, "attemptBuild");
        if (layerInterface == nullptr) {
            JAVA_CALL(this->logUtil, put, "Layer was null", this, "attemptBuild", java_exception_new("Exception", ""));
            return false;
        }
        GeographicMapCellPositionAreaBase* geographicMapCellPositionArea = layerInterface->geographicMapCellPositionAreaBase;
        BasicArrayList* list = GeographicMapCellPositionAreaBase_getOccupyingGeographicMapCellPositionList(geographicMapCellPositionArea);
        if (DropCellPositionHistory_anyCellPositionWithDrop(DropCellPositionHistory_getInstance(), list) || WaypointCellPositionHistory_anyCellPositionWithDrop(WaypointCellPositionHistory_getInstance(), list)) {
            RTSPlayerLayerInterface_add(rtsPlayerLayerInterface, ErrorSound_getInstance());
            if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(rtsPlayerLayerInterface)) {
                GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->buildingCollisionGameNotificationEvent);
            }
            return false;
        }
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) layerManager);
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        RaceTrackGeographicMapCellTypeFactory* raceTrackGeographicMapCellTypeFactory = ((RaceTrackGeographicMapCellTypeFactory*) BasicGeographicMap_getGeographicMapCellTypeFactory(geographicMapInterface));
        GeographicMapCellType* geographicMapCellType = nullptr;
        for (int32_t index = BasicArrayList_size(list); --index >= 0; ) {
            geographicMapCellType = BasicGeographicMap_getCellTypeAt(geographicMapInterface, ((GeographicMapCellPosition*) BasicArrayList_get(list, index)));
            if (RaceTrackGeographicMapCellTypeFactory_isPath(raceTrackGeographicMapCellTypeFactory, geographicMapCellType)) {
                RTSPlayerLayerInterface_add(rtsPlayerLayerInterface, ErrorSound_getInstance());
                if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(rtsPlayerLayerInterface)) {
                    GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->roadCollisionGameNotificationEvent);
                }
                return false;
            }
        }
        int32_t cost = RTSLayer_getCost(layerInterface);
        Capital* capital = RTSPlayerLayerInterface_getCapital(rtsPlayerLayerInterface);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Trying to Build: ");
        StringMaker_append(stringBuffer, RTSLayer_getName(layerInterface));
        StringMaker_append(stringBuffer, " for: $");
        StringMaker_appendint(stringBuffer, cost);
        StringMaker_append(stringBuffer, " with ");
        StringMaker_appendint(stringBuffer, ((int32_t) Capital_getTotalMoney(capital)));
        JAVA_CALL(this->logUtil, putF, StringMaker_toString(stringBuffer), this, "attemptBuild");
        if (cost <= Capital_getTotalMoney(capital)) {
            RTSLayer_construct(layerInterface, rtsPlayerLayerInterface);
            this->newUnconstructedRTSLayerInterfaceArray[itemIndex] = CollidableDestroyableDamageableLayer_getNullInstance();
            Capital_removeMoney(capital, cost);
            WaypointCellPositionHistory_addList(WaypointCellPositionHistory_getInstance(), list, layerInterface);
            GeographicMapCellPosition* geographicMapCellPosition = BasicGeographicMap_getCellPositionAtXY(geographicMapInterface, RTSLayer_getXP(layerInterface), RTSLayer_getYP(layerInterface));
            WaypointLayer* waypointLayer = ((WaypointLayer*) layerInterface);
            WaypointRTSFormInput_addWayPoint(this, waypointLayer);
            RTSPlayerGameInput* rtsPlayerGameInput = ((RTSPlayerGameInput*) RTSPlayerLayerInterface_getPlayerGameInput(rtsPlayerLayerInterface));
            RTSPlayerGameInput_setSelectedRTSLayer(rtsPlayerGameInput, layerInterface, geographicMapCellPosition);
            AdvancedRTSPlayerLayerInterface* advancedRTSPlayerLayerInterface = ((AdvancedRTSPlayerLayerInterface*) rtsPlayerLayerInterface);
            JAVA_CALL(AdvancedRTSPlayerLayerInterface_getAdvancedPlayerOwnedRTSLayers(advancedRTSPlayerLayerInterface), addWaypoint, layerInterface);
            AllBinaryLayerManager_append(layerManager, layerInterface);
            AdvancedRTSGameLayer* waypointAvancedRTSGameLayer = ((AdvancedRTSGameLayer*) waypointLayer);
            RTSPlayerLayerInterface_add(rtsPlayerLayerInterface, JAVA_CALL(JAVA_CALL(AdvancedRTSGameLayer_getWaypointBehavior(waypointAvancedRTSGameLayer), getWaypoint), getSound));
            if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(rtsPlayerLayerInterface)) {
                GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->newWaypointGameNotificationEvent);
            }
            return true;
        } else {
            RTSPlayerLayerInterface_add(rtsPlayerLayerInterface, ErrorSound_getInstance());
            if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(rtsPlayerLayerInterface)) {
                GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->noMoneyGameNotificationEvent);
            }
            return false;
        }
}


// throws Exception
static void WaypointRTSFormInput_addWayPoint(WaypointRTSFormInput* this, WaypointLayer* layerInterface) {
        AdvancedRTSGameLayer* stickyAssociatedAdvandedRtsLayer = ((AdvancedRTSGameLayer*) this->stickyAssociatedRtsLayer);
        BasicArrayList* list = JAVA_CALL(AdvancedRTSGameLayer_getWaypointBehavior(stickyAssociatedAdvandedRtsLayer), getOwnedWaypointList);
        RTSLayerUtil_destroyAndClear(RTSLayerUtil_getInstance(), list);
        BasicArrayList_add(list, layerInterface);
        if (this->isPrimaryWaypointCreator) {
            PrimaryWaypointHelper_setWaypointLayer(PrimaryWaypointHelper_getInstance(), layerInterface);
        }
        RTSLayerEvent_setRtsLayer(this->WAYPOINT_EVENT, layerInterface);
        WaypointEventHandlerFactory_fireEvent(WaypointEventHandlerFactory_getInstance(RTSLayer_getGroupInterface(layerInterface)[0]), this->WAYPOINT_EVENT);
}

