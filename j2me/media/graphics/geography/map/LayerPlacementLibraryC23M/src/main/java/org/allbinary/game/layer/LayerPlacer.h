#ifndef ORG_ALLBINARY_GAME_LAYER_LAYERPLACER_H
#define ORG_ALLBINARY_GAME_LAYER_LAYERPLACER_H
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
typedef struct LayerPlacementInterface LayerPlacementInterface;
typedef struct LayerPlacementType LayerPlacementType;
typedef struct LayerPlacementTypeFactory LayerPlacementTypeFactory;
typedef struct GPoint GPoint;
typedef struct PointFactory PointFactory;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct LayerInterfaceFactory LayerInterfaceFactory;
typedef struct LayerInterfaceVisitor LayerInterfaceVisitor;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
typedef struct EnumerationUtil EnumerationUtil;
#include "java/util/Enumeration.h"
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif
#if __has_include("org/allbinary/layer/LayerInterfaceVisitor.h")
#include "org/allbinary/layer/LayerInterfaceVisitor.h"
#endif
#if __has_include("org/allbinary/util/EnumerationUtil.h")
#include "org/allbinary/util/EnumerationUtil.h"
#endif

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
#define LayerPlacer_new2 LayerPlacer_new
#define LayerPlacer_init2 LayerPlacer_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerPlacer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LayerPlacer_register(void);

#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_LAYERPLACER_H
