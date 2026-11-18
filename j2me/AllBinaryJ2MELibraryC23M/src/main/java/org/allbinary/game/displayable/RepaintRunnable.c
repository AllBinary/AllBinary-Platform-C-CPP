// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/RepaintRunnable.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif





void RepaintRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RepaintRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RepaintRunnable", "ARunnable");
    java_register_method("RepaintRunnable", "run", (void*) RepaintRunnable_run);
}

static void RepaintRunnable_initFields(RepaintRunnable* this) {
    
}


void RepaintRunnable_init(RepaintRunnable* this, Canvas* canvas) {
    RepaintRunnable_register();
    ARunnable_init(&this->base);
    RepaintRunnable_initFields(this);
        this->canvas = canvas;
}

RepaintRunnable* RepaintRunnable_new(Canvas* canvas) {
    RepaintRunnable* this = java_object_alloc(sizeof(RepaintRunnable), "RepaintRunnable");
    RepaintRunnable_init(this, canvas);
    return this;
}


void RepaintRunnable_run(RepaintRunnable* this) {
        JAVA_TRY {
            Canvas_repaint(this->canvas);
            DisplayInfoSingleton_process(DisplayInfoSingleton_getInstance());
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil* logUtil = LogUtil_getInstance();
            LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}

