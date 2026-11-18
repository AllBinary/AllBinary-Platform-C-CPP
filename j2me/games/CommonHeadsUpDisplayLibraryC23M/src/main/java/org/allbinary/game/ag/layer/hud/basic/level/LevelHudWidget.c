// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/hud/basic/level/LevelHudWidget.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif






static void LevelHudWidget_update(LevelHudWidget* this);







void LevelHudWidget_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LevelHudWidget_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LevelHudWidget", "BasicHud");
    java_register_method("LevelHudWidget", "updateMeasurement", (void*) LevelHudWidget_updateMeasurement);
    java_register_method("LevelHudWidget", "update", (void*) LevelHudWidget_update);
    java_register_method("LevelHudWidget", "setLevel", (void*) LevelHudWidget_setLevel);
    java_register_method("LevelHudWidget", "nextLevel", (void*) LevelHudWidget_nextLevel);
    java_register_method("LevelHudWidget", "previousLevel", (void*) LevelHudWidget_previousLevel);
    java_register_method("LevelHudWidget", "isComplete", (void*) LevelHudWidget_isComplete);
    java_register_method("LevelHudWidget", "paint", (void*) LevelHudWidget_paint);
    java_register_method("LevelHudWidget", "paintThreed", (void*) LevelHudWidget_paintThreed);
}

static void LevelHudWidget_initFields(LevelHudWidget* this) {
    
    
    
    this->levelNumberCharArray = NullUtil_getInstance()->NULL_CHAR_ARRAY;
    this->levelNumberTotalDigits = 0;
    this->offset = 0;
    
}


// throws Exception
LevelHudWidget* LevelHudWidget_createHud(int32_t maxlevel, int32_t location, int32_t direction) {
        return LevelHudWidget_new(maxlevel, location, direction);
}


void LevelHudWidget_init(LevelHudWidget* this, int32_t maxlevel, int32_t location, int32_t direction) {
    LevelHudWidget_register();
        BasicHud_init(&this->base, location, direction, 2, BasicColorFactory_getInstance()->GREY);
        LevelHudWidget_initFields(this);
        this->primitiveLongUtil = PrimitiveLongUtil_createPowerOfTen(1000);
        const char* LEVEL = "Lv ";
        this->levelString = java_string_toCharArray(LEVEL);
        this->maxlevel = maxlevel;
        this->level = maxlevel;
        LevelHudWidget_update(this);
        this->base.updateMaxHeight = 14;
}

LevelHudWidget* LevelHudWidget_new(int32_t maxlevel, int32_t location, int32_t direction) {
    LevelHudWidget* this = java_object_alloc(sizeof(LevelHudWidget), "LevelHudWidget");
    LevelHudWidget_init(this, maxlevel, location, direction);
    return this;
}


void LevelHudWidget_updateMeasurement(LevelHudWidget* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->base.updateMaxWidth = Font_getSize(font) * 4;
        this->offset = Font_charsWidth(font, this->levelString, 0, java_array_length(this->levelString)) + Font_getSize(font);
        BasicHud_updateMeasurement((&this->base), graphics);
}


static void LevelHudWidget_update(LevelHudWidget* this) {
        this->levelNumberCharArray = PrimitiveLongUtil_getCharArray(this->primitiveLongUtil, this->level);
        this->levelNumberTotalDigits = PrimitiveLongUtil_getCurrentTotalDigits(this->primitiveLongUtil);
}


void LevelHudWidget_setLevel(LevelHudWidget* this, int32_t level) {
        this->level = level;
        LevelHudWidget_update(this);
}


void LevelHudWidget_nextLevel(LevelHudWidget* this) {
        this->level++;
        LevelHudWidget_update(this);
}


void LevelHudWidget_previousLevel(LevelHudWidget* this) {
        this->level--;
        if (this->level < 0) {
            this->level = 0;
        }
        LevelHudWidget_update(this);
}


bool LevelHudWidget_isComplete(LevelHudWidget* this) {
        if (this->level <= this->maxlevel) {
            return false;
        } else {
            return true;
        }
}


void LevelHudWidget_paint(LevelHudWidget* this, Graphics* graphics) {
        BasicHud_paintDX((&this->base), graphics, this->levelString, 0, java_array_length(this->levelString), this->levelNumberCharArray, 0, this->levelNumberTotalDigits, this->offset);
}


void LevelHudWidget_paintThreed(LevelHudWidget* this, Graphics* graphics) {
}

