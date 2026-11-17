// Generated Code Do Not Modify
#include "org/allbinary/logic/system/SoftwareInformation.h"
#include "org/allbinary/KotlinUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"








void SoftwareInformation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SoftwareInformation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SoftwareInformation", nullptr);
    java_register_method("SoftwareInformation", "getName", (void*) SoftwareInformation_getName);
    java_register_method("SoftwareInformation", "getVersion", (void*) SoftwareInformation_getVersion);
    java_register_method("SoftwareInformation", "toShortString", (void*) SoftwareInformation_toShortString);
    java_register_method("SoftwareInformation", "toString", (void*) SoftwareInformation_toString);
}

static void SoftwareInformation_initFields(SoftwareInformation* this) {
    
    
    
}


void SoftwareInformation_init(SoftwareInformation* this, const char* name, const char* version, const char* shortName) {
    SoftwareInformation_register();
    SoftwareInformation_initFields(this);
        this->name = name;
        this->version = version;
        this->shortName = java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), shortName), KotlinUtil_getShortName()));
}

SoftwareInformation* SoftwareInformation_new(const char* name, const char* version, const char* shortName) {
    SoftwareInformation* this = java_object_alloc(sizeof(SoftwareInformation), "SoftwareInformation");
    SoftwareInformation_init(this, name, version, shortName);
    return this;
}


const char* SoftwareInformation_getName(SoftwareInformation* this) {
        return this->name;
}


const char* SoftwareInformation_getVersion(SoftwareInformation* this) {
        return this->version;
}


const char* SoftwareInformation_toShortString(SoftwareInformation* this) {
        return this->shortName;
}


const char* SoftwareInformation_toString(SoftwareInformation* this) {
        const char* NAME = "Name: ";
        const char* VERSION = "Version: ";
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, NAME);
        StringMaker_append(stringBuffer, SoftwareInformation_getName(this));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, VERSION);
        StringMaker_append(stringBuffer, SoftwareInformation_getVersion(this));
        return java_string_of(stringBuffer);
}

