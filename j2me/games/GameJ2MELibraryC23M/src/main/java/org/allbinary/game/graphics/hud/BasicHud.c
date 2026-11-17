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
#include "org/allbinary/J2MEUtil.h"
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
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct BasicHud BasicHud;
struct BasicHud {
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
    int32_t bufferZoneY;
    HudGraphicsPosition* hudGraphicsPosition;
    int32_t x;
    int32_t y;
    BasicColor* basicColor;
    int32_t color;
    int32_t updateMaxWidth;
    int32_t updateMaxHeight;
    int32_t offsetY;
};


BasicHud* BasicHud_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

void BasicHud_init(BasicHud* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);
void BasicHud_updateMeasurement(BasicHud* this, Graphics* graphics);
int32_t BasicHud_getLocation(BasicHud* this);
int32_t BasicHud_getDirection(BasicHud* this);
HudGraphicsPosition* BasicHud_getHudGraphicsPositionWH(BasicHud* this, int32_t width, int32_t height, int32_t maxWidth, int32_t maxHeight);
void BasicHud_onEvent(BasicHud* this, AllBinaryEventObject* eventObject);
void BasicHud_onDisplayChangeEvent(BasicHud* this, DisplayChangeEvent* displayChangeEvent);
GPoint* BasicHud_getPoint(BasicHud* this, int32_t x, int32_t y);
int32_t BasicHud_getBufferZone(BasicHud* this);
void BasicHud_setBufferZone(BasicHud* this, int32_t bufferZone);
void BasicHud_setLocation(BasicHud* this, int32_t location);
void BasicHud_setDirection(BasicHud* this, int32_t direction);
HudGraphicsPosition* BasicHud_getHudGraphicsPosition(BasicHud* this);
int32_t BasicHud_getColor(BasicHud* this);
int32_t BasicHud_getX(BasicHud* this);
void BasicHud_setX(BasicHud* this, int32_t x);
void BasicHud_setBasicColorP(BasicHud* this, BasicColor* basicColor);
BasicColor* BasicHud_getBasicColorP(BasicHud* this);
void BasicHud_setY(BasicHud* this, int32_t y);
int32_t BasicHud_getY(BasicHud* this);
void BasicHud_paintSSO(BasicHud* this, Graphics* graphics, const char* string, const char* string2, int32_t offset);
void BasicHud_paintSSOO(BasicHud* this, Graphics* graphics, const char* string, const char* string2, int32_t offset, int32_t offset2);
void BasicHud_paintDXY(BasicHud* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len, uint16_t* charArray2, int32_t offset2, int32_t len2, int32_t xOffset, int32_t xOffset2);
void BasicHud_paintDX(BasicHud* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len, uint16_t* charArray2, int32_t offset2, int32_t len2, int32_t xOffset);
void BasicHud_paintOffsetAndLength(BasicHud* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len);
void BasicHud_paintString(BasicHud* this, Graphics* graphics, const char* string);

static void BasicHud_initFields(BasicHud* this) {
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
    this->bufferZoneY = 0;
    this->hudGraphicsPosition = HudGraphicsPosition_NULL_HUD_GRAPHICS_POSITION;
    this->x = 0;
    this->y = 0;
    this->basicColor = BasicColorFactory_getInstance()->BLACK;
    
    this->updateMaxWidth = 0;
    this->updateMaxHeight = 0;
    this->offsetY = 0;
}


void BasicHud_init(BasicHud* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    BasicHud_initFields(this);
        BasicHud_setLocation(this, location);
        BasicHud_setDirection(this, direction);
        BasicHud_setBufferZone(this, bufferZone);
        BasicHud_onDisplayChangeEvent(this, DisplayInfoSingleton_getInstance()->displayChangeEvent);
        BasicHud_setBasicColorP(this, basicColor);
        this->color = BasicColor_intValue(basicColor);
}

BasicHud* BasicHud_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    BasicHud* this = calloc(1, sizeof(BasicHud));
    BasicHud_init(this, location, direction, bufferZone, basicColor);
    return this;
}


void BasicHud_updateMeasurement(BasicHud* this, Graphics* graphics) {
        JAVA_TRY {
            this->hudGraphicsPosition = BasicHud_getHudGraphicsPositionWH(this, DisplayInfoSingleton_getLastWidth(this->displayInfo), DisplayInfoSingleton_getLastHeight(this->displayInfo), this->updateMaxWidth, this->updateMaxHeight);
            this->x = JAVA_CALL(HudGraphicsPosition_getPoint(this->hudGraphicsPosition), getX);
            BasicHud_setY(this, JAVA_CALL(HudGraphicsPosition_getPoint(this->hudGraphicsPosition), getY));
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, this->canvasStrings->ON_DISPLAY_CHANGE_EVENT, e);
        } JAVA_END_TRY;
        this->myFontProcessor = MyFontProcessor_getInstance();
}


int32_t BasicHud_getLocation(BasicHud* this) {
        return this->location;
}


int32_t BasicHud_getDirection(BasicHud* this) {
        return this->direction;
}


// throws Exception
HudGraphicsPosition* BasicHud_getHudGraphicsPositionWH(BasicHud* this, int32_t width, int32_t height, int32_t maxWidth, int32_t maxHeight) {
        int32_t x = 0;
        int32_t y = 0;
        int32_t anchor = 0;
        BasicHudFactory* basicHudFactory = BasicHudFactory_getInstance();
        if (basicHudFactory->BOTTOMLEFT == BasicHud_getLocation(this)) {
            x = this->bufferZone + 2;
            y = height - maxHeight - this->bufferZone;
            anchor = Graphics_BOTTOM & Graphics_LEFT;
        } else if (basicHudFactory->BOTTOMRIGHT == BasicHud_getLocation(this)) {
            x = width - maxWidth;
            y = height - maxHeight - this->bufferZone;
            anchor = Graphics_BOTTOM & Graphics_RIGHT;
        } else if (basicHudFactory->TOPLEFT == BasicHud_getLocation(this)) {
            x = this->bufferZone + 2;
            y = this->bufferZoneY;
            anchor = Anchor_TOP_LEFT;
        } else if (basicHudFactory->TOPRIGHT == BasicHud_getLocation(this)) {
            x = width - maxWidth;
            y = this->bufferZoneY;
            anchor = Graphics_TOP & Graphics_RIGHT;
        } else if (basicHudFactory->TOPCENTER == BasicHud_getLocation(this)) {
            x = ((width - maxWidth) / 2);
            y = this->bufferZoneY;
            anchor = Graphics_TOP & Graphics_HCENTER;
        } else if (basicHudFactory->BOTTOMCENTER == BasicHud_getLocation(this)) {
            x = ((width - maxWidth) / 2);
            y = height - maxHeight - this->bufferZone;
            anchor = Graphics_BOTTOM & Graphics_HCENTER;
        } else if (basicHudFactory->ABSOLUTE == BasicHud_getLocation(this)) {
            x = maxHeight;
            y = maxWidth;
            anchor = 0;
        }
        return HudGraphicsPosition_new(BasicHud_getPoint(this, x, y), anchor);
}


void BasicHud_onEvent(BasicHud* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void BasicHud_onDisplayChangeEvent(BasicHud* this, DisplayChangeEvent* displayChangeEvent) {
        this->myFontProcessor = this->updateMyFontProcessor;
}


GPoint* BasicHud_getPoint(BasicHud* this, int32_t x, int32_t y) {
        return PointFactory_createXY(PointFactory_getInstance(), x, y);
}


int32_t BasicHud_getBufferZone(BasicHud* this) {
        return this->bufferZone;
}


void BasicHud_setBufferZone(BasicHud* this, int32_t bufferZone) {
        this->bufferZone = bufferZone;
        if (J2MEUtil_isHTML()) {
            this->bufferZoneY = this->bufferZone;
        } else {
            this->bufferZoneY = this->bufferZone + 5;
        }
}


void BasicHud_setLocation(BasicHud* this, int32_t location) {
        this->location = location;
}


void BasicHud_setDirection(BasicHud* this, int32_t direction) {
        this->direction = direction;
}


HudGraphicsPosition* BasicHud_getHudGraphicsPosition(BasicHud* this) {
        return this->hudGraphicsPosition;
}


int32_t BasicHud_getColor(BasicHud* this) {
        return this->color;
}


int32_t BasicHud_getX(BasicHud* this) {
        return this->x;
}


void BasicHud_setX(BasicHud* this, int32_t x) {
        this->x = x;
}


void BasicHud_setBasicColorP(BasicHud* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}


BasicColor* BasicHud_getBasicColorP(BasicHud* this) {
        return this->basicColor;
}


void BasicHud_setY(BasicHud* this, int32_t y) {
        this->y = y;
}


int32_t BasicHud_getY(BasicHud* this) {
        return this->y;
}


void BasicHud_paintSSO(BasicHud* this, Graphics* graphics, const char* string, const char* string2, int32_t offset) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_getBasicColorP(this));
        Graphics_drawString(graphics, string, this->x, BasicHud_getY(this), HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
        Graphics_drawString(graphics, string2, this->x + offset, BasicHud_getY(this), HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_paintSSOO(BasicHud* this, Graphics* graphics, const char* string, const char* string2, int32_t offset, int32_t offset2) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Graphics_setColor(graphics, BasicHud_getColor(this));
        Graphics_drawString(graphics, string, this->x + offset, BasicHud_getY(this), HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
        Graphics_drawString(graphics, string2, this->x + offset2, BasicHud_getY(this), HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_paintDXY(BasicHud* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len, uint16_t* charArray2, int32_t offset2, int32_t len2, int32_t xOffset, int32_t xOffset2) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_getBasicColorP(this));
        int32_t y = BasicHud_getY(this);
        Graphics_drawChars(graphics, charArray, offset, len, this->x + xOffset, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
        Graphics_drawChars(graphics, charArray2, offset2, len2, this->x + xOffset2, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_paintDX(BasicHud* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len, uint16_t* charArray2, int32_t offset2, int32_t len2, int32_t xOffset) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_getBasicColorP(this));
        int32_t y = BasicHud_getY(this);
        Graphics_drawChars(graphics, charArray, offset, len, this->x, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
        Graphics_drawChars(graphics, charArray2, offset2, len2, this->x + xOffset, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_paintOffsetAndLength(BasicHud* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_getBasicColorP(this));
        int32_t y = BasicHud_getY(this);
        Graphics_drawChars(graphics, charArray, offset, len, this->x, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_paintString(BasicHud* this, Graphics* graphics, const char* string) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_getBasicColorP(this));
        int32_t y = BasicHud_getY(this) + this->offsetY;
        Graphics_drawString(graphics, string, this->x, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}

