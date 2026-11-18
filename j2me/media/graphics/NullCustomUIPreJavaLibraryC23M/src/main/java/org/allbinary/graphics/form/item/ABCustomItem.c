// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Screen.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


void* ABCustomItem_NULL_CUSTOM_ITEM;
















void ABCustomItem_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ABCustomItem_NULL_CUSTOM_ITEM = NullUtil_getInstance()->NULL_OBJECT;
}

void ABCustomItem_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABCustomItem", nullptr);
    java_register_method("ABCustomItem", "setOwner", (void*) ABCustomItem_setOwner);
    java_register_method("ABCustomItem", "paintXY", (void*) ABCustomItem_paintXY);
    java_register_method("ABCustomItem", "paintUnselected", (void*) ABCustomItem_paintUnselected);
    java_register_method("ABCustomItem", "isFocusable", (void*) ABCustomItem_isFocusable);
    java_register_method("ABCustomItem", "getLabel", (void*) ABCustomItem_getLabel);
    java_register_method("ABCustomItem", "setLabel", (void*) ABCustomItem_setLabel);
    java_register_method("ABCustomItem", "getHeight", (void*) ABCustomItem_getHeight);
    java_register_method("ABCustomItem", "setHeight", (void*) ABCustomItem_setHeight);
    java_register_method("ABCustomItem", "getValue", (void*) ABCustomItem_getValue);
    java_register_method("ABCustomItem", "setValue", (void*) ABCustomItem_setValue);
    java_register_method("ABCustomItem", "getMinimumWidth", (void*) ABCustomItem_getMinimumWidth);
    java_register_method("ABCustomItem", "getMinimumHeight", (void*) ABCustomItem_getMinimumHeight);
    java_register_method("ABCustomItem", "preMeasurement", (void*) ABCustomItem_preMeasurement);
}


ABCustomItem* ABCustomItem_getNullInstance(void) {
        if ((ABCustomItem_staticInit(), ABCustomItem_NULL_CUSTOM_ITEM) == NullUtil_getInstance()->NULL_OBJECT) {
            ABCustomItem_NULL_CUSTOM_ITEM = ABCustomItem_new(StringUtil_getInstance()->EMPTY_STRING, BasicColorFactory_getInstance()->BLACK, BasicColorFactory_getInstance()->WHITE);
        }
        return ((ABCustomItem*) (ABCustomItem_staticInit(), ABCustomItem_NULL_CUSTOM_ITEM));
}


void ABCustomItem_init(ABCustomItem* this, const char* label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABCustomItem_register();
}

ABCustomItem* ABCustomItem_new(const char* label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABCustomItem* this = java_object_alloc(sizeof(ABCustomItem), "ABCustomItem");
    ABCustomItem_init(this, label, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void ABCustomItem_setOwner(ABCustomItem* this, Screen* owner) {
}


void ABCustomItem_paintXY(ABCustomItem* this, Graphics* graphics, int32_t x, int32_t y) {
}


void ABCustomItem_paintUnselected(ABCustomItem* this, Graphics* graphics, int32_t x, int32_t y) {
}


bool ABCustomItem_isFocusable(ABCustomItem* this) {
        return false;
}


const char* ABCustomItem_getLabel(ABCustomItem* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


void ABCustomItem_setLabel(ABCustomItem* this, const char* label) {
}


int32_t ABCustomItem_getHeight(ABCustomItem* this) {
        return 0;
}


void ABCustomItem_setHeight(ABCustomItem* this, int32_t height) {
}


float ABCustomItem_getValue(ABCustomItem* this) {
        return 0.0f;
}


void ABCustomItem_setValue(ABCustomItem* this, float value) {
}


int32_t ABCustomItem_getMinimumWidth(ABCustomItem* this) {
        return 0;
}


int32_t ABCustomItem_getMinimumHeight(ABCustomItem* this) {
        return 0;
}


void ABCustomItem_preMeasurement(ABCustomItem* this, Graphics* graphics) {
}

