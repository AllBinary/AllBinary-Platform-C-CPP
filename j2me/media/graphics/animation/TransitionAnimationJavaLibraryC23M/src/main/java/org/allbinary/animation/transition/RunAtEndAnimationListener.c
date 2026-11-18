// Generated Code Do Not Modify
#include "org/allbinary/animation/transition/RunAtEndAnimationListener.h"
#include "org/allbinary/animation/transition/AnimationListenerInterface.h"







void RunAtEndAnimationListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RunAtEndAnimationListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RunAtEndAnimationListener", nullptr);
    java_register_method("RunAtEndAnimationListener", "onPlatformAnimationStart", (void*) RunAtEndAnimationListener_onPlatformAnimationStart);
    java_register_method("RunAtEndAnimationListener", "onPlatformAnimationEnd", (void*) RunAtEndAnimationListener_onPlatformAnimationEnd);
    java_register_method("RunAtEndAnimationListener", "onPlatformAnimationRepeat", (void*) RunAtEndAnimationListener_onPlatformAnimationRepeat);
}

static void RunAtEndAnimationListener_initFields(RunAtEndAnimationListener* this) {
    
}


void RunAtEndAnimationListener_init(RunAtEndAnimationListener* this, Runnable* runnable) {
    RunAtEndAnimationListener_register();
    RunAtEndAnimationListener_initFields(this);
        this->runnable = runnable;
}

RunAtEndAnimationListener* RunAtEndAnimationListener_new(Runnable* runnable) {
    RunAtEndAnimationListener* this = java_object_alloc(sizeof(RunAtEndAnimationListener), "RunAtEndAnimationListener");
    RunAtEndAnimationListener_init(this, runnable);
    return this;
}


void RunAtEndAnimationListener_onPlatformAnimationStart(RunAtEndAnimationListener* this) {
}


void RunAtEndAnimationListener_onPlatformAnimationEnd(RunAtEndAnimationListener* this) {
}


void RunAtEndAnimationListener_onPlatformAnimationRepeat(RunAtEndAnimationListener* this) {
}

