// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/logic/math/PrimitiveLongSingleton.h"
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"
#if __has_include("org/allbinary/logic/math/PrimitiveLongSingleton.h")
#include "org/allbinary/logic/math/PrimitiveLongSingleton.h"
#endif
#if __has_include("org/allbinary/game/graphics/hud/BasicHudFactory.h")
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#endif












void NumberStringHud_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NumberStringHud_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NumberStringHud", "BasicHud");
    java_register_method("NumberStringHud", "updateMeasurement", (void*) NumberStringHud_updateMeasurement);
    java_register_method("NumberStringHud", "get", (void*) NumberStringHud_get);
    java_register_method("NumberStringHud", "add", (void*) NumberStringHud_add);
    java_register_method("NumberStringHud", "set", (void*) NumberStringHud_set);
    java_register_method("NumberStringHud", "reduce", (void*) NumberStringHud_reduce);
    java_register_method("NumberStringHud", "paint", (void*) NumberStringHud_paint);
    java_register_method("NumberStringHud", "paintXY", (void*) NumberStringHud_paintXY);
    java_register_method("NumberStringHud", "paintThreed", (void*) NumberStringHud_paintThreed);
}

static void NumberStringHud_initFields(NumberStringHud* this) {
    
    
    
    
    
    this->offset = 0;
    
    this->valueTotalDigits = 0;
}


void NumberStringHud_init(NumberStringHud* this, const char* prependString, int32_t max, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    NumberStringHud_register();
        BasicHud_init(&this->base, location, direction, bufferZone, basicColor);
        NumberStringHud_initFields(this);
        this->prependString = prependString;
        this->PREPEND_STRING = java_string_toCharArray(prependString);
        this->valueString = PrimitiveLongSingleton_getInstance()->NUMBER_CHAR_ARRAYS[0];
        this->primitiveLongUtil = PrimitiveLongUtil_createPowerOfTen(max + 1);
        this->max = max;
        this->value = 0;
        if (direction == 0) {
            java_throw(java_exception_new("RuntimeException", BasicHudFactory_getInstance()->DIRECTION_EXCEPTION));
        }
}

NumberStringHud* NumberStringHud_new(const char* prependString, int32_t max, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    NumberStringHud* this = java_object_alloc(sizeof(NumberStringHud), "NumberStringHud");
    NumberStringHud_init(this, prependString, max, location, direction, bufferZone, basicColor);
    return this;
}


void NumberStringHud_updateMeasurement(NumberStringHud* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->offset = Font_stringWidth(font, this->prependString) + MyFontProcessor_defaultCharWidth(font);
        BasicHud_updateMeasurement((&this->base), graphics);
}


int32_t NumberStringHud_get(NumberStringHud* this) {
        return this->value;
}


void NumberStringHud_add(NumberStringHud* this, int32_t value) {
        NumberStringHud_set(this, this->value + value);
}


void NumberStringHud_set(NumberStringHud* this, int32_t value) {
        this->value = value;
        if (this->value > this->max) {
            this->value = 0;
        }
        this->valueString = PrimitiveLongUtil_getCharArray(this->primitiveLongUtil, this->value);
        this->valueTotalDigits = PrimitiveLongUtil_getCurrentTotalDigits(this->primitiveLongUtil);
}


void NumberStringHud_reduce(NumberStringHud* this, int32_t value) {
        NumberStringHud_set(this, this->value - value);
}


void NumberStringHud_paint(NumberStringHud* this, Graphics* graphics) {
        BasicHud_paintDX((&this->base), graphics, this->PREPEND_STRING, 0, java_array_length(this->PREPEND_STRING), this->valueString, 0, this->valueTotalDigits, this->offset);
}


void NumberStringHud_paintXY(NumberStringHud* this, Graphics* graphics, int32_t x, int32_t y) {
        MyFontProcessor_process(this->base.myFontProcessor, graphics);
        uint16_t* charArray = this->PREPEND_STRING;
        int32_t len = java_array_length(this->PREPEND_STRING);
        uint16_t* charArray2 = this->valueString;
        int32_t len2 = this->valueTotalDigits;
        BasicColorSetUtil_setBasicColorP(this->base.basicSetColorUtil, graphics, BasicHud_getBasicColorP(this));
        Graphics_drawChars(graphics, charArray, 0, len, x, y, 0);
        Graphics_drawChars(graphics, charArray2, 0, len2, x - this->offset, y, 0);
}


void NumberStringHud_paintThreed(NumberStringHud* this, Graphics* graphics) {
}

