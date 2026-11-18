// Generated Code Do Not Modify
#include "org/allbinary/game/midlet/SpecialDemoGameMidlet.h"
#include "org/allbinary/logic/system/security/licensing/ClientInformationFactory.h"
#include "org/allbinary/logic/system/security/licensing/LicenseServerInitFileUtil.h"
#include "org/allbinary/game/midlet/DemoGameMidlet.h"
#include "org/allbinary/game/midlet/LicenseLoadingType.h"
#include "org/allbinary/game/midlet/LicensedDemoSetupFactory.h"
#include "org/allbinary/game/midlet/LicenseCheckRunnableFactory.h"






void SpecialDemoGameMidlet_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialDemoGameMidlet_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialDemoGameMidlet", "DemoGameMidlet");
    java_register_method("SpecialDemoGameMidlet", "initView", (void*) SpecialDemoGameMidlet_initView);
    java_register_method("SpecialDemoGameMidlet", "preInit", (void*) SpecialDemoGameMidlet_preInit);
}


void SpecialDemoGameMidlet_init(SpecialDemoGameMidlet* this, ClientInformationFactory* clientInformationFactory, LicenseLoadingType* licenseLoadingType, LicensedDemoSetupFactory* demoSetupFactory, LicenseCheckRunnableFactory* licenseCheckRunnableFactory) {
    SpecialDemoGameMidlet_register();
        DemoGameMidlet_init(&this->base, clientInformationFactory);
}

SpecialDemoGameMidlet* SpecialDemoGameMidlet_new(ClientInformationFactory* clientInformationFactory, LicenseLoadingType* licenseLoadingType, LicensedDemoSetupFactory* demoSetupFactory, LicenseCheckRunnableFactory* licenseCheckRunnableFactory) {
    SpecialDemoGameMidlet* this = java_object_alloc(sizeof(SpecialDemoGameMidlet), "SpecialDemoGameMidlet");
    SpecialDemoGameMidlet_init(this, clientInformationFactory, licenseLoadingType, demoSetupFactory, licenseCheckRunnableFactory);
    return this;
}


void SpecialDemoGameMidlet_initView(SpecialDemoGameMidlet* this) {
}


void SpecialDemoGameMidlet_preInit(SpecialDemoGameMidlet* this) {
        LicenseServerInitFileUtil_initMethod(LicenseServerInitFileUtil_new());
}

