// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationData.h"


static AbeClientInformationData* AbeClientInformationData_instance;



void AbeClientInformationData_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AbeClientInformationData_instance = AbeClientInformationData_new();
}

void AbeClientInformationData_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AbeClientInformationData", nullptr);
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
        return (AbeClientInformationData_staticInit(), AbeClientInformationData_instance);
}


void AbeClientInformationData_init(AbeClientInformationData* this) {
    AbeClientInformationData_register();
    AbeClientInformationData_initFields(this);
}

AbeClientInformationData* AbeClientInformationData_new(void) {
    AbeClientInformationData* this = java_object_alloc(sizeof(AbeClientInformationData), "AbeClientInformationData");
    AbeClientInformationData_init(this);
    return this;
}

