// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/hud/basic/score/ScoreHudWidget.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif






void ScoreHudWidget_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScoreHudWidget_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScoreHudWidget", "NumberStringHud");
    java_register_method("ScoreHudWidget", "updateMeasurement", (void*) ScoreHudWidget_updateMeasurement);
}


// throws Exception
ScoreHudWidget* ScoreHudWidget_getInstance(int32_t maxscore, int32_t location, int32_t direction) {
        return ScoreHudWidget_new(maxscore, location, direction, 2, BasicColorFactory_getInstance()->GREY);
}


void ScoreHudWidget_init(ScoreHudWidget* this, int32_t maxscore, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    ScoreHudWidget_register();
        NumberStringHud_init(&this->base, "Pts ", maxscore, location, direction, bufferZone, basicColor);
        this->base.base.updateMaxHeight = 14;
}

ScoreHudWidget* ScoreHudWidget_new(int32_t maxscore, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    ScoreHudWidget* this = java_object_alloc(sizeof(ScoreHudWidget), "ScoreHudWidget");
    ScoreHudWidget_init(this, maxscore, location, direction, bufferZone, basicColor);
    return this;
}


void ScoreHudWidget_updateMeasurement(ScoreHudWidget* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->base.base.updateMaxWidth = Font_getSize(font) * 5;
        NumberStringHud_updateMeasurement((&this->base), graphics);
}

