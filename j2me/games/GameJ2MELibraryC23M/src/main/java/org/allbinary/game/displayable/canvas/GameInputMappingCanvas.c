// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"
#include "org/allbinary/game/paint/ColorFillPaintableFactory.h"
#include "org/allbinary/game/paint/help/HelpPaintable.h"
#include "org/allbinary/game/paint/help/InputMappingHelpPaintable.h"
#include "org/allbinary/graphics/paint/ProcessPaintable.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"
#include "org/allbinary/game/displayable/canvas/GameInputMappingInstructionsCanvas.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/game/input/GameKeyFactory.h")
#include "org/allbinary/game/input/GameKeyFactory.h"
#endif
#if __has_include("org/allbinary/game/input/PlatformInputMappingFactory.h")
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#endif
#if __has_include("org/allbinary/game/paint/ColorFillPaintableFactory.h")
#include "org/allbinary/game/paint/ColorFillPaintableFactory.h"
#endif
#if __has_include("org/allbinary/game/commands/GameCommandsFactory.h")
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/InputToGameKeyMapping.h")
#include "org/allbinary/game/displayable/canvas/InputToGameKeyMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/InputToGameKeyMapping.h")
#include "javax/microedition/lcdui/InputToGameKeyMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/InputToGameKeyMapping.h")
#include "javax/microedition/lcdui/InputToGameKeyMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/InputToGameKeyMapping.h")
#include "javax/microedition/lcdui/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/commands/InputToGameKeyMapping.h")
#include "org/allbinary/game/commands/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/layer/InputToGameKeyMapping.h")
#include "org/allbinary/game/layer/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/help/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/help/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/help/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/help/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/graphics/paint/InputToGameKeyMapping.h")
#include "org/allbinary/graphics/paint/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/InputToGameKeyMapping.h")
#include "org/allbinary/logic/string/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/InputToGameKeyMapping.h")
#include "org/allbinary/logic/string/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/InputToGameKeyMapping.h")
#include "org/allbinary/logic/system/security/licensing/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/util/InputToGameKeyMapping.h")
#include "org/allbinary/util/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/InputToGameKeyMapping.h")
#include "org/allbinary/game/displayable/canvas/InputToGameKeyMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/InputToGameKeyMapping.h")
#include "javax/microedition/lcdui/InputToGameKeyMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/InputToGameKeyMapping.h")
#include "javax/microedition/lcdui/InputToGameKeyMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/InputToGameKeyMapping.h")
#include "javax/microedition/lcdui/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/commands/InputToGameKeyMapping.h")
#include "org/allbinary/game/commands/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/layer/InputToGameKeyMapping.h")
#include "org/allbinary/game/layer/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/help/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/help/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/help/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/help/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/graphics/paint/InputToGameKeyMapping.h")
#include "org/allbinary/graphics/paint/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/InputToGameKeyMapping.h")
#include "org/allbinary/logic/string/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/InputToGameKeyMapping.h")
#include "org/allbinary/logic/string/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/InputToGameKeyMapping.h")
#include "org/allbinary/logic/system/security/licensing/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/util/InputToGameKeyMapping.h")
#include "org/allbinary/util/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/InputToGameKeyMapping.h")
#include "org/allbinary/game/displayable/canvas/InputToGameKeyMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/InputToGameKeyMapping.h")
#include "javax/microedition/lcdui/InputToGameKeyMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/InputToGameKeyMapping.h")
#include "javax/microedition/lcdui/InputToGameKeyMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/InputToGameKeyMapping.h")
#include "javax/microedition/lcdui/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/commands/InputToGameKeyMapping.h")
#include "org/allbinary/game/commands/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/layer/InputToGameKeyMapping.h")
#include "org/allbinary/game/layer/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/help/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/help/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/help/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/help/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/graphics/paint/InputToGameKeyMapping.h")
#include "org/allbinary/graphics/paint/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/InputToGameKeyMapping.h")
#include "org/allbinary/logic/string/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/InputToGameKeyMapping.h")
#include "org/allbinary/logic/string/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/InputToGameKeyMapping.h")
#include "org/allbinary/logic/system/security/licensing/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/util/InputToGameKeyMapping.h")
#include "org/allbinary/util/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/InputToGameKeyMapping.h")
#include "org/allbinary/game/displayable/canvas/InputToGameKeyMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/InputToGameKeyMapping.h")
#include "javax/microedition/lcdui/InputToGameKeyMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/InputToGameKeyMapping.h")
#include "javax/microedition/lcdui/InputToGameKeyMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/InputToGameKeyMapping.h")
#include "javax/microedition/lcdui/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/commands/InputToGameKeyMapping.h")
#include "org/allbinary/game/commands/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/layer/InputToGameKeyMapping.h")
#include "org/allbinary/game/layer/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/help/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/help/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/help/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/help/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/graphics/paint/InputToGameKeyMapping.h")
#include "org/allbinary/graphics/paint/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/InputToGameKeyMapping.h")
#include "org/allbinary/logic/string/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/InputToGameKeyMapping.h")
#include "org/allbinary/logic/string/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/InputToGameKeyMapping.h")
#include "org/allbinary/logic/system/security/licensing/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/util/InputToGameKeyMapping.h")
#include "org/allbinary/util/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/InputToGameKeyMapping.h")
#include "org/allbinary/game/displayable/canvas/InputToGameKeyMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/InputToGameKeyMapping.h")
#include "javax/microedition/lcdui/InputToGameKeyMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/InputToGameKeyMapping.h")
#include "javax/microedition/lcdui/InputToGameKeyMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/InputToGameKeyMapping.h")
#include "javax/microedition/lcdui/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/commands/InputToGameKeyMapping.h")
#include "org/allbinary/game/commands/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/layer/InputToGameKeyMapping.h")
#include "org/allbinary/game/layer/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/help/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/help/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/help/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/help/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/graphics/paint/InputToGameKeyMapping.h")
#include "org/allbinary/graphics/paint/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/InputToGameKeyMapping.h")
#include "org/allbinary/logic/string/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/InputToGameKeyMapping.h")
#include "org/allbinary/logic/string/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/InputToGameKeyMapping.h")
#include "org/allbinary/logic/system/security/licensing/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/util/InputToGameKeyMapping.h")
#include "org/allbinary/util/InputToGameKeyMapping.h"
#endif


const char* GameInputMappingCanvas_NAME = "GameInputMappingCanvas";
Command* GameInputMappingCanvas_DISPLAY;
Command* GameInputMappingCanvas_DEFAULT;








static void GameInputMappingCanvas_addGameKey(GameInputMappingCanvas* this, int32_t keyCode, bool repeated);


static void GameInputMappingCanvas_setSelectedAction(GameInputMappingCanvas* this, GameKey* gameKey);

static void GameInputMappingCanvas_gameActionCrud(GameInputMappingCanvas* this, GameKey* gameKey, Input* input);

static void GameInputMappingCanvas_addNewMapping(GameInputMappingCanvas* this, GameKey* gameKey, Input* input);

static void GameInputMappingCanvas_deleteCurrentMapping(GameInputMappingCanvas* this);




void GameInputMappingCanvas_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameInputMappingCanvas_DISPLAY = Command_new4("Controls", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 2);
    GameInputMappingCanvas_DEFAULT = Command_new4("Default", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 2);
}

void GameInputMappingCanvas_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameInputMappingCanvas", "GameCommandCanvas");
    java_register_method("GameInputMappingCanvas", "close", (void*) GameInputMappingCanvas_close);
    java_register_method("GameInputMappingCanvas", "initCommands", (void*) GameInputMappingCanvas_initCommands);
    java_register_method("GameInputMappingCanvas", "keyPressed", (void*) GameInputMappingCanvas_keyPressed);
    java_register_method("GameInputMappingCanvas", "keyReleased", (void*) GameInputMappingCanvas_keyReleased);
    java_register_method("GameInputMappingCanvas", "keyRepeated", (void*) GameInputMappingCanvas_keyRepeated);
    java_register_method("GameInputMappingCanvas", "keyPressedByDevice", (void*) GameInputMappingCanvas_keyPressedByDevice);
    java_register_method("GameInputMappingCanvas", "addGameKey", (void*) GameInputMappingCanvas_addGameKey);
    java_register_method("GameInputMappingCanvas", "processInputMapping", (void*) GameInputMappingCanvas_processInputMapping);
    java_register_method("GameInputMappingCanvas", "setSelectedAction", (void*) GameInputMappingCanvas_setSelectedAction);
    java_register_method("GameInputMappingCanvas", "gameActionCrud", (void*) GameInputMappingCanvas_gameActionCrud);
    java_register_method("GameInputMappingCanvas", "addNewMapping", (void*) GameInputMappingCanvas_addNewMapping);
    java_register_method("GameInputMappingCanvas", "deleteCurrentMapping", (void*) GameInputMappingCanvas_deleteCurrentMapping);
    java_register_method("GameInputMappingCanvas", "setDefault", (void*) GameInputMappingCanvas_setDefault);
    java_register_method("GameInputMappingCanvas", "update", (void*) GameInputMappingCanvas_update);
    java_register_method("GameInputMappingCanvas", "paint", (void*) GameInputMappingCanvas_paint);
}

static void GameInputMappingCanvas_initFields(GameInputMappingCanvas* this) {
    
    
    
    
    this->NONE = GameKeyFactory_getInstance()->NONE;
    
    this->selectedGameKey = this->NONE;
    this->selectedInput = this->NONE;
    this->inputFactory = InputFactory_getInstance();
}


void GameInputMappingCanvas_init(GameInputMappingCanvas* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, HelpPaintable* helpPaintable) {
    GameInputMappingCanvas_register();
        GameCommandCanvas_init(&this->base, commandListener, GameInputMappingCanvas_NAME, AllBinaryGameLayerManager_getBackgroundBasicColor(allBinaryGameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(allBinaryGameLayerManager));
        GameInputMappingCanvas_initFields(this);
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, this->base.base.commonStrings->CONSTRUCTOR);
        if (helpPaintable == nullptr) {
            java_throw(java_exception_new("Exception", "Help Paintable Exception"));
        }
        this->abeClientInformation = abeClientInformation;
        this->helpPaintable = ((InputMappingHelpPaintable*) helpPaintable);
        this->inputMapping = PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance());
        this->paintable = ProcessPaintable_new();
        this->colorFillPaintable = ColorFillPaintableFactory_getInstance(ColorFillPaintableFactory_getInstance(), AllBinaryGameLayerManager_getBackgroundBasicColor(allBinaryGameLayerManager), false);
}

GameInputMappingCanvas* GameInputMappingCanvas_new(AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, HelpPaintable* helpPaintable) {
    GameInputMappingCanvas* this = java_object_alloc(sizeof(GameInputMappingCanvas), "GameInputMappingCanvas");
    GameInputMappingCanvas_init(this, abeClientInformation, commandListener, allBinaryGameLayerManager, helpPaintable);
    return this;
}


// throws Exception
void GameInputMappingCanvas_close(GameInputMappingCanvas* this) {
        GameCommandCanvas_close((&this->base));
        ProcessPaintable_process(this->paintable);
        this->selectedGameKey = this->NONE;
        this->selectedInput = this->NONE;
        GameInputMappingCanvas_update(this);
}


void GameInputMappingCanvas_initCommands(GameInputMappingCanvas* this, CommandListener* cmdListener) {
        MyCanvas_removeAllCommands(this);
        MyCanvas_addCommand(this, GameCommandsFactory_getInstance()->CLOSE_AND_SHOW_GAME_CANVAS);
        MyCanvas_addCommand(this, (GameInputMappingCanvas_staticInit(), GameInputMappingCanvas_DEFAULT));
        MyCanvas_addCommand(this, (GameInputMappingInstructionsCanvas_staticInit(), GameInputMappingInstructionsCanvas_DISPLAY));
        MyCanvas_setCommandListener(this, cmdListener);
}


void GameInputMappingCanvas_keyPressed(GameInputMappingCanvas* this, int32_t keyCode) {
        GameInputMappingCanvas_keyPressedByDevice(this, keyCode, 0);
}


void GameInputMappingCanvas_keyReleased(GameInputMappingCanvas* this, int32_t keyCode) {
        GameCommandCanvas_keyReleasedByDevice(this, keyCode, 0);
}


void GameInputMappingCanvas_keyRepeated(GameInputMappingCanvas* this, int32_t keyCode) {
        GameCommandCanvas_keyRepeatedByDevice(this, keyCode, 0);
}


void GameInputMappingCanvas_keyPressedByDevice(GameInputMappingCanvas* this, int32_t keyCode, int32_t deviceId) {
        GameInputMappingCanvas_addGameKey(this, keyCode, false);
        GameCommandCanvas_keyPressedByDevice((&this->base), keyCode, 0);
}


static void GameInputMappingCanvas_addGameKey(GameInputMappingCanvas* this, int32_t keyCode, bool repeated) {
        JAVA_TRY {
            LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Raw Device Key Code: "), Integer_toHexString(keyCode))), this, this->base.gameInputStrings->ADD_KEY_EVENT);
            GameKey* gameKey = InputToGameKeyMapping_getInstanceForCanvas(this->base.inputToGameKeyMapping, this, keyCode);
            Input* input = InputFactory_getInstanceById(this->inputFactory, keyCode);
            GameInputMappingCanvas_processInputMapping(this, gameKey, input);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, "Key Event Error", this, this->base.gameInputStrings->ADD_KEY_EVENT, e);
        } JAVA_END_TRY;
}


// throws Exception
void GameInputMappingCanvas_processInputMapping(GameInputMappingCanvas* this, GameKey* gameKey, Input* input) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Start Passed GameKey: ");
        StringMaker_append(stringBuffer, StringUtil_toString(this->base.base.stringUtil, gameKey));
        StringMaker_append(stringBuffer, " Input: ");
        StringMaker_append(stringBuffer, StringUtil_toString(this->base.base.stringUtil, input));
        LogUtil_putF(this->base.base.logUtil, java_string_of(stringBuffer), this, this->base.base.commonStrings->PROCESS);
        if (this->selectedGameKey != this->NONE) {
            GameInputMappingCanvas_gameActionCrud(this, gameKey, input);
        } else {
            GameInputMappingCanvas_setSelectedAction(this, gameKey);
        }
}


static void GameInputMappingCanvas_setSelectedAction(GameInputMappingCanvas* this, GameKey* gameKey) {
        LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Selected GameKey: "), StringUtil_toString(this->base.base.stringUtil, gameKey))), this, "setSelectedAction");
        this->selectedGameKey = gameKey;
        this->selectedInput = this->NONE;
        InputMappingHelpPaintable_update(this->helpPaintable, this->selectedGameKey, this->selectedInput);
        RepaintBehavior_onChangeRepaint(this->base.repaintBehavior, this);
}


// throws Exception
static void GameInputMappingCanvas_gameActionCrud(GameInputMappingCanvas* this, GameKey* gameKey, Input* input) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Start GameKey: ");
        StringMaker_append(stringBuffer, StringUtil_toString(this->base.base.stringUtil, this->selectedGameKey));
        StringMaker_append(stringBuffer, " Input: ");
        StringMaker_append(stringBuffer, StringUtil_toString(this->base.base.stringUtil, this->selectedInput));
        LogUtil_putF(this->base.base.logUtil, java_string_of(stringBuffer), this, "gameActionCrud");
        if (this->selectedInput == this->NONE) {
            BasicArrayList* list = InputMapping_getMappedInput(PersistentInputMapping_getInputMapping(this->inputMapping), this->selectedGameKey);
            bool isInputAlreadyMappedToSelectedAction = BasicArrayList_contains(list, input);
            if (isInputAlreadyMappedToSelectedAction) {
                LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Already Mapped Input: "), StringUtil_toString(this->base.base.stringUtil, input))), this, "gameActionCrud");
                this->selectedInput = input;
                InputMappingHelpPaintable_update(this->helpPaintable, this->selectedGameKey, this->selectedInput);
                RepaintBehavior_onChangeRepaint(this->base.repaintBehavior, this);
            } else {
                GameInputMappingCanvas_addNewMapping(this, gameKey, input);
            }
        } else if (PersistentInputMapping_isDelete(this->inputMapping, input)) {
            GameInputMappingCanvas_deleteCurrentMapping(this);
        } else {
            GameInputMappingCanvas_setSelectedAction(this, gameKey);
        }
}


// throws Exception
static void GameInputMappingCanvas_addNewMapping(GameInputMappingCanvas* this, GameKey* gameKey, Input* input) {
        const char* METHOD_NAME = "addNewMapping";
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, METHOD_NAME);
        bool isInputAlreadyMapped = InputMapping_isMapped(PersistentInputMapping_getInputMapping(this->inputMapping), input);
        if (!isInputAlreadyMapped && !PersistentInputMapping_isSystemInput(this->inputMapping, input)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Add Key Mapping : GameKey: ");
            StringMaker_append(stringBuffer, StringUtil_toString(this->base.base.stringUtil, this->selectedGameKey));
            StringMaker_append(stringBuffer, " Input: ");
            StringMaker_append(stringBuffer, StringUtil_toString(this->base.base.stringUtil, this->selectedInput));
            LogUtil_putF(this->base.base.logUtil, java_string_of(stringBuffer), this, METHOD_NAME);
            InputToGameKeyMapping_add(PersistentInputMapping_getInputMapping(this->inputMapping), this->selectedGameKey, input);
            this->selectedInput = input;
            GameInputMappingCanvas_update(this);
        } else {
            LogUtil_putF(this->base.base.logUtil, "Unable to add Mapping since one already exists or is MENU, HOME, or BACK key and setting selected action to what it is already mapped to", this, METHOD_NAME);
            GameInputMappingCanvas_setSelectedAction(this, gameKey);
        }
}


// throws Exception
static void GameInputMappingCanvas_deleteCurrentMapping(GameInputMappingCanvas* this) {
        const char* METHOD_NAME = "deleteCurrentMapping";
        BasicArrayList* list = InputMapping_getMappedInput(PersistentInputMapping_getInputMapping(this->inputMapping), this->selectedGameKey);
        if (BasicArrayList_size(list) > 1) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Start GameKey: ");
            StringMaker_append(stringBuffer, "Remove Key Mapping: GameKey: ");
            StringMaker_append(stringBuffer, StringUtil_toString(this->base.base.stringUtil, this->selectedGameKey));
            StringMaker_append(stringBuffer, " Input: ");
            StringMaker_append(stringBuffer, StringUtil_toString(this->base.base.stringUtil, this->selectedInput));
            LogUtil_putF(this->base.base.logUtil, java_string_of(stringBuffer), this, METHOD_NAME);
            InputToGameKeyMapping_remove(PersistentInputMapping_getInputMapping(this->inputMapping), this->selectedGameKey, this->selectedInput);
            this->selectedInput = this->NONE;
            GameInputMappingCanvas_update(this);
        } else {
            LogUtil_putF(this->base.base.logUtil, "Can't Remove Last Key Mapping", this, METHOD_NAME);
        }
}


// throws Exception
void GameInputMappingCanvas_setDefault(GameInputMappingCanvas* this) {
        PersistentInputMapping_setDefault(this->inputMapping, this->abeClientInformation);
        InputMappingHelpPaintable_update(this->helpPaintable, this->NONE, this->NONE);
        RepaintBehavior_onChangeRepaint(this->base.repaintBehavior, this);
}


// throws Exception
void GameInputMappingCanvas_update(GameInputMappingCanvas* this) {
        PersistentInputMapping_update(this->inputMapping, this->abeClientInformation);
        InputMappingHelpPaintable_update(this->helpPaintable, this->selectedGameKey, this->selectedInput);
        RepaintBehavior_onChangeRepaint(this->base.repaintBehavior, this);
}


void GameInputMappingCanvas_paint(GameInputMappingCanvas* this, Graphics* graphics) {
        ColorFillBasePaintable_paint(this->colorFillPaintable, graphics);
        InputMappingHelpPaintable_paint(this->helpPaintable, graphics);
        Paintable_paint(this->paintable, graphics);
        GameCommandCanvas_paint((&this->base), graphics);
}

