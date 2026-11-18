// Generated Code Do Not Modify
#include "org/allbinary/configuration/ApplicationConfiguration.h"
#include "org/allbinary/game/configuration/feature/Feature.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/MainFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#endif


static void* ApplicationConfiguration_instance;



static void ApplicationConfiguration_read(ApplicationConfiguration* this);










void ApplicationConfiguration_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ApplicationConfiguration_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void ApplicationConfiguration_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ApplicationConfiguration", nullptr);
    java_register_method("ApplicationConfiguration", "read", (void*) ApplicationConfiguration_read);
    java_register_method("ApplicationConfiguration", "write", (void*) ApplicationConfiguration_write);
    java_register_method("ApplicationConfiguration", "update", (void*) ApplicationConfiguration_update);
    java_register_method("ApplicationConfiguration", "setFullscreen", (void*) ApplicationConfiguration_setFullscreen);
    java_register_method("ApplicationConfiguration", "isFullscreen", (void*) ApplicationConfiguration_isFullscreen);
    java_register_method("ApplicationConfiguration", "setShowTitleBar", (void*) ApplicationConfiguration_setShowTitleBar);
    java_register_method("ApplicationConfiguration", "isShowTitleBar", (void*) ApplicationConfiguration_isShowTitleBar);
    java_register_method("ApplicationConfiguration", "setProgressBarView", (void*) ApplicationConfiguration_setProgressBarView);
    java_register_method("ApplicationConfiguration", "isProgressBarView", (void*) ApplicationConfiguration_isProgressBarView);
    java_register_method("ApplicationConfiguration", "toString", (void*) ApplicationConfiguration_toString);
}

static void ApplicationConfiguration_initFields(ApplicationConfiguration* this) {
    this->logUtil = LogUtil_getInstance();
    this->fullscreen = true;
    this->showTitleBar = false;
    this->progressBarView = false;
}


ApplicationConfiguration* ApplicationConfiguration_getInstance(void) {
        if ((ApplicationConfiguration_staticInit(), ApplicationConfiguration_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            ApplicationConfiguration_instance = ApplicationConfiguration_new();
        }
        return ((ApplicationConfiguration*) (ApplicationConfiguration_staticInit(), ApplicationConfiguration_instance));
}


void ApplicationConfiguration_init(ApplicationConfiguration* this) {
    ApplicationConfiguration_register();
    ApplicationConfiguration_initFields(this);
        JAVA_TRY {
            ApplicationConfiguration_read(this);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

ApplicationConfiguration* ApplicationConfiguration_new(void) {
    ApplicationConfiguration* this = java_object_alloc(sizeof(ApplicationConfiguration), "ApplicationConfiguration");
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
        return java_string_of(stringBuffer);
}

