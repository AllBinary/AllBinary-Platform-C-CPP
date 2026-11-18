// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/hud/basic/time/TimeHudWidget.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/logic/math/PrimitiveLongSingleton.h"
#include "org/allbinary/game/ag/layer/hud/basic/time/HudTimer.h"
#if __has_include("org/allbinary/logic/math/PrimitiveLongSingleton.h")
#include "org/allbinary/logic/math/PrimitiveLongSingleton.h"
#endif







static void TimeHudWidget_set(TimeHudWidget* this);



void TimeHudWidget_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TimeHudWidget_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TimeHudWidget", "BasicHud");
    java_register_method("TimeHudWidget", "updateMeasurement", (void*) TimeHudWidget_updateMeasurement);
    java_register_method("TimeHudWidget", "update", (void*) TimeHudWidget_update);
    java_register_method("TimeHudWidget", "set", (void*) TimeHudWidget_set);
    java_register_method("TimeHudWidget", "getTimer", (void*) TimeHudWidget_getTimer);
    java_register_method("TimeHudWidget", "paint", (void*) TimeHudWidget_paint);
}

static void TimeHudWidget_initFields(TimeHudWidget* this) {
    this->TIME_STRING = "Time ";
    this->TIME_CHAR_ARRAY = ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'T', u'i', u'm', u'e', u' ' }) / sizeof(uint16_t), (uint16_t[]){ u'T', u'i', u'm', u'e', u' ' }));
    this->offset = 0;
    this->string = PrimitiveLongSingleton_getInstance()->ZERO;
    this->totalDigits = 1;
    
}


// throws Exception
TimeHudWidget* TimeHudWidget_getInstance(int32_t location, int32_t direction, BasicColor* basicColor, HudTimer* timer) {
        return TimeHudWidget_new(location, direction, 2, basicColor, timer);
}


void TimeHudWidget_init(TimeHudWidget* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor, HudTimer* timer) {
    TimeHudWidget_register();
        BasicHud_init(&this->base, location, direction, bufferZone, basicColor);
        TimeHudWidget_initFields(this);
        this->timer = timer;
        TimeHudWidget_set(this);
        this->base.updateMaxHeight = 14;
}

TimeHudWidget* TimeHudWidget_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor, HudTimer* timer) {
    TimeHudWidget* this = java_object_alloc(sizeof(TimeHudWidget), "TimeHudWidget");
    TimeHudWidget_init(this, location, direction, bufferZone, basicColor, timer);
    return this;
}


void TimeHudWidget_updateMeasurement(TimeHudWidget* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->base.updateMaxWidth = Font_getSize(font) * 5;
        this->offset = Font_stringWidth(font, this->TIME_STRING) + MyFontProcessor_defaultStringWidth(font, 3);
        BasicHud_updateMeasurement((&this->base), graphics);
}


void TimeHudWidget_update(TimeHudWidget* this) {
        HudTimer_update(this->timer);
        TimeHudWidget_set(this);
}


static void TimeHudWidget_set(TimeHudWidget* this) {
        this->string = HudTimer_getTimeChars(this->timer);
        this->totalDigits = HudTimer_getCurrentTotalDigits(this->timer);
}


HudTimer* TimeHudWidget_getTimer(TimeHudWidget* this) {
        return this->timer;
}


void TimeHudWidget_paint(TimeHudWidget* this, Graphics* graphics) {
        BasicHud_paintDX((&this->base), graphics, this->TIME_CHAR_ARRAY, 0, java_array_length(this->TIME_CHAR_ARRAY), this->string, 0, this->totalDigits, this->offset);
}

