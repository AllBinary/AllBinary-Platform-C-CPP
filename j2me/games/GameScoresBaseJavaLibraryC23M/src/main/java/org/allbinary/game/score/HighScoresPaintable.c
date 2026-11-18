// Generated Code Do Not Modify
#include "org/allbinary/game/score/HighScoresPaintable.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/ColorChangeEvent.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScore.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("javax/microedition/lcdui/Font.h")
#include "javax/microedition/lcdui/Font.h"
#endif
#if __has_include("javax/microedition/lcdui/Font.h")
#include "javax/microedition/lcdui/Font.h"
#endif
#if __has_include("javax/microedition/lcdui/Font.h")
#include "javax/microedition/lcdui/Font.h"
#endif










void HighScoresPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HighScoresPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScoresPaintable", "Paintable");
    java_register_method("HighScoresPaintable", "updateMeasurement", (void*) HighScoresPaintable_updateMeasurement);
    java_register_method("HighScoresPaintable", "onEvent", (void*) HighScoresPaintable_onEvent);
    java_register_method("HighScoresPaintable", "paint", (void*) HighScoresPaintable_paint);
    java_register_method("HighScoresPaintable", "setBasicColorP", (void*) HighScoresPaintable_setBasicColorP);
    java_register_method("HighScoresPaintable", "getBasicColorP", (void*) HighScoresPaintable_getBasicColorP);
    java_register_method("HighScoresPaintable", "setHighScores", (void*) HighScoresPaintable_setHighScores);
}

static void HighScoresPaintable_initFields(HighScoresPaintable* this) {
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->basicColor = BasicColorFactory_getInstance()->WHITE;
    this->highScores = NullHighScoresSingletonFactory_getInstance();
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
    this->charHeight = 0;
}


void HighScoresPaintable_init(HighScoresPaintable* this) {
    HighScoresPaintable_register();
    Paintable_init(&this->base);
    HighScoresPaintable_initFields(this);
}

HighScoresPaintable* HighScoresPaintable_new(void) {
    HighScoresPaintable* this = java_object_alloc(sizeof(HighScoresPaintable), "HighScoresPaintable");
    HighScoresPaintable_init(this);
    return this;
}


void HighScoresPaintable_updateMeasurement(HighScoresPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->charHeight = Font_getHeight(font);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void HighScoresPaintable_onEvent(HighScoresPaintable* this, AllBinaryEventObject* eventObject) {
        ColorChangeEvent* colorChangeEvent = ((ColorChangeEvent*) eventObject);
        this->basicColor = ColorChangeEvent_getBasicColorP(colorChangeEvent);
}


void HighScoresPaintable_paint(HighScoresPaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        int32_t width = DisplayInfoSingleton_getLastWidth(this->displayInfoSingleton);
        int32_t height = DisplayInfoSingleton_getLastHeight(this->displayInfoSingleton);
        Graphics_setColor(graphics, BasicColor_intValue(HighScoresPaintable_getBasicColorP(this)));
        const char* heading = HighScores_getHeading(this->highScores);
        int32_t topScoresWidth = (Font_stringWidth(Graphics_getFont(graphics), heading) >> 1);
        int32_t charHeight = this->charHeight;
        Graphics_drawString(graphics, heading, (width >> 1) - topScoresWidth, charHeight, this->anchor);
        Graphics_drawString(graphics, HighScores_getColumnOneHeading(this->highScores), 10, charHeight * 3, this->anchor);
        const char* columnTwoHeading = HighScores_getColumnTwoHeading(this->highScores);
        int32_t columnTwoHeadingWidth = Font_stringWidth(Graphics_getFont(graphics), columnTwoHeading);
        Graphics_drawString(graphics, columnTwoHeading, width - 10 - columnTwoHeadingWidth, charHeight * 3, this->anchor);
        int32_t index = 4;
        int32_t largestSecondColumnWidth = columnTwoHeadingWidth;
        BasicArrayList* list = HighScores_getList(this->highScores);
        int32_t size = BasicArrayList_size(list);
        int32_t vectorIndex = 0;
        HighScore* highScore = nullptr;
        while (vectorIndex < size && charHeight * index < height - (charHeight * 2)) {
            highScore = ((HighScore*) list->objectArray[vectorIndex]);
            int32_t nextScoreWidth = Font_stringWidth(Graphics_getFont(graphics), HighScore_getScoreString(highScore));
            if (nextScoreWidth > largestSecondColumnWidth) {
                largestSecondColumnWidth = nextScoreWidth;
            }
            vectorIndex++;
        }
        vectorIndex = 0;
        while (vectorIndex < size && charHeight * index < height - (charHeight * 2)) {
            highScore = ((HighScore*) list->objectArray[vectorIndex]);
            Graphics_drawString(graphics, HighScore_getName(highScore), 10, charHeight * index, this->anchor);
            Graphics_drawString(graphics, HighScore_getScoreString(highScore), width - 10 - largestSecondColumnWidth, charHeight * index, this->anchor);
            index++;
            vectorIndex++;
        }
}


void HighScoresPaintable_setBasicColorP(HighScoresPaintable* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}


BasicColor* HighScoresPaintable_getBasicColorP(HighScoresPaintable* this) {
        return this->basicColor;
}


void HighScoresPaintable_setHighScores(HighScoresPaintable* this, HighScores* highScores) {
        this->highScores = highScores;
}

