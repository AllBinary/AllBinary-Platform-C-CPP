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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationInterface.h"
#include "org/allbinary/graphics/CellPosition.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct TouchButton TouchButton;
struct TouchButton {
    Paintable base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    TouchButtonInput* touchButtonInput;
    Animation* animationInterface;
    Rectangle* rawRectangle;
    int32_t xBorder;
    int32_t yBorder;
    Rectangle* rectangle;
    CellPosition* cellPosition;
    int32_t animationX;
    int32_t animationY;
};


TouchButton* TouchButton_new(TouchButtonInput* touchButtonInput, AnimationInterface* animationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder);

void TouchButton_init(TouchButton* this, TouchButtonInput* touchButtonInput, AnimationInterface* animationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder);
void TouchButton_paint(TouchButton* this, Graphics* graphics);
void TouchButton_updateRectangle(TouchButton* this);
CellPosition* TouchButton_getCellPositionP(TouchButton* this);
Rectangle* TouchButton_getRectangleP(TouchButton* this);
TouchButtonInput* TouchButton_getTouchButtonInput(TouchButton* this);
const char* TouchButton_toString(TouchButton* this);

static void TouchButton_initFields(TouchButton* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    
    
    
    this->rectangle = RectangleFactory_SINGLETON;
    
    this->animationX = 0;
    this->animationY = 0;
}


void TouchButton_init(TouchButton* this, TouchButtonInput* touchButtonInput, AnimationInterface* animationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder) {
    Paintable_init(&this->base);
    TouchButton_initFields(this);
        this->touchButtonInput = touchButtonInput;
        this->animationInterface = ((Animation*) animationInterface);
        this->rawRectangle = rawRectangle;
        this->cellPosition = cellPosition;
        this->xBorder = xBorder;
        this->yBorder = yBorder;
        TouchButton_updateRectangle(this);
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Created: "), append, TouchButton_toString(this)), toString), this, this->commonStrings->CONSTRUCTOR);
}

TouchButton* TouchButton_new(TouchButtonInput* touchButtonInput, AnimationInterface* animationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder) {
    TouchButton* this = calloc(1, sizeof(TouchButton));
    TouchButton_init(this, touchButtonInput, animationInterface, rawRectangle, cellPosition, xBorder, yBorder);
    return this;
}


void TouchButton_paint(TouchButton* this, Graphics* graphics) {
        Animation_paintXY(this->animationInterface, graphics, this->animationX, this->animationY);
}


void TouchButton_updateRectangle(TouchButton* this) {
        JAVA_TRY {
            int32_t x = Rectangle_getWidth(this->rawRectangle) * CellPosition_getColumn(this->cellPosition);
            int32_t y = Rectangle_getHeight(this->rawRectangle) * CellPosition_getRow(this->cellPosition);
            PointFactory* pointFactory = PointFactory_getInstance();
            this->rectangle = Rectangle_new(PointFactory_createXY(pointFactory, x + this->xBorder, y + this->yBorder), Rectangle_getWidth(this->rawRectangle), Rectangle_getHeight(this->rawRectangle));
            GPoint* point = Rectangle_getPoint(this->rectangle);
            this->animationX = GPoint_getX(point);
            this->animationY = GPoint_getY(point);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "updateRectangle", e);
        } JAVA_END_TRY;
}


CellPosition* TouchButton_getCellPositionP(TouchButton* this) {
        return this->cellPosition;
}


Rectangle* TouchButton_getRectangleP(TouchButton* this) {
        return this->rectangle;
}


TouchButtonInput* TouchButton_getTouchButtonInput(TouchButton* this) {
        return this->touchButtonInput;
}


const char* TouchButton_toString(TouchButton* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringUtil* stringUtil = StringUtil_getInstance();
        StringMaker_append(stringBuffer, "TouchButton: ");
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, this->rectangle));
        StringMaker_append(stringBuffer, " CellPosition: ");
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, this->cellPosition));
        StringMaker_append(stringBuffer, " xBorder: ");
        StringMaker_appendint(stringBuffer, this->xBorder);
        StringMaker_append(stringBuffer, " yBorder: ");
        StringMaker_appendint(stringBuffer, this->yBorder);
        return StringMaker_toString(stringBuffer);
}

