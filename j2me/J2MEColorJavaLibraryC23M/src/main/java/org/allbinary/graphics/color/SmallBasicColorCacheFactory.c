// Generated Code Do Not Modify
#include "org/allbinary/graphics/color/SmallBasicColorCacheFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"


static SmallBasicColorCacheFactory* SmallBasicColorCacheFactory_instance;





void SmallBasicColorCacheFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SmallBasicColorCacheFactory_instance = SmallBasicColorCacheFactory_new();
}

void SmallBasicColorCacheFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SmallBasicColorCacheFactory", nullptr);
    java_register_method("SmallBasicColorCacheFactory", "add", (void*) SmallBasicColorCacheFactory_add);
    java_register_method("SmallBasicColorCacheFactory", "getAndOrCreate", (void*) SmallBasicColorCacheFactory_getAndOrCreate);
}

static void SmallBasicColorCacheFactory_initFields(SmallBasicColorCacheFactory* this) {
    this->SIZE = 255;
    this->INDEX_TO_COLOR = ((int32_t*) java_array_new(sizeof(int32_t), this->SIZE));
    this->BASIC_COLOR_ARRAY = ((BasicColor**) java_array_new(sizeof(BasicColor*), this->SIZE));
    this->colorIndex = 0;
}


SmallBasicColorCacheFactory* SmallBasicColorCacheFactory_getInstance(void) {
        return (SmallBasicColorCacheFactory_staticInit(), SmallBasicColorCacheFactory_instance);
}


void SmallBasicColorCacheFactory_init(SmallBasicColorCacheFactory* this) {
    SmallBasicColorCacheFactory_register();
    SmallBasicColorCacheFactory_initFields(this);
}

SmallBasicColorCacheFactory* SmallBasicColorCacheFactory_new(void) {
    SmallBasicColorCacheFactory* this = java_object_alloc(sizeof(SmallBasicColorCacheFactory), "SmallBasicColorCacheFactory");
    SmallBasicColorCacheFactory_init(this);
    return this;
}


void SmallBasicColorCacheFactory_add(SmallBasicColorCacheFactory* this, BasicColor* basicDefaultColor) {
        this->BASIC_COLOR_ARRAY[this->colorIndex] = basicDefaultColor;
        this->INDEX_TO_COLOR[this->colorIndex] = BasicColor_intValue(basicDefaultColor);
        this->colorIndex++;
}


BasicColor* SmallBasicColorCacheFactory_getAndOrCreate(SmallBasicColorCacheFactory* this, int32_t colorAsInt) {
        BasicColor* basicColor = nullptr;
        for (int32_t index = 0; index < this->SIZE; index++) {
            if (this->INDEX_TO_COLOR[index] == colorAsInt) {
                return this->BASIC_COLOR_ARRAY[index];
            }
        }
        int32_t ALPHA_MASK = 0xFF000000;
        basicColor = BasicColorFactory_createInstanceAN(BasicColorFactory_getInstance(), colorAsInt & ALPHA_MASK, colorAsInt & 0x00FFFFFF, StringUtil_getInstance()->EMPTY_STRING);
        SmallBasicColorCacheFactory_add(this, basicColor);
        return basicColor;
}

