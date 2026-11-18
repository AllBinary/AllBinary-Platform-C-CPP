#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_MYFORMUTIL_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_MYFORMUTIL_H
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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct Features Features;
typedef struct PointFactory PointFactory;
typedef struct Rectangle Rectangle;
typedef struct RectangleFactory RectangleFactory;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct OpenGLFeatureFactory OpenGLFeatureFactory;
typedef struct SWTJOGLProcessor SWTJOGLProcessor;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif

typedef struct MyFormUtil MyFormUtil;
struct MyFormUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    Rectangle* popupMenuRectangle;
};


MyFormUtil* MyFormUtil_new(void);
void MyFormUtil_init(MyFormUtil* this);

MyFormUtil* MyFormUtil_getInstance(void);

void MyFormUtil_updateMeasurement(MyFormUtil* this, Graphics* graphics);

Rectangle* MyFormUtil_getPopupMenuRectangle(MyFormUtil* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MyFormUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MyFormUtil_register(void);

#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif

#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_MYFORMUTIL_H
