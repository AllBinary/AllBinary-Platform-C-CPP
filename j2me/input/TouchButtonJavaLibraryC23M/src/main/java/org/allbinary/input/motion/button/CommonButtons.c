// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/CommonButtons.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif


static CommonButtons* CommonButtons_instance;



void CommonButtons_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CommonButtons_instance = CommonButtons_new();
}

void CommonButtons_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CommonButtons", nullptr);
}

static void CommonButtons_initFields(CommonButtons* this) {
    
    
    
}


CommonButtons* CommonButtons_getInstance(void) {
        return (CommonButtons_staticInit(), CommonButtons_instance);
}


void CommonButtons_init(CommonButtons* this) {
    CommonButtons_register();
    CommonButtons_initFields(this);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        int32_t commonButtonSize = 128;
        while (commonButtonSize > 64) {
            int32_t totalColumns = DisplayInfoSingleton_getLastWidth(displayInfo) / commonButtonSize;
            int32_t totalRows = DisplayInfoSingleton_getLastHeight(displayInfo) / commonButtonSize;
            int32_t max = totalColumns;
            if (totalRows > max) {
                max = totalRows;
            }
            if (max > 9) {
                break;
            }
            commonButtonSize = commonButtonSize >> 1;
        }
        this->STANDARD_BUTTON_SIZE = commonButtonSize;
        this->NORMAL_BUTTON = Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, this->STANDARD_BUTTON_SIZE, this->STANDARD_BUTTON_SIZE);
        this->LARGE_BUTTON = Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, this->STANDARD_BUTTON_SIZE << 1, this->STANDARD_BUTTON_SIZE << 1);
}

CommonButtons* CommonButtons_new(void) {
    CommonButtons* this = java_object_alloc(sizeof(CommonButtons), "CommonButtons");
    CommonButtons_init(this);
    return this;
}

