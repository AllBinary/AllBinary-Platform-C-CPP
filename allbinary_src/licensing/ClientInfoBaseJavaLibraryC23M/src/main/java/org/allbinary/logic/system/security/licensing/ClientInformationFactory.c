// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/licensing/ClientInformationFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/system/security/licensing/ClientInformation.h"




void ClientInformationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ClientInformationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ClientInformationFactory", nullptr);
    java_register_method("ClientInformationFactory", "getInstance", (void*) ClientInformationFactory_getInstance);
}

void ClientInformationFactory_init(ClientInformationFactory* this) {
    ClientInformationFactory_register();
}

ClientInformationFactory* ClientInformationFactory_new(void) {
    ClientInformationFactory* this = java_object_alloc(sizeof(ClientInformationFactory), "ClientInformationFactory");
    ClientInformationFactory_init(this);
    return this;
}


ClientInformation* ClientInformationFactory_getInstance(ClientInformationFactory* this) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(logUtil, commonStrings->NOT_IMPLEMENTED, this, commonStrings->GET_INSTANCE);
        StringUtil* stringUtil = StringUtil_getInstance();
        return ClientInformation_new(stringUtil->NULL_STRING, stringUtil->NULL_STRING, stringUtil->NULL_STRING, stringUtil->NULL_STRING);
}

