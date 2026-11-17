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
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/game/input/mapping/InputMappingInterface.h"
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"
#include "org/allbinary/game/paint/ColorFillPaintableFactory.h"
#include "org/allbinary/game/paint/help/HelpPaintable.h"
#include "org/allbinary/game/paint/help/InputMappingHelpPaintable.h"
#include "org/allbinary/graphics/paint/ProcessPaintable.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"

typedef struct GameInputMappingCanvas GameInputMappingCanvas;
struct GameInputMappingCanvas {
    GameCommandCanvas base;
    InputMappingInterface InputMappingInterface_interface;
    ProcessPaintable* paintable;
    InputMappingHelpPaintable* helpPaintable;
    ColorFillBasePaintable* colorFillPaintable;
    PersistentInputMapping* inputMapping;
    GameKey* NONE;
    AbeClientInformationInterface* abeClientInformation;
    GameKey* selectedGameKey;
    Input* selectedInput;
    InputFactory* inputFactory;
};

const char* GameInputMappingCanvas_NAME = "GameInputMappingCanvas";
Command* GameInputMappingCanvas_DISPLAY;
Command* GameInputMappingCanvas_DEFAULT;

GameInputMappingCanvas* GameInputMappingCanvas_new(AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, HelpPaintable* helpPaintable);

void GameInputMappingCanvas_init(GameInputMappingCanvas* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, HelpPaintable* helpPaintable);
void GameInputMappingCanvas_close(GameInputMappingCanvas* this);
void GameInputMappingCanvas_initCommands(GameInputMappingCanvas* this, CommandListener* cmdListener);
void GameInputMappingCanvas_keyPressed(GameInputMappingCanvas* this, int32_t keyCode);
void GameInputMappingCanvas_keyReleased(GameInputMappingCanvas* this, int32_t keyCode);
void GameInputMappingCanvas_keyRepeated(GameInputMappingCanvas* this, int32_t keyCode);
void GameInputMappingCanvas_keyPressedByDevice(GameInputMappingCanvas* this, int32_t keyCode, int32_t deviceId);
static void GameInputMappingCanvas_addGameKey(GameInputMappingCanvas* this, int32_t keyCode, bool repeated);
void GameInputMappingCanvas_processInputMapping(GameInputMappingCanvas* this, GameKey* gameKey, Input* input);
static void GameInputMappingCanvas_setSelectedAction(GameInputMappingCanvas* this, GameKey* gameKey);
static void GameInputMappingCanvas_gameActionCrud(GameInputMappingCanvas* this, GameKey* gameKey, Input* input);
static void GameInputMappingCanvas_addNewMapping(GameInputMappingCanvas* this, GameKey* gameKey, Input* input);
static void GameInputMappingCanvas_deleteCurrentMapping(GameInputMappingCanvas* this);
void GameInputMappingCanvas_setDefault(GameInputMappingCanvas* this);
void GameInputMappingCanvas_update(GameInputMappingCanvas* this);
void GameInputMappingCanvas_paint(GameInputMappingCanvas* this, Graphics* graphics);

// Static fields with runtime initializers: call this once at startup
void GameInputMappingCanvas_staticInit(void) {
    GameInputMappingCanvas_DISPLAY = Command_new("Controls", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 2);
    GameInputMappingCanvas_DEFAULT = Command_new("Default", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 2);
}

static void GameInputMappingCanvas_initFields(GameInputMappingCanvas* this) {
    
    
    
    
    this->NONE = GameKeyFactory_getInstance()->NONE;
    
    this->selectedGameKey = this->NONE;
    this->selectedInput = this->NONE;
    this->inputFactory = InputFactory_getInstance();
}


void GameInputMappingCanvas_init(GameInputMappingCanvas* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, HelpPaintable* helpPaintable) {
        GameCommandCanvas_init(&this->base, commandListener, GameInputMappingCanvas_NAME, AllBinaryGameLayerManager_getBackgroundBasicColor(allBinaryGameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(allBinaryGameLayerManager));
        GameInputMappingCanvas_initFields(this);
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        if (helpPaintable == nullptr) {
            java_throw(java_exception_new("Exception", "Help Paintable Exception"));
        }
        this->abeClientInformation = abeClientInformation;
        this->helpPaintable = ((InputMappingHelpPaintable*) helpPaintable);
        this->inputMapping = PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance());
        this->paintable = ProcessPaintable_new();
        this->colorFillPaintable = ColorFillPaintableFactory_getInstance(ColorFillPaintableFactory_getInstance(), AllBinaryGameLayerManager_getBackgroundBasicColor(allBinaryGameLayerManager), false);
}

GameInputMappingCanvas* GameInputMappingCanvas_new(AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, HelpPaintable* helpPaintable) {
    GameInputMappingCanvas* this = calloc(1, sizeof(GameInputMappingCanvas));
    GameInputMappingCanvas_init(this, abeClientInformation, commandListener, allBinaryGameLayerManager, helpPaintable);
    return this;
}


// throws Exception
void GameInputMappingCanvas_close(GameInputMappingCanvas* this) {
        GameCommandCanvas_close((&this->base));
        ProcessPaintable_process(this->paintable);
        this->selectedGameKey = this->NONE;
        this->selectedInput = this->NONE;
        GameInputMappingCanvas_update(this);
}


void GameInputMappingCanvas_initCommands(GameInputMappingCanvas* this, CommandListener* cmdListener) {
        GameInputMappingCanvas_removeAllCommands(this);
        GameInputMappingCanvas_addCommand(this, GameCommandsFactory_getInstance()->CLOSE_AND_SHOW_GAME_CANVAS);
        GameInputMappingCanvas_addCommand(this, GameInputMappingCanvas_DEFAULT);
        GameInputMappingCanvas_addCommand(this, GameInputMappingInstructionsCanvas_DISPLAY);
        GameInputMappingCanvas_setCommandListener(this, cmdListener);
}


void GameInputMappingCanvas_keyPressed(GameInputMappingCanvas* this, int32_t keyCode) {
        GameInputMappingCanvas_keyPressedByDevice(this, keyCode, 0);
}


void GameInputMappingCanvas_keyReleased(GameInputMappingCanvas* this, int32_t keyCode) {
        GameInputMappingCanvas_keyReleasedByDevice(this, keyCode, 0);
}


void GameInputMappingCanvas_keyRepeated(GameInputMappingCanvas* this, int32_t keyCode) {
        GameInputMappingCanvas_keyRepeatedByDevice(this, keyCode, 0);
}


void GameInputMappingCanvas_keyPressedByDevice(GameInputMappingCanvas* this, int32_t keyCode, int32_t deviceId) {
        GameInputMappingCanvas_addGameKey(this, keyCode, false);
        GameCommandCanvas_keyPressedByDevice((&this->base), keyCode, 0);
}


static void GameInputMappingCanvas_addGameKey(GameInputMappingCanvas* this, int32_t keyCode, bool repeated) {
        JAVA_TRY {
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Raw Device Key Code: "), append, Integer_toHexString(keyCode)), toString), this, this->gameInputStrings->ADD_KEY_EVENT);
            GameKey* gameKey = JAVA_CALL(this->inputToGameKeyMapping, getInstanceForCanvas, this, keyCode);
            Input* input = InputFactory_getInstanceById(this->inputFactory, keyCode);
            GameInputMappingCanvas_processInputMapping(this, gameKey, input);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, "Key Event Error", this, this->gameInputStrings->ADD_KEY_EVENT, e);
        } JAVA_END_TRY;
}


// throws Exception
void GameInputMappingCanvas_processInputMapping(GameInputMappingCanvas* this, GameKey* gameKey, Input* input) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Start Passed GameKey: ");
        StringMaker_append(stringBuffer, JAVA_CALL(this->stringUtil, toString, gameKey));
        StringMaker_append(stringBuffer, " Input: ");
        StringMaker_append(stringBuffer, JAVA_CALL(this->stringUtil, toString, input));
        JAVA_CALL(this->logUtil, putF, StringMaker_toString(stringBuffer), this, this->commonStrings->PROCESS);
        if (this->selectedGameKey != this->NONE) {
            GameInputMappingCanvas_gameActionCrud(this, gameKey, input);
        } else {
            GameInputMappingCanvas_setSelectedAction(this, gameKey);
        }
}


static void GameInputMappingCanvas_setSelectedAction(GameInputMappingCanvas* this, GameKey* gameKey) {
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Selected GameKey: "), append, JAVA_CALL(this->stringUtil, toString, gameKey)), toString), this, "setSelectedAction");
        this->selectedGameKey = gameKey;
        this->selectedInput = this->NONE;
        InputMappingHelpPaintable_update(this->helpPaintable, this->selectedGameKey, this->selectedInput);
        JAVA_CALL(this->repaintBehavior, onChangeRepaint, this);
}


// throws Exception
static void GameInputMappingCanvas_gameActionCrud(GameInputMappingCanvas* this, GameKey* gameKey, Input* input) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Start GameKey: ");
        StringMaker_append(stringBuffer, JAVA_CALL(this->stringUtil, toString, this->selectedGameKey));
        StringMaker_append(stringBuffer, " Input: ");
        StringMaker_append(stringBuffer, JAVA_CALL(this->stringUtil, toString, this->selectedInput));
        JAVA_CALL(this->logUtil, putF, StringMaker_toString(stringBuffer), this, "gameActionCrud");
        if (this->selectedInput == this->NONE) {
            BasicArrayList* list = JAVA_CALL(PersistentInputMapping_getInputMapping(this->inputMapping), getMappedInput, this->selectedGameKey);
            bool isInputAlreadyMappedToSelectedAction = BasicArrayList_contains(list, input);
            if (isInputAlreadyMappedToSelectedAction) {
                JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Already Mapped Input: "), append, JAVA_CALL(this->stringUtil, toString, input)), toString), this, "gameActionCrud");
                this->selectedInput = input;
                InputMappingHelpPaintable_update(this->helpPaintable, this->selectedGameKey, this->selectedInput);
                JAVA_CALL(this->repaintBehavior, onChangeRepaint, this);
            } else {
                GameInputMappingCanvas_addNewMapping(this, gameKey, input);
            }
        } else if (PersistentInputMapping_isDelete(this->inputMapping, input)) {
            GameInputMappingCanvas_deleteCurrentMapping(this);
        } else {
            GameInputMappingCanvas_setSelectedAction(this, gameKey);
        }
}


// throws Exception
static void GameInputMappingCanvas_addNewMapping(GameInputMappingCanvas* this, GameKey* gameKey, Input* input) {
        const char* METHOD_NAME = "addNewMapping";
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, METHOD_NAME);
        bool isInputAlreadyMapped = JAVA_CALL(PersistentInputMapping_getInputMapping(this->inputMapping), isMapped, input);
        if (!isInputAlreadyMapped && !PersistentInputMapping_isSystemInput(this->inputMapping, input)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Add Key Mapping : GameKey: ");
            StringMaker_append(stringBuffer, JAVA_CALL(this->stringUtil, toString, this->selectedGameKey));
            StringMaker_append(stringBuffer, " Input: ");
            StringMaker_append(stringBuffer, JAVA_CALL(this->stringUtil, toString, this->selectedInput));
            JAVA_CALL(this->logUtil, putF, StringMaker_toString(stringBuffer), this, METHOD_NAME);
            JAVA_CALL(PersistentInputMapping_getInputMapping(this->inputMapping), add, this->selectedGameKey, input);
            this->selectedInput = input;
            GameInputMappingCanvas_update(this);
        } else {
            JAVA_CALL(this->logUtil, putF, "Unable to add Mapping since one already exists or is MENU, HOME, or BACK key and setting selected action to what it is already mapped to", this, METHOD_NAME);
            GameInputMappingCanvas_setSelectedAction(this, gameKey);
        }
}


// throws Exception
static void GameInputMappingCanvas_deleteCurrentMapping(GameInputMappingCanvas* this) {
        const char* METHOD_NAME = "deleteCurrentMapping";
        BasicArrayList* list = JAVA_CALL(PersistentInputMapping_getInputMapping(this->inputMapping), getMappedInput, this->selectedGameKey);
        if (BasicArrayList_size(list) > 1) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Start GameKey: ");
            StringMaker_append(stringBuffer, "Remove Key Mapping: GameKey: ");
            StringMaker_append(stringBuffer, JAVA_CALL(this->stringUtil, toString, this->selectedGameKey));
            StringMaker_append(stringBuffer, " Input: ");
            StringMaker_append(stringBuffer, JAVA_CALL(this->stringUtil, toString, this->selectedInput));
            JAVA_CALL(this->logUtil, putF, StringMaker_toString(stringBuffer), this, METHOD_NAME);
            JAVA_CALL(PersistentInputMapping_getInputMapping(this->inputMapping), remove, this->selectedGameKey, this->selectedInput);
            this->selectedInput = this->NONE;
            GameInputMappingCanvas_update(this);
        } else {
            JAVA_CALL(this->logUtil, putF, "Can't Remove Last Key Mapping", this, METHOD_NAME);
        }
}


// throws Exception
void GameInputMappingCanvas_setDefault(GameInputMappingCanvas* this) {
        PersistentInputMapping_setDefault(this->inputMapping, this->abeClientInformation);
        InputMappingHelpPaintable_update(this->helpPaintable, this->NONE, this->NONE);
        JAVA_CALL(this->repaintBehavior, onChangeRepaint, this);
}


// throws Exception
void GameInputMappingCanvas_update(GameInputMappingCanvas* this) {
        PersistentInputMapping_update(this->inputMapping, this->abeClientInformation);
        InputMappingHelpPaintable_update(this->helpPaintable, this->selectedGameKey, this->selectedInput);
        JAVA_CALL(this->repaintBehavior, onChangeRepaint, this);
}


void GameInputMappingCanvas_paint(GameInputMappingCanvas* this, Graphics* graphics) {
        ColorFillBasePaintable_paint(this->colorFillPaintable, graphics);
        InputMappingHelpPaintable_paint(this->helpPaintable, graphics);
        ProcessPaintable_paint(this->paintable, graphics);
        GameCommandCanvas_paint((&this->base), graphics);
}

