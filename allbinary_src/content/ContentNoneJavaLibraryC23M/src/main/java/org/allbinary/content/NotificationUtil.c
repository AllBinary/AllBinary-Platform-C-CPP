// Generated Code Do Not Modify
#include "org/allbinary/content/NotificationUtil.h"
#include "javax/microedition/lcdui/Command.h"


static NotificationUtil* NotificationUtil_SINGLETON;



void NotificationUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NotificationUtil_SINGLETON = NotificationUtil_new();
}

void NotificationUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NotificationUtil", nullptr);
    java_register_method("NotificationUtil", "notify", (void*) NotificationUtil_notify);
}

void NotificationUtil_init(NotificationUtil* this) {
    NotificationUtil_register();
}

NotificationUtil* NotificationUtil_new(void) {
    NotificationUtil* this = java_object_alloc(sizeof(NotificationUtil), "NotificationUtil");
    NotificationUtil_init(this);
    return this;
}


NotificationUtil* NotificationUtil_getInstance(void) {
        return (NotificationUtil_staticInit(), NotificationUtil_SINGLETON);
}


void NotificationUtil_notify(NotificationUtil* this, Command* command, const char* resource, const char* message) {
}

