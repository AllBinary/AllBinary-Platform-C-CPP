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
#include "org/allbinary/canvas/GameStatisticsFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"

typedef struct GamePerformanceInitUpdatePaintable GamePerformanceInitUpdatePaintable;
struct GamePerformanceInitUpdatePaintable {
    InitUpdatePaintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    int32_t halfHeight;
    int32_t* yArray;
    MyFontProcessor* myFontProcessor;
    uint16_t** baseRefreshHelperCharArray;
    int32_t defaultStringWidth;
    int32_t RED;
};


GamePerformanceInitUpdatePaintable* GamePerformanceInitUpdatePaintable_new(void);
void GamePerformanceInitUpdatePaintable_updateMeasurement(GamePerformanceInitUpdatePaintable* this, Graphics* graphics);
void GamePerformanceInitUpdatePaintable_init(GamePerformanceInitUpdatePaintable* this);
void GamePerformanceInitUpdatePaintable_update(GamePerformanceInitUpdatePaintable* this);
void GamePerformanceInitUpdatePaintable_paint(GamePerformanceInitUpdatePaintable* this, Graphics* graphics);

static void GamePerformanceInitUpdatePaintable_initFields(GamePerformanceInitUpdatePaintable* this) {
    this->halfHeight = DisplayInfoSingleton_getLastHalfHeight(DisplayInfoSingleton_getInstance());
    this->yArray = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ this->halfHeight + 30, this->halfHeight + 30, this->halfHeight + 30 + 15, this->halfHeight + 30 + 15, this->halfHeight + 30 + 30, this->halfHeight + 30 + 30, this->halfHeight + 30 + 45, this->halfHeight + 30 + 45 }) / sizeof(int32_t), (int32_t[]){ this->halfHeight + 30, this->halfHeight + 30, this->halfHeight + 30 + 15, this->halfHeight + 30 + 15, this->halfHeight + 30 + 30, this->halfHeight + 30 + 30, this->halfHeight + 30 + 45, this->halfHeight + 30 + 45 }));
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->baseRefreshHelperCharArray = ((uint16_t**) java_array_new2(sizeof(uint16_t), 0, 0));
    this->defaultStringWidth = 0;
    this->RED = JAVA_CALL(BasicColorFactory_getInstance()->RED, intValue);
}

void GamePerformanceInitUpdatePaintable_init(GamePerformanceInitUpdatePaintable* this) {
    InitUpdatePaintable_init(&this->base);
    GamePerformanceInitUpdatePaintable_initFields(this);
}

GamePerformanceInitUpdatePaintable* GamePerformanceInitUpdatePaintable_new(void) {
    GamePerformanceInitUpdatePaintable* this = calloc(1, sizeof(GamePerformanceInitUpdatePaintable));
    GamePerformanceInitUpdatePaintable_init(this);
    return this;
}


void GamePerformanceInitUpdatePaintable_updateMeasurement(GamePerformanceInitUpdatePaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->defaultStringWidth = MyFontProcessor_defaultStringWidth(font, 2);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void GamePerformanceInitUpdatePaintable_init(GamePerformanceInitUpdatePaintable* this) {
}


void GamePerformanceInitUpdatePaintable_update(GamePerformanceInitUpdatePaintable* this) {
        this->baseRefreshHelperCharArray = GameStatisticsFactory_to2DCharArray(GameStatisticsFactory_getInstance());
}


void GamePerformanceInitUpdatePaintable_paint(GamePerformanceInitUpdatePaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Graphics_setColor(graphics, this->RED);
        uint16_t* charArray = nullptr;
        uint16_t* charArray2 = nullptr;
        int32_t size2 = 0;
        int32_t size3 = 0;
        int32_t size = java_array_length(this->baseRefreshHelperCharArray) - 2;
        for (int32_t index = size; index >= 0; index -= 2) {
            charArray = this->baseRefreshHelperCharArray[index];
            charArray2 = this->baseRefreshHelperCharArray[index + 1];
            size2 = java_array_length(charArray);
            size3 = java_array_length(charArray2);
            Graphics_drawChars(graphics, charArray, 0, size2, 0, this->yArray[index], 0);
            Graphics_drawChars(graphics, charArray2, 0, size3, size2 * this->defaultStringWidth, this->yArray[index + 1], 0);
        }
}

