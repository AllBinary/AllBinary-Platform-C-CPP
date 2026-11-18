// Generated Code Do Not Modify
#include "org/allbinary/business/init/LicenseInitInfoUtil.h"
#include "org/allbinary/business/init/LicenseInitInfo.h"


static LicenseInitInfoUtil* LicenseInitInfoUtil_instance;







void LicenseInitInfoUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LicenseInitInfoUtil_instance = LicenseInitInfoUtil_new();
}

void LicenseInitInfoUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LicenseInitInfoUtil", nullptr);
    java_register_method("LicenseInitInfoUtil", "setFilePath", (void*) LicenseInitInfoUtil_setFilePath);
    java_register_method("LicenseInitInfoUtil", "write", (void*) LicenseInitInfoUtil_write);
    java_register_method("LicenseInitInfoUtil", "read", (void*) LicenseInitInfoUtil_read);
    java_register_method("LicenseInitInfoUtil", "readAgain", (void*) LicenseInitInfoUtil_readAgain);
}

static void LicenseInitInfoUtil_initFields(LicenseInitInfoUtil* this) {
    this->INITFILENAME = "licenseinitdata.dat";
    this->ABOUT = "about";
    this->PRIVACY_POLICY = "privacy_policy";
    this->OFFICIAL_ALLBINARY_SERVICES_SERVER = "https://services.allbinary.com/LicServ/serverssl.php";
}


LicenseInitInfoUtil* LicenseInitInfoUtil_getInstance(void) {
        return (LicenseInitInfoUtil_staticInit(), LicenseInitInfoUtil_instance);
}


// synchronized
void LicenseInitInfoUtil_setFilePath(LicenseInitInfoUtil* this, const char* filePath) {
}


void LicenseInitInfoUtil_init(LicenseInitInfoUtil* this) {
    LicenseInitInfoUtil_register();
    LicenseInitInfoUtil_initFields(this);
}

LicenseInitInfoUtil* LicenseInitInfoUtil_new(void) {
    LicenseInitInfoUtil* this = java_object_alloc(sizeof(LicenseInitInfoUtil), "LicenseInitInfoUtil");
    LicenseInitInfoUtil_init(this);
    return this;
}


// throws Exception
// synchronized
void LicenseInitInfoUtil_write(LicenseInitInfoUtil* this, LicenseInitInfo* initData) {
}


// throws Exception
// synchronized
LicenseInitInfo* LicenseInitInfoUtil_read(LicenseInitInfoUtil* this) {
        return LicenseInitInfoUtil_readAgain(this, 0);
}


// throws Exception
// synchronized
LicenseInitInfo* LicenseInitInfoUtil_readAgain(LicenseInitInfoUtil* this, int32_t initializeCounter) {
        LicenseInitInfo* licenseInitInfo = LicenseInitInfo_new();
        LicenseInitInfo_clearServers(licenseInitInfo);
        LicenseInitInfo_addServer(licenseInitInfo, this->OFFICIAL_ALLBINARY_SERVICES_SERVER);
        return licenseInitInfo;
}

