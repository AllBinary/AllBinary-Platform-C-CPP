// Generated Code Do Not Modify
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/NullCanvas.h"
#include "javax/microedition/lcdui/NullCommandListener.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/form/item/ABCustomGaugeItem.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/midlet/AllBinaryMidlet.h"
#include "org/allbinary/thread/PathFindingThreadPool.h"
#include "org/allbinary/thread/ThreadPool.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressPaintable.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressEndListener.h"
#if __has_include("org/allbinary/graphics/displayable/CanvasStrings.h")
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
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
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif





























void ProgressCanvas_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ProgressCanvas_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ProgressCanvas", "RunnableCanvas");
    java_register_method("ProgressCanvas", "updateMeasurement", (void*) ProgressCanvas_updateMeasurement);
    java_register_method("ProgressCanvas", "init", (void*) ProgressCanvas_initMethod);
    java_register_method("ProgressCanvas", "update", (void*) ProgressCanvas_update);
    java_register_method("ProgressCanvas", "initCommands", (void*) ProgressCanvas_initCommands);
    java_register_method("ProgressCanvas", "getMaxValue", (void*) ProgressCanvas_getMaxValue);
    java_register_method("ProgressCanvas", "start", (void*) ProgressCanvas_start);
    java_register_method("ProgressCanvas", "startBackground", (void*) ProgressCanvas_startBackground);
    java_register_method("ProgressCanvas", "endActual", (void*) ProgressCanvas_endActual);
    java_register_method("ProgressCanvas", "inGame", (void*) ProgressCanvas_inGame);
    java_register_method("ProgressCanvas", "end", (void*) ProgressCanvas_end);
    java_register_method("ProgressCanvas", "endFromInitialLazyLoadingComplete", (void*) ProgressCanvas_endFromInitialLazyLoadingComplete);
    java_register_method("ProgressCanvas", "isInGame", (void*) ProgressCanvas_isInGame);
    java_register_method("ProgressCanvas", "endIfPaintedSinceStart", (void*) ProgressCanvas_endIfPaintedSinceStart);
    java_register_method("ProgressCanvas", "addEarlyPortion", (void*) ProgressCanvas_addEarlyPortion);
    java_register_method("ProgressCanvas", "addPortion", (void*) ProgressCanvas_addPortion);
    java_register_method("ProgressCanvas", "addNormalPortion", (void*) ProgressCanvas_addNormalPortion);
    java_register_method("ProgressCanvas", "setValue", (void*) ProgressCanvas_setValue);
    java_register_method("ProgressCanvas", "paint", (void*) ProgressCanvas_paint);
    java_register_method("ProgressCanvas", "paint2", (void*) ProgressCanvas_paint2);
    java_register_method("ProgressCanvas", "paintThreed", (void*) ProgressCanvas_paintThreed);
    java_register_method("ProgressCanvas", "getValue", (void*) ProgressCanvas_getValue);
    java_register_method("ProgressCanvas", "setText", (void*) ProgressCanvas_setText);
    java_register_method("ProgressCanvas", "getText", (void*) ProgressCanvas_getText);
    java_register_method("ProgressCanvas", "setBackground", (void*) ProgressCanvas_setBackground);
    java_register_method("ProgressCanvas", "isBackground", (void*) ProgressCanvas_isBackground);
}

static void ProgressCanvas_initFields(ProgressCanvas* this) {
    this->hasPainted = false;
    
    this->GAUGE_PAINTABLE = ProgressPaintable_new(this);
    this->maxValue = 100.0f;
    
    this->TEXT = this->base.base.commonStrings->LOADING;
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    this->allbinaryMidlet = AllBinaryMidlet_getNullInstance();
    this->value = 0.0f;
    this->text = this->TEXT;
    this->background = true;
    this->paintable = this->GAUGE_PAINTABLE;
    this->inProgress = false;
    this->IN_GAME_PROCESSOR = Processor_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
        this->pathFindingThreadPool = PathFindingThreadPool_getInstance();
        

    // throws Exception
    void ProgressCanvas_process(ProgressCanvas* this) {
            ThreadPool_runAPriorityTask(this->base.base.base.base.pathFindingThreadPool);
    }
#endif
;
    this->inGameProcessor = Processor_getInstance();
    this->progressEndListener = (ProgressEndListener_staticInit(), ProgressEndListener_instance);
    this->backgroundLabel = "Background AI Game Loading...";
    this->START_BACKGROUND = "startBackground";
    this->ADD_PORTION = "addPortion";
    this->ADD_EARLY_PORTION = "addEarlyPortion";
}


void ProgressCanvas_init(ProgressCanvas* this, const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ProgressCanvas_register();
        RunnableCanvas_init(&this->base, (NullCommandListener_staticInit(), NullCommandListener_NULL_COMMAND_LISTENER), CanvasStrings_getInstance()->EMPTY_CHILD_NAME_LIST, false);
        ProgressCanvas_initFields(this);
        this->backgroundBasicColor = backgroundBasicColor;
        this->gauge = ABCustomGaugeItem_new(StringUtil_getInstance()->EMPTY_STRING, ((int32_t) this->maxValue), 0, backgroundBasicColor, foregroundBasicColor);
}

ProgressCanvas* ProgressCanvas_new(const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ProgressCanvas* this = java_object_alloc(sizeof(ProgressCanvas), "ProgressCanvas");
    ProgressCanvas_init(this, title, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void ProgressCanvas_updateMeasurement(ProgressCanvas* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        ABCustomItem_setHeight(this->gauge, Font_getHeight(font) + 2);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void ProgressCanvas_initMethod(ProgressCanvas* this, AllBinaryMidlet* gameMidlet) {
        this->allbinaryMidlet = gameMidlet;
}


// throws Exception
void ProgressCanvas_update(ProgressCanvas* this, Graphics* graphics) {
}


void ProgressCanvas_initCommands(ProgressCanvas* this, CommandListener* cmdListener) {
}


float ProgressCanvas_getMaxValue(ProgressCanvas* this) {
        return this->maxValue;
}


void ProgressCanvas_start(ProgressCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, this->base.base.commonStrings->START_METHOD_NAME);
        ProgressCanvas_setBackground(this, true);
        ABCustomItem_setHeight(this->gauge, 30);
        ABCustomItem_setLabel(this->gauge, this->base.base.commonStrings->PLEASE_WAIT);
        ProgressCanvas_setText(this, this->TEXT);
        ProgressCanvas_setValue(this, 0);
        this->inGameProcessor = Processor_getInstance();
        this->paintable = this->GAUGE_PAINTABLE;
        this->inProgress = true;
}


void ProgressCanvas_startBackground(ProgressCanvas* this, bool background) {
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, this->START_BACKGROUND);
        ProgressCanvas_setBackground(this, background);
        this->myFontProcessor = this->updateMyFontProcessor;
        ABCustomItem_setLabel(this->gauge, this->backgroundLabel);
        ProgressCanvas_setText(this, this->TEXT);
        ProgressCanvas_setValue(this, 0);
        this->inGameProcessor = Processor_getInstance();
        this->paintable = this->GAUGE_PAINTABLE;
}


void ProgressCanvas_endActual(ProgressCanvas* this) {
        AllBinaryMidlet_commandAction(this->allbinaryMidlet, GameCommandsFactory_getInstance()->SHOW_GAME_CANVAS, (NullCanvas_staticInit(), NullCanvas_NULL_CANVAS));
        this->inProgress = false;
        ProgressCanvas_inGame(this);
}


void ProgressCanvas_inGame(ProgressCanvas* this) {
        ProgressEndListener_onEndEvent(this->progressEndListener);
        this->inGameProcessor = this->IN_GAME_PROCESSOR;
}


void ProgressCanvas_end(ProgressCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, this->base.base.commonStrings->END_METHOD_NAME);
        ABCustomItem_setValue(this->gauge, ProgressCanvas_getMaxValue(this));
        ProgressCanvas_endActual(this);
        this->paintable = NullPaintable_getInstance();
}


void ProgressCanvas_endFromInitialLazyLoadingComplete(ProgressCanvas* this) {
        ProgressEndListener_onEndEvent(this->progressEndListener);
        ABCustomItem_setValue(this->gauge, ProgressCanvas_getMaxValue(this));
        this->inGameProcessor = this->IN_GAME_PROCESSOR;
}


bool ProgressCanvas_isInGame(ProgressCanvas* this) {
        if (this->inGameProcessor == this->IN_GAME_PROCESSOR) {
            return true;
        }
        return false;
}


void ProgressCanvas_endIfPaintedSinceStart(ProgressCanvas* this) {
}


void ProgressCanvas_addEarlyPortion(ProgressCanvas* this, int32_t value, const char* text, int32_t index) {
        ProgressCanvas_setText(this, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), text), java_string_of(SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), index)))));
        ABCustomItem_setValue(this->gauge, ABCustomItem_getValue(this->gauge) + ProgressCanvas_getMaxValue(this) / ((float) value));
}


void ProgressCanvas_addPortion(ProgressCanvas* this, int32_t value, const char* text, int32_t index) {
        ProgressCanvas_setText(this, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), text), java_string_of(SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), index)))));
        PreLogUtil_put(this->text, this, this->ADD_PORTION);
        ABCustomItem_setValue(this->gauge, ABCustomItem_getValue(this->gauge) + ProgressCanvas_getMaxValue(this) / ((float) value));
}


void ProgressCanvas_addNormalPortion(ProgressCanvas* this, int32_t value, const char* text) {
        if (this->text != text) {
            PreLogUtil_put(text, this, this->ADD_PORTION);
        }
        ProgressCanvas_setText(this, text);
        ABCustomItem_setValue(this->gauge, ABCustomItem_getValue(this->gauge) + ProgressCanvas_getMaxValue(this) / ((float) value));
}


void ProgressCanvas_setValue(ProgressCanvas* this, int32_t value) {
        this->value = ((float) value);
        ABCustomItem_setValue(this->gauge, ((float) value));
}


void ProgressCanvas_paint(ProgressCanvas* this, Graphics* graphics) {
        PaintableInterface_paint(this->paintable, graphics);
}


void ProgressCanvas_paint2(ProgressCanvas* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Graphics_setColor(graphics, BasicColor_intValue(this->backgroundBasicColor));
        Graphics_fillRect(graphics, 0, 0, DisplayInfoSingleton_getLastWidth(this->base.base.displayInfo), DisplayInfoSingleton_getLastHeight(this->base.base.displayInfo));
        ABCustomItem_paintXY(this->gauge, graphics, 0, 0);
        this->hasPainted = true;
}


void ProgressCanvas_paintThreed(ProgressCanvas* this, Graphics* graphics) {
}


float ProgressCanvas_getValue(ProgressCanvas* this) {
        return this->value;
}


void ProgressCanvas_setText(ProgressCanvas* this, const char* text) {
        this->text = text;
}


const char* ProgressCanvas_getText(ProgressCanvas* this) {
        return this->text;
}


void ProgressCanvas_setBackground(ProgressCanvas* this, bool background) {
        this->background = background;
}


bool ProgressCanvas_isBackground(ProgressCanvas* this) {
        return this->background;
}

