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
#include "org/allbinary/game/input/RTSPlayerGameInput.h"
#include "org/allbinary/game/layer/DemoLockedWithCostLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h"
#include "org/allbinary/game/layer/RTSGameStrings.h"
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/capital/Capital.h"
#include "org/allbinary/game/layer/item/LayerInterfaceFactoryImageItem.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/media/audio/BuildingSound.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/system/security/licensing/LockedFeatureNotificationUtil.h"
#include "org/allbinary/logic/system/security/licensing/LockedUtil.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/audio/ErrorSound.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h"
#include "org/allbinary/game/input/form/RTSFormInput.h"

typedef struct BuildingRTSFormInput BuildingRTSFormInput;
struct BuildingRTSFormInput {
    RTSFormInput base;
    bool isUnitProducer;
    GameNotificationEvent* buildOnPathGameNotificationEvent;
    GameNotificationEvent* spotTakenGameNotificationEvent;
    GameNotificationEvent* selectBuildSpotGameNotificationEvent;
    GameNotificationEvent* roadCollisionGameNotificationEvent;
    GameNotificationEvent* noMoneyGameNotificationEvent;
    GameNotificationEvent* buildingCollisionGameNotificationEvent;
    GameNotificationEvent* structureToCloseCollisionGameNotificationEvent;
    GameNotificationEvent* buildingGameNotificationEvent;
    GameNotificationEvent* mapEdgeGameNotificationEvent;
    DropCellPositionHistory* dropCellPositionHistory;
};


BuildingRTSFormInput* BuildingRTSFormInput_new(Group** groupInterface, bool isUnitProducer);

void BuildingRTSFormInput_init(BuildingRTSFormInput* this, Group** groupInterface, bool isUnitProducer);
void BuildingRTSFormInput_setAllBinaryGameLayerManager(BuildingRTSFormInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
void BuildingRTSFormInput_processGameSpecific(BuildingRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t itemIndex);
bool BuildingRTSFormInput_isPositionBlocked(BuildingRTSFormInput* this);
static bool BuildingRTSFormInput_isDemoLocked(BuildingRTSFormInput* this, ABCustomItem* item);
void BuildingRTSFormInput_buildFromMotionInput(BuildingRTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t itemIndex);
bool BuildingRTSFormInput_attemptBuild(BuildingRTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, RTSLayer* layerInterface, int32_t itemIndex);
bool BuildingRTSFormInput_isBuildAttemptValid(BuildingRTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, RTSLayer* layerInterface);
void BuildingRTSFormInput_add(BuildingRTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, RTSLayer* layerInterface);
static bool BuildingRTSFormInput_isSurroundingCellsOffMap(BuildingRTSFormInput* this, RTSLayer* layerInterface);

static void BuildingRTSFormInput_initFields(BuildingRTSFormInput* this) {
    
    
    
    
    
    
    
    
    
    
    this->dropCellPositionHistory = DropCellPositionHistory_getInstance();
}


void BuildingRTSFormInput_init(BuildingRTSFormInput* this, Group** groupInterface, bool isUnitProducer) {
        RTSFormInput_init(&this->base, groupInterface);
        BuildingRTSFormInput_initFields(this);
        this->isUnitProducer = isUnitProducer;
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        BasicColorFactory* basicColorFactory = BasicColorFactory_getInstance();
        this->buildOnPathGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->BUILD_ON_PATH, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->PINK, BooleanFactory_getInstance()->FALSE);
        this->spotTakenGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->SPOT_TAKEN, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->PINK, BooleanFactory_getInstance()->FALSE);
        this->selectBuildSpotGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->SELECT_BUILD_SPOT, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->PINK, BooleanFactory_getInstance()->FALSE);
        this->roadCollisionGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->ROAD_COLLISION, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->PINK, BooleanFactory_getInstance()->FALSE);
        this->noMoneyGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->NO_MONEY, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->PINK, BooleanFactory_getInstance()->FALSE);
        this->buildingCollisionGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->BUILDING_COLLISION, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->PINK, BooleanFactory_getInstance()->FALSE);
        this->structureToCloseCollisionGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->STRUCTURE_TO_CLOSE, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->PINK, BooleanFactory_getInstance()->FALSE);
        this->buildingGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->BUILDING, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->PINK, BooleanFactory_getInstance()->FALSE);
        this->mapEdgeGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->MAP_EDGE, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->PINK, BooleanFactory_getInstance()->FALSE);
}

BuildingRTSFormInput* BuildingRTSFormInput_new(Group** groupInterface, bool isUnitProducer) {
    BuildingRTSFormInput* this = calloc(1, sizeof(BuildingRTSFormInput));
    BuildingRTSFormInput_init(this, groupInterface, isUnitProducer);
    return this;
}


// throws Exception
void BuildingRTSFormInput_setAllBinaryGameLayerManager(BuildingRTSFormInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        RTSFormInput_setAllBinaryGameLayerManager((&this->base), allBinaryGameLayerManager);
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) allBinaryGameLayerManager);
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        GameNotificationEvent_setBasicColorP(this->buildOnPathGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
        GameNotificationEvent_setBasicColorP(this->spotTakenGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
        GameNotificationEvent_setBasicColorP(this->selectBuildSpotGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
        GameNotificationEvent_setBasicColorP(this->roadCollisionGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
        GameNotificationEvent_setBasicColorP(this->noMoneyGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
        GameNotificationEvent_setBasicColorP(this->buildingCollisionGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
        GameNotificationEvent_setBasicColorP(this->structureToCloseCollisionGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
        GameNotificationEvent_setBasicColorP(this->buildingGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
        GameNotificationEvent_setBasicColorP(this->mapEdgeGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
}


// throws Exception
void BuildingRTSFormInput_processGameSpecific(BuildingRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t itemIndex) {
        RTSFormInput_process((&this->base), layerManager);
        BuildingRTSFormInput_buildFromMotionInput(this, rtsPlayerLayerInterface, layerManager, item, itemIndex);
}


bool BuildingRTSFormInput_isPositionBlocked(BuildingRTSFormInput* this) {
        return DropCellPositionHistory_isCellPositionWithDrop(this->dropCellPositionHistory, BuildingRTSFormInput_getSelectedGeographicCellPosition(this));
}


static bool BuildingRTSFormInput_isDemoLocked(BuildingRTSFormInput* this, ABCustomItem* item) {
        LayerInterfaceFactoryImageItem* factoryItem = ((LayerInterfaceFactoryImageItem*) item);
        DemoLockedWithCostLayerInterfaceFactoryInterface* layerInterfaceFactoryInterface = ((DemoLockedWithCostLayerInterfaceFactoryInterface*) LayerInterfaceFactoryImageItem_getLayerInterfaceFactoryInterface(factoryItem));
        if (LockedUtil_isLocked(LockedUtil_getInstance()) && DemoLockedWithCostLayerInterfaceFactoryInterface_isDemoLocked(layerInterfaceFactoryInterface)) {
            return true;
        } else {
            return false;
        }
}


// throws Exception
void BuildingRTSFormInput_buildFromMotionInput(BuildingRTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t itemIndex) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_CALL(this->logUtil, putF, commonStrings->START, this, "buildFromMotionInput");
        if (layerManager == nullptr) {
            java_throw(java_exception_new("RuntimeException", ""));
        }
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) layerManager);
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        if (BuildingRTSFormInput_isDemoLocked(this, item)) {
            RTSPlayerLayerInterface_add(rtsPlayerLayerInterface, ErrorSound_getInstance());
            LockedFeatureNotificationUtil_fireWithColor(LockedFeatureNotificationUtil_getInstance(), BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
            return;
        }
        GeographicMapCellPosition* geographicMapCellPosition = BuildingRTSFormInput_getSelectedGeographicCellPosition(this);
        if (geographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            if (!BuildingRTSFormInput_isPositionBlocked(this)) {
                GeographicMapCellType* geographicMapCellType = BasicGeographicMap_getCellTypeAt(geographicMapInterface, geographicMapCellPosition);
                RaceTrackGeographicMapCellTypeFactory* raceTrackGeographicMapCellTypeFactory = ((RaceTrackGeographicMapCellTypeFactory*) BasicGeographicMap_getGeographicMapCellTypeFactory(geographicMapInterface));
                if (!RaceTrackGeographicMapCellTypeFactory_isPath(raceTrackGeographicMapCellTypeFactory, geographicMapCellType)) {
                    if (this->newUnconstructedRTSLayerInterfaceArray[itemIndex] == CollidableDestroyableDamageableLayer_getNullInstance()) {
                        this->newUnconstructedRTSLayerInterfaceArray[itemIndex] = BuildingRTSFormInput_getInstance(this, layerManager, item, geographicMapCellPosition);
                    } else {
                        RTSLayer* rtsLayer = ((RTSLayer*) this->newUnconstructedRTSLayerInterfaceArray[itemIndex]);
                        GPoint* cellPoint = GeographicMapCellPosition_getPoint(geographicMapCellPosition);
                        RTSLayer_setPosition(rtsLayer, GPoint_getX(cellPoint), GPoint_getY(cellPoint), GPoint_getZ(cellPoint));
                        JAVA_CALL(rtsLayer->geographicMapCellPositionAreaBase, update, geographicMapInterface);
                    }
                    RTSLayer* rtsLayer = ((RTSLayer*) this->newUnconstructedRTSLayerInterfaceArray[itemIndex]);
                    BuildingRTSFormInput_attemptBuild(this, rtsPlayerLayerInterface, layerManager, rtsLayer, itemIndex);
                } else {
                    RTSPlayerLayerInterface_add(rtsPlayerLayerInterface, ErrorSound_getInstance());
                    if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(rtsPlayerLayerInterface)) {
                        GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->buildOnPathGameNotificationEvent);
                    }
                }
            } else {
                RTSPlayerLayerInterface_add(rtsPlayerLayerInterface, ErrorSound_getInstance());
                if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(rtsPlayerLayerInterface)) {
                    GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->spotTakenGameNotificationEvent);
                }
            }
        } else {
            RTSPlayerLayerInterface_add(rtsPlayerLayerInterface, ErrorSound_getInstance());
            if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(rtsPlayerLayerInterface)) {
                GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->selectBuildSpotGameNotificationEvent);
            }
        }
}


// throws Exception
bool BuildingRTSFormInput_attemptBuild(BuildingRTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, RTSLayer* layerInterface, int32_t itemIndex) {
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Layer: "), append, StringUtil_toString(StringUtil_getInstance(), layerInterface)), toString), this, "attemptBuild");
        GeographicMapCellPositionAreaBase* geographicMapCellPositionArea = layerInterface->geographicMapCellPositionAreaBase;
        BasicArrayList* occupyList = GeographicMapCellPositionAreaBase_getOccupyingGeographicMapCellPositionList(geographicMapCellPositionArea);
        if (!BuildingRTSFormInput_isBuildAttemptValid(this, rtsPlayerLayerInterface, layerInterface)) {
            return false;
        }
        GeographicMapCellType* geographicMapCellType = nullptr;
        for (int32_t index = BasicArrayList_size(occupyList) - 1; index >= 0; index--) {
            GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) layerManager);
            BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
            geographicMapCellType = BasicGeographicMap_getCellTypeAt(geographicMapInterface, ((GeographicMapCellPosition*) BasicArrayList_get(occupyList, index)));
            RaceTrackGeographicMapCellTypeFactory* raceTrackGeographicMapCellTypeFactory = ((RaceTrackGeographicMapCellTypeFactory*) BasicGeographicMap_getGeographicMapCellTypeFactory(geographicMapInterface));
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
            BuildingRTSFormInput_add(this, rtsPlayerLayerInterface, layerManager, layerInterface);
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
bool BuildingRTSFormInput_isBuildAttemptValid(BuildingRTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, RTSLayer* layerInterface) {
        GeographicMapCellPositionAreaBase* geographicMapCellPositionArea = layerInterface->geographicMapCellPositionAreaBase;
        BasicArrayList* occupyList = GeographicMapCellPositionAreaBase_getOccupyingGeographicMapCellPositionList(geographicMapCellPositionArea);
        if (DropCellPositionHistory_anyCellPositionWithDrop(this->dropCellPositionHistory, occupyList)) {
            RTSPlayerLayerInterface_add(rtsPlayerLayerInterface, ErrorSound_getInstance());
            if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(rtsPlayerLayerInterface)) {
                GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->buildingCollisionGameNotificationEvent);
            }
            return false;
        }
        if (this->isUnitProducer && DropCellPositionHistory_anyCellPositionWithDrop(this->dropCellPositionHistory, GeographicMapCellPositionAreaBase_getSurroundingGeographicMapCellPositionList(geographicMapCellPositionArea))) {
            RTSPlayerLayerInterface_add(rtsPlayerLayerInterface, ErrorSound_getInstance());
            if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(rtsPlayerLayerInterface)) {
                GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->structureToCloseCollisionGameNotificationEvent);
            }
            return false;
        } else {
            if (BuildingRTSFormInput_isSurroundingCellsOffMap(this, layerInterface)) {
                RTSPlayerLayerInterface_add(rtsPlayerLayerInterface, ErrorSound_getInstance());
                if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(rtsPlayerLayerInterface)) {
                    GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->mapEdgeGameNotificationEvent);
                }
                return false;
            }
        }
        return true;
}


// throws Exception
void BuildingRTSFormInput_add(BuildingRTSFormInput* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, RTSLayer* layerInterface) {
        GeographicMapCellPositionAreaBase* geographicMapCellPositionArea = layerInterface->geographicMapCellPositionAreaBase;
        BasicArrayList* occupyList = GeographicMapCellPositionAreaBase_getOccupyingGeographicMapCellPositionList(geographicMapCellPositionArea);
        DropCellPositionHistory_addAll(this->dropCellPositionHistory, occupyList, layerInterface);
        RTSPlayerGameInput* rtsPlayerGameInput = ((RTSPlayerGameInput*) RTSPlayerLayerInterface_getPlayerGameInput(rtsPlayerLayerInterface));
        RTSPlayerGameInput_setSelectedRTSLayer(rtsPlayerGameInput, layerInterface, BuildingRTSFormInput_getSelectedGeographicCellPosition(this));
        AllBinaryLayerManager_append(layerManager, layerInterface);
        RTSPlayerLayerInterface_add(rtsPlayerLayerInterface, BuildingSound_getInstance());
        if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(rtsPlayerLayerInterface)) {
            GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->buildingGameNotificationEvent);
        }
}


static bool BuildingRTSFormInput_isSurroundingCellsOffMap(BuildingRTSFormInput* this, RTSLayer* layerInterface) {
        GeographicMapCellPositionAreaBase* geographicMapCellPositionArea = layerInterface->geographicMapCellPositionAreaBase;
        BasicArrayList* occupyList = GeographicMapCellPositionAreaBase_getOccupyingGeographicMapCellPositionList(geographicMapCellPositionArea);
        BasicArrayList* surroundList = GeographicMapCellPositionAreaBase_getSurroundingGeographicMapCellPositionList(geographicMapCellPositionArea);
        int32_t occupySize = BasicArrayList_size(occupyList);
        int32_t surroundSize = BasicArrayList_size(surroundList);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "occupySize: ");
        StringMaker_appendint(stringBuffer, occupySize);
        StringMaker_append(stringBuffer, " surroundSize: ");
        StringMaker_appendint(stringBuffer, surroundSize);
        StringMaker_append(stringBuffer, " surroundList: ");
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), surroundList));
        JAVA_CALL(this->logUtil, putF, StringMaker_toString(stringBuffer), this, "isSurroundingCellsOffMap");
        bool isSurroundOffMap = false;
        if (occupySize == 1 && surroundSize != 8) {
            isSurroundOffMap = true;
        } else if (occupySize == 4 && surroundSize != 12) {
            isSurroundOffMap = true;
        }
        if (occupySize == 0 || isSurroundOffMap) {
            return true;
        } else {
            return false;
        }
}

