// Generated Code Do Not Modify
#include "org/allbinary/media/audio/PlayerStateUtil.h"
#include "javax/microedition/media/Player.h"
#include "org/allbinary/string/CommonStrings.h"


static PlayerStateUtil* PlayerStateUtil_instance;



void PlayerStateUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PlayerStateUtil_instance = PlayerStateUtil_new();
}

void PlayerStateUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlayerStateUtil", nullptr);
    java_register_method("PlayerStateUtil", "convert", (void*) PlayerStateUtil_convert);
}

static void PlayerStateUtil_initFields(PlayerStateUtil* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->UNREALIZED = "UNREALIZED";
    this->REALIZED = "REALIZED";
    this->PREFETCHED = "PREFETCHED";
    this->STARTED = "STARTED";
    this->CLOSED = "CLOSED";
}

void PlayerStateUtil_init(PlayerStateUtil* this) {
    PlayerStateUtil_register();
    PlayerStateUtil_initFields(this);
}

PlayerStateUtil* PlayerStateUtil_new(void) {
    PlayerStateUtil* this = java_object_alloc(sizeof(PlayerStateUtil), "PlayerStateUtil");
    PlayerStateUtil_init(this);
    return this;
}


PlayerStateUtil* PlayerStateUtil_getInstance(void) {
        return (PlayerStateUtil_staticInit(), PlayerStateUtil_instance);
}


const char* PlayerStateUtil_convert(PlayerStateUtil* this, int32_t state) {
        if (state == (Player_staticInit(), Player_UNREALIZED)) {
            return this->UNREALIZED;
        } else if (state == (Player_staticInit(), Player_REALIZED)) {
            return this->REALIZED;
        } else if (state == (Player_staticInit(), Player_PREFETCHED)) {
            return this->PREFETCHED;
        } else if (state == (Player_staticInit(), Player_STARTED)) {
            return this->STARTED;
        } else if (state == (Player_staticInit(), Player_CLOSED)) {
            return this->CLOSED;
        }
        return this->commonStrings->UNKNOWN;
}

