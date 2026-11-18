// Generated Code Do Not Modify
#include "org/allbinary/game/layer/PlayerGameInputGameLayer.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/view/StaticViewPosition.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif








void PlayerGameInputGameLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PlayerGameInputGameLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlayerGameInputGameLayer", "AllBinaryGameLayer");
    java_register_method("PlayerGameInputGameLayer", "getPlayerGameInput", (void*) PlayerGameInputGameLayer_getPlayerGameInput);
    java_register_method("PlayerGameInputGameLayer", "initInputProcessors", (void*) PlayerGameInputGameLayer_initInputProcessors);
    java_register_method("PlayerGameInputGameLayer", "processInput", (void*) PlayerGameInputGameLayer_processInput);
    java_register_method("PlayerGameInputGameLayer", "paint", (void*) PlayerGameInputGameLayer_paint);
}

static void PlayerGameInputGameLayer_initFields(PlayerGameInputGameLayer* this) {
    
}


void PlayerGameInputGameLayer_init(PlayerGameInputGameLayer* this, int32_t playerInputId) {
    PlayerGameInputGameLayer_register();
        AllBinaryGameLayer_init(&this->base, StringUtil_getInstance()->EMPTY_STRING, Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, 0, 0), StaticViewPosition_new(0, 0, 0));
        PlayerGameInputGameLayer_initFields(this);
        this->playerGameInput = PlayerGameInput_new(AllBinaryGameLayer_getGameKeyEventList(this), BasicArrayListD_new(), playerInputId);
        CanvasStrings* canvasStrings = CanvasStrings_getInstance();
        LogUtil_putF(this->base.base.base.logUtil, "Danger Danger Danger: Should Not Be Called Except For Testing Input", this, canvasStrings->PAINT);
}

PlayerGameInputGameLayer* PlayerGameInputGameLayer_new(int32_t playerInputId) {
    PlayerGameInputGameLayer* this = java_object_alloc(sizeof(PlayerGameInputGameLayer), "PlayerGameInputGameLayer");
    PlayerGameInputGameLayer_init(this, playerInputId);
    return this;
}


PlayerGameInput* PlayerGameInputGameLayer_getPlayerGameInput(PlayerGameInputGameLayer* this) {
        return this->playerGameInput;
}


void PlayerGameInputGameLayer_initInputProcessors(PlayerGameInputGameLayer* this) {
}


// throws Exception
void PlayerGameInputGameLayer_processInput(PlayerGameInputGameLayer* this, AllBinaryLayerManager* myManager) {
}


void PlayerGameInputGameLayer_paint(PlayerGameInputGameLayer* this, Graphics* graphics) {
}

