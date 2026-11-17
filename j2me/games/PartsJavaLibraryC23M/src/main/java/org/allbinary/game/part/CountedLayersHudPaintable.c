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
// package org.allbinary.game.part

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
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct CountedLayersHudPaintable CountedLayersHudPaintable;
struct CountedLayersHudPaintable {
    PaintableInterface PaintableInterface_interface;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    DisplayInfoSingleton* displayInfoSingleton;
    PartInterface** partInterfaceArray;
    int32_t countedTotalStringColor;
    int32_t countedPartsBorder;
    int32_t startIndex;
    int32_t dropSize;
    MyFontProcessor* myFontProcessor;
    int32_t height;
};

static int32_t CountedLayersHudPaintable_XXStringWidth = 0;

CountedLayersHudPaintable* CountedLayersHudPaintable_new(PartInterface** partInterfaceArray, int32_t dropSize, int32_t startIndex, int32_t countedTotalStringColor, int32_t countedPartsBorder);

void CountedLayersHudPaintable_init(CountedLayersHudPaintable* this, PartInterface** partInterfaceArray, int32_t dropSize, int32_t startIndex, int32_t countedTotalStringColor, int32_t countedPartsBorder);
void CountedLayersHudPaintable_updateMeasurement(CountedLayersHudPaintable* this, Graphics* graphics);
void CountedLayersHudPaintable_paint(CountedLayersHudPaintable* this, Graphics* graphics);
void CountedLayersHudPaintable_paintThreed(CountedLayersHudPaintable* this, Graphics* graphics);

static void CountedLayersHudPaintable_initFields(CountedLayersHudPaintable* this) {
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
    
    
    
    
    
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->height = 0;
}


void CountedLayersHudPaintable_init(CountedLayersHudPaintable* this, PartInterface** partInterfaceArray, int32_t dropSize, int32_t startIndex, int32_t countedTotalStringColor, int32_t countedPartsBorder) {
    CountedLayersHudPaintable_initFields(this);
        this->partInterfaceArray = partInterfaceArray;
        this->startIndex = startIndex;
        this->countedTotalStringColor = countedTotalStringColor;
        this->countedPartsBorder = countedPartsBorder;
        this->dropSize = dropSize;
}

CountedLayersHudPaintable* CountedLayersHudPaintable_new(PartInterface** partInterfaceArray, int32_t dropSize, int32_t startIndex, int32_t countedTotalStringColor, int32_t countedPartsBorder) {
    CountedLayersHudPaintable* this = calloc(1, sizeof(CountedLayersHudPaintable));
    CountedLayersHudPaintable_init(this, partInterfaceArray, dropSize, startIndex, countedTotalStringColor, countedPartsBorder);
    return this;
}


void CountedLayersHudPaintable_updateMeasurement(CountedLayersHudPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->height = Font_getHeight(font);
        if (this->dropSize > Font_getHeight(font)) {
            this->height = this->dropSize;
        }
        if (CountedLayersHudPaintable_XXStringWidth == 0) {
            const char* XXString = "XX";
            CountedLayersHudPaintable_XXStringWidth = Font_stringWidth(font, XXString);
        }
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void CountedLayersHudPaintable_paint(CountedLayersHudPaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        int32_t lastWidth = DisplayInfoSingleton_getLastWidth(this->displayInfoSingleton);
        int32_t widthEdge = lastWidth - this->dropSize;
        int32_t size = java_array_length(this->partInterfaceArray);
        int32_t count = 0;
        int32_t y = 0;
        CountedLayerInterfaceFactoryPart* countedLayerInterfaceFactory = nullptr;
        PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface = nullptr;
        AllBinaryLayer* layerInterface = nullptr;
        uint16_t* charArray = nullptr;
        for (int32_t index = this->startIndex; index < size; index++) {
            countedLayerInterfaceFactory = ((CountedLayerInterfaceFactoryPart*) this->partInterfaceArray[index]);
            if (CountedLayerInterfaceFactoryPart_getTotal(countedLayerInterfaceFactory) > 0) {
                pickedUpLayerInterfaceFactoryInterface = CountedLayerInterfaceFactoryPart_getCountedPickedUpLayerInterfaceFactory(countedLayerInterfaceFactory);
                layerInterface = PickedUpLayerInterfaceFactoryInterface_getIconLayer(pickedUpLayerInterfaceFactoryInterface);
                y = 40 + (count * this->height);
                AllBinaryLayer_setPosition(layerInterface, widthEdge, y, AllBinaryLayer_getZP(layerInterface));
                AllBinaryLayer_paint(layerInterface, graphics);
                Graphics_setColor(graphics, this->countedTotalStringColor);
                CountedLayerInterfaceFactoryPart_paint(countedLayerInterfaceFactory, graphics);
                charArray = CountedLayerInterfaceFactoryPart_getTotalString(countedLayerInterfaceFactory);
                Graphics_drawChars(graphics, charArray, 0, java_array_length(charArray), widthEdge - CountedLayerInterfaceFactoryPart_getXOffset(countedLayerInterfaceFactory), y, 0);
                count++;
            }
        }
        if (count > 0) {
            Graphics_setColor(graphics, this->countedPartsBorder);
            Graphics_drawRect(graphics, lastWidth - (CountedLayersHudPaintable_XXStringWidth + this->dropSize), 40, CountedLayersHudPaintable_XXStringWidth + this->dropSize, (count * this->height) + 3);
        }
}


void CountedLayersHudPaintable_paintThreed(CountedLayersHudPaintable* this, Graphics* graphics) {
}

