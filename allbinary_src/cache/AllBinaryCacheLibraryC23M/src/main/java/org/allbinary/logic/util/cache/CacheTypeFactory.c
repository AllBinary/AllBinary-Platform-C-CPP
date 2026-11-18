// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/CacheTypeFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/cache/CacheType.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static CacheTypeFactory* CacheTypeFactory_instance;


void CacheTypeFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CacheTypeFactory_instance = CacheTypeFactory_new();
}

void CacheTypeFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CacheTypeFactory", nullptr);
}

static void CacheTypeFactory_initFields(CacheTypeFactory* this) {
    this->NO_CACHE = CacheType_new(StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING);
    this->CACHE = CacheType_new(StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING);
    this->SET = CacheType_new(StringUtil_getInstance()->EMPTY_STRING, "Set");
    this->CACHE_VECTOR = CacheType_new(StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING);
}

void CacheTypeFactory_init(CacheTypeFactory* this) {
    CacheTypeFactory_register();
    CacheTypeFactory_initFields(this);
}

CacheTypeFactory* CacheTypeFactory_new(void) {
    CacheTypeFactory* this = java_object_alloc(sizeof(CacheTypeFactory), "CacheTypeFactory");
    CacheTypeFactory_init(this);
    return this;
}


CacheTypeFactory* CacheTypeFactory_getInstance(void) {
        return (CacheTypeFactory_staticInit(), CacheTypeFactory_instance);
}

