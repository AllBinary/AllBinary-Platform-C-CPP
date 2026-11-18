// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/ABCustomForm.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/graphics/form/CustomScreen.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif

















void ABCustomForm_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ABCustomForm_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABCustomForm", "CustomScreen");
    java_register_method("ABCustomForm", "getAllitems", (void*) ABCustomForm_getAllitems);
    java_register_method("ABCustomForm", "size", (void*) ABCustomForm_size);
    java_register_method("ABCustomForm", "setSelectedIndex", (void*) ABCustomForm_setSelectedIndex);
    java_register_method("ABCustomForm", "getSelectedIndex", (void*) ABCustomForm_getSelectedIndex);
    java_register_method("ABCustomForm", "deleteAll", (void*) ABCustomForm_deleteAll);
    java_register_method("ABCustomForm", "delete", (void*) ABCustomForm_delete);
    java_register_method("ABCustomForm", "append", (void*) ABCustomForm_append);
    java_register_method("ABCustomForm", "insert", (void*) ABCustomForm_insert);
    java_register_method("ABCustomForm", "set", (void*) ABCustomForm_set);
    java_register_method("ABCustomForm", "get", (void*) ABCustomForm_get);
    java_register_method("ABCustomForm", "getWidth", (void*) ABCustomForm_getWidth);
    java_register_method("ABCustomForm", "paint", (void*) ABCustomForm_paint);
    java_register_method("ABCustomForm", "getTitle", (void*) ABCustomForm_getTitle);
}

static void ABCustomForm_initFields(ABCustomForm* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


void ABCustomForm_init(ABCustomForm* this, const char* title, ABCustomItem** items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABCustomForm_register();
    CustomScreen_init(&this->base);
    ABCustomForm_initFields(this);
}

ABCustomForm* ABCustomForm_new(const char* title, ABCustomItem** items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABCustomForm* this = java_object_alloc(sizeof(ABCustomForm), "ABCustomForm");
    ABCustomForm_init(this, title, items, backgroundBasicColor, foregroundBasicColor);
    return this;
}


ABCustomItem** ABCustomForm_getAllitems(ABCustomForm* this) {
        return ((ABCustomItem**) java_array_new(sizeof(ABCustomItem*), 0));
}


int32_t ABCustomForm_size(ABCustomForm* this) {
        return 0;
}


void ABCustomForm_setSelectedIndex(ABCustomForm* this, int32_t index) {
}


int32_t ABCustomForm_getSelectedIndex(ABCustomForm* this) {
        return 0;
}


void ABCustomForm_deleteAll(ABCustomForm* this) {
}


void ABCustomForm_delete(ABCustomForm* this, int32_t itemNum) {
}


int32_t ABCustomForm_append(ABCustomForm* this, ABCustomItem* item) {
        return -1;
}


void ABCustomForm_insert(ABCustomForm* this, int32_t itemNum, ABCustomItem* item) {
}


void ABCustomForm_set(ABCustomForm* this, int32_t itemNum, ABCustomItem* item) {
}


ABCustomItem* ABCustomForm_get(ABCustomForm* this, int32_t itemNum) {
        return ABCustomItem_getNullInstance();
}


int32_t ABCustomForm_getWidth(ABCustomForm* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void ABCustomForm_paint(ABCustomForm* this, Graphics* graphics) {
}


const char* ABCustomForm_getTitle(ABCustomForm* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}

