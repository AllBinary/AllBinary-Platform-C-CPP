// Generated Code Do Not Modify
#include "org/allbinary/canvas/SpecialMessageUtil.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/system/Memory.h"
#include "org/allbinary/canvas/GameStatisticsFactory.h"
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureFactory.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureFactory.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureFactory.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#endif


static SpecialMessageUtil* SpecialMessageUtil_SINGLETON;



void SpecialMessageUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SpecialMessageUtil_SINGLETON = SpecialMessageUtil_new();
}

void SpecialMessageUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialMessageUtil", nullptr);
    java_register_method("SpecialMessageUtil", "get", (void*) SpecialMessageUtil_get);
}

void SpecialMessageUtil_init(SpecialMessageUtil* this) {
    SpecialMessageUtil_register();
}

SpecialMessageUtil* SpecialMessageUtil_new(void) {
    SpecialMessageUtil* this = java_object_alloc(sizeof(SpecialMessageUtil), "SpecialMessageUtil");
    SpecialMessageUtil_init(this);
    return this;
}


SpecialMessageUtil* SpecialMessageUtil_getInstance(void) {
        return (SpecialMessageUtil_staticInit(), SpecialMessageUtil_SINGLETON);
}


const char* SpecialMessageUtil_get(SpecialMessageUtil* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, Memory_getInfo());
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, java_string_of(GameStatisticsFactory_getInstance()));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, " Option: ");
        if (Features_isDefault(Features_getInstance(), OpenGLFeatureFactory_getInstance()->OPENGL_AUTO_SELECT)) {
            StringMaker_append(stringBuffer, Feature_getName(OpenGLFeatureFactory_getInstance()->OPENGL_AUTO_SELECT));
        } else {
            StringMaker_append(stringBuffer, Feature_getName(OpenGLFeatureFactory_getInstance()->OPENGL_MINIMUM));
        }
        return java_string_of(stringBuffer);
}

