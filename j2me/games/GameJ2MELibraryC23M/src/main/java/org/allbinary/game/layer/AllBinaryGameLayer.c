// Generated Code Do Not Modify
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#include "javax/microedition/khronos/opengles/GL.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/view/event/ViewPositionEvent.h"
#include "org/allbinary/game/layer/SWTUtil.h"
#include "org/allbinary/game/layer/SWTBlackPaintable.h"
#include "org/allbinary/game/layer/GameLayerUtil.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif



static Paintable* AllBinaryGameLayer_createPaintable(void);














void AllBinaryGameLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllBinaryGameLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryGameLayer", "AllBinaryLayer");
    java_register_method("AllBinaryGameLayer", "set", (void*) AllBinaryGameLayer_set);
    java_register_method("AllBinaryGameLayer", "move", (void*) AllBinaryGameLayer_move);
    java_register_method("AllBinaryGameLayer", "getGameKeyEventList", (void*) AllBinaryGameLayer_getGameKeyEventList);
    java_register_method("AllBinaryGameLayer", "processInput", (void*) AllBinaryGameLayer_processInput);
    java_register_method("AllBinaryGameLayer", "processTick", (void*) AllBinaryGameLayer_processTick);
    java_register_method("AllBinaryGameLayer", "onEvent", (void*) AllBinaryGameLayer_onEvent);
    java_register_method("AllBinaryGameLayer", "onViewPositionChangeEvent", (void*) AllBinaryGameLayer_onViewPositionChangeEvent);
    java_register_method("AllBinaryGameLayer", "onChangeEvent", (void*) AllBinaryGameLayer_onChangeEvent);
    java_register_method("AllBinaryGameLayer", "paintFirst", (void*) AllBinaryGameLayer_paintFirst);
    java_register_method("AllBinaryGameLayer", "paintDebug", (void*) AllBinaryGameLayer_paintDebug);
    java_register_method("AllBinaryGameLayer", "setWidth", (void*) AllBinaryGameLayer_setWidth);
    java_register_method("AllBinaryGameLayer", "setHeight", (void*) AllBinaryGameLayer_setHeight);
}

static void AllBinaryGameLayer_initFields(AllBinaryGameLayer* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    this->RED = BasicColorFactory_getInstance()->RED;
    this->paintable = AllBinaryGameLayer_createPaintable();
    this->gameKeyEventList = BasicArrayListD_new();
}


static Paintable* AllBinaryGameLayer_createPaintable(void) {
        if ((SWTUtil_staticInit(), SWTUtil_isSWT)) {
            return SWTBlackPaintable_new();
        }
        return NullPaintable_getInstance();
}


void AllBinaryGameLayer_init(AllBinaryGameLayer* this, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition) {
    AllBinaryGameLayer_register();
        AllBinaryLayer_init(&this->base, name, layerInfo, viewPosition);
        AllBinaryGameLayer_initFields(this);
}

AllBinaryGameLayer* AllBinaryGameLayer_new(const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition) {
    AllBinaryGameLayer* this = java_object_alloc(sizeof(AllBinaryGameLayer), "AllBinaryGameLayer");
    AllBinaryGameLayer_init(this, name, layerInfo, viewPosition);
    return this;
}


// throws Exception
void AllBinaryGameLayer_set(AllBinaryGameLayer* this, GL* gl) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


void AllBinaryGameLayer_move(AllBinaryGameLayer* this) {
}


BasicArrayList* AllBinaryGameLayer_getGameKeyEventList(AllBinaryGameLayer* this) {
        return this->gameKeyEventList;
}


// throws Exception
void AllBinaryGameLayer_processInput(AllBinaryGameLayer* this, AllBinaryLayerManager* allBinaryLayerManager) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
void AllBinaryGameLayer_processTick(AllBinaryGameLayer* this, AllBinaryLayerManager* allBinaryLayerManager) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


void AllBinaryGameLayer_onEvent(AllBinaryGameLayer* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


// throws Exception
void AllBinaryGameLayer_onViewPositionChangeEvent(AllBinaryGameLayer* this) {
        AllBinaryGameLayer_onChangeEvent(this, this->base.viewPositionEvent);
}


// throws Exception
void AllBinaryGameLayer_onChangeEvent(AllBinaryGameLayer* this, ViewPositionEvent* layerManagerEvent) {
        if (GameLayerUtil_isOnScreen(this)) {
            AllBinaryLayer_setVisible(this, true);
        } else {
            AllBinaryLayer_setVisible(this, false);
        }
}


void AllBinaryGameLayer_paintFirst(AllBinaryGameLayer* this, Graphics* graphics) {
        Paintable_paint(this->paintable, graphics);
}


void AllBinaryGameLayer_paintDebug(AllBinaryGameLayer* this, Graphics* graphics) {
        ViewPositionBase* viewPosition = AllBinaryLayer_getViewPosition(this);
        int32_t viewX = GPoint_getX(viewPosition);
        int32_t viewY = GPoint_getY(viewPosition);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, this->RED);
        Graphics_drawRect(graphics, viewX, viewY, AllBinaryLayer_getWidth(this), AllBinaryLayer_getHeight(this));
}


void AllBinaryGameLayer_setWidth(AllBinaryGameLayer* this, int32_t width) {
        Layer_setLayerWidth((&this->base), width);
        AllBinaryLayer_setHalfWidth(this, width >> 1);
}


void AllBinaryGameLayer_setHeight(AllBinaryGameLayer* this, int32_t height) {
        Layer_setLayerHeight((&this->base), height);
        AllBinaryLayer_setHalfHeight(this, height >> 1);
}

