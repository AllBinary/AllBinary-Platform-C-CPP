/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/system/security/licensing/ClientInformationFactory.h"
#include "org/allbinary/logic/system/security/licensing/LicenseServerInitFileUtil.h"
#include "org/allbinary/game/midlet/DemoGameMidlet.h"

typedef struct SpecialDemoGameMidlet SpecialDemoGameMidlet;
struct SpecialDemoGameMidlet {
    DemoGameMidlet base;
};


SpecialDemoGameMidlet* SpecialDemoGameMidlet_new(ClientInformationFactory* clientInformationFactory, LicenseLoadingType* licenseLoadingType, LicensedDemoSetupFactory* demoSetupFactory, LicenseCheckRunnableFactory* licenseCheckRunnableFactory);

void SpecialDemoGameMidlet_init(SpecialDemoGameMidlet* this, ClientInformationFactory* clientInformationFactory, LicenseLoadingType* licenseLoadingType, LicensedDemoSetupFactory* demoSetupFactory, LicenseCheckRunnableFactory* licenseCheckRunnableFactory);
void SpecialDemoGameMidlet_initView(SpecialDemoGameMidlet* this);
void SpecialDemoGameMidlet_preInit(SpecialDemoGameMidlet* this);


void SpecialDemoGameMidlet_init(SpecialDemoGameMidlet* this, ClientInformationFactory* clientInformationFactory, LicenseLoadingType* licenseLoadingType, LicensedDemoSetupFactory* demoSetupFactory, LicenseCheckRunnableFactory* licenseCheckRunnableFactory) {
        DemoGameMidlet_init(&this->base, clientInformationFactory);
}

SpecialDemoGameMidlet* SpecialDemoGameMidlet_new(ClientInformationFactory* clientInformationFactory, LicenseLoadingType* licenseLoadingType, LicensedDemoSetupFactory* demoSetupFactory, LicenseCheckRunnableFactory* licenseCheckRunnableFactory) {
    SpecialDemoGameMidlet* this = calloc(1, sizeof(SpecialDemoGameMidlet));
    SpecialDemoGameMidlet_init(this, clientInformationFactory, licenseLoadingType, demoSetupFactory, licenseCheckRunnableFactory);
    return this;
}


void SpecialDemoGameMidlet_initView(SpecialDemoGameMidlet* this) {
}


void SpecialDemoGameMidlet_preInit(SpecialDemoGameMidlet* this) {
        LicenseServerInitFileUtil_init(LicenseServerInitFileUtil_new());
}

