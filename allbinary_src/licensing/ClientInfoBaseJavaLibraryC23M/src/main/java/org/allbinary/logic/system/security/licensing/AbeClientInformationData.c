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

typedef struct AbeClientInformationData AbeClientInformationData;
struct AbeClientInformationData {
    const char* KEY;
    const char* NAME;
    const char* VERSION;
    const char* SPECIALNAME;
    const char* LICENSEID;
    const char* LICENSE_TYPE;
    const char* PREVIOUSLICENSEID;
    const char* OSNAME;
    const char* OSARCH;
    const char* OSVERSION;
    const char* OS;
    const char* HARDWARE;
    const char* LICENSESERVERS;
    const char* NEWLICENSE;
    const char* ISNEW;
    const char* SPECIAL;
};

static AbeClientInformationData* AbeClientInformationData_instance;

AbeClientInformationData* AbeClientInformationData_new(void);
AbeClientInformationData* AbeClientInformationData_getInstance(void);

void AbeClientInformationData_init(AbeClientInformationData* this);

// Static fields with runtime initializers: call this once at startup
void AbeClientInformationData_staticInit(void) {
    AbeClientInformationData_instance = AbeClientInformationData_new();
}

static void AbeClientInformationData_initFields(AbeClientInformationData* this) {
    this->KEY = "KEY";
    this->NAME = "NAME";
    this->VERSION = "VERSION";
    this->SPECIALNAME = "SPECIALNAME";
    this->LICENSEID = "LICENSEID";
    this->LICENSE_TYPE = "LICENSETYPE";
    this->PREVIOUSLICENSEID = "PREVIOUSLICENSEID";
    this->OSNAME = "OSNAME";
    this->OSARCH = "OSARCH";
    this->OSVERSION = "OSVERSION";
    this->OS = "OS";
    this->HARDWARE = "HARDWARE";
    this->LICENSESERVERS = "LICENSESERVERS";
    this->NEWLICENSE = "NEWLICENSE";
    this->ISNEW = "ISNEW";
    this->SPECIAL = "SPECIAL";
}


AbeClientInformationData* AbeClientInformationData_getInstance(void) {
        return AbeClientInformationData_instance;
}


void AbeClientInformationData_init(AbeClientInformationData* this) {
    AbeClientInformationData_initFields(this);
}

AbeClientInformationData* AbeClientInformationData_new(void) {
    AbeClientInformationData* this = calloc(1, sizeof(AbeClientInformationData));
    AbeClientInformationData_init(this);
    return this;
}

