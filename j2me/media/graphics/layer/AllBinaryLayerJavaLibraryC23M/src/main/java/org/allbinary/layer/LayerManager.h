#ifndef ORG_ALLBINARY_LAYER_LAYERMANAGER_H
#define ORG_ALLBINARY_LAYER_LAYERMANAGER_H
// Generated Code Do Not Modify
// package org.allbinary.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct LayerManagerLoggingBase LayerManagerLoggingBase;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct Layer Layer;
typedef struct Graphics Graphics;
typedef struct TsUtil TsUtil;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
typedef struct SynchObject SynchObject;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
typedef struct ABSystemWrapper ABSystemWrapper;
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/thread/SynchObject.h")
#include "org/allbinary/thread/SynchObject.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/logic/ABSystemWrapper.h")
#include "org/allbinary/logic/ABSystemWrapper.h"
#endif
#if __has_include("org/allbinary/layer/LayerManagerLoggingBase.h")
#include "org/allbinary/layer/LayerManagerLoggingBase.h"
#endif

typedef struct LayerManager LayerManager;
struct LayerManager {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ABSystemWrapper* systemWrapper;
    TsUtil* tsUtil;
    LayerManagerLoggingBase* layerManagerLogging;
    BasicArrayList* list;
    SynchObject* anyType;
};


LayerManager* LayerManager_new(LayerManagerLoggingBase* layerManagerLogging);

void LayerManager_init(LayerManager* this, LayerManagerLoggingBase* layerManagerLogging);

bool LayerManager_contains(LayerManager* this, AllBinaryLayer* layerInterface);

void LayerManager_update(LayerManager* this, AllBinaryLayer* layerInterface);

void LayerManager_insert(LayerManager* this, AllBinaryLayer* layerInterface);

void LayerManager_append(LayerManager* this, AllBinaryLayer* layerInterface);

void LayerManager_appendAt(LayerManager* this, AllBinaryLayer* layerInterface, int32_t index);

void LayerManager_remove(LayerManager* this, AllBinaryLayer* layerInterface);

Layer* LayerManager_getLayerAt(LayerManager* this, int32_t index);

int32_t LayerManager_getSize(LayerManager* this);

void LayerManager_cleanup(LayerManager* this);

void LayerManager_paint(LayerManager* this, Graphics* g, int32_t x, int32_t y);
#define LayerManager_new1 LayerManager_new
#define LayerManager_init1 LayerManager_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerManager_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LayerManager_register(void);


#endif // ORG_ALLBINARY_LAYER_LAYERMANAGER_H
