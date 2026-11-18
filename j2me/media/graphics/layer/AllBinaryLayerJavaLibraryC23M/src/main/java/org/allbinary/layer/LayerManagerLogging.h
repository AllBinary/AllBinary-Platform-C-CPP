#ifndef ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGING_H
#define ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGING_H
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
typedef struct LayerManagerLoggingBase LayerManagerLoggingBase;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct LayerManager LayerManager;
typedef struct TsUtil TsUtil;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonSeps CommonSeps;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#include "java/lang/Integer.h"
#include "org/allbinary/layer/LayerManagerLoggingBase.h"

typedef struct LayerManagerLogging LayerManagerLogging;
struct LayerManagerLogging {
    LayerManagerLoggingBase base;
    LogUtil* logUtil;
    StringMaker* stringBuilder;
    const char* APPEND;
    const char* APPEND_;
    const char* _AT__;
    const char* ATTEMPT_REMOVE_;
    const char* REMOVE_;
    const char* REMOVE;
    const char* DID_NOT_REMOVE;
    const char* CLEAR;
};


LayerManagerLogging* LayerManagerLogging_new(void);
void LayerManagerLogging_init(LayerManagerLogging* this);

LayerManagerLogging* LayerManagerLogging_getInstance(void);

void LayerManagerLogging_append(LayerManagerLogging* this, AllBinaryLayer* layerInterface);

void LayerManagerLogging_appendAt(LayerManagerLogging* this, AllBinaryLayer* layerInterface, int32_t index);

void LayerManagerLogging_remove(LayerManagerLogging* this, AllBinaryLayer* layerInterface);

void LayerManagerLogging_removeResult(LayerManagerLogging* this, LayerManager* layerManager, AllBinaryLayer* layerInterface, bool result);


void LayerManagerLogging_clear(LayerManagerLogging* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerManagerLogging_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LayerManagerLogging_register(void);


#endif // ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGING_H
