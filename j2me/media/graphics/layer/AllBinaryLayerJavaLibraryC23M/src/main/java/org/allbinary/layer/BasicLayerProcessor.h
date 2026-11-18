#ifndef ORG_ALLBINARY_LAYER_BASICLAYERPROCESSOR_H
#define ORG_ALLBINARY_LAYER_BASICLAYERPROCESSOR_H
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
// package org.allbinary.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct BasicLayerProcessor BasicLayerProcessor;
struct BasicLayerProcessor {
    LogUtil* logUtil;
    BasicArrayList* list;
};

extern BasicLayerProcessor* BasicLayerProcessor_NULL_LAYER_PROCESSOR;

BasicLayerProcessor* BasicLayerProcessor_new(void);

void BasicLayerProcessor_init(BasicLayerProcessor* this);

void BasicLayerProcessor_add(BasicLayerProcessor* this, AllBinaryLayer* layerInterface);

void BasicLayerProcessor_process(BasicLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager);

BasicArrayList* BasicLayerProcessor_getList(BasicLayerProcessor* this);
#define BasicLayerProcessor_new0 BasicLayerProcessor_new
#define BasicLayerProcessor_init0 BasicLayerProcessor_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicLayerProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicLayerProcessor_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_LAYER_BASICLAYERPROCESSOR_H
