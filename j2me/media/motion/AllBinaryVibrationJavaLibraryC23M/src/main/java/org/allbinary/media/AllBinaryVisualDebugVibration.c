// Generated Code Do Not Modify
#include "org/allbinary/media/AllBinaryVisualDebugVibration.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/media/AllBinaryVibrationME.h"






void AllBinaryVisualDebugVibration_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllBinaryVisualDebugVibration_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryVisualDebugVibration", "AllBinaryVibrationME");
    java_register_method("AllBinaryVisualDebugVibration", "updateMeasurement", (void*) AllBinaryVisualDebugVibration_updateMeasurement);
    java_register_method("AllBinaryVisualDebugVibration", "vibrate", (void*) AllBinaryVisualDebugVibration_vibrate);
    java_register_method("AllBinaryVisualDebugVibration", "paint", (void*) AllBinaryVisualDebugVibration_paint);
}

static void AllBinaryVisualDebugVibration_initFields(AllBinaryVisualDebugVibration* this) {
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
    this->timeDelayHelper = TimeDelayHelper_new((Integer_staticInit(), Integer_MAX_VALUE));
    this->VIBRATING = "Vibrating";
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
    this->width = 0;
}

void AllBinaryVisualDebugVibration_init(AllBinaryVisualDebugVibration* this) {
    AllBinaryVisualDebugVibration_register();
    AllBinaryVibrationME_init(&this->base);
    AllBinaryVisualDebugVibration_initFields(this);
}

AllBinaryVisualDebugVibration* AllBinaryVisualDebugVibration_new(void) {
    AllBinaryVisualDebugVibration* this = java_object_alloc(sizeof(AllBinaryVisualDebugVibration), "AllBinaryVisualDebugVibration");
    AllBinaryVisualDebugVibration_init(this);
    return this;
}


void AllBinaryVisualDebugVibration_updateMeasurement(AllBinaryVisualDebugVibration* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->width = Font_stringWidth(font, this->VIBRATING);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void AllBinaryVisualDebugVibration_vibrate(AllBinaryVisualDebugVibration* this, int32_t duration, int32_t type, int32_t volume) {
        this->timeDelayHelper->delay = duration;
}


void AllBinaryVisualDebugVibration_paint(AllBinaryVisualDebugVibration* this, Graphics* graphics) {
        if (TimeDelayHelper_isTimeTNT(this->timeDelayHelper)) {
            this->timeDelayHelper->delay = (Integer_staticInit(), Integer_MAX_VALUE);
            MyFontProcessor_process(this->myFontProcessor, graphics);
            Graphics_drawString(graphics, this->VIBRATING, DisplayInfoSingleton_getLastHalfWidth(this->displayInfoSingleton) - (this->width >> 1), 0, this->anchor);
        }
}

