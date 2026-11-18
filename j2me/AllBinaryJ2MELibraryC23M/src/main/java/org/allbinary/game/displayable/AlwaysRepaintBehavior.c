// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/AlwaysRepaintBehavior.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/game/displayable/RepaintBehavior.h"
#include "org/allbinary/game/displayable/RepaintRunnable.h"
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif


static AlwaysRepaintBehavior* AlwaysRepaintBehavior_instanceC;




void AlwaysRepaintBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AlwaysRepaintBehavior_instanceC = AlwaysRepaintBehavior_new();
}

void AlwaysRepaintBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AlwaysRepaintBehavior", "RepaintBehavior");
    java_register_method("AlwaysRepaintBehavior", "repaint", (void*) AlwaysRepaintBehavior_repaint);
    java_register_method("AlwaysRepaintBehavior", "onChangeRepaint", (void*) AlwaysRepaintBehavior_onChangeRepaint);
}

static void AlwaysRepaintBehavior_initFields(AlwaysRepaintBehavior* this) {
    this->NAME = "AlwaysRepaintBehavior";
}

void AlwaysRepaintBehavior_init(AlwaysRepaintBehavior* this) {
    AlwaysRepaintBehavior_register();
    RepaintBehavior_init(&this->base);
    AlwaysRepaintBehavior_initFields(this);
}

AlwaysRepaintBehavior* AlwaysRepaintBehavior_new(void) {
    AlwaysRepaintBehavior* this = java_object_alloc(sizeof(AlwaysRepaintBehavior), "AlwaysRepaintBehavior");
    AlwaysRepaintBehavior_init(this);
    return this;
}


AlwaysRepaintBehavior* AlwaysRepaintBehavior_getInstance(void) {
        return (AlwaysRepaintBehavior_staticInit(), AlwaysRepaintBehavior_instanceC);
}


void AlwaysRepaintBehavior_repaint(AlwaysRepaintBehavior* this, Canvas* canvas) {
        Features* features = Features_getInstance();
        OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
        if (Features_isFeature(features, openGLFeatureFactory->OPENGL)) {
            DisplayInfoSingleton_process(DisplayInfoSingleton_getInstance());
        } else {
            Thread* thread = Thread_new(RepaintRunnable_new(canvas), this->NAME);
            Thread_start(thread);
        }
}


void AlwaysRepaintBehavior_onChangeRepaint(AlwaysRepaintBehavior* this, Canvas* canvas) {
}

