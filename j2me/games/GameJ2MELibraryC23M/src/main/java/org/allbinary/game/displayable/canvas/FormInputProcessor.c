// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/FormInputProcessor.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyEventSourceInterface.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/PlatformKeyFactory.h"
#include "org/allbinary/game/input/event/DownKeyEventHandler.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/game/input/GameKeyFactory.h")
#include "org/allbinary/game/input/GameKeyFactory.h"
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
#if __has_include("org/allbinary/logic/communication/log/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/communication/log/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/communication/log/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/string/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/string/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/string/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/string/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/string/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/string/UpGameKeyEventHandlerBase.h"
#endif






void FormInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void FormInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FormInputProcessor", "InputProcessor");
    java_register_method("FormInputProcessor", "keyPressedByDevice", (void*) FormInputProcessor_keyPressedByDevice);
    java_register_method("FormInputProcessor", "keyReleasedByDevice", (void*) FormInputProcessor_keyReleasedByDevice);
}

static void FormInputProcessor_initFields(FormInputProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->gameKeyEventFactory = GameKeyEventFactory_getInstance();
    this->downKeyEventHandler = DownKeyEventHandler_getInstance();
    this->upGameKeyEventHandler = UpGameKeyEventHandler_getInstance();
    this->inputFactory = InputFactory_getInstance();
    this->platformKeyFactory = PlatformKeyFactory_getInstance();
    
}


void FormInputProcessor_init(FormInputProcessor* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
    FormInputProcessor_register();
    InputProcessor_init(&this->base);
    FormInputProcessor_initFields(this);
        this->allBinaryGameCanvas = allBinaryGameCanvas;
}

FormInputProcessor* FormInputProcessor_new(AllBinaryGameCanvas* allBinaryGameCanvas) {
    FormInputProcessor* this = java_object_alloc(sizeof(FormInputProcessor), "FormInputProcessor");
    FormInputProcessor_init(this, allBinaryGameCanvas);
    return this;
}


void FormInputProcessor_keyPressedByDevice(FormInputProcessor* this, int32_t keyCode, int32_t deviceId) {
        JAVA_TRY {
            PreLogUtil_put(java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_new(), this->inputFactory->KEY_CODE_LABEL), keyCode), CommonSeps_getInstance()->SPACE), this->inputFactory->DEVICE_ID_LABEL), deviceId)), this, this->base.gameInputStrings->KEY_PRESSED);
            Input* input = InputFactory_getInstanceById(this->inputFactory, keyCode);
            GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, this->allBinaryGameCanvas, input);
            DownKeyEventHandlerBase_fireEventForGameKeyEvent(this->downKeyEventHandler, gameKeyEvent);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->base.gameInputStrings->ADD_KEY_EVENT, e);
        } JAVA_END_TRY;
}


void FormInputProcessor_keyReleasedByDevice(FormInputProcessor* this, Canvas* canvas, int32_t keyCode, int32_t deviceId) {
        JAVA_TRY {
            Input* input = InputFactory_getInstanceById(this->inputFactory, keyCode);
            if (PlatformKeyFactory_isEnter(this->platformKeyFactory, input)) {
                PreLogUtil_put(java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_new(), this->inputFactory->KEY_CODE_LABEL), keyCode), CommonSeps_getInstance()->SPACE), this->inputFactory->DEVICE_ID_LABEL), deviceId)), this, this->base.gameInputStrings->KEY_RELEASED);
                GameKey* gameKey = GameKeyFactory_getInstance()->KEY_NUM0;
                GameKeyEventSourceInterface* gameKeyEventSourceInterface = ((GameKeyEventSourceInterface*) canvas);
                GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, gameKeyEventSourceInterface, gameKey);
                UpGameKeyEventHandlerBase_fireEvent(this->upGameKeyEventHandler, gameKeyEvent);
                UpGameKeyEventHandlerBase_fireEvent(UpGameKeyEventHandler_getInstanceForDevice(this->upGameKeyEventHandler, deviceId), gameKeyEvent);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->base.gameInputStrings->ADD_KEY_EVENT, e);
        } JAVA_END_TRY;
}

