// Generated Code Do Not Modify
#include "org/allbinary/game/layer/GameLayerUtil.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/view/ViewPositionBase.h"






void GameLayerUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameLayerUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameLayerUtil", nullptr);
}


void GameLayerUtil_init(GameLayerUtil* this) {
    GameLayerUtil_register();
}

GameLayerUtil* GameLayerUtil_new(void) {
    GameLayerUtil* this = java_object_alloc(sizeof(GameLayerUtil), "GameLayerUtil");
    GameLayerUtil_init(this);
    return this;
}


bool GameLayerUtil_isOnScreen(AllBinaryLayer* layer) {
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        ViewPositionBase* viewPosition = AllBinaryLayer_getViewPosition(layer);
        return GameLayerUtil_isInside(GPoint_getX(viewPosition), GPoint_getY(viewPosition), ViewPositionBase_getX2(viewPosition), ViewPositionBase_getY2(viewPosition), 0, 0, DisplayInfoSingleton_getLastWidth(displayInfo), DisplayInfoSingleton_getLastHeight(displayInfo));
}


bool GameLayerUtil_isInside(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, int32_t rect2X1, int32_t rect2Y1, int32_t rect2X2, int32_t rect2Y2) {
        if (rectX1 > rect2X1 && rectX2 < rect2X2 && rectY1 > rect2Y1 && rectY2 < rect2Y2) {
            return true;
        } else {
            return false;
        }
}

