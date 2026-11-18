#ifndef ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_H
#define ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_H
// Generated Code Do Not Modify
// package org.allbinary.game.layer.drop

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif

typedef struct PlacedLayerFactory PlacedLayerFactory;
struct PlacedLayerFactory {
    BasicArrayList* list;
    BasicArrayListUtil* basicArrayListUtil;
};


PlacedLayerFactory* PlacedLayerFactory_new(void);

void PlacedLayerFactory_init(PlacedLayerFactory* this);

void PlacedLayerFactory_clear(PlacedLayerFactory* this);

PlacedLayerFactory* PlacedLayerFactory_getInstance(void);

int32_t PlacedLayerFactory_getSize(PlacedLayerFactory* this);

AllBinaryLayerFactoryInterface* PlacedLayerFactory_getRandomInstance(PlacedLayerFactory* this);

void PlacedLayerFactory_add(PlacedLayerFactory* this, AllBinaryLayerFactoryInterface* layerInterfaceFactoryInterface);
#define PlacedLayerFactory_new0 PlacedLayerFactory_new
#define PlacedLayerFactory_init0 PlacedLayerFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PlacedLayerFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PlacedLayerFactory_register(void);

#if __has_include("org/allbinary/layer/AllBinaryLayerFactoryInterface.h")
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_H
