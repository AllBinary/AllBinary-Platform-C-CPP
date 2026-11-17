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
// #include "javax/microedition/lcdui/Canvas.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/input/event/GameKeyEventHandler.h"
#include "org/allbinary/game/input/event/GameKeyEventUtil.h"
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/score/HighScoresCanvasInputProcessor.h"

typedef struct HighScoresCanvasLevelChangeInputProcessor HighScoresCanvasLevelChangeInputProcessor;
struct HighScoresCanvasLevelChangeInputProcessor {
    HighScoresCanvasInputProcessor base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    DisplayInfoSingleton* displayInfoSingleton;
    const char* INSTRUCTIONS;
    MyFontProcessor* myFontProcessor;
    int32_t anchor;
    int32_t fontHeight;
};


HighScoresCanvasLevelChangeInputProcessor* HighScoresCanvasLevelChangeInputProcessor_new(HighScoresCanvas* highScoresCanvas);

void HighScoresCanvasLevelChangeInputProcessor_init(HighScoresCanvasLevelChangeInputProcessor* this, HighScoresCanvas* highScoresCanvas);
void HighScoresCanvasLevelChangeInputProcessor_updateMeasurement(HighScoresCanvasLevelChangeInputProcessor* this, Graphics* graphics);
void HighScoresCanvasLevelChangeInputProcessor_open(HighScoresCanvasLevelChangeInputProcessor* this);
void HighScoresCanvasLevelChangeInputProcessor_close(HighScoresCanvasLevelChangeInputProcessor* this);
void HighScoresCanvasLevelChangeInputProcessor_update(HighScoresCanvasLevelChangeInputProcessor* this);
void HighScoresCanvasLevelChangeInputProcessor_paint(HighScoresCanvasLevelChangeInputProcessor* this, Graphics* graphics);

static void HighScoresCanvasLevelChangeInputProcessor_initFields(HighScoresCanvasLevelChangeInputProcessor* this) {
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
    this->INSTRUCTIONS = "(Right = Next Track, Left = Previous Track)";
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->anchor = Anchor_TOP_LEFT;
    this->fontHeight = 0;
}


void HighScoresCanvasLevelChangeInputProcessor_init(HighScoresCanvasLevelChangeInputProcessor* this, HighScoresCanvas* highScoresCanvas) {
        HighScoresCanvasInputProcessor_init(&this->base, highScoresCanvas);
        HighScoresCanvasLevelChangeInputProcessor_initFields(this);
}

HighScoresCanvasLevelChangeInputProcessor* HighScoresCanvasLevelChangeInputProcessor_new(HighScoresCanvas* highScoresCanvas) {
    HighScoresCanvasLevelChangeInputProcessor* this = calloc(1, sizeof(HighScoresCanvasLevelChangeInputProcessor));
    HighScoresCanvasLevelChangeInputProcessor_init(this, highScoresCanvas);
    return this;
}


void HighScoresCanvasLevelChangeInputProcessor_updateMeasurement(HighScoresCanvasLevelChangeInputProcessor* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->fontHeight = Font_getHeight(font);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void HighScoresCanvasLevelChangeInputProcessor_open(HighScoresCanvasLevelChangeInputProcessor* this) {
        GameKeyEventHandler_addListener(GameKeyEventHandler_getInstance(), this);
}


void HighScoresCanvasLevelChangeInputProcessor_close(HighScoresCanvasLevelChangeInputProcessor* this) {
        GameKeyEventHandler_removeListener(GameKeyEventHandler_getInstance(), this);
}


// synchronized
void HighScoresCanvasLevelChangeInputProcessor_update(HighScoresCanvasLevelChangeInputProcessor* this) {
        BasicArrayList* list = HighScoresCanvasLevelChangeInputProcessor_getGameKeyEventList(this);
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            Any* anyType = list->objectArray[index];
            int32_t key = GameKeyEventUtil_getKey(anyType);
            if (key == Canvas_RIGHT) {
                JAVA_CALL(JAVA_CALL(HighScoresCanvasLevelChangeInputProcessor_getHighScoresCanvas(this), getGameInfo), nextGameLevel);
            } else if (key == Canvas_LEFT) {
                JAVA_CALL(JAVA_CALL(HighScoresCanvasLevelChangeInputProcessor_getHighScoresCanvas(this), getGameInfo), previousGameLevel);
            }
            JAVA_CALL(HighScoresCanvasLevelChangeInputProcessor_getHighScoresCanvas(this), executeUpdate);
        }
        BasicArrayList_clear(list);
}


void HighScoresCanvasLevelChangeInputProcessor_paint(HighScoresCanvasLevelChangeInputProcessor* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        int32_t width = DisplayInfoSingleton_getLastWidth(this->displayInfoSingleton);
        int32_t topScoresWidth = (JAVA_CALL(Graphics_getFont(graphics), stringWidth, this->INSTRUCTIONS) >> 1);
        Graphics_drawString(graphics, this->INSTRUCTIONS, (width >> 1) - topScoresWidth, this->fontHeight * 2, this->anchor);
}

