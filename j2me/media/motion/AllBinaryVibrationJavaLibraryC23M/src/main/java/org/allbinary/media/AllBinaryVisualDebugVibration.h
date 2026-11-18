#ifndef ORG_ALLBINARY_MEDIA_ALLBINARYVISUALDEBUGVIBRATION_H
#define ORG_ALLBINARY_MEDIA_ALLBINARYVISUALDEBUGVIBRATION_H
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
// package org.allbinary.media

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryVibrationME AllBinaryVibrationME;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct Anchor Anchor;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct TimeDelayHelper TimeDelayHelper;
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#include "java/lang/Integer.h"
#include "org/allbinary/media/AllBinaryVibrationME.h"

typedef struct AllBinaryVisualDebugVibration AllBinaryVisualDebugVibration;
struct AllBinaryVisualDebugVibration {
    AllBinaryVibrationME base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    DisplayInfoSingleton* displayInfoSingleton;
    TimeDelayHelper* timeDelayHelper;
    const char* VIBRATING;
    MyFontProcessor* myFontProcessor;
    int32_t anchor;
    int32_t width;
};


AllBinaryVisualDebugVibration* AllBinaryVisualDebugVibration_new(void);
void AllBinaryVisualDebugVibration_init(AllBinaryVisualDebugVibration* this);

void AllBinaryVisualDebugVibration_updateMeasurement(AllBinaryVisualDebugVibration* this, Graphics* graphics);

void AllBinaryVisualDebugVibration_vibrate(AllBinaryVisualDebugVibration* this, int32_t duration, int32_t type, int32_t volume);

void AllBinaryVisualDebugVibration_paint(AllBinaryVisualDebugVibration* this, Graphics* graphics);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryVisualDebugVibration_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryVisualDebugVibration_register(void);


#endif // ORG_ALLBINARY_MEDIA_ALLBINARYVISUALDEBUGVIBRATION_H
