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
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/NullCommandListener.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/displayable/RepaintBehavior.h"
#include "org/allbinary/game/input/GameInputStrings.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/game/input/event/GameKeyEventHandler.h"
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h"
#include "org/allbinary/graphics/displayable/screen/ScreenRepaintProcessorFactory.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/form/CommandCurrentSelectionFormFactory.h"
#include "org/allbinary/graphics/form/FormPaintable.h"
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#include "org/allbinary/graphics/form/PaintableForm.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/form/ScrollSelectionFormNoneFactory.h"
#include "org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/item/validation/AllCommandsVisitor.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/displayable/canvas/MenuListener.h"

typedef struct GameCommandCanvas GameCommandCanvas;
struct GameCommandCanvas {
    MyCanvas base;
    MenuListener MenuListener_interface;
    DisplayChangeEventListener DisplayChangeEventListener_interface;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    Processor* repaintProcessor;
    GameInputStrings* gameInputStrings;
    BasicColor* foregroundBasicColor;
    BasicColor* backgroundBasicColor;
    InputToGameKeyMapping* inputToGameKeyMapping;
    GameKeyFactory* gameKeyFactory;
    GameKeyEventFactory* gameKeyEventFactory;
    DownGameKeyEventHandler* downGameKeyEventHandler;
    UpGameKeyEventHandler* upGameKeyEventHandler;
    RepaintBehavior* repaintBehavior;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    int32_t foregroundColor;
    int32_t backgroundColor;
    BasicMenuInputProcessor* menuInputProcessor;
    Paintable* menuPaintable;
    PaintableForm* menuForm;
    bool isSingleKeyRepeatableProcessing;
    int32_t fontHeight;
};

static constexpr int32_t GameCommandCanvas_id = 0;

GameCommandCanvas* GameCommandCanvas_new(CommandListener* cmdListener, const char* name, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void GameCommandCanvas_init(GameCommandCanvas* this, CommandListener* cmdListener, const char* name, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
void GameCommandCanvas_updateMeasurement(GameCommandCanvas* this, Graphics* graphics);
void GameCommandCanvas_onEvent(GameCommandCanvas* this, AllBinaryEventObject* eventObject);
void GameCommandCanvas_onDisplayChangeEvent(GameCommandCanvas* this, DisplayChangeEvent* displayChangeEvent);
void GameCommandCanvas_initCommands(GameCommandCanvas* this, CommandListener* cmdListener);
void GameCommandCanvas_initMenu(GameCommandCanvas* this);
ScrollSelectionForm* GameCommandCanvas_createForm(GameCommandCanvas* this);
Rectangle* GameCommandCanvas_createRectangle(GameCommandCanvas* this, int32_t size);
void GameCommandCanvas_open(GameCommandCanvas* this);
void GameCommandCanvas_close(GameCommandCanvas* this);
void GameCommandCanvas_update(GameCommandCanvas* this);
int32_t GameCommandCanvas_getSourceId(GameCommandCanvas* this);
void GameCommandCanvas_keyPressed(GameCommandCanvas* this, int32_t keyCode);
void GameCommandCanvas_keyReleased(GameCommandCanvas* this, int32_t keyCode);
void GameCommandCanvas_keyRepeated(GameCommandCanvas* this, int32_t keyCode);
void GameCommandCanvas_keyPressedByDevice(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId);
void GameCommandCanvas_keyReleasedByDevice(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId);
void GameCommandCanvas_keyRepeatedByDevice(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId);
static void GameCommandCanvas_addGameKeyEvent(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId, bool repeated);
static void GameCommandCanvas_removeGameKeyEvent(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId, bool repeated);
void GameCommandCanvas_paint(GameCommandCanvas* this, Graphics* graphics);
static void GameCommandCanvas_setMenuInputProcessor(GameCommandCanvas* this, BasicMenuInputProcessor* menuInputProcessor);
BasicMenuInputProcessor* GameCommandCanvas_getMenuInputProcessor(GameCommandCanvas* this);

static void GameCommandCanvas_initFields(GameCommandCanvas* this) {
    this->repaintProcessor = ScreenRepaintProcessorFactory_create(ScreenRepaintProcessorFactory_getInstance(), this);
    this->gameInputStrings = GameInputStrings_getInstance();
    
    
    this->inputToGameKeyMapping = JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping);
    this->gameKeyFactory = GameKeyFactory_getInstance();
    this->gameKeyEventFactory = GameKeyEventFactory_getInstance();
    this->downGameKeyEventHandler = DownGameKeyEventHandler_getInstance();
    this->upGameKeyEventHandler = UpGameKeyEventHandler_getInstance();
    
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    
    
    this->menuInputProcessor = NoMenuInputProcessor_getInstance();
    this->menuPaintable = NullPaintable_getInstance();
    this->menuForm = PaintableForm_getNullPaintableForm();
    this->isSingleKeyRepeatableProcessing = Features_isFeature(Features_getInstance(), InputFeatureFactory_getInstance()->SINGLE_KEY_REPEAT_PRESS);
    this->fontHeight = 0;
}


void GameCommandCanvas_init(GameCommandCanvas* this, CommandListener* cmdListener, const char* name, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        MyCanvas_init(&this->base, name, CanvasStrings_getInstance()->EMPTY_CHILD_NAME_LIST);
        GameCommandCanvas_initFields(this);
        this->repaintBehavior = RepaintBehavior_getInstance();
        this->foregroundBasicColor = foregroundBasicColor;
        this->backgroundBasicColor = backgroundBasicColor;
        this->foregroundColor = BasicColor_intValue(this->foregroundBasicColor);
        this->backgroundColor = BasicColor_intValue(this->backgroundBasicColor);
        GameCommandCanvas_initCommands(this, cmdListener);
        if (cmdListener != NullCommandListener_NULL_COMMAND_LISTENER) {
            JAVA_TRY {
                GameCommandCanvas_initMenu(this);
                Processor_process(this->repaintProcessor);
            } JAVA_CATCH(Exception, e) {
                java_throw(java_exception_new("RuntimeException", ""));
            } JAVA_END_TRY;
        }
}

GameCommandCanvas* GameCommandCanvas_new(CommandListener* cmdListener, const char* name, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    GameCommandCanvas* this = calloc(1, sizeof(GameCommandCanvas));
    GameCommandCanvas_init(this, cmdListener, name, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void GameCommandCanvas_updateMeasurement(GameCommandCanvas* this, Graphics* graphics) {
        JAVA_TRY {
            Font* font = Graphics_getFont(graphics);
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->START), append, this->canvasStrings->FD_WIDTH), appendint, ((int32_t) MyFontProcessor_defaultCharWidth(font))), append, this->canvasStrings->FD_HEIGHT), appendint, ((int32_t) Font_getHeight(font))), toString), this, this->canvasStrings->UPDATE_MEASUREMENT);
            this->fontHeight = Font_getHeight(font);
            Rectangle* rectangle = GameCommandCanvas_createRectangle(this, PaintableForm_size(this->menuForm));
            PaintableForm_init(this->menuForm, rectangle, FormTypeFactory_getInstance()->VERTICAL_CENTER_FORM);
            GameCommandCanvas_update(this);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->canvasStrings->ON_DISPLAY_CHANGE_EVENT, e);
        } JAVA_END_TRY;
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void GameCommandCanvas_onEvent(GameCommandCanvas* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void GameCommandCanvas_onDisplayChangeEvent(GameCommandCanvas* this, DisplayChangeEvent* displayChangeEvent) {
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->START), append, DisplayInfoSingleton_toString(DisplayInfoSingleton_getInstance())), toString), this, this->canvasStrings->ON_DISPLAY_CHANGE_EVENT);
        this->myFontProcessor = this->updateMyFontProcessor;
}


void GameCommandCanvas_initCommands(GameCommandCanvas* this, CommandListener* cmdListener) {
        GameCommandCanvas_removeAllCommands(this);
        GameCommandCanvas_addCommand(this, GameCommandsFactory_getInstance()->CLOSE_AND_SHOW_GAME_CANVAS);
        GameCommandCanvas_setCommandListener(this, cmdListener);
}


// throws Exception
void GameCommandCanvas_initMenu(GameCommandCanvas* this) {
        ScrollSelectionForm* form = GameCommandCanvas_createForm(this);
        this->menuForm = form;
        if (form != ScrollSelectionFormNoneFactory_getInstance()) {
            GameCommandCanvas_setMenuInputProcessor(this, ImmediateCommandFormInputProcessor_new(BasicArrayListD_new(), -1, this, form));
            this->menuPaintable = FormPaintable_new(form);
        }
        RepaintBehavior_onChangeRepaint(this->repaintBehavior, this);
}


// throws Exception
ScrollSelectionForm* GameCommandCanvas_createForm(GameCommandCanvas* this) {
        ABCustomItem** items = CommandTextItemArrayFactory_getInstance(CommandTextItemArrayFactory_new(AllCommandsVisitor_new()), GameCommandCanvas_getCommandStack(this), this->backgroundBasicColor, this->foregroundBasicColor);
        Rectangle* rectangle = GameCommandCanvas_createRectangle(this, java_array_length(items));
        return CommandCurrentSelectionFormFactory_getInstance(StringUtil_getInstance()->EMPTY_STRING, items, rectangle, FormTypeFactory_getInstance()->VERTICAL_CENTER_FORM, 15, false, this->backgroundBasicColor, this->foregroundBasicColor);
}


Rectangle* GameCommandCanvas_createRectangle(GameCommandCanvas* this, int32_t size) {
        int32_t height = size * this->fontHeight;
        int32_t startY = (JAVA_CALL(this->displayInfo, getLastHeight) * 2 / 3) - height;
        PointFactory* pointFactory = PointFactory_getInstance();
        Rectangle* rectangle = Rectangle_new(PointFactory_createXY(pointFactory, 30, startY), JAVA_CALL(this->displayInfo, getLastWidth) - 30, startY);
        return rectangle;
}


void GameCommandCanvas_open(GameCommandCanvas* this) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, "open");
        BasicMotionGesturesHandler_addListenerInterface(BasicMotionGesturesHandler_getInstance(), GameCommandCanvas_getMenuInputProcessor(this));
        GameKeyEventHandler_addListener(GameKeyEventHandler_getInstance(), GameCommandCanvas_getMenuInputProcessor(this));
        DisplayChangeEventHandler_addListenerInterface(DisplayChangeEventHandler_getInstance(), this);
}


// throws Exception
void GameCommandCanvas_close(GameCommandCanvas* this) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->CLOSE);
        BasicMotionGesturesHandler_removeListener(BasicMotionGesturesHandler_getInstance(), GameCommandCanvas_getMenuInputProcessor(this));
        GameKeyEventHandler_removeListener(GameKeyEventHandler_getInstance(), GameCommandCanvas_getMenuInputProcessor(this));
        DisplayChangeEventHandler_removeListener(DisplayChangeEventHandler_getInstance(), this);
}


// throws Exception
void GameCommandCanvas_update(GameCommandCanvas* this) {
        Processor_process(this->repaintProcessor);
}


int32_t GameCommandCanvas_getSourceId(GameCommandCanvas* this) {
        return GameCommandCanvas_id;
}


void GameCommandCanvas_keyPressed(GameCommandCanvas* this, int32_t keyCode) {
        GameCommandCanvas_keyPressedByDevice(this, keyCode, 0);
}


void GameCommandCanvas_keyReleased(GameCommandCanvas* this, int32_t keyCode) {
        GameCommandCanvas_keyReleasedByDevice(this, keyCode, 0);
}


void GameCommandCanvas_keyRepeated(GameCommandCanvas* this, int32_t keyCode) {
        GameCommandCanvas_keyRepeatedByDevice(this, keyCode, 0);
}


void GameCommandCanvas_keyPressedByDevice(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId) {
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonSeps_getInstance()->SPACE), appendint, keyCode), toString), this, this->gameInputStrings->KEY_PRESSED);
        GameCommandCanvas_addGameKeyEvent(this, keyCode, 0, false);
}


void GameCommandCanvas_keyReleasedByDevice(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId) {
        GameCommandCanvas_removeGameKeyEvent(this, keyCode, deviceId, false);
}


void GameCommandCanvas_keyRepeatedByDevice(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId) {
        if (this->isSingleKeyRepeatableProcessing) {
            GameCommandCanvas_addGameKeyEvent(this, keyCode, deviceId, true);
        }
}


static void GameCommandCanvas_addGameKeyEvent(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId, bool repeated) {
        JAVA_TRY {
            GameKey* gameKey = InputToGameKeyMapping_getInstanceForCanvas(this->inputToGameKeyMapping, this, keyCode);
            if (gameKey != this->gameKeyFactory->NONE) {
                GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, this, gameKey);
                DownGameKeyEventHandler_fireEvent(this->downGameKeyEventHandler, gameKeyEvent);
                JAVA_CALL(DownGameKeyEventHandler_getInstanceForDevice(this->downGameKeyEventHandler, deviceId), fireEvent, gameKeyEvent);
            } else {
                JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->gameInputStrings->NO_KEY), appendint, keyCode), toString), this, this->gameInputStrings->ADD_KEY_EVENT);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, "Key Event Error", this, this->gameInputStrings->ADD_KEY_EVENT, e);
        } JAVA_END_TRY;
}


static void GameCommandCanvas_removeGameKeyEvent(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId, bool repeated) {
        JAVA_TRY {
            GameKey* gameKey = InputToGameKeyMapping_getInstanceForCanvas(this->inputToGameKeyMapping, this, keyCode);
            if (gameKey != this->gameKeyFactory->NONE) {
                GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, this, gameKey);
                UpGameKeyEventHandler_fireEvent(this->upGameKeyEventHandler, gameKeyEvent);
                JAVA_CALL(UpGameKeyEventHandler_getInstanceForDevice(this->upGameKeyEventHandler, deviceId), fireEvent, gameKeyEvent);
            } else {
                JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->gameInputStrings->NO_KEY), appendint, keyCode), toString), this, this->gameInputStrings->REMOVE_KEY_EVENT);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, "Key Event Error", this, this->gameInputStrings->REMOVE_KEY_EVENT, e);
        } JAVA_END_TRY;
}


void GameCommandCanvas_paint(GameCommandCanvas* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Paintable_paint(this->menuPaintable, graphics);
        RepaintBehavior_repaint(this->repaintBehavior, this);
}


static void GameCommandCanvas_setMenuInputProcessor(GameCommandCanvas* this, BasicMenuInputProcessor* menuInputProcessor) {
        this->menuInputProcessor = menuInputProcessor;
}


BasicMenuInputProcessor* GameCommandCanvas_getMenuInputProcessor(GameCommandCanvas* this) {
        return this->menuInputProcessor;
}

