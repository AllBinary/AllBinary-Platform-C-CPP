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
// package org.allbinary.game.score

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
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/ColorChangeEvent.h"
#include "org/allbinary/graphics/color/ColorChangeListener.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct HighScoresPaintable HighScoresPaintable;
struct HighScoresPaintable {
    Paintable base;
    ColorChangeListener ColorChangeListener_interface;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    DisplayInfoSingleton* displayInfoSingleton;
    MyFontProcessor* myFontProcessor;
    BasicColor* basicColor;
    HighScores* highScores;
    int32_t anchor;
    int32_t charHeight;
};


HighScoresPaintable* HighScoresPaintable_new(void);

void HighScoresPaintable_init(HighScoresPaintable* this);
void HighScoresPaintable_updateMeasurement(HighScoresPaintable* this, Graphics* graphics);
void HighScoresPaintable_onEvent(HighScoresPaintable* this, AllBinaryEventObject* eventObject);
void HighScoresPaintable_paint(HighScoresPaintable* this, Graphics* graphics);
void HighScoresPaintable_setBasicColorP(HighScoresPaintable* this, BasicColor* basicColor);
BasicColor* HighScoresPaintable_getBasicColorP(HighScoresPaintable* this);
void HighScoresPaintable_setHighScores(HighScoresPaintable* this, HighScores* highScores);

static void HighScoresPaintable_initFields(HighScoresPaintable* this) {
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->basicColor = BasicColorFactory_getInstance()->WHITE;
    this->highScores = NullHighScoresSingletonFactory_getInstance();
    this->anchor = Anchor_TOP_LEFT;
    this->charHeight = 0;
}


void HighScoresPaintable_init(HighScoresPaintable* this) {
    Paintable_init(&this->base);
    HighScoresPaintable_initFields(this);
}

HighScoresPaintable* HighScoresPaintable_new(void) {
    HighScoresPaintable* this = calloc(1, sizeof(HighScoresPaintable));
    HighScoresPaintable_init(this);
    return this;
}


void HighScoresPaintable_updateMeasurement(HighScoresPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->charHeight = Font_getHeight(font);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void HighScoresPaintable_onEvent(HighScoresPaintable* this, AllBinaryEventObject* eventObject) {
        ColorChangeEvent* colorChangeEvent = ((ColorChangeEvent*) eventObject);
        this->basicColor = ColorChangeEvent_getBasicColorP(colorChangeEvent);
}


void HighScoresPaintable_paint(HighScoresPaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        int32_t width = DisplayInfoSingleton_getLastWidth(this->displayInfoSingleton);
        int32_t height = DisplayInfoSingleton_getLastHeight(this->displayInfoSingleton);
        Graphics_setColor(graphics, JAVA_CALL(HighScoresPaintable_getBasicColorP(this), intValue));
        const char* heading = HighScores_getHeading(this->highScores);
        int32_t topScoresWidth = (JAVA_CALL(Graphics_getFont(graphics), stringWidth, heading) >> 1);
        int32_t charHeight = this->charHeight;
        Graphics_drawString(graphics, heading, (width >> 1) - topScoresWidth, charHeight, this->anchor);
        Graphics_drawString(graphics, HighScores_getColumnOneHeading(this->highScores), 10, charHeight * 3, this->anchor);
        const char* columnTwoHeading = HighScores_getColumnTwoHeading(this->highScores);
        int32_t columnTwoHeadingWidth = JAVA_CALL(Graphics_getFont(graphics), stringWidth, columnTwoHeading);
        Graphics_drawString(graphics, columnTwoHeading, width - 10 - columnTwoHeadingWidth, charHeight * 3, this->anchor);
        int32_t index = 4;
        int32_t largestSecondColumnWidth = columnTwoHeadingWidth;
        BasicArrayList* list = HighScores_getList(this->highScores);
        int32_t size = BasicArrayList_size(list);
        int32_t vectorIndex = 0;
        HighScore* highScore = nullptr;
        while (vectorIndex < size && charHeight * index < height - (charHeight * 2)) {
            highScore = ((HighScore*) list->objectArray[vectorIndex]);
            int32_t nextScoreWidth = JAVA_CALL(Graphics_getFont(graphics), stringWidth, HighScore_getScoreString(highScore));
            if (nextScoreWidth > largestSecondColumnWidth) {
                largestSecondColumnWidth = nextScoreWidth;
            }
            vectorIndex++;
        }
        vectorIndex = 0;
        while (vectorIndex < size && charHeight * index < height - (charHeight * 2)) {
            highScore = ((HighScore*) list->objectArray[vectorIndex]);
            Graphics_drawString(graphics, HighScore_getName(highScore), 10, charHeight * index, this->anchor);
            Graphics_drawString(graphics, HighScore_getScoreString(highScore), width - 10 - largestSecondColumnWidth, charHeight * index, this->anchor);
            index++;
            vectorIndex++;
        }
}


void HighScoresPaintable_setBasicColorP(HighScoresPaintable* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}


BasicColor* HighScoresPaintable_getBasicColorP(HighScoresPaintable* this) {
        return this->basicColor;
}


void HighScoresPaintable_setHighScores(HighScoresPaintable* this, HighScores* highScores) {
        this->highScores = highScores;
}

