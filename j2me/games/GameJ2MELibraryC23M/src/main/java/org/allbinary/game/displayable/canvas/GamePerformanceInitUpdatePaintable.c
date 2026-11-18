// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/GamePerformanceInitUpdatePaintable.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/canvas/GameStatisticsFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif
#if __has_include("org/allbinary/canvas/GameStatisticsFactory.h")
#include "org/allbinary/canvas/GameStatisticsFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif







void GamePerformanceInitUpdatePaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GamePerformanceInitUpdatePaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GamePerformanceInitUpdatePaintable", "InitUpdatePaintable");
    java_register_method("GamePerformanceInitUpdatePaintable", "updateMeasurement", (void*) GamePerformanceInitUpdatePaintable_updateMeasurement);
    java_register_method("GamePerformanceInitUpdatePaintable", "init", (void*) GamePerformanceInitUpdatePaintable_initMethod);
    java_register_method("GamePerformanceInitUpdatePaintable", "update", (void*) GamePerformanceInitUpdatePaintable_update);
    java_register_method("GamePerformanceInitUpdatePaintable", "paint", (void*) GamePerformanceInitUpdatePaintable_paint);
}

static void GamePerformanceInitUpdatePaintable_initFields(GamePerformanceInitUpdatePaintable* this) {
    this->halfHeight = DisplayInfoSingleton_getLastHalfHeight(DisplayInfoSingleton_getInstance());
    this->yArray = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ this->halfHeight + 30, this->halfHeight + 30, this->halfHeight + 30 + 15, this->halfHeight + 30 + 15, this->halfHeight + 30 + 30, this->halfHeight + 30 + 30, this->halfHeight + 30 + 45, this->halfHeight + 30 + 45 }) / sizeof(int32_t), (int32_t[]){ this->halfHeight + 30, this->halfHeight + 30, this->halfHeight + 30 + 15, this->halfHeight + 30 + 15, this->halfHeight + 30 + 30, this->halfHeight + 30 + 30, this->halfHeight + 30 + 45, this->halfHeight + 30 + 45 }));
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->baseRefreshHelperCharArray = ((uint16_t**) java_array_new2(sizeof(uint16_t), 0, 0));
    this->defaultStringWidth = 0;
    this->RED = BasicColor_intValue(BasicColorFactory_getInstance()->RED);
}

void GamePerformanceInitUpdatePaintable_init(GamePerformanceInitUpdatePaintable* this) {
    GamePerformanceInitUpdatePaintable_register();
    InitUpdatePaintable_init(&this->base);
    GamePerformanceInitUpdatePaintable_initFields(this);
}

GamePerformanceInitUpdatePaintable* GamePerformanceInitUpdatePaintable_new(void) {
    GamePerformanceInitUpdatePaintable* this = java_object_alloc(sizeof(GamePerformanceInitUpdatePaintable), "GamePerformanceInitUpdatePaintable");
    GamePerformanceInitUpdatePaintable_init(this);
    return this;
}


void GamePerformanceInitUpdatePaintable_updateMeasurement(GamePerformanceInitUpdatePaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->defaultStringWidth = MyFontProcessor_defaultStringWidth(font, 2);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void GamePerformanceInitUpdatePaintable_initMethod(GamePerformanceInitUpdatePaintable* this) {
}


void GamePerformanceInitUpdatePaintable_update(GamePerformanceInitUpdatePaintable* this) {
        this->baseRefreshHelperCharArray = BaseGameStatistics_to2DCharArray(GameStatisticsFactory_getInstance());
}


void GamePerformanceInitUpdatePaintable_paint(GamePerformanceInitUpdatePaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Graphics_setColor(graphics, this->RED);
        uint16_t* charArray = nullptr;
        uint16_t* charArray2 = nullptr;
        int32_t size2 = 0;
        int32_t size3 = 0;
        int32_t size = java_array_length(this->baseRefreshHelperCharArray) - 2;
        for (int32_t index = size; index >= 0; index -= 2) {
            charArray = this->baseRefreshHelperCharArray[index];
            charArray2 = this->baseRefreshHelperCharArray[index + 1];
            size2 = java_array_length(charArray);
            size3 = java_array_length(charArray2);
            Graphics_drawChars(graphics, charArray, 0, size2, 0, this->yArray[index], 0);
            Graphics_drawChars(graphics, charArray2, 0, size3, size2 * this->defaultStringWidth, this->yArray[index + 1], 0);
        }
}

