// Generated Code Do Not Modify
#include "org/allbinary/game/score/HighScoresCanvasLevelChangeInputProcessor.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/input/event/GameKeyEventHandler.h"
#include "org/allbinary/game/input/event/GameKeyEventUtil.h"
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/score/HighScoresCanvasInputProcessor.h"
#if __has_include("org/allbinary/game/input/event/GameKeyEventHandler.h")
#include "org/allbinary/game/input/event/GameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEventHandler.h")
#include "org/allbinary/game/input/event/GameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/game/score/GameInfo.h")
#include "org/allbinary/game/score/GameInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/GameInfo.h")
#include "javax/microedition/lcdui/GameInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/GameInfo.h")
#include "javax/microedition/lcdui/GameInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/GameInfo.h")
#include "javax/microedition/lcdui/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameInfo.h")
#include "org/allbinary/game/input/event/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameInfo.h")
#include "org/allbinary/game/input/event/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/GameInfo.h")
#include "org/allbinary/game/score/displayable/GameInfo.h"
#endif
#if __has_include("org/allbinary/graphics/GameInfo.h")
#include "org/allbinary/graphics/GameInfo.h"
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
#if __has_include("org/allbinary/util/GameInfo.h")
#include "org/allbinary/util/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/HighScoresCanvas.h")
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#endif
#if __has_include("org/allbinary/game/score/GameInfo.h")
#include "org/allbinary/game/score/GameInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/GameInfo.h")
#include "javax/microedition/lcdui/GameInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/GameInfo.h")
#include "javax/microedition/lcdui/GameInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/GameInfo.h")
#include "javax/microedition/lcdui/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameInfo.h")
#include "org/allbinary/game/input/event/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameInfo.h")
#include "org/allbinary/game/input/event/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/GameInfo.h")
#include "org/allbinary/game/score/displayable/GameInfo.h"
#endif
#if __has_include("org/allbinary/graphics/GameInfo.h")
#include "org/allbinary/graphics/GameInfo.h"
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
#if __has_include("org/allbinary/util/GameInfo.h")
#include "org/allbinary/util/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/HighScoresCanvas.h")
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/HighScoresCanvas.h")
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#endif
#if __has_include("javax/microedition/lcdui/Font.h")
#include "javax/microedition/lcdui/Font.h"
#endif









void HighScoresCanvasLevelChangeInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HighScoresCanvasLevelChangeInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScoresCanvasLevelChangeInputProcessor", "HighScoresCanvasInputProcessor");
    java_register_method("HighScoresCanvasLevelChangeInputProcessor", "updateMeasurement", (void*) HighScoresCanvasLevelChangeInputProcessor_updateMeasurement);
    java_register_method("HighScoresCanvasLevelChangeInputProcessor", "open", (void*) HighScoresCanvasLevelChangeInputProcessor_open);
    java_register_method("HighScoresCanvasLevelChangeInputProcessor", "close", (void*) HighScoresCanvasLevelChangeInputProcessor_close);
    java_register_method("HighScoresCanvasLevelChangeInputProcessor", "update", (void*) HighScoresCanvasLevelChangeInputProcessor_update);
    java_register_method("HighScoresCanvasLevelChangeInputProcessor", "paint", (void*) HighScoresCanvasLevelChangeInputProcessor_paint);
}

static void HighScoresCanvasLevelChangeInputProcessor_initFields(HighScoresCanvasLevelChangeInputProcessor* this) {
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
    this->INSTRUCTIONS = "(Right = Next Track, Left = Previous Track)";
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
    this->fontHeight = 0;
}


void HighScoresCanvasLevelChangeInputProcessor_init(HighScoresCanvasLevelChangeInputProcessor* this, HighScoresCanvas* highScoresCanvas) {
    HighScoresCanvasLevelChangeInputProcessor_register();
        HighScoresCanvasInputProcessor_init(&this->base, highScoresCanvas);
        HighScoresCanvasLevelChangeInputProcessor_initFields(this);
}

HighScoresCanvasLevelChangeInputProcessor* HighScoresCanvasLevelChangeInputProcessor_new(HighScoresCanvas* highScoresCanvas) {
    HighScoresCanvasLevelChangeInputProcessor* this = java_object_alloc(sizeof(HighScoresCanvasLevelChangeInputProcessor), "HighScoresCanvasLevelChangeInputProcessor");
    HighScoresCanvasLevelChangeInputProcessor_init(this, highScoresCanvas);
    return this;
}


void HighScoresCanvasLevelChangeInputProcessor_updateMeasurement(HighScoresCanvasLevelChangeInputProcessor* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->fontHeight = Font_getHeight(font);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void HighScoresCanvasLevelChangeInputProcessor_open(HighScoresCanvasLevelChangeInputProcessor* this) {
        GameKeyEventHandler_addListener(GameKeyEventHandler_getInstance(), this);
}


void HighScoresCanvasLevelChangeInputProcessor_close(HighScoresCanvasLevelChangeInputProcessor* this) {
        GameKeyEventHandler_removeListener(GameKeyEventHandler_getInstance(), this);
}


// synchronized
void HighScoresCanvasLevelChangeInputProcessor_update(HighScoresCanvasLevelChangeInputProcessor* this) {
        BasicArrayList* list = GameInput_getGameKeyEventList(this);
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            void* anyType = list->objectArray[index];
            int32_t key = GameKeyEventUtil_getKey(anyType);
            if (key == (Canvas_staticInit(), Canvas_RIGHT)) {
                GameInfo_nextGameLevel(HighScoresCanvas_getGameInfo(HighScoresCanvasInputProcessor_getHighScoresCanvas(this)));
            } else if (key == (Canvas_staticInit(), Canvas_LEFT)) {
                GameInfo_previousGameLevel(HighScoresCanvas_getGameInfo(HighScoresCanvasInputProcessor_getHighScoresCanvas(this)));
            }
            HighScoresCanvas_executeUpdate(HighScoresCanvasInputProcessor_getHighScoresCanvas(this));
        }
        BasicArrayList_clear(list);
}


void HighScoresCanvasLevelChangeInputProcessor_paint(HighScoresCanvasLevelChangeInputProcessor* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        int32_t width = DisplayInfoSingleton_getLastWidth(this->displayInfoSingleton);
        int32_t topScoresWidth = (Font_stringWidth(Graphics_getFont(graphics), this->INSTRUCTIONS) >> 1);
        Graphics_drawString(graphics, this->INSTRUCTIONS, (width >> 1) - topScoresWidth, this->fontHeight * 2, this->anchor);
}

