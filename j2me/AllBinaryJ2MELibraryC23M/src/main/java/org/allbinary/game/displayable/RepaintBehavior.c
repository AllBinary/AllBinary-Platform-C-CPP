// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/RepaintBehavior.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/game/displayable/RepaintRunnable.h"
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif


static RepaintBehavior* RepaintBehavior_instance;




void RepaintBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    RepaintBehavior_instance = RepaintBehavior_new();
}

void RepaintBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RepaintBehavior", nullptr);
    java_register_method("RepaintBehavior", "repaint", (void*) RepaintBehavior_repaint);
    java_register_method("RepaintBehavior", "onChangeRepaint", (void*) RepaintBehavior_onChangeRepaint);
}

static void RepaintBehavior_initFields(RepaintBehavior* this) {
    this->logUtil = LogUtil_getInstance();
    this->NAME = "RepaintBehavior";
}

void RepaintBehavior_init(RepaintBehavior* this) {
    RepaintBehavior_register();
    RepaintBehavior_initFields(this);
}

RepaintBehavior* RepaintBehavior_new(void) {
    RepaintBehavior* this = java_object_alloc(sizeof(RepaintBehavior), "RepaintBehavior");
    RepaintBehavior_init(this);
    return this;
}


RepaintBehavior* RepaintBehavior_getInstance(void) {
        return (RepaintBehavior_staticInit(), RepaintBehavior_instance);
}


void RepaintBehavior_repaint(RepaintBehavior* this, Canvas* canvas) {
}


void RepaintBehavior_onChangeRepaint(RepaintBehavior* this, Canvas* canvas) {
        Features* features = Features_getInstance();
        OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
        if (Features_isFeature(features, openGLFeatureFactory->OPENGL)) {
            DisplayInfoSingleton_process(DisplayInfoSingleton_getInstance());
        } else {
            Thread* thread = Thread_new(RepaintRunnable_new(canvas), this->NAME);
            Thread_start(thread);
        }
}

