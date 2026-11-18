// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/ImmediateCommandFormInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"








void ImmediateCommandFormInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImmediateCommandFormInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImmediateCommandFormInputProcessor", "CommandFormInputProcessor");
    java_register_method("ImmediateCommandFormInputProcessor", "onPressGameKeyEvent", (void*) ImmediateCommandFormInputProcessor_onPressGameKeyEvent);
    java_register_method("ImmediateCommandFormInputProcessor", "onDownGameKeyEvent", (void*) ImmediateCommandFormInputProcessor_onDownGameKeyEvent);
    java_register_method("ImmediateCommandFormInputProcessor", "onUpGameKeyEvent", (void*) ImmediateCommandFormInputProcessor_onUpGameKeyEvent);
    java_register_method("ImmediateCommandFormInputProcessor", "onMotionGestureEvent", (void*) ImmediateCommandFormInputProcessor_onMotionGestureEvent);
}

static void ImmediateCommandFormInputProcessor_initFields(ImmediateCommandFormInputProcessor* this) {
    this->timeHelper = TimeDelayHelper_new(25);
    
}


void ImmediateCommandFormInputProcessor_init(ImmediateCommandFormInputProcessor* this, BasicArrayList* gameKeyEventList, int32_t playerInputId, GameCommandCanvas* gameCommandCanvas, ScrollSelectionForm* form) {
    ImmediateCommandFormInputProcessor_register();
        CommandFormInputProcessor_init(&this->base, gameKeyEventList, playerInputId, gameCommandCanvas, form);
        ImmediateCommandFormInputProcessor_initFields(this);
        this->gameCommandCanvas = gameCommandCanvas;
}

ImmediateCommandFormInputProcessor* ImmediateCommandFormInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, GameCommandCanvas* gameCommandCanvas, ScrollSelectionForm* form) {
    ImmediateCommandFormInputProcessor* this = java_object_alloc(sizeof(ImmediateCommandFormInputProcessor), "ImmediateCommandFormInputProcessor");
    ImmediateCommandFormInputProcessor_init(this, gameKeyEventList, playerInputId, gameCommandCanvas, form);
    return this;
}


// synchronized
void ImmediateCommandFormInputProcessor_onPressGameKeyEvent(ImmediateCommandFormInputProcessor* this, GameKeyEvent* gameKeyEvent) {
        JAVA_TRY {
            PlayerGameInput_onPressGameKeyEvent((&this->base), gameKeyEvent);
            if (TimeDelayHelper_isTimeTNT(this->timeHelper)) {
                CommandFormInputProcessor_processInputList(this);
                RepaintBehavior_onChangeRepaint(this->gameCommandCanvas->repaintBehavior, BasicMenuInputProcessor_getCanvas(this));
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.base.base.logUtil, this->base.base.base.base.commonStrings->EXCEPTION, this, this->base.base.base.gameInputStrings->ON_PRESS_GAME_KEY, e);
        } JAVA_END_TRY;
}


// synchronized
void ImmediateCommandFormInputProcessor_onDownGameKeyEvent(ImmediateCommandFormInputProcessor* this, GameKeyEvent* gameKeyEvent) {
        JAVA_TRY {
            PlayerGameInput_onDownGameKeyEvent((&this->base), gameKeyEvent);
            if (TimeDelayHelper_isTimeTNT(this->timeHelper)) {
                CommandFormInputProcessor_processInputList(this);
                RepaintBehavior_onChangeRepaint(this->gameCommandCanvas->repaintBehavior, BasicMenuInputProcessor_getCanvas(this));
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.base.base.logUtil, this->base.base.base.base.commonStrings->EXCEPTION, this, this->base.base.base.gameInputStrings->ON_DOWN_GAME_KEY, e);
        } JAVA_END_TRY;
}


// synchronized
void ImmediateCommandFormInputProcessor_onUpGameKeyEvent(ImmediateCommandFormInputProcessor* this, GameKeyEvent* gameKeyEvent) {
        JAVA_TRY {
            PlayerGameInput_onUpGameKeyEvent((&this->base), gameKeyEvent);
            if (TimeDelayHelper_isTimeTNT(this->timeHelper)) {
                CommandFormInputProcessor_processInputList(this);
                RepaintBehavior_onChangeRepaint(this->gameCommandCanvas->repaintBehavior, BasicMenuInputProcessor_getCanvas(this));
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.base.base.logUtil, this->base.base.base.base.commonStrings->EXCEPTION, this, this->base.base.base.gameInputStrings->ON_UP_GAME_KEY, e);
        } JAVA_END_TRY;
}


void ImmediateCommandFormInputProcessor_onMotionGestureEvent(ImmediateCommandFormInputProcessor* this, MotionGestureEvent* motionGestureEvent) {
        JAVA_TRY {
            BasicMenuInputProcessor_onMotionGestureEvent((&this->base), motionGestureEvent);
            if (TimeDelayHelper_isTimeTNT(this->timeHelper)) {
                CommandFormInputProcessor_processInputList(this);
                RepaintBehavior_onChangeRepaint(this->gameCommandCanvas->repaintBehavior, BasicMenuInputProcessor_getCanvas(this));
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.base.base.logUtil, this->base.base.base.base.commonStrings->EXCEPTION, this, "onMotionGestureEvent", e);
        } JAVA_END_TRY;
}

