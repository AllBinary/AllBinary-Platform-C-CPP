// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/NullCommandListener.h"
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#include "org/allbinary/input/TouchJ2ME.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABStack.h"
#include "org/allbinary/graphics/displayable/DisplayableInterface.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/MyCommandsFactory.h")
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/MyCommandsFactory.h")
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/MyCommandsFactory.h")
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/MyCommandsFactory.h")
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#endif
































void MyCanvas_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MyCanvas_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MyCanvas", "Canvas");
    java_register_method("MyCanvas", "getWidth", (void*) MyCanvas_getWidth);
    java_register_method("MyCanvas", "getHeight", (void*) MyCanvas_getHeight);
    java_register_method("MyCanvas", "setFullScreenMode", (void*) MyCanvas_setFullScreenMode);
    java_register_method("MyCanvas", "sizeChanged", (void*) MyCanvas_sizeChanged);
    java_register_method("MyCanvas", "getCommandStack", (void*) MyCanvas_getCommandStack);
    java_register_method("MyCanvas", "isCommand", (void*) MyCanvas_isCommand);
    java_register_method("MyCanvas", "addCommand", (void*) MyCanvas_addCommand);
    java_register_method("MyCanvas", "removeCommand", (void*) MyCanvas_removeCommand);
    java_register_method("MyCanvas", "removeAllCommands", (void*) MyCanvas_removeAllCommands);
    java_register_method("MyCanvas", "setCommandListener", (void*) MyCanvas_setCommandListener);
    java_register_method("MyCanvas", "getCustomCommandListener", (void*) MyCanvas_getCustomCommandListener);
    java_register_method("MyCanvas", "isPaused", (void*) MyCanvas_isPaused);
    java_register_method("MyCanvas", "removePauseCommand", (void*) MyCanvas_removePauseCommand);
    java_register_method("MyCanvas", "pause", (void*) MyCanvas_pause);
    java_register_method("MyCanvas", "unPause", (void*) MyCanvas_unPause);
    java_register_method("MyCanvas", "process", (void*) MyCanvas_process);
    java_register_method("MyCanvas", "paint", (void*) MyCanvas_paint);
    java_register_method("MyCanvas", "draw", (void*) MyCanvas_draw);
    java_register_method("MyCanvas", "hasChild", (void*) MyCanvas_hasChild);
    java_register_method("MyCanvas", "destroy", (void*) MyCanvas_destroy);
    java_register_method("MyCanvas", "setPaused", (void*) MyCanvas_setPaused);
    java_register_method("MyCanvas", "keyPressedByDevice", (void*) MyCanvas_keyPressedByDevice);
    java_register_method("MyCanvas", "keyRepeatedByDevice", (void*) MyCanvas_keyRepeatedByDevice);
    java_register_method("MyCanvas", "keyReleasedByDevice", (void*) MyCanvas_keyReleasedByDevice);
    java_register_method("MyCanvas", "pointerDragged", (void*) MyCanvas_pointerDragged);
    java_register_method("MyCanvas", "pointerPressed", (void*) MyCanvas_pointerPressed);
    java_register_method("MyCanvas", "pointerReleased", (void*) MyCanvas_pointerReleased);
    java_register_method("MyCanvas", "nextSong", (void*) MyCanvas_nextSong);
}

static void MyCanvas_initFields(MyCanvas* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->canvasStrings = CanvasStrings_getInstance();
    this->stringUtil = StringUtil_getInstance();
    this->displayInfo = DisplayInfoSingleton_getInstance();
    
    
    
    this->commandListener = (NullCommandListener_staticInit(), NullCommandListener_NULL_COMMAND_LISTENER);
    this->paused = false;
    this->touchME = TouchJ2ME_new();
}


void MyCanvas_init(MyCanvas* this, const char* name, BasicArrayList* childNameList) {
    MyCanvas_register();
    Canvas_init(&this->base);
    MyCanvas_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->CONSTRUCTOR, this, this->commonStrings->CONSTRUCTOR);
        DisplayInfoSingleton_update(this->displayInfo, this, this->canvasStrings->CONSTRUCTOR);
        this->name = name;
        this->childNameList = childNameList;
        this->commandStack = StdUtil_createStack(StdUtil_getInstance());
}

MyCanvas* MyCanvas_new(const char* name, BasicArrayList* childNameList) {
    MyCanvas* this = java_object_alloc(sizeof(MyCanvas), "MyCanvas");
    MyCanvas_init(this, name, childNameList);
    return this;
}


int32_t MyCanvas_getWidth(MyCanvas* this) {
        return Displayable_getWidth((&this->base));
}


int32_t MyCanvas_getHeight(MyCanvas* this) {
        return Displayable_getHeight((&this->base));
}


void MyCanvas_setFullScreenMode(MyCanvas* this, bool mode) {
        Canvas_setFullScreenMode((&this->base), mode);
        DisplayInfoSingleton_update(this->displayInfo, this, this->canvasStrings->SET_FULL_SCREEN_MODE);
}


void MyCanvas_sizeChanged(MyCanvas* this, int32_t w, int32_t h) {
        DisplayInfoSingleton_update(this->displayInfo, this, this->canvasStrings->SIZE_CHANGED);
}


ABStack* MyCanvas_getCommandStack(MyCanvas* this) {
        return this->commandStack;
}


// synchronized
bool MyCanvas_isCommand(MyCanvas* this, Command* command) {
        return Stack_contains(this->commandStack, command);
}


// synchronized
void MyCanvas_addCommand(MyCanvas* this, Command* command) {
        if (!Stack_contains(this->commandStack, command)) {
            Stack_push(this->commandStack, command);
            Displayable_addCommand((&this->base), command);
        }
}


// synchronized
void MyCanvas_removeCommand(MyCanvas* this, Command* command) {
        Stack_removeElement(this->commandStack, command);
        Displayable_removeCommand((&this->base), command);
}


// synchronized
void MyCanvas_removeAllCommands(MyCanvas* this) {
        int32_t size = Stack_size(this->commandStack);
        for (int32_t index = 0; index < size; index++) {
            Displayable_removeCommand((&this->base), ((Command*) Stack_pop(this->commandStack)));
        }
}


void MyCanvas_setCommandListener(MyCanvas* this, CommandListener* l) {
        Displayable_setCommandListener((&this->base), l);
        this->commandListener = l;
}


CommandListener* MyCanvas_getCustomCommandListener(MyCanvas* this) {
        return this->commandListener;
}


// synchronized
bool MyCanvas_isPaused(MyCanvas* this) {
        return this->paused;
}


void MyCanvas_removePauseCommand(MyCanvas* this) {
        MyCanvas_removeCommand(this, MyCommandsFactory_getInstance()->PAUSE_COMMAND);
}


// synchronized
void MyCanvas_pause(MyCanvas* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->canvasStrings->PAUSE);
        MyCanvas_removePauseCommand(this);
        MyCanvas_addCommand(this, MyCommandsFactory_getInstance()->RESUME_COMMAND);
        MyCanvas_setPaused(this, true);
}


// synchronized
void MyCanvas_unPause(MyCanvas* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->canvasStrings->UN_PAUSE);
        MyCanvas_removeCommand(this, MyCommandsFactory_getInstance()->RESUME_COMMAND);
        MyCanvas_addCommand(this, MyCommandsFactory_getInstance()->PAUSE_COMMAND);
        MyCanvas_setPaused(this, false);
}


// throws Exception
void MyCanvas_process(MyCanvas* this) {
        DisplayInfoSingleton_process(this->displayInfo);
}


void MyCanvas_paint(MyCanvas* this, Graphics* graphics) {
}


void MyCanvas_draw(MyCanvas* this, Graphics* graphics) {
}


bool MyCanvas_hasChild(MyCanvas* this, MyCanvas* displayable) {
        return BasicArrayList_contains(this->childNameList, displayable->name);
}


void MyCanvas_destroy(MyCanvas* this) {
        LogUtil_putF(this->logUtil, "Destroyed MyCanvas", this, "destroy");
}


void MyCanvas_setPaused(MyCanvas* this, bool isPaused) {
        this->paused = isPaused;
}


void MyCanvas_keyPressedByDevice(MyCanvas* this, int32_t keyCode, int32_t deviceId) {
}


void MyCanvas_keyRepeatedByDevice(MyCanvas* this, int32_t keyCode, int32_t deviceId) {
}


void MyCanvas_keyReleasedByDevice(MyCanvas* this, int32_t keyCode, int32_t deviceId) {
}


void MyCanvas_pointerDragged(MyCanvas* this, int32_t x, int32_t y) {
        TouchJ2ME_pointerDragged(this->touchME, x, y);
}


void MyCanvas_pointerPressed(MyCanvas* this, int32_t x, int32_t y) {
        TouchJ2ME_pointerPressed(this->touchME, x, y);
}


void MyCanvas_pointerReleased(MyCanvas* this, int32_t x, int32_t y) {
        TouchJ2ME_pointerReleased(this->touchME, x, y);
}


void MyCanvas_nextSong(MyCanvas* this, Sound* nextSongSound, int32_t leftVolume, int32_t rightVolume) {
}

