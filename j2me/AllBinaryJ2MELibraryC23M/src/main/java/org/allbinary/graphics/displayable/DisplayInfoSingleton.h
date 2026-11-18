#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_DISPLAYINFOSINGLETON_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_DISPLAYINFOSINGLETON_H
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
// package org.allbinary.graphics.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BaseScalable BaseScalable;
typedef struct ScalableListener ScalableListener;
typedef struct Displayable Displayable;
typedef struct AndroidUtil AndroidUtil;
typedef struct Features Features;
typedef struct DisplayChangeEvent DisplayChangeEvent;
typedef struct DisplayChangeEventHandler DisplayChangeEventHandler;
typedef struct LastDisplayChangeEventHandler LastDisplayChangeEventHandler;
typedef struct OpenGLFeatureFactory OpenGLFeatureFactory;
typedef struct SWTJOGLProcessor SWTJOGLProcessor;
typedef struct LogUtil LogUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct GenericOperatingSystem GenericOperatingSystem;
typedef struct OperatingSystemFactory OperatingSystemFactory;
typedef struct CommonLabels CommonLabels;
typedef struct CommonSeps CommonSeps;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/graphics/displayable/event/DisplayChangeEvent.h")
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/BaseScalable.h")
#include "org/allbinary/graphics/displayable/BaseScalable.h"
#endif

typedef struct DisplayInfoSingleton DisplayInfoSingleton;
struct DisplayInfoSingleton {
    LogUtil* logUtil;
    CommonLabels* commonLabels;
    CommonSeps* commonSeps;
    CommonStrings* commonStrings;
    const char* ORIENTATION;
    const char* ADJUSTING_FOR_SCALING_IN_PORTRAIT;
    const char* ADJUSTING_FOR_SCALING_IN_LANDSCAPE;
    int32_t* last;
    int32_t* lastHalf;
    int32_t* full;
    int32_t top;
    int32_t left;
    int32_t xOffset;
    int32_t yOffset;
    float scaleLargestTo;
    int32_t WIDTH;
    int32_t HEIGHT;
    int32_t CUSTOM_WIDTH;
    int32_t CUSTOM_HEIGHT;
    BaseScalable* scalableListener;
    float displayRatio;
    float ratio;
    const char* SET_LAST_SIZE_METHOD_NAME;
    const char* FULL_WIDTH;
    const char* FULL_HEIGHT;
    const char* LAST_WIDTH;
    const char* LAST_HEIGHT;
    const char* PORTRAIT;
    const char* LANDSCAPE;
    DisplayChangeEvent* displayChangeEvent;
    const char* FIRE_METHOD_NAME;
    const char* REASON;
    const char* UPDATE_FROM_ORIENTATION_CHANGE;
    BasicArrayList* list;
    const char* DISPLAY_INFO;
    const char* FULL;
    const char* LAST;
    const char* LAST_HALF;
};


DisplayInfoSingleton* DisplayInfoSingleton_new(void);

DisplayInfoSingleton* DisplayInfoSingleton_getInstance(void);

void DisplayInfoSingleton_init(DisplayInfoSingleton* this);

int32_t* DisplayInfoSingleton_getLastHalf(DisplayInfoSingleton* this);

int32_t* DisplayInfoSingleton_getLast(DisplayInfoSingleton* this);

int32_t* DisplayInfoSingleton_getFull(DisplayInfoSingleton* this);

float DisplayInfoSingleton_getScaleLargestTo(DisplayInfoSingleton* this);

void DisplayInfoSingleton_setScaleLargestTo(DisplayInfoSingleton* this, int32_t scaleLargestTo);

void DisplayInfoSingleton_setLastSize(DisplayInfoSingleton* this, int32_t aLastWidth, int32_t aLastHeight, const char* reason);


bool DisplayInfoSingleton_isPortraitWH(DisplayInfoSingleton* this, int32_t lastWidth, int32_t lastHeight);

bool DisplayInfoSingleton_isPortrait(DisplayInfoSingleton* this);

void DisplayInfoSingleton_add(DisplayInfoSingleton* this, const char* reason);

void DisplayInfoSingleton_process(DisplayInfoSingleton* this);

void DisplayInfoSingleton_processForced(DisplayInfoSingleton* this);

void DisplayInfoSingleton_update(DisplayInfoSingleton* this, Displayable* displayable, const char* reason);

const char* DisplayInfoSingleton_toString(DisplayInfoSingleton* this);

const char* DisplayInfoSingleton_toStringAppend(DisplayInfoSingleton* this, StringMaker* stringBuffer);

int32_t DisplayInfoSingleton_getTop(DisplayInfoSingleton* this);

int32_t DisplayInfoSingleton_getLeft(DisplayInfoSingleton* this);

int32_t DisplayInfoSingleton_getLastWidth(DisplayInfoSingleton* this);

int32_t DisplayInfoSingleton_getLastHeight(DisplayInfoSingleton* this);

int32_t DisplayInfoSingleton_getLastHalfWidth(DisplayInfoSingleton* this);

int32_t DisplayInfoSingleton_getLastHalfHeight(DisplayInfoSingleton* this);

int32_t DisplayInfoSingleton_getCustomLastWidth(DisplayInfoSingleton* this);

int32_t DisplayInfoSingleton_getCustomLastHeight(DisplayInfoSingleton* this);

int32_t DisplayInfoSingleton_getRawLastWidth(DisplayInfoSingleton* this);

int32_t DisplayInfoSingleton_getRawLastHeight(DisplayInfoSingleton* this);

void DisplayInfoSingleton_setCustom(DisplayInfoSingleton* this, int32_t width, int32_t height);

void DisplayInfoSingleton_setScalableListener(DisplayInfoSingleton* this, BaseScalable* scalableListener);

ScalableListener* DisplayInfoSingleton_getScalableListener(DisplayInfoSingleton* this);

float DisplayInfoSingleton_getRatio(DisplayInfoSingleton* this);

float DisplayInfoSingleton_getDisplayRatio(DisplayInfoSingleton* this);

void DisplayInfoSingleton_setOffset(DisplayInfoSingleton* this, int32_t left, int32_t top);

int32_t DisplayInfoSingleton_getxOffset(DisplayInfoSingleton* this);

int32_t DisplayInfoSingleton_getyOffset(DisplayInfoSingleton* this);
#define DisplayInfoSingleton_new0 DisplayInfoSingleton_new
#define DisplayInfoSingleton_init0 DisplayInfoSingleton_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DisplayInfoSingleton_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DisplayInfoSingleton_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_DISPLAYINFOSINGLETON_H
