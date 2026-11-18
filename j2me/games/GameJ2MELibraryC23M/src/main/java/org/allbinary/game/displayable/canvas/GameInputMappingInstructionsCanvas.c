// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/GameInputMappingInstructionsCanvas.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"
#include "org/allbinary/game/paint/ColorFillPaintableFactory.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/draw/DrawStringUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/game/paint/ColorFillPaintableFactory.h")
#include "org/allbinary/game/paint/ColorFillPaintableFactory.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Font.h")
#include "org/allbinary/game/displayable/canvas/Font.h"
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
#if __has_include("org/allbinary/game/layer/Font.h")
#include "org/allbinary/game/layer/Font.h"
#endif
#if __has_include("org/allbinary/game/paint/Font.h")
#include "org/allbinary/game/paint/Font.h"
#endif
#if __has_include("org/allbinary/game/paint/Font.h")
#include "org/allbinary/game/paint/Font.h"
#endif
#if __has_include("org/allbinary/graphics/Font.h")
#include "org/allbinary/graphics/Font.h"
#endif
#if __has_include("org/allbinary/graphics/draw/Font.h")
#include "org/allbinary/graphics/draw/Font.h"
#endif
#if __has_include("org/allbinary/logic/string/Font.h")
#include "org/allbinary/logic/string/Font.h"
#endif


Command* GameInputMappingInstructionsCanvas_DISPLAY;
Command* GameInputMappingInstructionsCanvas_CLOSE;
const char* GameInputMappingInstructionsCanvas_NAME = "GameInputMappingInstructionsCanvas";




void GameInputMappingInstructionsCanvas_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameInputMappingInstructionsCanvas_DISPLAY = Command_new4("Help", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    GameInputMappingInstructionsCanvas_CLOSE = Command_new4("Close", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
}

void GameInputMappingInstructionsCanvas_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameInputMappingInstructionsCanvas", "GameCommandCanvas");
    java_register_method("GameInputMappingInstructionsCanvas", "initCommands", (void*) GameInputMappingInstructionsCanvas_initCommands);
    java_register_method("GameInputMappingInstructionsCanvas", "paint", (void*) GameInputMappingInstructionsCanvas_paint);
}

static void GameInputMappingInstructionsCanvas_initFields(GameInputMappingInstructionsCanvas* this) {
    this->drawStringUtil = DrawStringUtil_getInstance();
    this->TITLE = "Input Instructions";
    this->instructions = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ "Add Input Mapping:", "1. Select the desired action by generating a currently defined input for a given action.", "(Example: Press the '1' key to select the Fire action)", "2. Make the newly desired input for the selected action.", "(Example: Press 'f' to add it to the selected action)", "Note: If the input is already mapped to another action then it will not be added. You", "will need to deleted from the other action before adding it to another.", "Warning: Not all keys map for a given platform and show as Unknown.", StringUtil_getInstance()->EMPTY_STRING, "Remove Input Mapping:", "1. Select the desired action by generating a currently defined input for a given action.", "(Example: Press the key '1' to select the Fire action)", "2. Select a mapped input for the selected action.", "(Example: Press the key '1' to select the '1' key input for the selected Fire action)", "3. Press the Delete Key." }) / sizeof(const char*), (const char*[]){ "Add Input Mapping:", "1. Select the desired action by generating a currently defined input for a given action.", "(Example: Press the '1' key to select the Fire action)", "2. Make the newly desired input for the selected action.", "(Example: Press 'f' to add it to the selected action)", "Note: If the input is already mapped to another action then it will not be added. You", "will need to deleted from the other action before adding it to another.", "Warning: Not all keys map for a given platform and show as Unknown.", StringUtil_getInstance()->EMPTY_STRING, "Remove Input Mapping:", "1. Select the desired action by generating a currently defined input for a given action.", "(Example: Press the key '1' to select the Fire action)", "2. Select a mapped input for the selected action.", "(Example: Press the key '1' to select the '1' key input for the selected Fire action)", "3. Press the Delete Key." }));
    
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
}


void GameInputMappingInstructionsCanvas_init(GameInputMappingInstructionsCanvas* this, CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
    GameInputMappingInstructionsCanvas_register();
        GameCommandCanvas_init(&this->base, commandListener, GameInputMappingInstructionsCanvas_NAME, AllBinaryGameLayerManager_getBackgroundBasicColor(allBinaryGameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(allBinaryGameLayerManager));
        GameInputMappingInstructionsCanvas_initFields(this);
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, this->base.base.commonStrings->CONSTRUCTOR);
        this->colorFillPaintable = ColorFillPaintableFactory_getInstance(ColorFillPaintableFactory_getInstance(), AllBinaryGameLayerManager_getBackgroundBasicColor(allBinaryGameLayerManager), false);
}

GameInputMappingInstructionsCanvas* GameInputMappingInstructionsCanvas_new(CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
    GameInputMappingInstructionsCanvas* this = java_object_alloc(sizeof(GameInputMappingInstructionsCanvas), "GameInputMappingInstructionsCanvas");
    GameInputMappingInstructionsCanvas_init(this, commandListener, allBinaryGameLayerManager);
    return this;
}


void GameInputMappingInstructionsCanvas_initCommands(GameInputMappingInstructionsCanvas* this, CommandListener* cmdListener) {
        MyCanvas_removeAllCommands(this);
        MyCanvas_addCommand(this, (GameInputMappingInstructionsCanvas_staticInit(), GameInputMappingInstructionsCanvas_CLOSE));
        MyCanvas_setCommandListener(this, cmdListener);
}


void GameInputMappingInstructionsCanvas_paint(GameInputMappingInstructionsCanvas* this, Graphics* graphics) {
        MyFontProcessor_process(this->base.myFontProcessor, graphics);
        ColorFillBasePaintable_paint(this->colorFillPaintable, graphics);
        int32_t halfWidth = DisplayInfoSingleton_getLastHalfWidth(this->base.base.displayInfo);
        int32_t beginWidth = (Font_stringWidth(Graphics_getFont(graphics), this->TITLE) >> 1);
        Graphics_setColor(graphics, this->base.foregroundColor);
        Graphics_drawString(graphics, this->TITLE, halfWidth - beginWidth, this->base.fontHeight, this->anchor);
        DrawStringUtil_drawCenterStrings(this->drawStringUtil, graphics, this->instructions, DisplayInfoSingleton_getLastWidth(this->base.base.displayInfo), this->base.fontHeight, halfWidth, 3 * this->base.fontHeight);
        GameCommandCanvas_paint((&this->base), graphics);
}

