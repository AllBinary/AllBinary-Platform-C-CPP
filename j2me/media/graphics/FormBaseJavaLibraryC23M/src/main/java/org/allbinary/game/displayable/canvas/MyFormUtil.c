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
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/graphics/threed/SWTJOGLProcessor.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct MyFormUtil MyFormUtil;
struct MyFormUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    Rectangle* popupMenuRectangle;
};

static MyFormUtil* MyFormUtil_instance;

MyFormUtil* MyFormUtil_new(void);
MyFormUtil* MyFormUtil_getInstance(void);
void MyFormUtil_updateMeasurement(MyFormUtil* this, Graphics* graphics);
Rectangle* MyFormUtil_getPopupMenuRectangle(MyFormUtil* this);

// Static fields with runtime initializers: call this once at startup
void MyFormUtil_staticInit(void) {
    MyFormUtil_instance = MyFormUtil_new();
}

static void MyFormUtil_initFields(MyFormUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->popupMenuRectangle = RectangleFactory_SINGLETON;
}

void MyFormUtil_init(MyFormUtil* this) {
    MyFormUtil_initFields(this);
}

MyFormUtil* MyFormUtil_new(void) {
    MyFormUtil* this = calloc(1, sizeof(MyFormUtil));
    MyFormUtil_init(this);
    return this;
}


MyFormUtil* MyFormUtil_getInstance(void) {
        return MyFormUtil_instance;
}


void MyFormUtil_updateMeasurement(MyFormUtil* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        Features* features = Features_getInstance();
        bool isOpenGL = Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL);
        int32_t TOTAL_CHAR_WIDTH = (SWTJOGLProcessor_isJOGL(SWTJOGLProcessor_getInstance()) && isOpenGL ? 2 : 3);
        int32_t width = MyFontProcessor_defaultStringWidth(font, TOTAL_CHAR_WIDTH);
        PointFactory* pointFactory = PointFactory_getInstance();
        if (DisplayInfoSingleton_getLastHeight(displayInfo) < 320) {
            this->popupMenuRectangle = Rectangle_new(PointFactory_createXY(pointFactory, 0, 25), width, (Font_getHeight(font) * 4) + 2);
        } else {
            this->popupMenuRectangle = Rectangle_new(PointFactory_createXY(pointFactory, 0, DisplayInfoSingleton_getLastHalfHeight(displayInfo) - 70), width, (Font_getHeight(font) * 5));
        }
}


Rectangle* MyFormUtil_getPopupMenuRectangle(MyFormUtil* this) {
        return this->popupMenuRectangle;
}

