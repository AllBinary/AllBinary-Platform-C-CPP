// Generated Code Do Not Modify
#include "org/allbinary/content/CommandUriAction.h"
#include "javax/microedition/lcdui/Command.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"


static CommandUriAction* CommandUriAction_instance;




void CommandUriAction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CommandUriAction_instance = CommandUriAction_new();
}

void CommandUriAction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CommandUriAction", nullptr);
    java_register_method("CommandUriAction", "add", (void*) CommandUriAction_add);
    java_register_method("CommandUriAction", "process", (void*) CommandUriAction_process);
}

static void CommandUriAction_initFields(CommandUriAction* this) {
    this->logUtil = LogUtil_getInstance();
}

void CommandUriAction_init(CommandUriAction* this) {
    CommandUriAction_register();
    CommandUriAction_initFields(this);
}

CommandUriAction* CommandUriAction_new(void) {
    CommandUriAction* this = java_object_alloc(sizeof(CommandUriAction), "CommandUriAction");
    CommandUriAction_init(this);
    return this;
}


CommandUriAction* CommandUriAction_getInstance(void) {
        return (CommandUriAction_staticInit(), CommandUriAction_instance);
}


void CommandUriAction_add(CommandUriAction* this, Command* command, const char* url) {
}


void CommandUriAction_process(CommandUriAction* this, Command* command) {
}

