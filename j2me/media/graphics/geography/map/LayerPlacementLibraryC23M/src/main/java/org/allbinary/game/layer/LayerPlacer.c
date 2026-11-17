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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Enumeration.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/LayerInterfaceFactory.h"
#include "org/allbinary/layer/LayerInterfaceVisitor.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/EnumerationUtil.h"

typedef struct LayerPlacer LayerPlacer;
struct LayerPlacer {
    EnumerationUtil* enumerationUtil;
    LayerInterfaceVisitor* layerInterfaceVisitor;
    GPoint* dimension;
};


LayerPlacer* LayerPlacer_new(LayerInterfaceVisitor* layerInterfaceVisitor, GPoint* dimension);

void LayerPlacer_init(LayerPlacer* this, LayerInterfaceVisitor* layerInterfaceVisitor, GPoint* dimension);
void LayerPlacer_processList(LayerPlacer* this, BasicArrayList* list);
void LayerPlacer_process(LayerPlacer* this, LayerPlacementInterface* layerPlacementInterface);
GPoint* LayerPlacer_getPoint(LayerPlacer* this, LayerPlacementInterface* layerPlacementInterface);

static void LayerPlacer_initFields(LayerPlacer* this) {
    this->enumerationUtil = EnumerationUtil_getInstance();
    
    
}


void LayerPlacer_init(LayerPlacer* this, LayerInterfaceVisitor* layerInterfaceVisitor, GPoint* dimension) {
    LayerPlacer_initFields(this);
        this->layerInterfaceVisitor = layerInterfaceVisitor;
        this->dimension = dimension;
}

LayerPlacer* LayerPlacer_new(LayerInterfaceVisitor* layerInterfaceVisitor, GPoint* dimension) {
    LayerPlacer* this = calloc(1, sizeof(LayerPlacer));
    LayerPlacer_init(this, layerInterfaceVisitor, dimension);
    return this;
}


// throws Exception
void LayerPlacer_processList(LayerPlacer* this, BasicArrayList* list) {
        int32_t size = BasicArrayList_size(list);
        LayerPlacementInterface* layerPlacementInterface = nullptr;
        for (int32_t index = 0; index < size; index++) {
            layerPlacementInterface = ((LayerPlacementInterface*) list->objectArray[index]);
            LayerPlacer_process(this, layerPlacementInterface);
        }
}


// throws Exception
void LayerPlacer_process(LayerPlacer* this, LayerPlacementInterface* layerPlacementInterface) {
        GPoint* relativePoint = LayerPlacer_getPoint(this, layerPlacementInterface);
        LayerInterfaceFactory* layerInterfaceFactory = LayerInterfaceFactory_getInstance();
        ABHashtable* hashtable = LayerPlacementInterface_getInstance(layerPlacementInterface);
        Enumeration* enumeration = ABHashtable_keys(hashtable);
        GPoint* point = nullptr;
        ABHashtable* layerHashtable = nullptr;
        int32_t x = 0;
        int32_t y = 0;
        int32_t z = 0;
        AllBinaryLayer* layerInterface = nullptr;
        while (EnumerationUtil_hasMoreElements(this->enumerationUtil, enumeration)) {
            point = ((GPoint*) EnumerationUtil_nextElement(this->enumerationUtil, enumeration));
            layerHashtable = ((ABHashtable*) ABHashtable_get(hashtable, point));
            x = GPoint_getX(point) + GPoint_getX(relativePoint);
            y = GPoint_getY(point) + GPoint_getY(relativePoint);
            z = GPoint_getZ(point) + GPoint_getZ(relativePoint);
            layerInterface = LayerInterfaceFactory_getNexInstance(layerInterfaceFactory, layerHashtable, x, y, z);
            LayerInterfaceVisitor_visit(this->layerInterfaceVisitor, layerInterface);
        }
}


// throws Exception
GPoint* LayerPlacer_getPoint(LayerPlacer* this, LayerPlacementInterface* layerPlacementInterface) {
        PointFactory* pointFactory = PointFactory_getInstance();
        LayerPlacementType* layerPlacementType = LayerPlacementInterface_getLayerType(layerPlacementInterface);
        if (layerPlacementType == LayerPlacementTypeFactory_getInstance()->MAP) {
            int32_t width = LayerPlacementInterface_getWidth(layerPlacementInterface);
            int32_t height = LayerPlacementInterface_getHeight(layerPlacementInterface);
            int32_t x = ((GPoint_getX(this->dimension) - width) / 2);
            int32_t y = ((GPoint_getY(this->dimension) - height) / 2);
            return PointFactory_createXY(pointFactory, x, y);
        } else if (layerPlacementType == LayerPlacementTypeFactory_getInstance()->UP) {
            int32_t width = LayerPlacementInterface_getWidth(layerPlacementInterface);
            int32_t height = LayerPlacementInterface_getHeight(layerPlacementInterface);
            int32_t x = ((GPoint_getX(this->dimension) - width) / 2);
            int32_t y = -height;
            return PointFactory_createXY(pointFactory, x, y);
        } else {
            java_throw(java_exception_new("Exception", "PlacementType Not Recognized"));
        }
}

