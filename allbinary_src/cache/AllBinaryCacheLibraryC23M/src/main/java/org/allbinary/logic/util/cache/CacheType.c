// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/CacheType.h"
#include "org/allbinary/logic/string/StringMaker.h"







void CacheType_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CacheType_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CacheType", nullptr);
    java_register_method("CacheType", "getVendor", (void*) CacheType_getVendor);
    java_register_method("CacheType", "getType", (void*) CacheType_getType);
    java_register_method("CacheType", "toString", (void*) CacheType_toString);
}

static void CacheType_initFields(CacheType* this) {
    
    
}


void CacheType_init(CacheType* this, const char* vendor, const char* type) {
    CacheType_register();
    CacheType_initFields(this);
        this->vendor = vendor;
        this->type = type;
}

CacheType* CacheType_new(const char* vendor, const char* type) {
    CacheType* this = java_object_alloc(sizeof(CacheType), "CacheType");
    CacheType_init(this, vendor, type);
    return this;
}


const char* CacheType_getVendor(CacheType* this) {
        return this->vendor;
}


const char* CacheType_getType(CacheType* this) {
        return this->type;
}


const char* CacheType_toString(CacheType* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "CacheType: Vendor: ");
        StringMaker_append(stringBuffer, CacheType_getVendor(this));
        StringMaker_append(stringBuffer, " Type: ");
        StringMaker_append(stringBuffer, CacheType_getType(this));
        return java_string_of(stringBuffer);
}

