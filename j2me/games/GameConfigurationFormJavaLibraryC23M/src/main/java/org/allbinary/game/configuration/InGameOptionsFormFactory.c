// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/InGameOptionsFormFactory.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#include "org/allbinary/init/Init.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/configuration/InGameOptionsForm.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static void* InGameOptionsFormFactory_instance;




void InGameOptionsFormFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    InGameOptionsFormFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void InGameOptionsFormFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InGameOptionsFormFactory", nullptr);
    java_register_method("InGameOptionsFormFactory", "init", (void*) InGameOptionsFormFactory_initMethod);
    java_register_method("InGameOptionsFormFactory", "get", (void*) InGameOptionsFormFactory_get);
}

static void InGameOptionsFormFactory_initFields(InGameOptionsFormFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->SINGLETON = CommandForm_getNullCommandForm();
}

void InGameOptionsFormFactory_init(InGameOptionsFormFactory* this) {
    InGameOptionsFormFactory_register();
    InGameOptionsFormFactory_initFields(this);
}

InGameOptionsFormFactory* InGameOptionsFormFactory_new(void) {
    InGameOptionsFormFactory* this = java_object_alloc(sizeof(InGameOptionsFormFactory), "InGameOptionsFormFactory");
    InGameOptionsFormFactory_init(this);
    return this;
}


InGameOptionsFormFactory* InGameOptionsFormFactory_getInstance(void) {
        if ((InGameOptionsFormFactory_staticInit(), InGameOptionsFormFactory_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            InGameOptionsFormFactory_instance = InGameOptionsFormFactory_new();
        }
        return ((InGameOptionsFormFactory*) (InGameOptionsFormFactory_staticInit(), InGameOptionsFormFactory_instance));
}


void InGameOptionsFormFactory_initMethod(InGameOptionsFormFactory* this, CommandListener* commandListener, Init* initInterface, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
        JAVA_TRY {
            if (this->SINGLETON == CommandForm_getNullCommandForm()) {
                Init_initMethod(initInterface);
                this->SINGLETON = InGameOptionsForm_new(commandListener, title, backgrounBasicColor, foregroundBasicColor);
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->INIT, e);
        } JAVA_END_TRY;
}


CommandForm* InGameOptionsFormFactory_get(InGameOptionsFormFactory* this) {
        return this->SINGLETON;
}

