/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.layer

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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"
#include "org/allbinary/input/motion/button/CommonButtons.h"
#include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"

typedef struct SelectionHudPaintable SelectionHudPaintable;
struct SelectionHudPaintable {
    InitUpdatePaintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    int32_t y;
    PrimitiveLongUtil* primitiveLongUtil;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    int32_t x;
    int32_t textX;
    int32_t imageX;
    BasicColor* basicColor;
    int32_t color;
    int32_t width;
    int32_t height;
    const char* name;
    Animation* animationInterface;
    int32_t backgroundColor;
};


SelectionHudPaintable* SelectionHudPaintable_new(void);

void SelectionHudPaintable_init(SelectionHudPaintable* this);
void SelectionHudPaintable_updateMeasurement(SelectionHudPaintable* this, Graphics* graphics);
void SelectionHudPaintable_update(SelectionHudPaintable* this);
void SelectionHudPaintable_updateSelectionInfo(SelectionHudPaintable* this);
void SelectionHudPaintable_updateInfo(SelectionHudPaintable* this);
PrimitiveLongUtil* SelectionHudPaintable_getPrimitiveLongUtil(SelectionHudPaintable* this);
void SelectionHudPaintable_setAnimationInterface(SelectionHudPaintable* this, Animation* animationInterface);
Animation* SelectionHudPaintable_getAnimationInterface(SelectionHudPaintable* this);
void SelectionHudPaintable_setName(SelectionHudPaintable* this, const char* name);
const char* SelectionHudPaintable_getName(SelectionHudPaintable* this);
void SelectionHudPaintable_setBasicColorP(SelectionHudPaintable* this, BasicColor* basicColor);
BasicColor* SelectionHudPaintable_getBasicColorP(SelectionHudPaintable* this);
void SelectionHudPaintable_setColor(SelectionHudPaintable* this, int32_t color);
int32_t SelectionHudPaintable_getColor(SelectionHudPaintable* this);
int32_t SelectionHudPaintable_getWidth(SelectionHudPaintable* this);
void SelectionHudPaintable_setHeight(SelectionHudPaintable* this, int32_t height);
int32_t SelectionHudPaintable_getHeight(SelectionHudPaintable* this);
int32_t SelectionHudPaintable_getX(SelectionHudPaintable* this);
void SelectionHudPaintable_paint(SelectionHudPaintable* this, Graphics* graphics);

static void SelectionHudPaintable_initFields(SelectionHudPaintable* this) {
    this->y = CommonButtons_getInstance()->STANDARD_BUTTON_SIZE + 17;
    
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    this->x = 0;
    this->textX = 0;
    this->imageX = 0;
    this->basicColor = BasicColorFactory_getInstance()->BLACK;
    this->color = 0;
    this->width = 0;
    this->height = 0;
    this->name = StringUtil_getInstance()->EMPTY_STRING;
    this->animationInterface = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
    this->backgroundColor = JAVA_CALL(BasicColorFactory_getInstance()->GREY, intValue);
}


void SelectionHudPaintable_init(SelectionHudPaintable* this) {
    InitUpdatePaintable_init(&this->base);
    SelectionHudPaintable_initFields(this);
        SelectionHudPaintable_update(this);
        this->primitiveLongUtil = PrimitiveLongUtil_createPowerOfTen(10000);
}

SelectionHudPaintable* SelectionHudPaintable_new(void) {
    SelectionHudPaintable* this = calloc(1, sizeof(SelectionHudPaintable));
    SelectionHudPaintable_init(this);
    return this;
}


void SelectionHudPaintable_updateMeasurement(SelectionHudPaintable* this, Graphics* graphics) {
        CommonButtons* commonButtons = CommonButtons_getInstance();
        Font* font = Graphics_getFont(graphics);
        SelectionHudPaintable_setHeight(this, commonButtons->STANDARD_BUTTON_SIZE + Font_getHeight(font));
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void SelectionHudPaintable_update(SelectionHudPaintable* this) {
        CommonButtons* commonButtons = CommonButtons_getInstance();
        TouchButtonLocationHelper* touchButtonLocationHelper = TouchButtonLocationHelper_new();
        DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton_getInstance();
        this->x = commonButtons->STANDARD_BUTTON_SIZE + TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper);
        this->textX = SelectionHudPaintable_getX(this) + 4;
        this->width = DisplayInfoSingleton_getLastWidth(displayInfoSingleton) - SelectionHudPaintable_getX(this) * 2;
        this->imageX = SelectionHudPaintable_getWidth(this) + TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper) - 10;
        this->myFontProcessor = this->updateMyFontProcessor;
}


void SelectionHudPaintable_updateSelectionInfo(SelectionHudPaintable* this) {
}


void SelectionHudPaintable_updateInfo(SelectionHudPaintable* this) {
}


PrimitiveLongUtil* SelectionHudPaintable_getPrimitiveLongUtil(SelectionHudPaintable* this) {
        return this->primitiveLongUtil;
}


void SelectionHudPaintable_setAnimationInterface(SelectionHudPaintable* this, Animation* animationInterface) {
        this->animationInterface = animationInterface;
}


Animation* SelectionHudPaintable_getAnimationInterface(SelectionHudPaintable* this) {
        return this->animationInterface;
}


void SelectionHudPaintable_setName(SelectionHudPaintable* this, const char* name) {
        this->name = name;
}


const char* SelectionHudPaintable_getName(SelectionHudPaintable* this) {
        return this->name;
}


void SelectionHudPaintable_setBasicColorP(SelectionHudPaintable* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
        SelectionHudPaintable_setColor(this, BasicColor_intValue(basicColor));
}


BasicColor* SelectionHudPaintable_getBasicColorP(SelectionHudPaintable* this) {
        return this->basicColor;
}


void SelectionHudPaintable_setColor(SelectionHudPaintable* this, int32_t color) {
        this->color = color;
}


int32_t SelectionHudPaintable_getColor(SelectionHudPaintable* this) {
        return this->color;
}


int32_t SelectionHudPaintable_getWidth(SelectionHudPaintable* this) {
        return this->width;
}


void SelectionHudPaintable_setHeight(SelectionHudPaintable* this, int32_t height) {
        this->height = height;
}


int32_t SelectionHudPaintable_getHeight(SelectionHudPaintable* this) {
        return this->height;
}


int32_t SelectionHudPaintable_getX(SelectionHudPaintable* this) {
        return this->x;
}


void SelectionHudPaintable_paint(SelectionHudPaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Graphics_setColor(graphics, this->backgroundColor);
        Graphics_drawRect(graphics, SelectionHudPaintable_getX(this), this->y, SelectionHudPaintable_getWidth(this), SelectionHudPaintable_getHeight(this));
        Graphics_setColor(graphics, SelectionHudPaintable_getColor(this));
        Graphics_drawString(graphics, SelectionHudPaintable_getName(this), this->textX, this->y, 0);
}

