// Generated Code Do Not Modify
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorUtil.h"


static BasicColorFactory* BasicColorFactory_instance;






void BasicColorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicColorFactory_instance = BasicColorFactory_new();
}

void BasicColorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicColorFactory", nullptr);
    java_register_method("BasicColorFactory", "createInstance", (void*) BasicColorFactory_createInstance);
    java_register_method("BasicColorFactory", "createInstanceA", (void*) BasicColorFactory_createInstanceA);
    java_register_method("BasicColorFactory", "createInstanceAN", (void*) BasicColorFactory_createInstanceAN);
    java_register_method("BasicColorFactory", "createInstanceARGB", (void*) BasicColorFactory_createInstanceARGB);
}

static void BasicColorFactory_initFields(BasicColorFactory* this) {
    this->NULL_COLOR = BasicColorFactory_createInstanceARGB(this, 255, 255, 255, 255, "null color");
    this->TAN = BasicColorFactory_createInstance(this, 0xE9D8B5);
    this->SKIN_PINK = BasicColorFactory_createInstance(this, 0xFDCECE);
    this->RED = BasicColorFactory_createInstanceAN(this, BasicColorUtil_getInstance()->ALPHA, 0xFF0000, "red");
    this->LIGHT_RED = BasicColorFactory_createInstanceAN(this, BasicColorUtil_getInstance()->ALPHA, 0xFFA0A0, "light red");
    this->DARK_GREEN = BasicColorFactory_createInstance(this, 0x00FF00);
    this->GREEN = BasicColorFactory_createInstanceAN(this, BasicColorUtil_getInstance()->ALPHA, 0x00DD00, "green");
    this->LIGHT_GREEN = BasicColorFactory_createInstance(this, 0x007700);
    this->PURPLE = BasicColorFactory_createInstanceAN(this, BasicColorUtil_getInstance()->ALPHA, 0x400040, "purple");
    this->BLUE = BasicColorFactory_createInstanceAN(this, BasicColorUtil_getInstance()->ALPHA, 0x0000FF, "blue");
    this->LIGHT_BLUE = BasicColorFactory_createInstance(this, 0x00aaff);
    this->VERY_LIGHT_BLUE = BasicColorFactory_createInstance(this, 0x000033);
    this->PUCE = BasicColorFactory_createInstance(this, 0xFF00AA);
    this->AQUA = BasicColorFactory_createInstance(this, 0x00FFFF);
    this->YELLOW = BasicColorFactory_createInstanceAN(this, BasicColorUtil_getInstance()->ALPHA, 0xFFFF00, "yellow");
    this->PINK = BasicColorFactory_createInstance(this, 0xFF00FF);
    this->BLACK = BasicColorFactory_createInstanceAN(this, BasicColorUtil_getInstance()->ALPHA, 0x000000, "black");
    this->GREY = BasicColorFactory_createInstanceAN(this, BasicColorUtil_getInstance()->ALPHA, 0xAAAAAA, "grey");
    this->LIGHT_GREY = BasicColorFactory_createInstance(this, 0xC0C0C0);
    this->DARK_GREY = BasicColorFactory_createInstance(this, 0x404040);
    this->ORANGE = BasicColorFactory_createInstance(this, 0xe07718);
    this->BROWN = BasicColorFactory_createInstance(this, 0x956B00);
    this->WHITE = BasicColorFactory_createInstance(this, 0xFFFFFF);
    this->TRANSPARENT_COLOR = BasicColorFactory_createInstanceAN(this, 0x00000000, 0x000000, StringUtil_getInstance()->EMPTY_STRING);
    this->TRANSPARENT_GREY = BasicColorFactory_createInstanceAN(this, 0x52000000, 0xECECEC, StringUtil_getInstance()->EMPTY_STRING);
    this->TRANSPARENT_BLACK = BasicColorFactory_createInstanceAN(this, 0x52000000, 0x000000, StringUtil_getInstance()->EMPTY_STRING);
    this->TRANSPARENT_RED = BasicColorFactory_createInstanceAN(this, 0x52000000, 0xFF0000, StringUtil_getInstance()->EMPTY_STRING);
    this->CLEAR_COLOR = this->BLACK;
    this->BORDER_COLOR = this->WHITE;
}

void BasicColorFactory_init(BasicColorFactory* this) {
    BasicColorFactory_register();
    BasicColorFactory_initFields(this);
}

BasicColorFactory* BasicColorFactory_new(void) {
    BasicColorFactory* this = java_object_alloc(sizeof(BasicColorFactory), "BasicColorFactory");
    BasicColorFactory_init(this);
    return this;
}


BasicColorFactory* BasicColorFactory_getInstance(void) {
        return (BasicColorFactory_staticInit(), BasicColorFactory_instance);
}


BasicColor* BasicColorFactory_createInstance(BasicColorFactory* this, int32_t value) {
        return BasicColor_new(BasicColorUtil_getInstance()->ALPHA, value, StringUtil_getInstance()->EMPTY_STRING);
}


BasicColor* BasicColorFactory_createInstanceA(BasicColorFactory* this, int32_t alphaValue, int32_t value) {
        return BasicColor_new(alphaValue, value, StringUtil_getInstance()->EMPTY_STRING);
}


BasicColor* BasicColorFactory_createInstanceAN(BasicColorFactory* this, int32_t alphaValue, int32_t value, const char* name) {
        return BasicColor_new(alphaValue, value, name);
}


BasicColor* BasicColorFactory_createInstanceARGB(BasicColorFactory* this, int32_t alphaValue, int32_t r, int32_t g, int32_t b, const char* name) {
        int32_t ALPHA_MASK = 0xFF000000;
        return BasicColor_new(alphaValue, ((alphaValue << 24) & ALPHA_MASK) + ((r << 16) & 0x00FF0000) + ((g << 8) & 0x0000FF00) + (b & 0x000000FF), StringUtil_getInstance()->EMPTY_STRING);
}

