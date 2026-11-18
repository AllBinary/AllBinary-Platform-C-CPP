// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/ABCustomGaugeItem.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif


ABCustomGaugeItem* ABCustomGaugeItem_NULL_GAUGE_ITEM;


void ABCustomGaugeItem_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ABCustomGaugeItem_NULL_GAUGE_ITEM = ABCustomGaugeItem_new(StringUtil_getInstance()->EMPTY_STRING, 1, 0, BasicColorFactory_getInstance()->BLACK, BasicColorFactory_getInstance()->WHITE);
}

void ABCustomGaugeItem_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABCustomGaugeItem", "ABCustomItem");
}


void ABCustomGaugeItem_init(ABCustomGaugeItem* this, const char* label, int32_t maxValue, int32_t initialValue, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABCustomGaugeItem_register();
        ABCustomItem_init(&this->base, label, backgroundBasicColor, foregroundBasicColor);
}

ABCustomGaugeItem* ABCustomGaugeItem_new(const char* label, int32_t maxValue, int32_t initialValue, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABCustomGaugeItem* this = java_object_alloc(sizeof(ABCustomGaugeItem), "ABCustomGaugeItem");
    ABCustomGaugeItem_init(this, label, maxValue, initialValue, backgroundBasicColor, foregroundBasicColor);
    return this;
}

