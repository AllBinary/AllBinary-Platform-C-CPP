// Generated Code Do Not Modify
#include "org/allbinary/logic/system/os/OperatingSystems.h"


static OperatingSystems* OperatingSystems_instance;





void OperatingSystems_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OperatingSystems_instance = OperatingSystems_new();
}

void OperatingSystems_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OperatingSystems", nullptr);
    java_register_method("OperatingSystems", "isUnknownSpecificOSAllowed", (void*) OperatingSystems_isUnknownSpecificOSAllowed);
    java_register_method("OperatingSystems", "setUnknownSpecificOSAllowed", (void*) OperatingSystems_setUnknownSpecificOSAllowed);
}

static void OperatingSystems_initFields(OperatingSystems* this) {
    this->LINUX = "Linux";
    this->WINDOWS = "Windows";
    this->SOLARIS = "Solaris";
    this->WINDOWS2000 = "Windows 2000";
    this->WINDOWS_NT = "Windows NT";
    this->WINDOWS_10 = "Windows 10";
    this->WINDOWS_11 = "Windows 11";
    this->WINDOWS_VISTA = "Windows Vista";
    this->WINDOWS_XP = "Windows XP";
    this->ANDROID = this->LINUX;
    this->HARMONY = "HarmonyOS";
    this->unknownSpecificOSAllowed = true;
}


void OperatingSystems_init(OperatingSystems* this) {
    OperatingSystems_register();
    OperatingSystems_initFields(this);
}

OperatingSystems* OperatingSystems_new(void) {
    OperatingSystems* this = java_object_alloc(sizeof(OperatingSystems), "OperatingSystems");
    OperatingSystems_init(this);
    return this;
}


bool OperatingSystems_isUnknownSpecificOSAllowed(OperatingSystems* this) {
        return this->unknownSpecificOSAllowed;
}


void OperatingSystems_setUnknownSpecificOSAllowed(OperatingSystems* this, bool aUnknownSpecificOSAllowed) {
        this->unknownSpecificOSAllowed = aUnknownSpecificOSAllowed;
}


OperatingSystems* OperatingSystems_getInstance(void) {
        return (OperatingSystems_staticInit(), OperatingSystems_instance);
}

