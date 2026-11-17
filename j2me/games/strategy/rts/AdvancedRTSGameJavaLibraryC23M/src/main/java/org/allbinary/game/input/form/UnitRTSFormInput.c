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
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/game/layer/AdvancedPlayerOwnedRTSLayers.h"
#include "org/allbinary/game/layer/AdvancedRTSGameLayer.h"
#include "org/allbinary/game/layer/AdvancedRTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/RTSGameStrings.h"
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/capital/Capital.h"
#include "org/allbinary/game/layer/unit/UnitLayer.h"
#include "org/allbinary/game/layer/waypoint/WorkWaypoint.h"
#include "org/allbinary/media/audio/BuildingSound.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h"
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
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/game/input/form/RTSFormInput.h"

typedef struct UnitRTSFormInput UnitRTSFormInput;
struct UnitRTSFormInput {
    RTSFormInput base;
    GameNotificationEvent* noMoneyGameNotificationEvent;
    GameNotificationEvent* newUnitGameNotificationEvent;
};

int32_t UnitRTSFormInput_DECAL_ID;

UnitRTSFormInput* UnitRTSFormInput_new(Group** groupInterface);

void UnitRTSFormInput_init(UnitRTSFormInput* this, Group** groupInterface);
void UnitRTSFormInput_setAllBinaryGameLayerManager(UnitRTSFormInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
void UnitRTSFormInput_processGameSpecific(UnitRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t itemIndex);
static void UnitRTSFormInput_attemptBuild(UnitRTSFormInput* this, RTSLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, RTSLayer* layerInterface, int32_t itemIndex);

// Static fields with runtime initializers: call this once at startup
void UnitRTSFormInput_staticInit(void) {
    UnitRTSFormInput_DECAL_ID = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 23);
}

static void UnitRTSFormInput_initFields(UnitRTSFormInput* this) {
    
    
}


void UnitRTSFormInput_init(UnitRTSFormInput* this, Group** groupInterface) {
        RTSFormInput_init(&this->base, groupInterface);
        UnitRTSFormInput_initFields(this);
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        BasicColorFactory* basicColorFactory = BasicColorFactory_getInstance();
        this->noMoneyGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->NO_MONEY, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->WHITE, BooleanFactory_getInstance()->FALSE);
        this->newUnitGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->NEW_UNIT, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->WHITE, BooleanFactory_getInstance()->FALSE);
        JAVA_CALL(UnitRTSFormInput_getHashtable(this), put, WorkWaypoint_ID, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 50));
}

UnitRTSFormInput* UnitRTSFormInput_new(Group** groupInterface) {
    UnitRTSFormInput* this = calloc(1, sizeof(UnitRTSFormInput));
    UnitRTSFormInput_init(this, groupInterface);
    return this;
}


// throws Exception
void UnitRTSFormInput_setAllBinaryGameLayerManager(UnitRTSFormInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        RTSFormInput_setAllBinaryGameLayerManager((&this->base), allBinaryGameLayerManager);
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) allBinaryGameLayerManager);
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        GameNotificationEvent_setBasicColorP(this->noMoneyGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
        GameNotificationEvent_setBasicColorP(this->newUnitGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
}


// throws Exception
void UnitRTSFormInput_processGameSpecific(UnitRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t itemIndex) {
        RTSFormInput_process((&this->base), layerManager);
        RTSLayer* associatedRtsLayer2 = ((RTSLayer*) associatedRtsLayer);
        GeographicMapCellPositionAreaBase* geographicMapCellPositionArea = associatedRtsLayer2->geographicMapCellPositionAreaBase;
        GeographicMapCellPosition* geographicMapCellPosition = GeographicMapCellPositionAreaBase_getNextSurroundingGeographicMapCellPosition(geographicMapCellPositionArea);
        JAVA_CALL(UnitRTSFormInput_getHashtable(this), put, Layer_ID, associatedRtsLayer);
        JAVA_CALL(UnitRTSFormInput_getHashtable(this), put, UnitRTSFormInput_DECAL_ID, AdvancedRTSPlayerLayerInterface_getDecalBasicColor((((AdvancedRTSPlayerLayerInterface*) rtsPlayerLayerInterface))));
        if (this->newUnconstructedRTSLayerInterfaceArray[itemIndex] == CollidableDestroyableDamageableLayer_getNullInstance()) {
            this->newUnconstructedRTSLayerInterfaceArray[itemIndex] = UnitRTSFormInput_getInstance(this, layerManager, item, geographicMapCellPosition);
        } else {
            GPoint* cellPoint = GeographicMapCellPosition_getPoint(geographicMapCellPosition);
            RTSLayer* rtsLayer = ((RTSLayer*) this->newUnconstructedRTSLayerInterfaceArray[itemIndex]);
            RTSLayer_setPosition(rtsLayer, GPoint_getX(cellPoint), GPoint_getY(cellPoint), RTSLayer_getZP(rtsLayer));
            GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) rtsLayer->allBinaryGameLayerManagerP);
            BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
            JAVA_CALL(rtsLayer->geographicMapCellPositionAreaBase, update, geographicMapInterface);
        }
        GPoint* cellPoint = GeographicMapCellPosition_getMidPoint(geographicMapCellPosition);
        RTSLayer* rtsLayer = ((RTSLayer*) this->newUnconstructedRTSLayerInterfaceArray[itemIndex]);
        RTSLayer_setPosition(rtsLayer, GPoint_getX(cellPoint) - RTSLayer_getHalfWidth(rtsLayer), GPoint_getY(cellPoint) - RTSLayer_getHalfHeight(rtsLayer), RTSLayer_getZP(rtsLayer));
        UnitRTSFormInput_attemptBuild(this, associatedRtsLayer2, rtsPlayerLayerInterface, layerManager, ((RTSLayer*) rtsLayer), itemIndex);
}


// throws Exception
static void UnitRTSFormInput_attemptBuild(UnitRTSFormInput* this, RTSLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, RTSLayer* layerInterface, int32_t itemIndex) {
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
            RTSPlayerLayerInterface_add(rtsPlayerLayerInterface, BuildingSound_getInstance());
            Capital_removeMoney(capital, cost);
            AssignWaypointsUtil_set(AssignWaypointsUtil_getInstance(), ((UnitLayer*) layerInterface), ((AdvancedRTSGameLayer*) associatedRtsLayer));
            AllBinaryLayerManager_appendAt(layerManager, layerInterface, PlayersSingletonFactory_total);
            AdvancedRTSPlayerLayerInterface* advancedRTSPlayerLayerInterface = ((AdvancedRTSPlayerLayerInterface*) rtsPlayerLayerInterface);
            AdvancedPlayerOwnedRTSLayers* advancedPlayerOwnedRTSLayers = AdvancedRTSPlayerLayerInterface_getAdvancedPlayerOwnedRTSLayers(advancedRTSPlayerLayerInterface);
            AdvancedPlayerOwnedRTSLayers_addUnit(advancedPlayerOwnedRTSLayers, layerInterface);
            if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(rtsPlayerLayerInterface)) {
                GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->newUnitGameNotificationEvent);
            }
        } else {
            RTSPlayerLayerInterface_add(rtsPlayerLayerInterface, ErrorSound_getInstance());
            if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(rtsPlayerLayerInterface)) {
                GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->noMoneyGameNotificationEvent);
            }
        }
}

