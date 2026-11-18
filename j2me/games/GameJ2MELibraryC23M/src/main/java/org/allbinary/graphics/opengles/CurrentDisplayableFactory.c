// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/CurrentDisplayableFactory.h"
#include "javax/microedition/lcdui/Displayable.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/game/displayable/canvas/DemoCanvas.h"
#include "org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h"
#include "org/allbinary/game/displayable/canvas/GameInputMappingInstructionsCanvas.h"
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#include "org/allbinary/game/displayable/canvas/NullDisplayable.h"
#include "org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h"
#include "org/allbinary/game/layer/SWTUtil.h"
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#include "org/allbinary/graphics/GraphicsStrings.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/NullRunnable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
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
#if __has_include("org/allbinary/graphics/GraphicsStrings.h")
#include "org/allbinary/graphics/GraphicsStrings.h"
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
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif


static CurrentDisplayableFactory* CurrentDisplayableFactory_instance;









static void CurrentDisplayableFactory_update(CurrentDisplayableFactory* this);




void CurrentDisplayableFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CurrentDisplayableFactory_instance = CurrentDisplayableFactory_new();
}

void CurrentDisplayableFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CurrentDisplayableFactory", nullptr);
    java_register_method("CurrentDisplayableFactory", "setMyCanvas", (void*) CurrentDisplayableFactory_setMyCanvas);
    java_register_method("CurrentDisplayableFactory", "setDisplayable", (void*) CurrentDisplayableFactory_setDisplayable);
    java_register_method("CurrentDisplayableFactory", "setOpenGlReadydisplayable", (void*) CurrentDisplayableFactory_setOpenGlReadydisplayable);
    java_register_method("CurrentDisplayableFactory", "getOpenGlReadydisplayable", (void*) CurrentDisplayableFactory_getOpenGlReadydisplayable);
    java_register_method("CurrentDisplayableFactory", "setRunnable", (void*) CurrentDisplayableFactory_setRunnable);
    java_register_method("CurrentDisplayableFactory", "clearRunnable", (void*) CurrentDisplayableFactory_clearRunnable);
    java_register_method("CurrentDisplayableFactory", "update", (void*) CurrentDisplayableFactory_update);
    java_register_method("CurrentDisplayableFactory", "getDisplayable", (void*) CurrentDisplayableFactory_getDisplayable);
    java_register_method("CurrentDisplayableFactory", "getUsedRunnable", (void*) CurrentDisplayableFactory_getUsedRunnable);
    java_register_method("CurrentDisplayableFactory", "setUsedRunnable", (void*) CurrentDisplayableFactory_setUsedRunnable);
}

static void CurrentDisplayableFactory_initFields(CurrentDisplayableFactory* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->canvasStrings = CanvasStrings_getInstance();
    this->stringUtil = StringUtil_getInstance();
    this->SET_DISPLAYABLE = "setDisplayable";
    this->SET_RUNNABLE = "setRunnable";
    this->CLEAR_RUNNABLE = "clearRunnable";
    this->SET_USED_RUNNABLE = "setUsedRunnable";
    this->RUNNABLE = "Runnable: ";
    this->RUNNABLE_WAS_ALREADY_IN_USE = "Runnable was already in use: ";
    this->DEFAULT_CHILD_NAME_LIST = BasicArrayListD_new();
    this->displayable = NullDisplayable_getInstance();
    this->openGlReadydisplayable = NullDisplayable_getInstance();
    this->runnable = NullWaitGameRunnable_getInstance();
    this->usedRunnable = NullWaitGameRunnable_getInstance();
}


CurrentDisplayableFactory* CurrentDisplayableFactory_getInstance(void) {
        return (CurrentDisplayableFactory_staticInit(), CurrentDisplayableFactory_instance);
}


void CurrentDisplayableFactory_init(CurrentDisplayableFactory* this) {
    CurrentDisplayableFactory_register();
    CurrentDisplayableFactory_initFields(this);
        BasicArrayList_add(this->DEFAULT_CHILD_NAME_LIST, this->canvasStrings->ABOUT);
        BasicArrayList_add(this->DEFAULT_CHILD_NAME_LIST, this->canvasStrings->OPTIONS);
        BasicArrayList_add(this->DEFAULT_CHILD_NAME_LIST, (GameInputMappingCanvas_staticInit(), GameInputMappingCanvas_NAME));
        BasicArrayList_add(this->DEFAULT_CHILD_NAME_LIST, (GameInputMappingInstructionsCanvas_staticInit(), GameInputMappingInstructionsCanvas_NAME));
        BasicArrayList_add(this->DEFAULT_CHILD_NAME_LIST, (HighScoresCanvas_staticInit(), HighScoresCanvas_NAME));
}

CurrentDisplayableFactory* CurrentDisplayableFactory_new(void) {
    CurrentDisplayableFactory* this = java_object_alloc(sizeof(CurrentDisplayableFactory), "CurrentDisplayableFactory");
    CurrentDisplayableFactory_init(this);
    return this;
}


void CurrentDisplayableFactory_setMyCanvas(CurrentDisplayableFactory* this, MyCanvas* displayable) {
        if (java_instanceof(this->displayable, "MyCanvas")) {
            if (MyCanvas_hasChild(displayable, ((MyCanvas*) this->displayable))) {
                PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Child Displayable is already set for: "), StringUtil_toString(this->stringUtil, displayable))), this, this->SET_DISPLAYABLE);
                return;
            }
        }
        CurrentDisplayableFactory_setDisplayable(this, displayable);
}


void CurrentDisplayableFactory_setDisplayable(CurrentDisplayableFactory* this, Displayable* displayable) {
        this->displayable = displayable;
        CurrentDisplayableFactory_setOpenGlReadydisplayable(this, displayable);
}


void CurrentDisplayableFactory_setOpenGlReadydisplayable(CurrentDisplayableFactory* this, Displayable* openGlReadydisplayable) {
        this->openGlReadydisplayable = openGlReadydisplayable;
        CurrentDisplayableFactory_update(this);
}


Displayable* CurrentDisplayableFactory_getOpenGlReadydisplayable(CurrentDisplayableFactory* this) {
        return this->openGlReadydisplayable;
}


void CurrentDisplayableFactory_setRunnable(CurrentDisplayableFactory* this, GameRunnable* runnable) {
        PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->RUNNABLE), StringUtil_toString(this->stringUtil, runnable))), this, this->SET_RUNNABLE);
        this->runnable = runnable;
        if (this->usedRunnable != this->runnable) {
            CurrentDisplayableFactory_update(this);
        } else {
            PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->RUNNABLE_WAS_ALREADY_IN_USE), StringUtil_toString(this->stringUtil, runnable))), this, this->SET_RUNNABLE);
        }
}


void CurrentDisplayableFactory_clearRunnable(CurrentDisplayableFactory* this) {
        PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->RUNNABLE), StringUtil_toString(this->stringUtil, NullRunnable_getInstance()))), this, this->CLEAR_RUNNABLE);
        CurrentDisplayableFactory_setUsedRunnable(this, NullWaitGameRunnable_getInstance());
}


static void CurrentDisplayableFactory_update(CurrentDisplayableFactory* this) {
        java_monitor_enter(this);
        {
            CommonSeps* commonSeps = CommonSeps_getInstance();
            Features* features = Features_getInstance();
            StringMaker* stringMaker = StringMaker_new();
            StringMaker_append(stringMaker, StringUtil_toString(this->stringUtil, this->openGlReadydisplayable));
            if ((SWTUtil_staticInit(), SWTUtil_isSWT) && !Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL)) {
                PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(stringMaker, commonSeps->SPACE), (SWTUtil_staticInit(), SWTUtil_SWT)), commonSeps->SPACE), this->RUNNABLE), StringUtil_toString(this->stringUtil, NullRunnable_getInstance()))), this, this->commonStrings->UPDATE);
                CurrentDisplayableFactory_setUsedRunnable(this, NullWaitGameRunnable_getInstance());
            } else if (J2MEUtil_isHTML()) {
                PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(stringMaker, commonSeps->SPACE), GraphicsStrings_getInstance()->HTML), commonSeps->SPACE), this->RUNNABLE), StringUtil_toString(this->stringUtil, this->runnable))), this, this->commonStrings->UPDATE);
                CurrentDisplayableFactory_setUsedRunnable(this, this->runnable);
            } else if (java_instanceof(this->openGlReadydisplayable, "DemoCanvas") || java_instanceof(this->openGlReadydisplayable, "AllBinaryGameCanvas") || Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL)) {
                PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(stringMaker, commonSeps->SPACE), java_string_of(OpenGLFeatureFactory_getInstance()->OPENGL)), commonSeps->SPACE), this->RUNNABLE), StringUtil_toString(this->stringUtil, this->runnable))), this, this->commonStrings->UPDATE);
                CurrentDisplayableFactory_setUsedRunnable(this, this->runnable);
            } else {
                PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(stringMaker, this->RUNNABLE), StringUtil_toString(this->stringUtil, NullRunnable_getInstance()))), this, this->commonStrings->UPDATE);
                CurrentDisplayableFactory_setUsedRunnable(this, NullWaitGameRunnable_getInstance());
            }
        }
        java_monitor_exit(this);
}


Displayable* CurrentDisplayableFactory_getDisplayable(CurrentDisplayableFactory* this) {
        return this->displayable;
}


GameRunnable* CurrentDisplayableFactory_getUsedRunnable(CurrentDisplayableFactory* this) {
        return this->usedRunnable;
}


void CurrentDisplayableFactory_setUsedRunnable(CurrentDisplayableFactory* this, GameRunnable* usedRunnable) {
        PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), this->RUNNABLE), StringUtil_toString(this->stringUtil, this->runnable)), CommonSeps_getInstance()->COLON_SEP), StringUtil_toString(this->stringUtil, usedRunnable))), this, this->SET_USED_RUNNABLE);
        this->usedRunnable = usedRunnable;
}

