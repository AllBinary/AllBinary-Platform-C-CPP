// Generated Code Do Not Modify
#include "org/allbinary/game/combat/destroy/DestroyableBaseBehavior.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/combat/destroy/DestroyableInterface.h"
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif


static DestroyableBaseBehavior* DestroyableBaseBehavior_instance;





void DestroyableBaseBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DestroyableBaseBehavior_instance = DestroyableBaseBehavior_new();
}

void DestroyableBaseBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DestroyableBaseBehavior", nullptr);
    java_register_method("DestroyableBaseBehavior", "getName", (void*) DestroyableBaseBehavior_getName);
    java_register_method("DestroyableBaseBehavior", "isDestroyed", (void*) DestroyableBaseBehavior_isDestroyed);
    java_register_method("DestroyableBaseBehavior", "setDestroyed", (void*) DestroyableBaseBehavior_setDestroyed);
}

void DestroyableBaseBehavior_init(DestroyableBaseBehavior* this) {
    DestroyableBaseBehavior_register();
}

DestroyableBaseBehavior* DestroyableBaseBehavior_new(void) {
    DestroyableBaseBehavior* this = java_object_alloc(sizeof(DestroyableBaseBehavior), "DestroyableBaseBehavior");
    DestroyableBaseBehavior_init(this);
    return this;
}


DestroyableBaseBehavior* DestroyableBaseBehavior_getInstance(void) {
        return (DestroyableBaseBehavior_staticInit(), DestroyableBaseBehavior_instance);
}


const char* DestroyableBaseBehavior_getName(DestroyableBaseBehavior* this) {
        return java_class_of(this);
}


// throws Exception
bool DestroyableBaseBehavior_isDestroyed(DestroyableBaseBehavior* this) {
        java_throw(java_exception_new("Exception", CommonStrings_getInstance()->NOT_IMPLEMENTED));
}


void DestroyableBaseBehavior_setDestroyed(DestroyableBaseBehavior* this, bool destroyed) {
}

