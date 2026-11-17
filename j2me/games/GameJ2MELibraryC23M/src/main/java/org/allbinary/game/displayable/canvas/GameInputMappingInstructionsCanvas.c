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
// #include "javax/microedition/lcdui/Command.h"
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"
#include "org/allbinary/game/paint/ColorFillPaintableFactory.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/draw/DrawStringUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"

typedef struct GameInputMappingInstructionsCanvas GameInputMappingInstructionsCanvas;
struct GameInputMappingInstructionsCanvas {
    GameCommandCanvas base;
    DrawStringUtil* drawStringUtil;
    const char* TITLE;
    const char** instructions;
    ColorFillBasePaintable* colorFillPaintable;
    int32_t anchor;
};

Command* GameInputMappingInstructionsCanvas_DISPLAY;
Command* GameInputMappingInstructionsCanvas_CLOSE;
const char* GameInputMappingInstructionsCanvas_NAME = "GameInputMappingInstructionsCanvas";

GameInputMappingInstructionsCanvas* GameInputMappingInstructionsCanvas_new(CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager);

void GameInputMappingInstructionsCanvas_init(GameInputMappingInstructionsCanvas* this, CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager);
void GameInputMappingInstructionsCanvas_initCommands(GameInputMappingInstructionsCanvas* this, CommandListener* cmdListener);
void GameInputMappingInstructionsCanvas_paint(GameInputMappingInstructionsCanvas* this, Graphics* graphics);

// Static fields with runtime initializers: call this once at startup
void GameInputMappingInstructionsCanvas_staticInit(void) {
    GameInputMappingInstructionsCanvas_DISPLAY = Command_new("Help", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    GameInputMappingInstructionsCanvas_CLOSE = Command_new("Close", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
}

static void GameInputMappingInstructionsCanvas_initFields(GameInputMappingInstructionsCanvas* this) {
    this->drawStringUtil = DrawStringUtil_getInstance();
    this->TITLE = "Input Instructions";
    this->instructions = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ "Add Input Mapping:", "1. Select the desired action by generating a currently defined input for a given action.", "(Example: Press the '1' key to select the Fire action)", "2. Make the newly desired input for the selected action.", "(Example: Press 'f' to add it to the selected action)", "Note: If the input is already mapped to another action then it will not be added. You", "will need to deleted from the other action before adding it to another.", "Warning: Not all keys map for a given platform and show as Unknown.", StringUtil_getInstance()->EMPTY_STRING, "Remove Input Mapping:", "1. Select the desired action by generating a currently defined input for a given action.", "(Example: Press the key '1' to select the Fire action)", "2. Select a mapped input for the selected action.", "(Example: Press the key '1' to select the '1' key input for the selected Fire action)", "3. Press the Delete Key." }) / sizeof(const char*), (const char*[]){ "Add Input Mapping:", "1. Select the desired action by generating a currently defined input for a given action.", "(Example: Press the '1' key to select the Fire action)", "2. Make the newly desired input for the selected action.", "(Example: Press 'f' to add it to the selected action)", "Note: If the input is already mapped to another action then it will not be added. You", "will need to deleted from the other action before adding it to another.", "Warning: Not all keys map for a given platform and show as Unknown.", StringUtil_getInstance()->EMPTY_STRING, "Remove Input Mapping:", "1. Select the desired action by generating a currently defined input for a given action.", "(Example: Press the key '1' to select the Fire action)", "2. Select a mapped input for the selected action.", "(Example: Press the key '1' to select the '1' key input for the selected Fire action)", "3. Press the Delete Key." }));
    
    this->anchor = Anchor_TOP_LEFT;
}


void GameInputMappingInstructionsCanvas_init(GameInputMappingInstructionsCanvas* this, CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        GameCommandCanvas_init(&this->base, commandListener, GameInputMappingInstructionsCanvas_NAME, AllBinaryGameLayerManager_getBackgroundBasicColor(allBinaryGameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(allBinaryGameLayerManager));
        GameInputMappingInstructionsCanvas_initFields(this);
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        this->colorFillPaintable = ColorFillPaintableFactory_getInstance(ColorFillPaintableFactory_getInstance(), AllBinaryGameLayerManager_getBackgroundBasicColor(allBinaryGameLayerManager), false);
}

GameInputMappingInstructionsCanvas* GameInputMappingInstructionsCanvas_new(CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
    GameInputMappingInstructionsCanvas* this = calloc(1, sizeof(GameInputMappingInstructionsCanvas));
    GameInputMappingInstructionsCanvas_init(this, commandListener, allBinaryGameLayerManager);
    return this;
}


void GameInputMappingInstructionsCanvas_initCommands(GameInputMappingInstructionsCanvas* this, CommandListener* cmdListener) {
        GameInputMappingInstructionsCanvas_removeAllCommands(this);
        GameInputMappingInstructionsCanvas_addCommand(this, GameInputMappingInstructionsCanvas_CLOSE);
        GameInputMappingInstructionsCanvas_setCommandListener(this, cmdListener);
}


void GameInputMappingInstructionsCanvas_paint(GameInputMappingInstructionsCanvas* this, Graphics* graphics) {
        JAVA_CALL(this->myFontProcessor, process, graphics);
        ColorFillBasePaintable_paint(this->colorFillPaintable, graphics);
        int32_t halfWidth = JAVA_CALL(this->displayInfo, getLastHalfWidth);
        int32_t beginWidth = (JAVA_CALL(Graphics_getFont(graphics), stringWidth, this->TITLE) >> 1);
        Graphics_setColor(graphics, this->foregroundColor);
        Graphics_drawString(graphics, this->TITLE, halfWidth - beginWidth, this->fontHeight, this->anchor);
        DrawStringUtil_drawCenterStrings(this->drawStringUtil, graphics, this->instructions, JAVA_CALL(this->displayInfo, getLastWidth), this->fontHeight, halfWidth, 3 * this->fontHeight);
        GameCommandCanvas_paint((&this->base), graphics);
}

