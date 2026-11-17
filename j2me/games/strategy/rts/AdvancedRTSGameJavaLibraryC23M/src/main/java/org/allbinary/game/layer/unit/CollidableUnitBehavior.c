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
// package org.allbinary.game.layer.unit

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/layer/SteeringVisitor.h"
#include "org/allbinary/game/layer/AdvancedRTSGameLayer.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/game/layer/CollidableRTSBehavior.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/game/layer/TiledLayerUtil.h"
#include "org/allbinary/game/layer/geographic/map/LayerPartialCellPositionsUtil.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct CollidableUnitBehavior CollidableUnitBehavior;
struct CollidableUnitBehavior {
    CollidableRTSBehavior base;
    LayerPartialCellPositionsUtil* layerPartialCellPositionsUtil;
    SimpleSteeringVisitor* simpleSteeringVisitor;
};


CollidableUnitBehavior* CollidableUnitBehavior_new(bool collidable);

void CollidableUnitBehavior_init(CollidableUnitBehavior* this, bool collidable);
void CollidableUnitBehavior_collideNone(CollidableUnitBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);
static bool CollidableUnitBehavior_steer(CollidableUnitBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);
static void CollidableUnitBehavior_chase(CollidableUnitBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);
void CollidableUnitBehavior_collideUnit(CollidableUnitBehavior* this, CollidableCompositeLayer* ownerLayer, UnitLayer* unitLayer);

static void CollidableUnitBehavior_initFields(CollidableUnitBehavior* this) {
    this->layerPartialCellPositionsUtil = LayerPartialCellPositionsUtil_getInstance();
    this->simpleSteeringVisitor = SimpleSteeringVisitor_new();
}


void CollidableUnitBehavior_init(CollidableUnitBehavior* this, bool collidable) {
        CollidableRTSBehavior_init(&this->base, collidable);
        CollidableUnitBehavior_initFields(this);
}

CollidableUnitBehavior* CollidableUnitBehavior_new(bool collidable) {
    CollidableUnitBehavior* this = calloc(1, sizeof(CollidableUnitBehavior));
    CollidableUnitBehavior_init(this, collidable);
    return this;
}


// throws Exception
void CollidableUnitBehavior_collideNone(CollidableUnitBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) {
        CollidableUnitBehavior_chase(this, ownerLayer, collidableInterfaceCompositeInterface);
        AdvancedRTSGameLayer* rtsLayer = ((AdvancedRTSGameLayer*) collidableInterfaceCompositeInterface);
        if (AdvancedRTSGameLayer_getType(rtsLayer) == UnitLayer_getStaticType()) {
            CollidableUnitBehavior_collideUnit(this, ownerLayer, ((UnitLayer*) rtsLayer));
        }
}


// throws Exception
static bool CollidableUnitBehavior_steer(CollidableUnitBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) {
        UnitLayer* ownerUnitLayer = ((UnitLayer*) ownerLayer);
        UnitLayer* unitLayer = ((UnitLayer*) collidableInterfaceCompositeInterface);
        AngleInfo* angleInfo2 = JAVA_CALL(UnitLayer_getRotationAnimationInterface(unitLayer), getAngleInfoP);
        AngleInfo* angleInfo = JAVA_CALL(UnitLayer_getRotationAnimationInterface(ownerUnitLayer), getAngleInfoP);
        int32_t angle = AngleInfo_getAngle(angleInfo) - AngleInfo_getAngle(angleInfo2);
        if (angle < 90 || angle > 270) {
            return true;
        } else if (angle >= 90 || angle <= 270) {
            JAVA_CALL(UnitLayer_getGameKeyEventList(ownerUnitLayer), add, GameKeyEventFactory_getInstanceForKey(GameKeyEventFactory_getInstance(), ownerUnitLayer, Canvas_RIGHT));
            return false;
        }
        java_throw(java_exception_new("Exception", "Error"));
}


// throws Exception
static void CollidableUnitBehavior_chase(CollidableUnitBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) {
        AdvancedRTSGameLayer* rtsLayer = ((AdvancedRTSGameLayer*) collidableInterfaceCompositeInterface);
        if (AdvancedRTSGameLayer_getType(rtsLayer) == UnitLayer_getStaticType()) {
            if (!JAVA_CALL(SimpleSteeringVisitor_getList(this->simpleSteeringVisitor), contains, collidableInterfaceCompositeInterface)) {
                JAVA_CALL(SimpleSteeringVisitor_getList(this->simpleSteeringVisitor), add, collidableInterfaceCompositeInterface);
            }
            UnitLayer* ownerUnitLayer = ((UnitLayer*) ownerLayer);
            BasicArrayList* list = JAVA_CALL(UnitLayer_getUnitWaypointBehavior(ownerUnitLayer), getSteeringVisitorList);
            if (!BasicArrayList_contains(list, this->simpleSteeringVisitor)) {
                BasicArrayList_add(list, this->simpleSteeringVisitor);
            }
        }
}


// throws Exception
void CollidableUnitBehavior_collideUnit(CollidableUnitBehavior* this, CollidableCompositeLayer* ownerLayer, UnitLayer* unitLayer) {
        UnitLayer* ownerUnitLayer = ((UnitLayer*) ownerLayer);
        BasicArrayList* partialPositionList = UnitLayer_getPartialpositionlist();
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) ownerUnitLayer->allBinaryGameLayerManagerP);
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        BasicGeographicMap* basicGeographicMap = geographicMapInterface;
        DropCellPositionHistory* dropCellPositionHistory = DropCellPositionHistory_getInstance();
        TiledLayerUtil* tiledLayerUtil = TiledLayerUtil_getInstance();
        AllBinaryTiledLayer* tiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(basicGeographicMap);
        if (CollidableCompositeLayer_getXP(ownerLayer) < UnitLayer_getXP(unitLayer) && CollidableCompositeLayer_getX2(ownerLayer) > UnitLayer_getXP(unitLayer)) {
            int32_t diff = CollidableCompositeLayer_getWidth(ownerLayer) + 1;
            LayerPartialCellPositionsUtil_getAllDXY(this->layerPartialCellPositionsUtil, basicGeographicMap, ownerLayer, -diff, 0, partialPositionList);
            if (!DropCellPositionHistory_anyCellPositionWithDrop(dropCellPositionHistory, partialPositionList)) {
                int32_t x = UnitLayer_getXP(unitLayer) - diff;
                int32_t y = CollidableCompositeLayer_getYP(ownerLayer);
                x = TiledLayerUtil_keepOnMapX(tiledLayerUtil, tiledLayer, x, CollidableCompositeLayer_getWidth(ownerLayer));
                y = TiledLayerUtil_keepOnMapY(tiledLayerUtil, tiledLayer, y, CollidableCompositeLayer_getHeight(ownerLayer));
                CollidableCompositeLayer_setPosition(ownerLayer, x, y, CollidableCompositeLayer_getZP(ownerLayer));
            }
            LayerPartialCellPositionsUtil_getAllDXY(this->layerPartialCellPositionsUtil, basicGeographicMap, unitLayer, diff, 0, partialPositionList);
            if (!DropCellPositionHistory_anyCellPositionWithDrop(dropCellPositionHistory, partialPositionList)) {
                int32_t x = UnitLayer_getXP(unitLayer) + diff;
                int32_t y = UnitLayer_getYP(unitLayer);
                x = TiledLayerUtil_keepOnMapX(tiledLayerUtil, tiledLayer, x, UnitLayer_getWidth(unitLayer));
                y = TiledLayerUtil_keepOnMapY(tiledLayerUtil, tiledLayer, y, UnitLayer_getHeight(unitLayer));
                UnitLayer_setPosition(unitLayer, x, y, UnitLayer_getZP(unitLayer));
            }
        }
        if (CollidableCompositeLayer_getYP(ownerLayer) < UnitLayer_getYP(unitLayer) && CollidableCompositeLayer_getY2(ownerLayer) > UnitLayer_getYP(unitLayer)) {
            int32_t diff = CollidableCompositeLayer_getHeight(ownerLayer) + 1;
            LayerPartialCellPositionsUtil_getAllDXY(this->layerPartialCellPositionsUtil, basicGeographicMap, ownerLayer, 0, -diff, partialPositionList);
            if (!DropCellPositionHistory_anyCellPositionWithDrop(dropCellPositionHistory, partialPositionList)) {
                int32_t x = CollidableCompositeLayer_getXP(ownerLayer);
                int32_t y = UnitLayer_getYP(unitLayer) - diff;
                x = TiledLayerUtil_keepOnMapX(tiledLayerUtil, tiledLayer, x, CollidableCompositeLayer_getWidth(ownerLayer));
                y = TiledLayerUtil_keepOnMapY(tiledLayerUtil, tiledLayer, y, CollidableCompositeLayer_getHeight(ownerLayer));
                CollidableCompositeLayer_setPosition(ownerLayer, x, y, CollidableCompositeLayer_getZP(ownerLayer));
            }
            LayerPartialCellPositionsUtil_getAllDXY(this->layerPartialCellPositionsUtil, basicGeographicMap, unitLayer, 0, diff, partialPositionList);
            if (!DropCellPositionHistory_anyCellPositionWithDrop(dropCellPositionHistory, partialPositionList)) {
                int32_t x = UnitLayer_getXP(unitLayer);
                int32_t y = UnitLayer_getYP(unitLayer) + diff;
                x = TiledLayerUtil_keepOnMapX(tiledLayerUtil, tiledLayer, x, UnitLayer_getWidth(unitLayer));
                y = TiledLayerUtil_keepOnMapY(tiledLayerUtil, tiledLayer, y, UnitLayer_getHeight(unitLayer));
                UnitLayer_setPosition(unitLayer, x, y, UnitLayer_getZP(unitLayer));
            }
        }
}

typedef struct SimpleSteeringVisitor SimpleSteeringVisitor;
struct SimpleSteeringVisitor {
    SteeringVisitor base;
};


SimpleSteeringVisitor* SimpleSteeringVisitor_new(void);
    Any* CollidableUnitBehavior_visit(CollidableUnitBehavior* this, Any* anyType);

void SimpleSteeringVisitor_init(SimpleSteeringVisitor* this) {
    SteeringVisitor_init(&this->base);
}

SimpleSteeringVisitor* SimpleSteeringVisitor_new(void) {
    SimpleSteeringVisitor* this = calloc(1, sizeof(SimpleSteeringVisitor));
    SimpleSteeringVisitor_init(this);
    return this;
}
    

    Any* CollidableUnitBehavior_visit(CollidableUnitBehavior* this, Any* anyType) {
            LogUtil* logUtil = LogUtil_getInstance();
            JAVA_TRY {
                CollidableCompositeLayer* ownerLayer = ((CollidableCompositeLayer*) anyType);
                if (JAVA_CALL(CollidableUnitBehavior_getList(this), size) > 0) {
                    CollidableCompositeLayer* allbinaryLayer = ((CollidableCompositeLayer*) JAVA_CALL(CollidableUnitBehavior_getList(this), get, 0));
                    bool clear = CollidableUnitBehavior_steer(this, ownerLayer, allbinaryLayer);
                    if (clear) {
                        JAVA_CALL(CollidableUnitBehavior_getList(this), clear);
                        return NullUtil_getInstance()->NULL_OBJECT;
                    }
                    return BooleanFactory_getInstance()->TRUE;
                }
                return NullUtil_getInstance()->NULL_OBJECT;
            } JAVA_CATCH(Exception, e) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(logUtil, commonStrings->EXCEPTION, this, "visit", e);
                return NullUtil_getInstance()->NULL_OBJECT;
            } JAVA_END_TRY;
    }

