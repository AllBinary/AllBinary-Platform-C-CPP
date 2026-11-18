// Generated Code Do Not Modify
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif


ScaleProperties* ScaleProperties_instance;


void ScaleProperties_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ScaleProperties_instance = ScaleProperties_new();
}

void ScaleProperties_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScaleProperties", nullptr);
    java_register_method("ScaleProperties", "toString", (void*) ScaleProperties_toString);
}

static void ScaleProperties_initFields(ScaleProperties* this) {
    this->scaleX = 0.0f;
    this->scaleY = 0.0f;
    this->scaleWidth = 0;
    this->scaleHeight = 0;
    this->shouldScale = false;
}

void ScaleProperties_init(ScaleProperties* this) {
    ScaleProperties_register();
    ScaleProperties_initFields(this);
}

ScaleProperties* ScaleProperties_new(void) {
    ScaleProperties* this = java_object_alloc(sizeof(ScaleProperties), "ScaleProperties");
    ScaleProperties_init(this);
    return this;
}


const char* ScaleProperties_toString(ScaleProperties* this) {
        return java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_appendfloat(StringMaker_append(StringMaker_appendfloat(StringMaker_append(StringMaker_appendboolean(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->COLON_SEP), this->shouldScale), "scaleX: "), this->scaleX), "scaleY: "), this->scaleY), "scaleWidth: "), this->scaleWidth), "scaleHeight: "), this->scaleHeight));
}

