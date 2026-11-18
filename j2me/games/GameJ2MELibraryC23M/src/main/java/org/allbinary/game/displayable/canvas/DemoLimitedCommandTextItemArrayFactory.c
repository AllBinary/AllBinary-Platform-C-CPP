// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/DemoLimitedCommandTextItemArrayFactory.h"
#include "org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h"
#include "org/allbinary/graphics/form/item/LimitCommandsVisitor.h"


static DemoLimitedCommandTextItemArrayFactory* DemoLimitedCommandTextItemArrayFactory_instance;



void DemoLimitedCommandTextItemArrayFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DemoLimitedCommandTextItemArrayFactory_instance = DemoLimitedCommandTextItemArrayFactory_new();
}

void DemoLimitedCommandTextItemArrayFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DemoLimitedCommandTextItemArrayFactory", nullptr);
    java_register_method("DemoLimitedCommandTextItemArrayFactory", "getCommandTextItemArrayFactory", (void*) DemoLimitedCommandTextItemArrayFactory_getCommandTextItemArrayFactory);
}

static void DemoLimitedCommandTextItemArrayFactory_initFields(DemoLimitedCommandTextItemArrayFactory* this) {
    this->commandTextItemArrayFactory = CommandTextItemArrayFactory_new(LimitCommandsVisitor_new());
}

void DemoLimitedCommandTextItemArrayFactory_init(DemoLimitedCommandTextItemArrayFactory* this) {
    DemoLimitedCommandTextItemArrayFactory_register();
    DemoLimitedCommandTextItemArrayFactory_initFields(this);
}

DemoLimitedCommandTextItemArrayFactory* DemoLimitedCommandTextItemArrayFactory_new(void) {
    DemoLimitedCommandTextItemArrayFactory* this = java_object_alloc(sizeof(DemoLimitedCommandTextItemArrayFactory), "DemoLimitedCommandTextItemArrayFactory");
    DemoLimitedCommandTextItemArrayFactory_init(this);
    return this;
}


DemoLimitedCommandTextItemArrayFactory* DemoLimitedCommandTextItemArrayFactory_getInstance(void) {
        return (DemoLimitedCommandTextItemArrayFactory_staticInit(), DemoLimitedCommandTextItemArrayFactory_instance);
}


CommandTextItemArrayFactory* DemoLimitedCommandTextItemArrayFactory_getCommandTextItemArrayFactory(DemoLimitedCommandTextItemArrayFactory* this) {
        return this->commandTextItemArrayFactory;
}

