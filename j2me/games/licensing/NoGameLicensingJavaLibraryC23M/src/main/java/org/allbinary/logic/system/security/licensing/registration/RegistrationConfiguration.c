// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/licensing/registration/RegistrationConfiguration.h"
#include "org/allbinary/logic/string/StringMaker.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


static RegistrationConfiguration* RegistrationConfiguration_SINGLETON;



static void RegistrationConfiguration_read(RegistrationConfiguration* this);





void RegistrationConfiguration_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    RegistrationConfiguration_SINGLETON = RegistrationConfiguration_new();
}

void RegistrationConfiguration_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RegistrationConfiguration", nullptr);
    java_register_method("RegistrationConfiguration", "read", (void*) RegistrationConfiguration_read);
    java_register_method("RegistrationConfiguration", "write", (void*) RegistrationConfiguration_write);
    java_register_method("RegistrationConfiguration", "toString", (void*) RegistrationConfiguration_toString);
    java_register_method("RegistrationConfiguration", "setRegistrationCode", (void*) RegistrationConfiguration_setRegistrationCode);
    java_register_method("RegistrationConfiguration", "getRegistrationCode", (void*) RegistrationConfiguration_getRegistrationCode);
}

static void RegistrationConfiguration_initFields(RegistrationConfiguration* this) {
    this->registrationCode = "No Registration Code";
    this->NAME = "registrationid";
}


void RegistrationConfiguration_init(RegistrationConfiguration* this) {
    RegistrationConfiguration_register();
    RegistrationConfiguration_initFields(this);
}

RegistrationConfiguration* RegistrationConfiguration_new(void) {
    RegistrationConfiguration* this = java_object_alloc(sizeof(RegistrationConfiguration), "RegistrationConfiguration");
    RegistrationConfiguration_init(this);
    return this;
}


RegistrationConfiguration* RegistrationConfiguration_getInstance(void) {
        return (RegistrationConfiguration_staticInit(), RegistrationConfiguration_SINGLETON);
}


// throws Exception
static void RegistrationConfiguration_read(RegistrationConfiguration* this) {
}


// throws Exception
void RegistrationConfiguration_write(RegistrationConfiguration* this) {
}


const char* RegistrationConfiguration_toString(RegistrationConfiguration* this) {
        return java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Registration Code: "), RegistrationConfiguration_getRegistrationCode(this)));
}


void RegistrationConfiguration_setRegistrationCode(RegistrationConfiguration* this, const char* registrationCode) {
        this->registrationCode = registrationCode;
}


const char* RegistrationConfiguration_getRegistrationCode(RegistrationConfiguration* this) {
        return this->registrationCode;
}

