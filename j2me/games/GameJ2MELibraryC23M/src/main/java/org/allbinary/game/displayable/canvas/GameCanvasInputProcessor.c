// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/GameCanvasInputProcessor.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyEventSourceInterface.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#include "org/allbinary/game/input/event/DownKeyEventHandler.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#if __has_include("org/allbinary/game/displayable/canvas/PersistentInputMapping.h")
#include "org/allbinary/game/displayable/canvas/PersistentInputMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/PersistentInputMapping.h")
#include "javax/microedition/lcdui/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PersistentInputMapping.h")
#include "org/allbinary/game/input/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PersistentInputMapping.h")
#include "org/allbinary/game/input/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PersistentInputMapping.h")
#include "org/allbinary/game/input/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PersistentInputMapping.h")
#include "org/allbinary/game/input/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PersistentInputMapping.h")
#include "org/allbinary/game/input/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/event/PersistentInputMapping.h")
#include "org/allbinary/game/input/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/event/PersistentInputMapping.h")
#include "org/allbinary/game/input/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/event/PersistentInputMapping.h")
#include "org/allbinary/game/input/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/event/PersistentInputMapping.h")
#include "org/allbinary/game/input/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/event/PersistentInputMapping.h")
#include "org/allbinary/game/input/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/PersistentInputMapping.h")
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/PersistentInputMapping.h")
#include "org/allbinary/logic/communication/log/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/math/PersistentInputMapping.h")
#include "org/allbinary/logic/math/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/PersistentInputMapping.h")
#include "org/allbinary/logic/string/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PlatformInputMappingFactory.h")
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#endif
#if __has_include("org/allbinary/game/input/GameKeyFactory.h")
#include "org/allbinary/game/input/GameKeyFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/displayable/canvas/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("javax/microedition/lcdui/DownGameKeyEventHandlerBase.h")
#include "javax/microedition/lcdui/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/mapping/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/communication/log/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/math/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/math/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/string/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/string/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/DownKeyEventHandlerBase.h")
#include "org/allbinary/game/displayable/canvas/DownKeyEventHandlerBase.h"
#endif
#if __has_include("javax/microedition/lcdui/DownKeyEventHandlerBase.h")
#include "javax/microedition/lcdui/DownKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/DownKeyEventHandlerBase.h")
#include "org/allbinary/game/input/DownKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/DownKeyEventHandlerBase.h")
#include "org/allbinary/game/input/DownKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/DownKeyEventHandlerBase.h")
#include "org/allbinary/game/input/DownKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/DownKeyEventHandlerBase.h")
#include "org/allbinary/game/input/DownKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/DownKeyEventHandlerBase.h")
#include "org/allbinary/game/input/DownKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/DownKeyEventHandlerBase.h")
#include "org/allbinary/game/input/mapping/DownKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/DownKeyEventHandlerBase.h")
#include "org/allbinary/logic/communication/log/DownKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/math/DownKeyEventHandlerBase.h")
#include "org/allbinary/logic/math/DownKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/string/DownKeyEventHandlerBase.h")
#include "org/allbinary/logic/string/DownKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/displayable/canvas/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("javax/microedition/lcdui/UpGameKeyEventHandlerBase.h")
#include "javax/microedition/lcdui/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/mapping/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/communication/log/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/math/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/math/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/string/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/string/UpGameKeyEventHandlerBase.h"
#endif






static void GameCanvasInputProcessor_removeGameKeyEvent(GameCanvasInputProcessor* this, Canvas* canvas, int32_t keyCode, int32_t deviceId, bool repeated);

void GameCanvasInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameCanvasInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameCanvasInputProcessor", "InputProcessor");
    java_register_method("GameCanvasInputProcessor", "keyPressedByDevice", (void*) GameCanvasInputProcessor_keyPressedByDevice);
    java_register_method("GameCanvasInputProcessor", "keyReleasedByDevice", (void*) GameCanvasInputProcessor_keyReleasedByDevice);
    java_register_method("GameCanvasInputProcessor", "removeGameKeyEvent", (void*) GameCanvasInputProcessor_removeGameKeyEvent);
}

static void GameCanvasInputProcessor_initFields(GameCanvasInputProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->downGameKeyEventHandler = DownGameKeyEventHandler_getInstance();
    this->upGameKeyEventHandler = UpGameKeyEventHandler_getInstance();
    this->downKeyEventHandler = DownKeyEventHandler_getInstance();
    this->smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
    this->inputToGameKeyMapping = PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()));
    this->NONE = GameKeyFactory_getInstance()->NONE;
    this->gameKeyEventFactory = GameKeyEventFactory_getInstance();
}


void GameCanvasInputProcessor_init(GameCanvasInputProcessor* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
    GameCanvasInputProcessor_register();
    InputProcessor_init(&this->base);
    GameCanvasInputProcessor_initFields(this);
        this->allBinaryGameCanvas = allBinaryGameCanvas;
        InputToGameKeyMapping_initMethod(this->inputToGameKeyMapping, this->allBinaryGameCanvas);
}

GameCanvasInputProcessor* GameCanvasInputProcessor_new(AllBinaryGameCanvas* allBinaryGameCanvas) {
    GameCanvasInputProcessor* this = java_object_alloc(sizeof(GameCanvasInputProcessor), "GameCanvasInputProcessor");
    GameCanvasInputProcessor_init(this, allBinaryGameCanvas);
    return this;
}


void GameCanvasInputProcessor_keyPressedByDevice(GameCanvasInputProcessor* this, int32_t keyCode, int32_t deviceId) {
        JAVA_TRY {
            GameKey* gameKey = InputToGameKeyMapping_getInstanceForCanvas(this->inputToGameKeyMapping, this->allBinaryGameCanvas, keyCode);
            if (gameKey != this->NONE) {
                GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, this->allBinaryGameCanvas, gameKey);
                DownGameKeyEventHandlerBase_fireEvent(this->downGameKeyEventHandler, gameKeyEvent);
                DownGameKeyEventHandlerBase_fireEvent(DownGameKeyEventHandler_getInstanceForDevice(this->downGameKeyEventHandler, deviceId), gameKeyEvent);
            } else {
                LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), this->base.gameInputStrings->NO_KEY), keyCode)), this, this->base.gameInputStrings->ADD_KEY_EVENT);
            }
            int32_t keyCodeAsInteger = SmallIntegerSingletonFactory_getAtNoThrow(this->smallIntegerSingletonFactory, keyCode);
            DownKeyEventHandlerBase_fireEventI(this->downKeyEventHandler, keyCodeAsInteger);
            DownKeyEventHandlerBase_fireEventI(DownKeyEventHandler_getInstanceForDevice(this->downKeyEventHandler, deviceId), keyCodeAsInteger);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, "Key Event Error", this, this->base.gameInputStrings->ADD_KEY_EVENT, e);
        } JAVA_END_TRY;
}


void GameCanvasInputProcessor_keyReleasedByDevice(GameCanvasInputProcessor* this, Canvas* canvas, int32_t keyCode, int32_t deviceId) {
        GameCanvasInputProcessor_removeGameKeyEvent(this, canvas, keyCode, deviceId, false);
}


static void GameCanvasInputProcessor_removeGameKeyEvent(GameCanvasInputProcessor* this, Canvas* canvas, int32_t keyCode, int32_t deviceId, bool repeated) {
        JAVA_TRY {
            GameKey* gameKey = InputToGameKeyMapping_getInstanceForCanvas(this->inputToGameKeyMapping, canvas, keyCode);
            if (gameKey != this->NONE) {
                GameKeyEventSourceInterface* gameKeyEventSourceInterface = ((GameKeyEventSourceInterface*) canvas);
                GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, gameKeyEventSourceInterface, gameKey);
                UpGameKeyEventHandlerBase_fireEvent(this->upGameKeyEventHandler, gameKeyEvent);
                UpGameKeyEventHandlerBase_fireEvent(UpGameKeyEventHandler_getInstanceForDevice(this->upGameKeyEventHandler, deviceId), gameKeyEvent);
            } else {
                LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), this->base.gameInputStrings->NO_KEY), keyCode)), this, this->base.gameInputStrings->REMOVE_KEY_EVENT);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, "Key Event Error", this, this->base.gameInputStrings->REMOVE_KEY_EVENT, e);
        } JAVA_END_TRY;
}

