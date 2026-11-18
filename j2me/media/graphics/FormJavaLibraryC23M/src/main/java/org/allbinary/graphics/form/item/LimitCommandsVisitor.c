// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/LimitCommandsVisitor.h"
#include "javax/microedition/lcdui/Command.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/form/ScreenInfo.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#if __has_include("org/allbinary/graphics/form/ScreenInfo.h")
#include "org/allbinary/graphics/form/ScreenInfo.h"
#endif
#if __has_include("org/allbinary/graphics/form/ScreenInfo.h")
#include "org/allbinary/graphics/form/ScreenInfo.h"
#endif
#if __has_include("org/allbinary/game/commands/GameCommandsFactory.h")
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#endif
#if __has_include("org/allbinary/game/commands/GameCommandsFactory.h")
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#endif





void LimitCommandsVisitor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LimitCommandsVisitor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LimitCommandsVisitor", "Visitor");
    java_register_method("LimitCommandsVisitor", "visit", (void*) LimitCommandsVisitor_visit);
}

static void LimitCommandsVisitor_initFields(LimitCommandsVisitor* this) {
    
}


void LimitCommandsVisitor_init(LimitCommandsVisitor* this) {
    LimitCommandsVisitor_register();
    Visitor_init(&this->base);
    LimitCommandsVisitor_initFields(this);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        this->isNotSmallDisplay = (DisplayInfoSingleton_isPortrait(displayInfo) && DisplayInfoSingleton_getLastHeight(displayInfo) > ScreenInfo_getInstance()->SMALL_WIDTH) || (!DisplayInfoSingleton_isPortrait(displayInfo) && DisplayInfoSingleton_getLastHeight(displayInfo) > ScreenInfo_getInstance()->SMALL_HEIGHT);
}

LimitCommandsVisitor* LimitCommandsVisitor_new(void) {
    LimitCommandsVisitor* this = java_object_alloc(sizeof(LimitCommandsVisitor), "LimitCommandsVisitor");
    LimitCommandsVisitor_init(this);
    return this;
}


void* LimitCommandsVisitor_visit(LimitCommandsVisitor* this, void* anyType) {
        Command* command = ((Command*) anyType);
        BooleanFactory* booleanFactory = BooleanFactory_getInstance();
        if (this->isNotSmallDisplay || Command_getPriority(command) == 1 || command == GameCommandsFactory_getInstance()->EXIT_COMMAND || command == GameCommandsFactory_getInstance()->EXIT_WITHOUT_PROGRESS_COMMAND) {
            return JAVA_BOX(booleanFactory->TRUE);
        } else {
            return JAVA_BOX(booleanFactory->FALSE);
        }
}

