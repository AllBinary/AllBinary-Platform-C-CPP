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
// package org.allbinary.logic.system.security.licensing

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ServiceClientInformationInterfaceFactory ServiceClientInformationInterfaceFactory;
struct ServiceClientInformationInterfaceFactory {
    char unused;
};

static TestClientInformation* ServiceClientInformationInterfaceFactory_instance;

ServiceClientInformationInterfaceFactory* ServiceClientInformationInterfaceFactory_new(void);
AbeClientInformationInterface* ServiceClientInformationInterfaceFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ServiceClientInformationInterfaceFactory_staticInit(void) {
    ServiceClientInformationInterfaceFactory_instance = TestClientInformation_new();
}

void ServiceClientInformationInterfaceFactory_init(ServiceClientInformationInterfaceFactory* this) {
}

ServiceClientInformationInterfaceFactory* ServiceClientInformationInterfaceFactory_new(void) {
    ServiceClientInformationInterfaceFactory* this = calloc(1, sizeof(ServiceClientInformationInterfaceFactory));
    ServiceClientInformationInterfaceFactory_init(this);
    return this;
}


AbeClientInformationInterface* ServiceClientInformationInterfaceFactory_getInstance(void) {
        return ServiceClientInformationInterfaceFactory_instance;
}

