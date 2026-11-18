// Generated Code Do Not Modify
#include "org/allbinary/game/multiplayer/layer/MultiplayerBehavior.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


MultiplayerBehavior* MultiplayerBehavior_NULL_MULTIPLAYER_BEHAVIOR;





void MultiplayerBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MultiplayerBehavior_NULL_MULTIPLAYER_BEHAVIOR = MultiplayerBehavior_new(StringUtil_getInstance()->EMPTY_STRING);
}

void MultiplayerBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MultiplayerBehavior", nullptr);
    java_register_method("MultiplayerBehavior", "startTick", (void*) MultiplayerBehavior_startTick);
    java_register_method("MultiplayerBehavior", "endTick", (void*) MultiplayerBehavior_endTick);
    java_register_method("MultiplayerBehavior", "getApproximateElapsed", (void*) MultiplayerBehavior_getApproximateElapsed);
}


void MultiplayerBehavior_init(MultiplayerBehavior* this, const char* username) {
    MultiplayerBehavior_register();
}

MultiplayerBehavior* MultiplayerBehavior_new(const char* username) {
    MultiplayerBehavior* this = java_object_alloc(sizeof(MultiplayerBehavior), "MultiplayerBehavior");
    MultiplayerBehavior_init(this, username);
    return this;
}


void MultiplayerBehavior_startTick(MultiplayerBehavior* this) {
}


void MultiplayerBehavior_endTick(MultiplayerBehavior* this) {
}


int64_t MultiplayerBehavior_getApproximateElapsed(MultiplayerBehavior* this) {
        return 0LL;
}

