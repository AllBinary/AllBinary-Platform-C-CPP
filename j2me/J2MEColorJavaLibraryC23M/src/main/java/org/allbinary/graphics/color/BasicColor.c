// Generated Code Do Not Modify
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/graphics/color/BasicColorUtil.h"












void BasicColor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicColor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicColor", nullptr);
    java_register_method("BasicColor", "intValue", (void*) BasicColor_intValue);
    java_register_method("BasicColor", "toInt", (void*) BasicColor_toInt);
    java_register_method("BasicColor", "toString", (void*) BasicColor_toString);
    java_register_method("BasicColor", "getName", (void*) BasicColor_getName);
    java_register_method("BasicColor", "getRedComponent", (void*) BasicColor_getRedComponent);
    java_register_method("BasicColor", "getGreenComponent", (void*) BasicColor_getGreenComponent);
    java_register_method("BasicColor", "getBlueComponent", (void*) BasicColor_getBlueComponent);
    java_register_method("BasicColor", "getAlphaComponent", (void*) BasicColor_getAlphaComponent);
}

static void BasicColor_initFields(BasicColor* this) {
    
    
    
    
    
    
    
    
    
    
}


void BasicColor_init(BasicColor* this, int32_t alphaValue, int32_t value, const char* name) {
    BasicColor_register();
    BasicColor_initFields(this);
        this->name = name;
        int32_t tempValue = 0;
        BasicColorUtil* basicColorUtil = BasicColorUtil_getInstance();
        if (basicColorUtil->isAlpha) {
            if (basicColorUtil->ffOpaque) {
                tempValue = alphaValue | value;
            } else {
                tempValue = 0x00000000 | value;
            }
        } else {
            tempValue = value;
        }
        int32_t alphaInt = ((tempValue >> 24) & 255);
        this->alpha = ((int16_t) alphaInt);
        this->alphaComponent = (((float) alphaInt)) / 255.0f;
        int32_t redInt = ((tempValue >> 16) & 255);
        this->red = ((int16_t) redInt);
        this->redComponent = (((float) redInt)) / 255.0f;
        int32_t greenInt = ((tempValue >> 8) & 255);
        this->green = ((int16_t) greenInt);
        this->greenComponent = (((float) greenInt)) / 255.0f;
        int32_t blueInt = ((tempValue) & 255);
        this->blue = ((int16_t) blueInt);
        this->blueComponent = (((float) blueInt)) / 255.0f;
        this->value = tempValue;
}

BasicColor* BasicColor_new(int32_t alphaValue, int32_t value, const char* name) {
    BasicColor* this = java_object_alloc(sizeof(BasicColor), "BasicColor");
    BasicColor_init(this, alphaValue, value, name);
    return this;
}


int32_t BasicColor_intValue(BasicColor* this) {
        return this->value;
}


int32_t BasicColor_toInt(BasicColor* this) {
        return this->value;
}


const char* BasicColor_toString(BasicColor* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "BasicColor: ");
        StringMaker_append(stringBuffer, "Alpha: ");
        StringMaker_appendshort(stringBuffer, this->alpha);
        StringMaker_append(stringBuffer, " Red: ");
        StringMaker_appendshort(stringBuffer, this->red);
        StringMaker_append(stringBuffer, " Green: ");
        StringMaker_appendshort(stringBuffer, this->green);
        StringMaker_append(stringBuffer, " Blue: ");
        StringMaker_appendshort(stringBuffer, this->blue);
        StringMaker_append(stringBuffer, " Value: ");
        StringMaker_appendint(stringBuffer, this->value);
        return java_string_of(stringBuffer);
}


const char* BasicColor_getName(BasicColor* this) {
        return this->name;
}


float BasicColor_getRedComponent(BasicColor* this) {
        return this->redComponent;
}


float BasicColor_getGreenComponent(BasicColor* this) {
        return this->greenComponent;
}


float BasicColor_getBlueComponent(BasicColor* this) {
        return this->blueComponent;
}


float BasicColor_getAlphaComponent(BasicColor* this) {
        return this->alphaComponent;
}

