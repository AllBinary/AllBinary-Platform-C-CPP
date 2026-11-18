// Generated Code Do Not Modify
#include "org/allbinary/thirdparty/store/ThirdPartyMessageFactory.h"


static ThirdPartyMessageFactory* ThirdPartyMessageFactory_instance;


void ThirdPartyMessageFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ThirdPartyMessageFactory_instance = ThirdPartyMessageFactory_new();
}

void ThirdPartyMessageFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ThirdPartyMessageFactory", nullptr);
}

static void ThirdPartyMessageFactory_initFields(ThirdPartyMessageFactory* this) {
    this->AUTHORIZED = "Authorized";
    this->NOT_AUTHORIZED = "Not Authorized";
    this->LINKAGE_ERROR = "Linkage Error";
}

void ThirdPartyMessageFactory_init(ThirdPartyMessageFactory* this) {
    ThirdPartyMessageFactory_register();
    ThirdPartyMessageFactory_initFields(this);
}

ThirdPartyMessageFactory* ThirdPartyMessageFactory_new(void) {
    ThirdPartyMessageFactory* this = java_object_alloc(sizeof(ThirdPartyMessageFactory), "ThirdPartyMessageFactory");
    ThirdPartyMessageFactory_init(this);
    return this;
}


ThirdPartyMessageFactory* ThirdPartyMessageFactory_getInstance(void) {
        return (ThirdPartyMessageFactory_staticInit(), ThirdPartyMessageFactory_instance);
}

