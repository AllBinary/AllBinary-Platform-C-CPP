// Generated Code Do Not Modify
#include "org/allbinary/KotlinUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif





void KotlinUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void KotlinUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("KotlinUtil", nullptr);
}

void KotlinUtil_init(KotlinUtil* this) {
    KotlinUtil_register();
}

KotlinUtil* KotlinUtil_new(void) {
    KotlinUtil* this = java_object_alloc(sizeof(KotlinUtil), "KotlinUtil");
    KotlinUtil_init(this);
    return this;
}


bool KotlinUtil_isKotlin(void) {
        return false;
}


const char* KotlinUtil_getShortName(void) {
        return StringUtil_getInstance()->EMPTY_STRING;
}

