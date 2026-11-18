// Generated Code Do Not Modify
#include "org/allbinary/game/paint/help/UpdateMyFontProperties.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif



void UpdateMyFontProperties_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void UpdateMyFontProperties_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("UpdateMyFontProperties", nullptr);
}

static void UpdateMyFontProperties_initFields(UpdateMyFontProperties* this) {
    this->actionStringArray = StringUtil_getArrayInstance(StringUtil_getInstance());
    this->keymappingBeginWidthArray = NullUtil_getInstance()->NULL_INT_ARRAY;
    this->actionStringDeltaXArray = NullUtil_getInstance()->NULL_INT_ARRAY;
    this->inputDeltaXArray = NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY;
    this->sepArray = StringUtil_getInstance()->ONE_EMPTY_STRING_ARRAY_OF_ARRAYS;
    this->sepWidthArray = NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY;
    this->charHeight = 0;
}

void UpdateMyFontProperties_init(UpdateMyFontProperties* this) {
    UpdateMyFontProperties_register();
    UpdateMyFontProperties_initFields(this);
}

UpdateMyFontProperties* UpdateMyFontProperties_new(void) {
    UpdateMyFontProperties* this = java_object_alloc(sizeof(UpdateMyFontProperties), "UpdateMyFontProperties");
    UpdateMyFontProperties_init(this);
    return this;
}

