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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/business/advertisement/AdConfiguration.h"

typedef struct AppNameLicensingAdConfiguration AppNameLicensingAdConfiguration;
struct AppNameLicensingAdConfiguration {
    AdConfiguration base;
};


AppNameLicensingAdConfiguration* AppNameLicensingAdConfiguration_new(void);

void AppNameLicensingAdConfiguration_init(AppNameLicensingAdConfiguration* this);


void AppNameLicensingAdConfiguration_init(AppNameLicensingAdConfiguration* this) {
        AdConfiguration_init(&this->base, ((Any**) java_array_from(sizeof(Any*), sizeof((Any*[]){ StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING }) / sizeof(Any*), (Any*[]){ StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING })));
}

AppNameLicensingAdConfiguration* AppNameLicensingAdConfiguration_new(void) {
    AppNameLicensingAdConfiguration* this = calloc(1, sizeof(AppNameLicensingAdConfiguration));
    AppNameLicensingAdConfiguration_init(this);
    return this;
}

