// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/licensing/LicenseUtil.h"
#include "javax/microedition/lcdui/CommandListener.h"


static LicenseUtil* LicenseUtil_instance;






void LicenseUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LicenseUtil_instance = LicenseUtil_new();
}

void LicenseUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LicenseUtil", nullptr);
    java_register_method("LicenseUtil", "init", (void*) LicenseUtil_initMethod);
    java_register_method("LicenseUtil", "isRunning", (void*) LicenseUtil_isRunning);
    java_register_method("LicenseUtil", "setRunning", (void*) LicenseUtil_setRunning);
    java_register_method("LicenseUtil", "shouldWait", (void*) LicenseUtil_shouldWait);
}

void LicenseUtil_init(LicenseUtil* this) {
    LicenseUtil_register();
}

LicenseUtil* LicenseUtil_new(void) {
    LicenseUtil* this = java_object_alloc(sizeof(LicenseUtil), "LicenseUtil");
    LicenseUtil_init(this);
    return this;
}


LicenseUtil* LicenseUtil_getInstance(void) {
        return (LicenseUtil_staticInit(), LicenseUtil_instance);
}


void LicenseUtil_initMethod(LicenseUtil* this) {
}


// synchronized
bool LicenseUtil_isRunning(LicenseUtil* this) {
        return false;
}


// synchronized
void LicenseUtil_setRunning(LicenseUtil* this, bool running) {
}


bool LicenseUtil_shouldWait(LicenseUtil* this, CommandListener* commandListener) {
        return LicenseUtil_isRunning(this);
}

