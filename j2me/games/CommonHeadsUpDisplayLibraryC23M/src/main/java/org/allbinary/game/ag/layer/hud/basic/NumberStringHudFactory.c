// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/hud/basic/NumberStringHudFactory.h"
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/game/graphics/hud/BasicHudFactory.h")
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif


static void* NumberStringHudFactory_instance;



void NumberStringHudFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NumberStringHudFactory_instance = NullUtil_getInstance();
}

void NumberStringHudFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NumberStringHudFactory", nullptr);
    java_register_method("NumberStringHudFactory", "createHud", (void*) NumberStringHudFactory_createHud);
}

static void NumberStringHudFactory_initFields(NumberStringHudFactory* this) {
    this->NULL_NUMBER_STRING_HUD = NumberStringHudFactory_createHud(this);
}

void NumberStringHudFactory_init(NumberStringHudFactory* this) {
    NumberStringHudFactory_register();
    NumberStringHudFactory_initFields(this);
}

NumberStringHudFactory* NumberStringHudFactory_new(void) {
    NumberStringHudFactory* this = java_object_alloc(sizeof(NumberStringHudFactory), "NumberStringHudFactory");
    NumberStringHudFactory_init(this);
    return this;
}


NumberStringHudFactory* NumberStringHudFactory_getInstance(void) {
        if ((NumberStringHudFactory_staticInit(), NumberStringHudFactory_instance) == NullUtil_getInstance()) {
            NumberStringHudFactory_instance = NumberStringHudFactory_new();
        }
        return ((NumberStringHudFactory*) (NumberStringHudFactory_staticInit(), NumberStringHudFactory_instance));
}


NumberStringHud* NumberStringHudFactory_createHud(NumberStringHudFactory* this) {
        JAVA_TRY {
            return NumberStringHud_new(StringUtil_getInstance()->EMPTY_STRING, 9, BasicHudFactory_getInstance()->ABSOLUTE, 1, 0, BasicColorFactory_getInstance()->NULL_COLOR);
        } JAVA_CATCH(Exception, e) {
            LogUtil* logUtil = LogUtil_getInstance();
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
            java_throw(java_exception_new("RuntimeException", ""));
        } JAVA_END_TRY;
}

