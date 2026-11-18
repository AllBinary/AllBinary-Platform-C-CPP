// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/CommandTextItem.h"
#include "javax/microedition/lcdui/Command.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/form/item/ABTextItem.h"






void CommandTextItem_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CommandTextItem_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CommandTextItem", "ABTextItem");
    java_register_method("CommandTextItem", "isFocusable", (void*) CommandTextItem_isFocusable);
    java_register_method("CommandTextItem", "getCommand", (void*) CommandTextItem_getCommand);
}

static void CommandTextItem_initFields(CommandTextItem* this) {
    
}


void CommandTextItem_init(CommandTextItem* this, Command* command, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    CommandTextItem_register();
        ABTextItem_init(&this->base, Command_getLabel(command), layout, altText, backgroundBasicColor, foregroundBasicColor);
        CommandTextItem_initFields(this);
        this->command = command;
}

CommandTextItem* CommandTextItem_new(Command* command, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    CommandTextItem* this = java_object_alloc(sizeof(CommandTextItem), "CommandTextItem");
    CommandTextItem_init(this, command, layout, altText, backgroundBasicColor, foregroundBasicColor);
    return this;
}


bool CommandTextItem_isFocusable(CommandTextItem* this) {
        return true;
}


Command* CommandTextItem_getCommand(CommandTextItem* this) {
        return this->command;
}

