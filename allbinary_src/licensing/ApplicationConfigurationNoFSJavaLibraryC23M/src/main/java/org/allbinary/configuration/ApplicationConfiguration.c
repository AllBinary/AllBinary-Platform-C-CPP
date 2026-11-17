// Generated Code Do Not Modify
// package org.allbinary.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/feature/Feature.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ApplicationConfiguration ApplicationConfiguration;
struct ApplicationConfiguration {
    LogUtil* logUtil;
    bool fullscreen;
    bool showTitleBar;
    bool progressBarView;
};

static Any* ApplicationConfiguration_instance;

ApplicationConfiguration* ApplicationConfiguration_new(void);
ApplicationConfiguration* ApplicationConfiguration_getInstance(void);

void ApplicationConfiguration_init(ApplicationConfiguration* this);
static void ApplicationConfiguration_read(ApplicationConfiguration* this);
void ApplicationConfiguration_write(ApplicationConfiguration* this);
void ApplicationConfiguration_update(ApplicationConfiguration* this, Feature* gameFeature);
void ApplicationConfiguration_setFullscreen(ApplicationConfiguration* this, bool fullscreen);
bool ApplicationConfiguration_isFullscreen(ApplicationConfiguration* this);
void ApplicationConfiguration_setShowTitleBar(ApplicationConfiguration* this, bool showTitleBar);
bool ApplicationConfiguration_isShowTitleBar(ApplicationConfiguration* this);
void ApplicationConfiguration_setProgressBarView(ApplicationConfiguration* this, bool progressBarView);
bool ApplicationConfiguration_isProgressBarView(ApplicationConfiguration* this);
const char* ApplicationConfiguration_toString(ApplicationConfiguration* this);

// Static fields with runtime initializers: call this once at startup
void ApplicationConfiguration_staticInit(void) {
    ApplicationConfiguration_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void ApplicationConfiguration_initFields(ApplicationConfiguration* this) {
    this->logUtil = LogUtil_getInstance();
    this->fullscreen = true;
    this->showTitleBar = false;
    this->progressBarView = false;
}


ApplicationConfiguration* ApplicationConfiguration_getInstance(void) {
        if (ApplicationConfiguration_instance == NullUtil_getInstance()->NULL_OBJECT) {
            ApplicationConfiguration_instance = ApplicationConfiguration_new();
        }
        return ((ApplicationConfiguration*) ApplicationConfiguration_instance);
}


void ApplicationConfiguration_init(ApplicationConfiguration* this) {
    ApplicationConfiguration_initFields(this);
        JAVA_TRY {
            ApplicationConfiguration_read(this);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

ApplicationConfiguration* ApplicationConfiguration_new(void) {
    ApplicationConfiguration* this = calloc(1, sizeof(ApplicationConfiguration));
    ApplicationConfiguration_init(this);
    return this;
}


// throws Exception
static void ApplicationConfiguration_read(ApplicationConfiguration* this) {
        ApplicationConfiguration_setFullscreen(this, true);
        ApplicationConfiguration_setProgressBarView(this, false);
        ApplicationConfiguration_setShowTitleBar(this, false);
        LogUtil_putF(this->logUtil, java_concat("Read Configuration: ", ApplicationConfiguration_toString(this)), this, "read");
}


// throws Exception
void ApplicationConfiguration_write(ApplicationConfiguration* this) {
}


// throws Exception
void ApplicationConfiguration_update(ApplicationConfiguration* this, Feature* gameFeature) {
        if (gameFeature == MainFeatureFactory_getInstance()->FULL_SCREEN) {
            Features* features = Features_getInstance();
            if (Features_isFeature(features, gameFeature)) {
                if (!ApplicationConfiguration_isFullscreen(this)) {
                    ApplicationConfiguration_setFullscreen(this, true);
                    ApplicationConfiguration_write(this);
                }
            } else {
                if (ApplicationConfiguration_isFullscreen(this)) {
                    ApplicationConfiguration_setFullscreen(this, false);
                    ApplicationConfiguration_write(this);
                }
            }
        }
}


void ApplicationConfiguration_setFullscreen(ApplicationConfiguration* this, bool fullscreen) {
        this->fullscreen = fullscreen;
}


bool ApplicationConfiguration_isFullscreen(ApplicationConfiguration* this) {
        return this->fullscreen;
}


void ApplicationConfiguration_setShowTitleBar(ApplicationConfiguration* this, bool showTitleBar) {
        this->showTitleBar = showTitleBar;
}


bool ApplicationConfiguration_isShowTitleBar(ApplicationConfiguration* this) {
        return this->showTitleBar;
}


void ApplicationConfiguration_setProgressBarView(ApplicationConfiguration* this, bool progressBarView) {
        this->progressBarView = progressBarView;
}


bool ApplicationConfiguration_isProgressBarView(ApplicationConfiguration* this) {
        return this->progressBarView;
}


const char* ApplicationConfiguration_toString(ApplicationConfiguration* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "isFullscreen: ");
        StringMaker_appendboolean(stringBuffer, ApplicationConfiguration_isFullscreen(this));
        StringMaker_append(stringBuffer, " isProgressBarView: ");
        StringMaker_appendboolean(stringBuffer, ApplicationConfiguration_isProgressBarView(this));
        StringMaker_append(stringBuffer, " isShowTitleBar: ");
        StringMaker_appendboolean(stringBuffer, ApplicationConfiguration_isShowTitleBar(this));
        return StringMaker_toString(stringBuffer);
}

