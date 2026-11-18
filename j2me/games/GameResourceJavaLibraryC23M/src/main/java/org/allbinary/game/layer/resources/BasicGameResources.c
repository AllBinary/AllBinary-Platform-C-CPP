// Generated Code Do Not Modify
#include "org/allbinary/game/layer/resources/BasicGameResources.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameConfigurationCentral.h")
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


StringMaker* BasicGameResources_stringBuffer;





void BasicGameResources_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicGameResources_stringBuffer = StringMaker_new();
}

void BasicGameResources_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicGameResources", nullptr);
    java_register_method("BasicGameResources", "init", (void*) BasicGameResources_initMethod);
    java_register_method("BasicGameResources", "append", (void*) BasicGameResources_append);
    java_register_method("BasicGameResources", "getString", (void*) BasicGameResources_getString);
}

static void BasicGameResources_initFields(BasicGameResources* this) {
    this->logUtil = LogUtil_getInstance();
    this->RESOURCE = StringUtil_getInstance()->EMPTY_STRING;
    this->RESOURCE_DESTROY = StringUtil_getInstance()->EMPTY_STRING;
}


void BasicGameResources_init(BasicGameResources* this) {
    BasicGameResources_register();
    BasicGameResources_initFields(this);
}

BasicGameResources* BasicGameResources_new(void) {
    BasicGameResources* this = java_object_alloc(sizeof(BasicGameResources), "BasicGameResources");
    BasicGameResources_init(this);
    return this;
}


void BasicGameResources_initMethod(BasicGameResources* this, const char* ROOT, const char** SIZE) {
        JAVA_TRY {
            int32_t scale = Integer_intValue(GameConfiguration_getValue(GameConfigurationCentral_getInstance()->SCALE));
            if (scale > 1 && scale - 1 < java_array_length(SIZE)) {
                BasicGameResources_append(this, ROOT, SIZE[scale - 1]);
            } else {
                java_throw(java_exception_new("Exception", java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), "Invalid Value: "), scale))));
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->INIT, e);
        } JAVA_END_TRY;
}


// throws Exception
void BasicGameResources_append(BasicGameResources* this, const char* ROOT, const char* sizeString) {
        const char* DESTROY = "_destroy";
        const char* string = BasicGameResources_getString(this);
        StringMaker_delete((BasicGameResources_staticInit(), BasicGameResources_stringBuffer), 0, StringMaker_length((BasicGameResources_staticInit(), BasicGameResources_stringBuffer)));
        StringMaker_append((BasicGameResources_staticInit(), BasicGameResources_stringBuffer), ROOT);
        StringMaker_append((BasicGameResources_staticInit(), BasicGameResources_stringBuffer), string);
        StringMaker_append((BasicGameResources_staticInit(), BasicGameResources_stringBuffer), sizeString);
        this->RESOURCE = java_string_of((BasicGameResources_staticInit(), BasicGameResources_stringBuffer));
        StringMaker_delete((BasicGameResources_staticInit(), BasicGameResources_stringBuffer), 0, StringMaker_length((BasicGameResources_staticInit(), BasicGameResources_stringBuffer)));
        StringMaker_append((BasicGameResources_staticInit(), BasicGameResources_stringBuffer), ROOT);
        StringMaker_append((BasicGameResources_staticInit(), BasicGameResources_stringBuffer), DESTROY);
        StringMaker_append((BasicGameResources_staticInit(), BasicGameResources_stringBuffer), string);
        StringMaker_append((BasicGameResources_staticInit(), BasicGameResources_stringBuffer), sizeString);
        this->RESOURCE_DESTROY = java_string_of((BasicGameResources_staticInit(), BasicGameResources_stringBuffer));
}


// throws Exception
const char* BasicGameResources_getString(BasicGameResources* this) {
        return GameGraphicsResourceUtil_getName(GameGraphicsResourceUtil_getInstance());
}

