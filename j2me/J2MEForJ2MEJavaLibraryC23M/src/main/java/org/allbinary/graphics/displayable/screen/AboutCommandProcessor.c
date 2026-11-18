// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/screen/AboutCommandProcessor.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/CommandListener.h"


static AboutCommandProcessor* AboutCommandProcessor_instance;



void AboutCommandProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AboutCommandProcessor_instance = AboutCommandProcessor_new();
}

void AboutCommandProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AboutCommandProcessor", nullptr);
    java_register_method("AboutCommandProcessor", "process", (void*) AboutCommandProcessor_process);
}

void AboutCommandProcessor_init(AboutCommandProcessor* this) {
    AboutCommandProcessor_register();
}

AboutCommandProcessor* AboutCommandProcessor_new(void) {
    AboutCommandProcessor* this = java_object_alloc(sizeof(AboutCommandProcessor), "AboutCommandProcessor");
    AboutCommandProcessor_init(this);
    return this;
}


AboutCommandProcessor* AboutCommandProcessor_getInstance(void) {
        return (AboutCommandProcessor_staticInit(), AboutCommandProcessor_instance);
}


void AboutCommandProcessor_process(AboutCommandProcessor* this, CommandListener* midletCommandListener, Command* command, Canvas* canvas) {
        CommandListener_commandAction(midletCommandListener, command, canvas);
}

