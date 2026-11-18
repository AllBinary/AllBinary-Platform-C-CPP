// Generated Code Do Not Modify
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"
#include "org/allbinary/game/paint/ColorFillPaintableFactory.h"
#include "org/allbinary/game/score/HighScoreCommandsFactory.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScoresCanvasInputProcessor.h"
#include "org/allbinary/game/score/HighScoresCanvasInputProcessorFactoryInterface.h"
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#include "org/allbinary/game/score/HighScoresHelperBase.h"
#include "org/allbinary/game/score/HighScoresPaintable.h"
#include "org/allbinary/game/score/NoHighScoresFactory.h"
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/graphics/paint/SimpleTextPaintable.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/thread/SecondaryThreadPool.h"
#include "org/allbinary/game/score/displayable/HighScoreRunnable.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresPaintable.h")
#include "org/allbinary/game/score/HighScoresPaintable.h"
#endif
#if __has_include("org/allbinary/game/paint/ColorFillPaintableFactory.h")
#include "org/allbinary/game/paint/ColorFillPaintableFactory.h"
#endif
#if __has_include("org/allbinary/game/score/NoHighScoresFactory.h")
#include "org/allbinary/game/score/NoHighScoresFactory.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/ThreadPool.h")
#include "org/allbinary/game/score/displayable/ThreadPool.h"
#endif
#if __has_include("javax/microedition/lcdui/ThreadPool.h")
#include "javax/microedition/lcdui/ThreadPool.h"
#endif
#if __has_include("javax/microedition/lcdui/ThreadPool.h")
#include "javax/microedition/lcdui/ThreadPool.h"
#endif
#if __has_include("javax/microedition/lcdui/ThreadPool.h")
#include "javax/microedition/lcdui/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/ThreadPool.h")
#include "org/allbinary/game/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/commands/ThreadPool.h")
#include "org/allbinary/game/commands/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/ThreadPool.h")
#include "org/allbinary/game/displayable/canvas/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/layer/ThreadPool.h")
#include "org/allbinary/game/layer/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/paint/ThreadPool.h")
#include "org/allbinary/game/paint/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/paint/ThreadPool.h")
#include "org/allbinary/game/paint/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/score/ThreadPool.h")
#include "org/allbinary/game/score/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/score/ThreadPool.h")
#include "org/allbinary/game/score/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/score/ThreadPool.h")
#include "org/allbinary/game/score/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/score/ThreadPool.h")
#include "org/allbinary/game/score/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/score/ThreadPool.h")
#include "org/allbinary/game/score/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/score/ThreadPool.h")
#include "org/allbinary/game/score/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/score/ThreadPool.h")
#include "org/allbinary/game/score/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/score/ThreadPool.h")
#include "org/allbinary/game/score/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/score/ThreadPool.h")
#include "org/allbinary/game/score/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/score/ThreadPool.h")
#include "org/allbinary/game/score/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/color/ThreadPool.h")
#include "org/allbinary/graphics/color/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/paint/ThreadPool.h")
#include "org/allbinary/graphics/paint/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/paint/ThreadPool.h")
#include "org/allbinary/graphics/paint/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/paint/ThreadPool.h")
#include "org/allbinary/graphics/paint/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/ThreadPool.h")
#include "org/allbinary/logic/communication/log/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/string/ThreadPool.h")
#include "org/allbinary/logic/string/ThreadPool.h"
#endif
#if __has_include("org/allbinary/string/ThreadPool.h")
#include "org/allbinary/string/ThreadPool.h"
#endif
#if __has_include("org/allbinary/thread/ThreadPool.h")
#include "org/allbinary/thread/ThreadPool.h"
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
#if __has_include("org/allbinary/game/score/HighScoresPaintable.h")
#include "org/allbinary/game/score/HighScoresPaintable.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresPaintable.h")
#include "org/allbinary/game/score/HighScoresPaintable.h"
#endif


const char* HighScoresCanvas_NAME = "HighScoresCanvas";







static HighScoresPaintable* HighScoresCanvas_getHighScoresPaintable(HighScoresCanvas* this);




static void HighScoresCanvas_setPaintable(HighScoresCanvas* this, Paintable* paintable);

void HighScoresCanvas_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HighScoresCanvas_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScoresCanvas", "GameCommandCanvas");
    java_register_method("HighScoresCanvas", "initCommands", (void*) HighScoresCanvas_initCommands);
    java_register_method("HighScoresCanvas", "open", (void*) HighScoresCanvas_open);
    java_register_method("HighScoresCanvas", "close", (void*) HighScoresCanvas_close);
    java_register_method("HighScoresCanvas", "paint", (void*) HighScoresCanvas_paint);
    java_register_method("HighScoresCanvas", "executeUpdate", (void*) HighScoresCanvas_executeUpdate);
    java_register_method("HighScoresCanvas", "getHighScoresPaintable", (void*) HighScoresCanvas_getHighScoresPaintable);
    java_register_method("HighScoresCanvas", "setHighScoresArray", (void*) HighScoresCanvas_setHighScoresArray);
    java_register_method("HighScoresCanvas", "updateCommand", (void*) HighScoresCanvas_updateCommand);
    java_register_method("HighScoresCanvas", "getGameInfo", (void*) HighScoresCanvas_getGameInfo);
    java_register_method("HighScoresCanvas", "setPaintable", (void*) HighScoresCanvas_setPaintable);
}

static void HighScoresCanvas_initFields(HighScoresCanvas* this) {
    this->paintable = NullPaintable_getInstance();
    this->highScoreCommandsFactory = HighScoreCommandsFactory_getInstance();
    this->waitPaintable = SimpleTextPaintable_new(this->base.base.commonStrings->PLEASE_WAIT_FOR_SERVER, BasicColorFactory_getInstance()->WHITE);
    
    
    
    this->highScoresHelper = HighScoresHelperBase_new();
    
    
    this->currentCommand = this->highScoreCommandsFactory->base.HIGH_SCORE_COMMANDS[0];
    this->hasPainted = false;
}


void HighScoresCanvas_init(HighScoresCanvas* this, CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, GameInfo* gameInfo, HighScoresPaintable* paintable, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresCanvasInputProcessorFactoryInterface* highScoresCanvasInputProcessorFactoryInterface) {
    HighScoresCanvas_register();
        GameCommandCanvas_init(&this->base, commandListener, HighScoresCanvas_NAME, AllBinaryGameLayerManager_getBackgroundBasicColor(allBinaryGameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(allBinaryGameLayerManager));
        HighScoresCanvas_initFields(this);
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, this->base.base.commonStrings->CONSTRUCTOR);
        this->highScoresPaintable = paintable;
        this->highScoresFactoryInterface = highScoresFactoryInterface;
        this->highScoresCanvasInputProcessor = HighScoresCanvasInputProcessorFactoryInterface_getInstance(highScoresCanvasInputProcessorFactoryInterface, this);
        this->gameInfo = gameInfo;
        SimpleTextPaintable_setBasicColorP(this->waitPaintable, AllBinaryGameLayerManager_getForegroundBasicColor(allBinaryGameLayerManager));
        HighScoresPaintable_setBasicColorP(HighScoresCanvas_getHighScoresPaintable(this), AllBinaryGameLayerManager_getForegroundBasicColor(allBinaryGameLayerManager));
        this->colorFillPaintable = ColorFillPaintableFactory_getInstance(ColorFillPaintableFactory_getInstance(), AllBinaryGameLayerManager_getBackgroundBasicColor(allBinaryGameLayerManager), false);
        if (java_array_length(HighScoresHelperBase_getHighScoresArray(this->highScoresHelper)) == java_array_length(NoHighScoresFactory_getInstance()->NO_HIGH_SCORES)) {
            HighScoresCanvas_setPaintable(this, this->waitPaintable);
        } else {
            LogUtil_putF(this->base.base.logUtil, "Show HighScores that are already loaded", this, this->base.base.commonStrings->CONSTRUCTOR);
            HighScoresCanvas_updateCommand(this, this->currentCommand);
            HighScoresCanvas_setPaintable(this, HighScoresCanvas_getHighScoresPaintable(this));
        }
        ThreadPool_runTask(SecondaryThreadPool_getInstance(), HighScoreRunnable_new(this));
}

HighScoresCanvas* HighScoresCanvas_new(CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, GameInfo* gameInfo, HighScoresPaintable* paintable, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresCanvasInputProcessorFactoryInterface* highScoresCanvasInputProcessorFactoryInterface) {
    HighScoresCanvas* this = java_object_alloc(sizeof(HighScoresCanvas), "HighScoresCanvas");
    HighScoresCanvas_init(this, commandListener, allBinaryGameLayerManager, gameInfo, paintable, highScoresFactoryInterface, highScoresCanvasInputProcessorFactoryInterface);
    return this;
}


void HighScoresCanvas_initCommands(HighScoresCanvas* this, CommandListener* cmdListener) {
        MyCanvas_removeAllCommands(this);
        MyCanvas_addCommand(this, GameCommandsFactory_getInstance()->CLOSE_AND_SHOW_GAME_CANVAS);
        MyCanvas_setCommandListener(this, cmdListener);
}


void HighScoresCanvas_open(HighScoresCanvas* this) {
        GameCommandCanvas_open((&this->base));
        HighScoresCanvasInputProcessor_open(this->highScoresCanvasInputProcessor);
}


// throws Exception
void HighScoresCanvas_close(HighScoresCanvas* this) {
        GameCommandCanvas_close((&this->base));
        HighScoresCanvasInputProcessor_close(this->highScoresCanvasInputProcessor);
}


void HighScoresCanvas_paint(HighScoresCanvas* this, Graphics* graphics) {
        ColorFillBasePaintable_paint(this->colorFillPaintable, graphics);
        Paintable_paint(this->paintable, graphics);
        if (this->waitPaintable != this->paintable) {
            HighScoresCanvasInputProcessor_paint(this->highScoresCanvasInputProcessor, graphics);
        }
        GameCommandCanvas_paint((&this->base), graphics);
        this->hasPainted = true;
}


void HighScoresCanvas_executeUpdate(HighScoresCanvas* this) {
        JAVA_TRY {
            HighScoresFactoryInterface_fetchHighScores(this->highScoresFactoryInterface, HighScoresCanvas_getGameInfo(this), this);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, this->base.base.commonStrings->UPDATE, e);
        } JAVA_END_TRY;
}


static HighScoresPaintable* HighScoresCanvas_getHighScoresPaintable(HighScoresCanvas* this) {
        return this->highScoresPaintable;
}


void HighScoresCanvas_setHighScoresArray(HighScoresCanvas* this, HighScores** highScoresArray) {
        JAVA_TRY {
            if (highScoresArray != nullptr) {
                LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), this->base.base.commonStrings->START), java_array_length(highScoresArray))), this, "setHighScoresArray");
            } else {
                LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, "setHighScoresArray");
            }
            HighScoresHelperBase_setHighScoresArray(this->highScoresHelper, highScoresArray);
            HighScoresCanvas_updateCommand(this, this->currentCommand);
            HighScoresCanvas_setPaintable(this, HighScoresCanvas_getHighScoresPaintable(this));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, this->base.base.commonStrings->UPDATE, e);
        } JAVA_END_TRY;
}


// throws Exception
void HighScoresCanvas_updateCommand(HighScoresCanvas* this, Command* command) {
        LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.base.commonStrings->START), StringUtil_toString(this->base.base.stringUtil, command))), this, this->base.base.commonStrings->UPDATE);
        GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
        if (HighScoreCommandsBaseFactory_isHighScoreCommand(this->highScoreCommandsFactory, command)) {
            int32_t index = HighScoreCommandsBaseFactory_getIndex(this->highScoreCommandsFactory, command);
            int32_t nextIndex = index + 1;
            HighScores** highScoresArray = HighScoresHelperBase_getHighScoresArray(this->highScoresHelper);
            if (nextIndex >= java_array_length(highScoresArray)) {
                nextIndex = 0;
            }
            if (java_array_length(highScoresArray) > 0) {
                HighScoresPaintable_setHighScores(HighScoresCanvas_getHighScoresPaintable(this), highScoresArray[index]);
            } else {
                HighScoresPaintable_setHighScores(HighScoresCanvas_getHighScoresPaintable(this), NullHighScoresSingletonFactory_getInstance());
            }
            if (index != nextIndex) {
                MyCanvas_removeAllCommands(this);
                MyCanvas_addCommand(this, gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS);
                MyCanvas_addCommand(this, this->highScoreCommandsFactory->base.HIGH_SCORE_COMMANDS[nextIndex]);
            }
        }
        this->currentCommand = command;
        HighScoresCanvas_close(this);
        GameCommandCanvas_initMenu((&this->base));
        HighScoresCanvas_open(this);
        RepaintBehavior_onChangeRepaint(this->base.repaintBehavior, this);
}


GameInfo* HighScoresCanvas_getGameInfo(HighScoresCanvas* this) {
        return this->gameInfo;
}


static void HighScoresCanvas_setPaintable(HighScoresCanvas* this, Paintable* paintable) {
        this->paintable = paintable;
        RepaintBehavior_onChangeRepaint(this->base.repaintBehavior, this);
}

