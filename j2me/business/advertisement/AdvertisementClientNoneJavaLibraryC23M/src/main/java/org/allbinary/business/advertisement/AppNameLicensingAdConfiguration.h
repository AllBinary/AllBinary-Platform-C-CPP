#ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_APPNAMELICENSINGADCONFIGURATION_H
#define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_APPNAMELICENSINGADCONFIGURATION_H
// Generated Code Do Not Modify
// package org.allbinary.business.advertisement

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AdConfiguration AdConfiguration;
typedef struct StringUtil StringUtil;
#include "org/allbinary/business/advertisement/AdConfiguration.h"

typedef struct AppNameLicensingAdConfiguration AppNameLicensingAdConfiguration;
struct AppNameLicensingAdConfiguration {
    AdConfiguration base;
};


AppNameLicensingAdConfiguration* AppNameLicensingAdConfiguration_new(void);

void AppNameLicensingAdConfiguration_init(AppNameLicensingAdConfiguration* this);
#define AppNameLicensingAdConfiguration_new0 AppNameLicensingAdConfiguration_new
#define AppNameLicensingAdConfiguration_init0 AppNameLicensingAdConfiguration_init
#ifndef AppNameLicensingAdConfiguration_getValidAdSpots
#define AppNameLicensingAdConfiguration_getValidAdSpots AdConfiguration_getValidAdSpots
#endif
#ifndef AppNameLicensingAdConfiguration_process
#define AppNameLicensingAdConfiguration_process AdConfiguration_process
#endif
#ifndef AppNameLicensingAdConfiguration_processDemo
#define AppNameLicensingAdConfiguration_processDemo AdConfiguration_processDemo
#endif
#ifndef AppNameLicensingAdConfiguration_setShowAds
#define AppNameLicensingAdConfiguration_setShowAds AdConfiguration_setShowAds
#endif
#ifndef AppNameLicensingAdConfiguration_setToggleAds
#define AppNameLicensingAdConfiguration_setToggleAds AdConfiguration_setToggleAds
#endif
#ifndef AppNameLicensingAdConfiguration_isShowAds
#define AppNameLicensingAdConfiguration_isShowAds AdConfiguration_isShowAds
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AppNameLicensingAdConfiguration_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AppNameLicensingAdConfiguration_register(void);


#endif // ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_APPNAMELICENSINGADCONFIGURATION_H
