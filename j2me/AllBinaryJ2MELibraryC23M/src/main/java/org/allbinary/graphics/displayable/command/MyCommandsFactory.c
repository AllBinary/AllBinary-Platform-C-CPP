// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#include "javax/microedition/lcdui/Command.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static MyCommandsFactory* MyCommandsFactory_instance;



void MyCommandsFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MyCommandsFactory_instance = MyCommandsFactory_new();
}

void MyCommandsFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MyCommandsFactory", nullptr);
}

static void MyCommandsFactory_initFields(MyCommandsFactory* this) {
    this->NO_COMMAND = Command_new4(StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING, -1, -1);
    this->GAUGE_CHANGE = Command_new4("GAUGE_CHANGE", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_ITEM), 1);
    this->SET_DISPLAYABLE = Command_new4("Display", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 2);
    this->PAUSE_COMMAND = Command_new4("Pause", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 0);
    this->RESUME_COMMAND = Command_new4("Resume", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 0);
}


MyCommandsFactory* MyCommandsFactory_getInstance(void) {
        return (MyCommandsFactory_staticInit(), MyCommandsFactory_instance);
}


void MyCommandsFactory_init(MyCommandsFactory* this) {
    MyCommandsFactory_register();
    MyCommandsFactory_initFields(this);
}

MyCommandsFactory* MyCommandsFactory_new(void) {
    MyCommandsFactory* this = java_object_alloc(sizeof(MyCommandsFactory), "MyCommandsFactory");
    MyCommandsFactory_init(this);
    return this;
}

