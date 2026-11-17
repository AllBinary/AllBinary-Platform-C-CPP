/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
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
// package org.allbinary.game.layer.geographic.map

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/animation/vector/CircleFilledAnimation.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/ColorCompositeInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEvent.h"
#include "org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEventHandler.h"
#include "org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEventListenerInterface.h"
#include "org/allbinary/view/ViewPositionBase.h"

typedef struct MiniMapLayer MiniMapLayer;
struct MiniMapLayer {
    AllBinaryLayer base;
    GeographicMapCellPositionEventListenerInterface GeographicMapCellPositionEventListenerInterface_interface;
    AllBinaryTiledLayer* allBinaryTiledLayer;
    BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory;
    BasicArrayList* list;
    BasicArrayList* basicColorList;
    BasicArrayList* positionList;
    CircleFilledAnimation* animationInterface;
};


MiniMapLayer* MiniMapLayer_new(BasicGeographicMap* geographicMapInterface, ViewPositionBase* viewPosition);

void MiniMapLayer_init(MiniMapLayer* this, BasicGeographicMap* geographicMapInterface, ViewPositionBase* viewPosition);
void MiniMapLayer_init(MiniMapLayer* this);
void MiniMapLayer_onEvent(MiniMapLayer* this, AllBinaryEventObject* eventObject);
void MiniMapLayer_onRemoveGeographicMapCellPositionEvent(MiniMapLayer* this, GeographicMapCellPositionEvent* geographicMapCellPositionEvent);
void MiniMapLayer_onGeographicMapCellPositionEvent(MiniMapLayer* this, GeographicMapCellPositionEvent* geographicMapCellPositionEvent);
void MiniMapLayer_paintDots(MiniMapLayer* this, Graphics* graphics);
void MiniMapLayer_paint(MiniMapLayer* this, Graphics* graphics);

static void MiniMapLayer_initFields(MiniMapLayer* this) {
    
    
    
    
    
    
}


void MiniMapLayer_init(MiniMapLayer* this, BasicGeographicMap* geographicMapInterface, ViewPositionBase* viewPosition) {
        AllBinaryLayer_init(&this->base, StringUtil_getInstance()->EMPTY_STRING, Rectangle_new(PointFactory_createXY(PointFactory_getInstance(), 0, ViewPositionBase_getY(viewPosition)), JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface), getWidth), JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface), getHeight)), viewPosition);
        MiniMapLayer_initFields(this);
        this->allBinaryTiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface);
        this->geographicMapCellPositionFactory = BasicGeographicMap_getGeographicMapCellPositionFactory(geographicMapInterface);
        this->animationInterface = CircleFilledAnimation_new(AllBinaryTiledLayer_getCellWidth(this->allBinaryTiledLayer), AllBinaryTiledLayer_getCellHeight(this->allBinaryTiledLayer), BasicColorFactory_getInstance()->WHITE);
        this->list = BasicArrayListD_new();
        this->basicColorList = BasicArrayListD_new();
        this->positionList = BasicArrayListD_new();
        GeographicMapCellPositionEventHandler_addListener(GeographicMapCellPositionEventHandler_getInstance(), this);
        MiniMapLayer_init(this);
}

MiniMapLayer* MiniMapLayer_new(BasicGeographicMap* geographicMapInterface, ViewPositionBase* viewPosition) {
    MiniMapLayer* this = calloc(1, sizeof(MiniMapLayer));
    MiniMapLayer_init(this, geographicMapInterface, viewPosition);
    return this;
}


// throws Exception
void MiniMapLayer_init(MiniMapLayer* this) {
        AllBinaryTiledLayer_setPosition(this->allBinaryTiledLayer, this->x, this->y, this->z);
}


void MiniMapLayer_onEvent(MiniMapLayer* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


// throws Exception
// synchronized
void MiniMapLayer_onRemoveGeographicMapCellPositionEvent(MiniMapLayer* this, GeographicMapCellPositionEvent* geographicMapCellPositionEvent) {
        ColorCompositeInterface* colorCompositeInterface = ((ColorCompositeInterface*) GeographicMapCellPositionEvent_getSource(geographicMapCellPositionEvent));
        int32_t index = BasicArrayList_indexOf(this->list, colorCompositeInterface);
        if (index >= 0) {
            BasicArrayList_removeAt(this->list, index);
            BasicArrayList_removeAt(this->basicColorList, index);
            BasicArrayList_removeAt(this->positionList, index);
        }
}


// throws Exception
// synchronized
void MiniMapLayer_onGeographicMapCellPositionEvent(MiniMapLayer* this, GeographicMapCellPositionEvent* geographicMapCellPositionEvent) {
        ColorCompositeInterface* colorCompositeInterface = ((ColorCompositeInterface*) GeographicMapCellPositionEvent_getSource(geographicMapCellPositionEvent));
        int32_t layerIndex = -1;
        int32_t size = BasicArrayList_size(this->list);
        ColorCompositeInterface* nextColorCompositeInterface = nullptr;
        for (int32_t index = 0; index < size; index++) {
            nextColorCompositeInterface = ((ColorCompositeInterface*) BasicArrayList_get(this->list, index));
            if (nextColorCompositeInterface == colorCompositeInterface) {
                layerIndex = index;
                break;
            }
        }
        GeographicMapCellPosition* geographicMapCellPosition = BasicGeographicMapCellPositionFactory_getInstance(this->geographicMapCellPositionFactory, GeographicMapCellPositionEvent_getGeographicMapCellPosition(geographicMapCellPositionEvent));
        GPoint* point = GeographicMapCellPosition_getPoint(geographicMapCellPosition);
        if (layerIndex == -1) {
            BasicArrayList_add(this->list, colorCompositeInterface);
            BasicColor* basicColor = ColorCompositeInterface_getBasicColorP(colorCompositeInterface);
            BasicArrayList_add(this->basicColorList, basicColor);
            BasicArrayList_add(this->positionList, point);
            layerIndex = BasicArrayList_size(this->basicColorList) - 1;
        } else {
            BasicArrayList_set(this->positionList, layerIndex, point);
        }
}


void MiniMapLayer_paintDots(MiniMapLayer* this, Graphics* graphics) {
        BasicArrayList* localPositionList = this->positionList;
        BasicArrayList* localBasicColorList = this->basicColorList;
        int32_t length = BasicArrayList_size(localPositionList);
        GPoint* point = nullptr;
        BasicColor* basicColor = nullptr;
        for (int32_t index = length; --index >= 0; ) {
            point = ((GPoint*) BasicArrayList_get(localPositionList, index));
            basicColor = ((BasicColor*) BasicArrayList_get(localBasicColorList, index));
            Graphics_setColor(graphics, BasicColor_intValue(basicColor));
            CircleFilledAnimation_setBasicColorP(this->animationInterface, basicColor);
            CircleFilledAnimation_paintXY(this->animationInterface, graphics, GPoint_getX(point) + this->x, GPoint_getY(point) + this->y);
        }
}


void MiniMapLayer_paint(MiniMapLayer* this, Graphics* graphics) {
        AllBinaryTiledLayer_paint(this->allBinaryTiledLayer, graphics);
        MiniMapLayer_paintDots(this, graphics);
}

