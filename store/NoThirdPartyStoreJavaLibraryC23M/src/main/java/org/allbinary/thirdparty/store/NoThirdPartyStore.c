// Generated Code Do Not Modify
#include "org/allbinary/thirdparty/store/NoThirdPartyStore.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/thirdparty/store/ThirdPartyStore.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif





void NoThirdPartyStore_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NoThirdPartyStore_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoThirdPartyStore", "ThirdPartyStore");
    java_register_method("NoThirdPartyStore", "authorize", (void*) NoThirdPartyStore_authorize);
}


void NoThirdPartyStore_init(NoThirdPartyStore* this) {
    NoThirdPartyStore_register();
        ThirdPartyStore_init(&this->base, StringUtil_getInstance()->EMPTY_STRING);
}

NoThirdPartyStore* NoThirdPartyStore_new(void) {
    NoThirdPartyStore* this = java_object_alloc(sizeof(NoThirdPartyStore), "NoThirdPartyStore");
    NoThirdPartyStore_init(this);
    return this;
}


void NoThirdPartyStore_authorize(NoThirdPartyStore* this, AbeClientInformationInterface* clientInformationInterface) {
        ThirdPartyStore_setAuthorized(this, true);
}

