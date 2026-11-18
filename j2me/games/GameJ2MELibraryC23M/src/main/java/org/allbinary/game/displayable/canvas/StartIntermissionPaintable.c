// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/StartIntermissionPaintable.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/FontDebugFactory.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("javax/microedition/lcdui/Font.h")
#include "javax/microedition/lcdui/Font.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameInfo.h")
#include "org/allbinary/game/displayable/canvas/GameInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/GameInfo.h")
#include "javax/microedition/lcdui/GameInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/GameInfo.h")
#include "javax/microedition/lcdui/GameInfo.h"
#endif
#if __has_include("org/allbinary/graphics/GameInfo.h")
#include "org/allbinary/graphics/GameInfo.h"
#endif
#if __has_include("org/allbinary/graphics/color/GameInfo.h")
#include "org/allbinary/graphics/color/GameInfo.h"
#endif
#if __has_include("org/allbinary/graphics/color/GameInfo.h")
#include "org/allbinary/graphics/color/GameInfo.h"
#endif
#if __has_include("org/allbinary/graphics/color/GameInfo.h")
#include "org/allbinary/graphics/color/GameInfo.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/GameInfo.h")
#include "org/allbinary/graphics/displayable/GameInfo.h"
#endif
#if __has_include("org/allbinary/graphics/font/GameInfo.h")
#include "org/allbinary/graphics/font/GameInfo.h"
#endif
#if __has_include("org/allbinary/graphics/font/GameInfo.h")
#include "org/allbinary/graphics/font/GameInfo.h"
#endif
#if __has_include("org/allbinary/graphics/font/GameInfo.h")
#include "org/allbinary/graphics/font/GameInfo.h"
#endif
#if __has_include("org/allbinary/graphics/font/GameInfo.h")
#include "org/allbinary/graphics/font/GameInfo.h"
#endif
#if __has_include("org/allbinary/graphics/paint/GameInfo.h")
#include "org/allbinary/graphics/paint/GameInfo.h"
#endif
#if __has_include("org/allbinary/logic/GameInfo.h")
#include "org/allbinary/logic/GameInfo.h"
#endif
#if __has_include("org/allbinary/logic/string/GameInfo.h")
#include "org/allbinary/logic/string/GameInfo.h"
#endif
#if __has_include("org/allbinary/logic/string/GameInfo.h")
#include "org/allbinary/logic/string/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameLayerManager.h"
#endif
#if __has_include("javax/microedition/lcdui/AllBinaryGameLayerManager.h")
#include "javax/microedition/lcdui/AllBinaryGameLayerManager.h"
#endif
#if __has_include("javax/microedition/lcdui/AllBinaryGameLayerManager.h")
#include "javax/microedition/lcdui/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/graphics/AllBinaryGameLayerManager.h")
#include "org/allbinary/graphics/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/graphics/color/AllBinaryGameLayerManager.h")
#include "org/allbinary/graphics/color/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/graphics/color/AllBinaryGameLayerManager.h")
#include "org/allbinary/graphics/color/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/graphics/color/AllBinaryGameLayerManager.h")
#include "org/allbinary/graphics/color/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/AllBinaryGameLayerManager.h")
#include "org/allbinary/graphics/displayable/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/graphics/font/AllBinaryGameLayerManager.h")
#include "org/allbinary/graphics/font/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/graphics/font/AllBinaryGameLayerManager.h")
#include "org/allbinary/graphics/font/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/graphics/font/AllBinaryGameLayerManager.h")
#include "org/allbinary/graphics/font/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/graphics/font/AllBinaryGameLayerManager.h")
#include "org/allbinary/graphics/font/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/graphics/paint/AllBinaryGameLayerManager.h")
#include "org/allbinary/graphics/paint/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/logic/AllBinaryGameLayerManager.h")
#include "org/allbinary/logic/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/logic/string/AllBinaryGameLayerManager.h")
#include "org/allbinary/logic/string/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/logic/string/AllBinaryGameLayerManager.h")
#include "org/allbinary/logic/string/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif









void StartIntermissionPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void StartIntermissionPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StartIntermissionPaintable", "InitUpdatePaintable");
    java_register_method("StartIntermissionPaintable", "updateMeasurement", (void*) StartIntermissionPaintable_updateMeasurement);
    java_register_method("StartIntermissionPaintable", "paint", (void*) StartIntermissionPaintable_paint);
    java_register_method("StartIntermissionPaintable", "update", (void*) StartIntermissionPaintable_update);
    java_register_method("StartIntermissionPaintable", "setBasicColorP", (void*) StartIntermissionPaintable_setBasicColorP);
    java_register_method("StartIntermissionPaintable", "getBasicColorP", (void*) StartIntermissionPaintable_getBasicColorP);
}

static void StartIntermissionPaintable_initFields(StartIntermissionPaintable* this) {
    this->fontDebugFactory = FontDebugFactory_getInstance();
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    
    
    
    
    
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    this->basicColor = BasicColorFactory_getInstance()->BLACK;
    
    this->lineYOffsetArray = NullUtil_getInstance()->NULL_INT_ARRAY;
    this->hasChanged = true;
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
    this->fontHeightP = 0;
    this->BEGIN_LEVEL = "Begin Level ";
    this->EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
}


void StartIntermissionPaintable_init(StartIntermissionPaintable* this, AllBinaryGameCanvas* gameCanvas, const char** stringArray, BasicColor* basicColor, Font* font) {
    StartIntermissionPaintable_register();
    InitUpdatePaintable_init(&this->base);
    StartIntermissionPaintable_initFields(this);
        this->gameCanvas = gameCanvas;
        this->stringArray = stringArray;
        this->lastWidth = ((int32_t*) java_array_new(sizeof(int32_t), java_array_length(this->stringArray)));
        StartIntermissionPaintable_setBasicColorP(this, basicColor);
        this->color = BasicColor_intValue(basicColor);
        this->fontSize = Font_getSize(font);
        this->font = font;
}

StartIntermissionPaintable* StartIntermissionPaintable_new(AllBinaryGameCanvas* gameCanvas, const char** stringArray, BasicColor* basicColor, Font* font) {
    StartIntermissionPaintable* this = java_object_alloc(sizeof(StartIntermissionPaintable), "StartIntermissionPaintable");
    StartIntermissionPaintable_init(this, gameCanvas, stringArray, basicColor, font);
    return this;
}


void StartIntermissionPaintable_updateMeasurement(StartIntermissionPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->fontHeightP = Font_getHeight(font);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void StartIntermissionPaintable_paint(StartIntermissionPaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Font* existingFont = Graphics_getFont(graphics);
        FontDebugFactory_setFont(this->fontDebugFactory, this->font, graphics);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        BasicColorSetUtil_setBasicColorP3(this->basicSetColorUtil, graphics, this->basicColor, this->color);
        int32_t beginWidth = 0;
        for (int32_t index = java_array_length(this->lineYOffsetArray) - 1; index >= 0; index--) {
            if (this->hasChanged) {
                this->lastWidth[index] = (Font_stringWidth(Graphics_getFont(graphics), this->stringArray[index]) >> 1);
            }
            beginWidth = this->lastWidth[index];
            Graphics_drawString(graphics, this->stringArray[index], DisplayInfoSingleton_getLastHalfWidth(displayInfo) - beginWidth, DisplayInfoSingleton_getLastHalfHeight(displayInfo) - this->lineYOffsetArray[index], this->anchor);
        }
        this->hasChanged = false;
        FontDebugFactory_setFont(this->fontDebugFactory, existingFont, graphics);
}


void StartIntermissionPaintable_update(StartIntermissionPaintable* this) {
        int32_t level = GameInfo_getCurrentLevel(AllBinaryGameLayerManager_getGameInfo(AllBinaryGameCanvas_getLayerManager(this->gameCanvas)));
        this->stringArray[0] = java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), this->BEGIN_LEVEL), level));
        for (int32_t index = java_array_length(this->stringArray) - 1; index >= 1; index--) {
            this->stringArray[index] = this->EMPTY_STRING;
        }
}


void StartIntermissionPaintable_setBasicColorP(StartIntermissionPaintable* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}


BasicColor* StartIntermissionPaintable_getBasicColorP(StartIntermissionPaintable* this) {
        return this->basicColor;
}

