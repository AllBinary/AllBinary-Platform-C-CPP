// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/licensing/AbeClientInformation.h"
#include "org/allbinary/business/init/LicenseInitInfo.h"
#include "org/allbinary/business/init/LicenseInitInfoUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/system/security/licensing/ClientInformation.h"
#if __has_include("org/allbinary/logic/system/os/OperatingSystemFactory.h")
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#endif
#if __has_include("org/allbinary/business/init/LicenseInitInfoUtil.h")
#include "org/allbinary/business/init/LicenseInitInfoUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif





void AbeClientInformation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AbeClientInformation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AbeClientInformation", "ClientInformation");
    java_register_method("AbeClientInformation", "init", (void*) AbeClientInformation_initMethod);
}

static void AbeClientInformation_initFields(AbeClientInformation* this) {
    this->logUtil = LogUtil_getInstance();
}


void AbeClientInformation_init(AbeClientInformation* this, const char* name, const char* version, const char* specialName, const char* shortName) {
    AbeClientInformation_register();
        ClientInformation_init(&this->base, name, version, specialName, shortName);
        AbeClientInformation_initFields(this);
}

AbeClientInformation* AbeClientInformation_new(const char* name, const char* version, const char* specialName, const char* shortName) {
    AbeClientInformation* this = java_object_alloc(sizeof(AbeClientInformation), "AbeClientInformation");
    AbeClientInformation_init(this, name, version, specialName, shortName);
    return this;
}


void AbeClientInformation_initMethod(AbeClientInformation* this) {
        JAVA_TRY {
            ClientInformation_setOperatingSystemInterface(this, OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance()));
            LicenseInitInfo* licenseInitInfo = LicenseInitInfoUtil_read(LicenseInitInfoUtil_getInstance());
            ClientInformation_setLicenseId(this, LicenseInitInfo_getLicenseId(licenseInitInfo));
            ClientInformation_setLicenseServers(this, LicenseInitInfo_getServerList(licenseInitInfo));
            StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
            if (StringValidationUtil_isEmpty(stringValidationUtil, ClientInformation_getLicenseId(this))) {
                const char* NONE = "No License Id";
                ClientInformation_setLicenseId(this, NONE);
            }
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Special Name: "), ClientInformation_getSpecialName(this))), this, commonStrings->CONSTRUCTOR);
        } JAVA_CATCH(Exception, e) {
            LogUtil* logUtil = LogUtil_getInstance();
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

