#ifndef ORG_ALLBINARY_LAYER_LAYERINTERFACEFACTORY_H
#define ORG_ALLBINARY_LAYER_LAYERINTERFACEFACTORY_H
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
typedef struct Layer Layer;
typedef struct LayerInterfaceFactoryInterface LayerInterfaceFactoryInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "java/lang/Integer.h"

typedef struct LayerInterfaceFactory LayerInterfaceFactory;
struct LayerInterfaceFactory {
    LogUtil* logUtil;
    BasicArrayList* list;
    const char* HASHTABLE_LABEL;
};


LayerInterfaceFactory* LayerInterfaceFactory_new(void);
void LayerInterfaceFactory_init(LayerInterfaceFactory* this);

LayerInterfaceFactory* LayerInterfaceFactory_getInstance(void);

void LayerInterfaceFactory_initMethod(LayerInterfaceFactory* this);

AllBinaryLayer* LayerInterfaceFactory_getNexInstance(LayerInterfaceFactory* this, ABHashtable* hashtable, int32_t x, int32_t y, int32_t z);

void LayerInterfaceFactory_add(LayerInterfaceFactory* this, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LayerInterfaceFactory_register(void);


#endif // ORG_ALLBINARY_LAYER_LAYERINTERFACEFACTORY_H
