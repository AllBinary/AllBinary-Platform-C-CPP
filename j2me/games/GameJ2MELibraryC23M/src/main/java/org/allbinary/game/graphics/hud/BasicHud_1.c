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
// package org.allbinary.game.graphics.hud

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct BasicHud_1 BasicHud_1;
struct BasicHud_1 {
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CanvasStrings* canvasStrings;
    BasicColorSetUtil* basicSetColorUtil;
    DisplayInfoSingleton* displayInfo;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    int32_t location;
    int32_t direction;
    int32_t bufferZone;
    HudGraphicsPosition* hudGraphicsPosition;
    int32_t x;
    int32_t y;
    BasicColor* basicColor;
    int32_t color;
    int32_t updateMaxWidth;
    int32_t updateMaxHeight;
    int32_t offsetY;
};


BasicHud_1* BasicHud_1_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

void BasicHud_1_init(BasicHud_1* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);
void BasicHud_1_updateMeasurement(BasicHud_1* this, Graphics* graphics);
int32_t BasicHud_1_getLocation(BasicHud_1* this);
int32_t BasicHud_1_getDirection(BasicHud_1* this);
HudGraphicsPosition* BasicHud_1_getHudGraphicsPositionWH(BasicHud_1* this, int32_t width, int32_t height, int32_t maxWidth, int32_t maxHeight);
void BasicHud_1_onEvent(BasicHud_1* this, AllBinaryEventObject* eventObject);
void BasicHud_1_onDisplayChangeEvent(BasicHud_1* this, DisplayChangeEvent* displayChangeEvent);
GPoint* BasicHud_1_getPoint(BasicHud_1* this, int32_t x, int32_t y);
int32_t BasicHud_1_getBufferZone(BasicHud_1* this);
void BasicHud_1_setBufferZone(BasicHud_1* this, int32_t bufferZone);
void BasicHud_1_setLocation(BasicHud_1* this, int32_t location);
void BasicHud_1_setDirection(BasicHud_1* this, int32_t direction);
HudGraphicsPosition* BasicHud_1_getHudGraphicsPosition(BasicHud_1* this);
int32_t BasicHud_1_getColor(BasicHud_1* this);
int32_t BasicHud_1_getX(BasicHud_1* this);
void BasicHud_1_setX(BasicHud_1* this, int32_t x);
void BasicHud_1_setBasicColorP(BasicHud_1* this, BasicColor* basicColor);
BasicColor* BasicHud_1_getBasicColorP(BasicHud_1* this);
void BasicHud_1_setY(BasicHud_1* this, int32_t y);
int32_t BasicHud_1_getY(BasicHud_1* this);
void BasicHud_1_paintSSO(BasicHud_1* this, Graphics* graphics, const char* string, const char* string2, int32_t offset);
void BasicHud_1_paintSSOO(BasicHud_1* this, Graphics* graphics, const char* string, const char* string2, int32_t offset, int32_t offset2);
void BasicHud_1_paintDXY(BasicHud_1* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len, uint16_t* charArray2, int32_t offset2, int32_t len2, int32_t xOffset, int32_t xOffset2);
void BasicHud_1_paintDX(BasicHud_1* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len, uint16_t* charArray2, int32_t offset2, int32_t len2, int32_t xOffset);
void BasicHud_1_paintOffsetAndLength(BasicHud_1* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len);
void BasicHud_1_paintString(BasicHud_1* this, Graphics* graphics, const char* string);

static void BasicHud_1_initFields(BasicHud_1* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->canvasStrings = CanvasStrings_getInstance();
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    this->displayInfo = DisplayInfoSingleton_getInstance();
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    this->location = 0;
    this->direction = 0;
    this->bufferZone = 0;
    this->hudGraphicsPosition = HudGraphicsPosition_NULL_HUD_GRAPHICS_POSITION;
    this->x = 0;
    this->y = 0;
    this->basicColor = BasicColorFactory_getInstance()->BLACK;
    
    this->updateMaxWidth = 0;
    this->updateMaxHeight = 0;
    this->offsetY = 0;
}


void BasicHud_1_init(BasicHud_1* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    BasicHud_1_initFields(this);
        BasicHud_1_setLocation(this, location);
        BasicHud_1_setDirection(this, direction);
        BasicHud_1_setBufferZone(this, bufferZone);
        BasicHud_1_onDisplayChangeEvent(this, DisplayInfoSingleton_getInstance()->displayChangeEvent);
        BasicHud_1_setBasicColorP(this, basicColor);
        this->color = BasicColor_intValue(basicColor);
}

BasicHud_1* BasicHud_1_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    BasicHud_1* this = calloc(1, sizeof(BasicHud_1));
    BasicHud_1_init(this, location, direction, bufferZone, basicColor);
    return this;
}


void BasicHud_1_updateMeasurement(BasicHud_1* this, Graphics* graphics) {
        JAVA_TRY {
            this->hudGraphicsPosition = BasicHud_1_getHudGraphicsPositionWH(this, DisplayInfoSingleton_getLastWidth(this->displayInfo), DisplayInfoSingleton_getLastHeight(this->displayInfo), this->updateMaxWidth, this->updateMaxHeight);
            this->x = JAVA_CALL(HudGraphicsPosition_getPoint(this->hudGraphicsPosition), getX);
            BasicHud_1_setY(this, JAVA_CALL(HudGraphicsPosition_getPoint(this->hudGraphicsPosition), getY));
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, this->canvasStrings->ON_DISPLAY_CHANGE_EVENT, e);
        } JAVA_END_TRY;
        this->myFontProcessor = MyFontProcessor_getInstance();
}


int32_t BasicHud_1_getLocation(BasicHud_1* this) {
        return this->location;
}


int32_t BasicHud_1_getDirection(BasicHud_1* this) {
        return this->direction;
}


// throws Exception
HudGraphicsPosition* BasicHud_1_getHudGraphicsPositionWH(BasicHud_1* this, int32_t width, int32_t height, int32_t maxWidth, int32_t maxHeight) {
        int32_t x = 0;
        int32_t y = 0;
        int32_t anchor = 0;
        BasicHudFactory* basicHudFactory = BasicHudFactory_getInstance();
        if (basicHudFactory->BOTTOMLEFT == BasicHud_1_getLocation(this)) {
            x = this->bufferZone + 2;
            y = height - maxHeight - this->bufferZone;
            anchor = Graphics_BOTTOM & Graphics_LEFT;
        } else if (basicHudFactory->BOTTOMRIGHT == BasicHud_1_getLocation(this)) {
            x = width - maxWidth;
            y = height - maxHeight - this->bufferZone;
            anchor = Graphics_BOTTOM & Graphics_RIGHT;
        } else if (basicHudFactory->TOPLEFT == BasicHud_1_getLocation(this)) {
            x = this->bufferZone + 2;
            y = this->bufferZone + 5;
            anchor = Anchor_TOP_LEFT;
        } else if (basicHudFactory->TOPRIGHT == BasicHud_1_getLocation(this)) {
            x = width - maxWidth;
            y = this->bufferZone + 5;
            anchor = Graphics_TOP & Graphics_RIGHT;
        } else if (basicHudFactory->TOPCENTER == BasicHud_1_getLocation(this)) {
            x = ((width - maxWidth) / 2);
            y = this->bufferZone + 5;
            anchor = Graphics_TOP & Graphics_HCENTER;
        } else if (basicHudFactory->BOTTOMCENTER == BasicHud_1_getLocation(this)) {
            x = ((width - maxWidth) / 2);
            y = height - maxHeight - this->bufferZone;
            anchor = Graphics_BOTTOM & Graphics_HCENTER;
        } else if (basicHudFactory->ABSOLUTE == BasicHud_1_getLocation(this)) {
            x = maxHeight;
            y = maxWidth;
            anchor = 0;
        }
        return HudGraphicsPosition_new(BasicHud_1_getPoint(this, x, y), anchor);
}


void BasicHud_1_onEvent(BasicHud_1* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void BasicHud_1_onDisplayChangeEvent(BasicHud_1* this, DisplayChangeEvent* displayChangeEvent) {
        this->myFontProcessor = this->updateMyFontProcessor;
}


GPoint* BasicHud_1_getPoint(BasicHud_1* this, int32_t x, int32_t y) {
        return PointFactory_createXY(PointFactory_getInstance(), x, y);
}


int32_t BasicHud_1_getBufferZone(BasicHud_1* this) {
        return this->bufferZone;
}


void BasicHud_1_setBufferZone(BasicHud_1* this, int32_t bufferZone) {
        this->bufferZone = bufferZone;
}


void BasicHud_1_setLocation(BasicHud_1* this, int32_t location) {
        this->location = location;
}


void BasicHud_1_setDirection(BasicHud_1* this, int32_t direction) {
        this->direction = direction;
}


HudGraphicsPosition* BasicHud_1_getHudGraphicsPosition(BasicHud_1* this) {
        return this->hudGraphicsPosition;
}


int32_t BasicHud_1_getColor(BasicHud_1* this) {
        return this->color;
}


int32_t BasicHud_1_getX(BasicHud_1* this) {
        return this->x;
}


void BasicHud_1_setX(BasicHud_1* this, int32_t x) {
        this->x = x;
}


void BasicHud_1_setBasicColorP(BasicHud_1* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}


BasicColor* BasicHud_1_getBasicColorP(BasicHud_1* this) {
        return this->basicColor;
}


void BasicHud_1_setY(BasicHud_1* this, int32_t y) {
        this->y = y;
}


int32_t BasicHud_1_getY(BasicHud_1* this) {
        return this->y;
}


void BasicHud_1_paintSSO(BasicHud_1* this, Graphics* graphics, const char* string, const char* string2, int32_t offset) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_1_getBasicColorP(this));
        Graphics_drawString(graphics, string, this->x, BasicHud_1_getY(this), HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
        Graphics_drawString(graphics, string2, this->x + offset, BasicHud_1_getY(this), HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_1_paintSSOO(BasicHud_1* this, Graphics* graphics, const char* string, const char* string2, int32_t offset, int32_t offset2) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Graphics_setColor(graphics, BasicHud_1_getColor(this));
        Graphics_drawString(graphics, string, this->x + offset, BasicHud_1_getY(this), HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
        Graphics_drawString(graphics, string2, this->x + offset2, BasicHud_1_getY(this), HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_1_paintDXY(BasicHud_1* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len, uint16_t* charArray2, int32_t offset2, int32_t len2, int32_t xOffset, int32_t xOffset2) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_1_getBasicColorP(this));
        int32_t y = BasicHud_1_getY(this);
        Graphics_drawChars(graphics, charArray, offset, len, this->x + xOffset, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
        Graphics_drawChars(graphics, charArray2, offset2, len2, this->x + xOffset2, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_1_paintDX(BasicHud_1* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len, uint16_t* charArray2, int32_t offset2, int32_t len2, int32_t xOffset) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_1_getBasicColorP(this));
        int32_t y = BasicHud_1_getY(this);
        Graphics_drawChars(graphics, charArray, offset, len, this->x, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
        Graphics_drawChars(graphics, charArray2, offset2, len2, this->x + xOffset, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_1_paintOffsetAndLength(BasicHud_1* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_1_getBasicColorP(this));
        int32_t y = BasicHud_1_getY(this);
        Graphics_drawChars(graphics, charArray, offset, len, this->x, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_1_paintString(BasicHud_1* this, Graphics* graphics, const char* string) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_1_getBasicColorP(this));
        int32_t y = BasicHud_1_getY(this) + this->offsetY;
        Graphics_drawString(graphics, string, this->x, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}

