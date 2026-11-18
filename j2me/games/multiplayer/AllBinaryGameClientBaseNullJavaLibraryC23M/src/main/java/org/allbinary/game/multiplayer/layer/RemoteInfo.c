// Generated Code Do Not Modify
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif



RemoteInfo* RemoteInfo_REMOTE_INFO;


void RemoteInfo_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    RemoteInfo_REMOTE_INFO = RemoteInfo_new(StringUtil_getInstance()->EMPTY_STRING, -1, -1, RemoteInfo_NEW_PLAYER_ID);
}

void RemoteInfo_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RemoteInfo", nullptr);
}


void RemoteInfo_init(RemoteInfo* this, const char* username, int32_t actorSessionId, int32_t playerInputId, int32_t id) {
    RemoteInfo_register();
}

RemoteInfo* RemoteInfo_new(const char* username, int32_t actorSessionId, int32_t playerInputId, int32_t id) {
    RemoteInfo* this = java_object_alloc(sizeof(RemoteInfo), "RemoteInfo");
    RemoteInfo_init(this, username, actorSessionId, playerInputId, id);
    return this;
}

