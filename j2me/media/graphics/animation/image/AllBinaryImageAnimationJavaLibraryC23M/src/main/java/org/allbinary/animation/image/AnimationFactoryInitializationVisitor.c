// Generated Code Do Not Modify
#include "org/allbinary/animation/image/AnimationFactoryInitializationVisitor.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/math/PositionStrings.h")
#include "org/allbinary/math/PositionStrings.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/math/PositionStrings.h")
#include "org/allbinary/math/PositionStrings.h"
#endif





void AnimationFactoryInitializationVisitor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AnimationFactoryInitializationVisitor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnimationFactoryInitializationVisitor", nullptr);
    java_register_method("AnimationFactoryInitializationVisitor", "visit", (void*) AnimationFactoryInitializationVisitor_visit);
    java_register_method("AnimationFactoryInitializationVisitor", "toString", (void*) AnimationFactoryInitializationVisitor_toString);
}

static void AnimationFactoryInitializationVisitor_initFields(AnimationFactoryInitializationVisitor* this) {
    this->width = 0;
    this->height = 0;
    this->dx = 0;
    this->dy = 0;
    this->originalDx = 0;
    this->originalDy = 0;
}

void AnimationFactoryInitializationVisitor_init(AnimationFactoryInitializationVisitor* this) {
    AnimationFactoryInitializationVisitor_register();
    AnimationFactoryInitializationVisitor_initFields(this);
}

AnimationFactoryInitializationVisitor* AnimationFactoryInitializationVisitor_new(void) {
    AnimationFactoryInitializationVisitor* this = java_object_alloc(sizeof(AnimationFactoryInitializationVisitor), "AnimationFactoryInitializationVisitor");
    AnimationFactoryInitializationVisitor_init(this);
    return this;
}


void AnimationFactoryInitializationVisitor_visit(AnimationFactoryInitializationVisitor* this) {
}


const char* AnimationFactoryInitializationVisitor_toString(AnimationFactoryInitializationVisitor* this) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        CommonLabels* commonLabels = CommonLabels_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_appendfloat(StringMaker_append(stringBuffer, PositionStrings_getInstance()->DX_LABEL), ((float) this->dx));
        StringMaker_appendfloat(StringMaker_append(stringBuffer, PositionStrings_getInstance()->DY_LABEL), ((float) this->dy));
        StringMaker_append(stringBuffer, commonLabels->WIDTH_LABEL);
        StringMaker_appendint(stringBuffer, this->width);
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, commonLabels->HEIGHT_LABEL);
        StringMaker_appendint(stringBuffer, this->height);
        return java_string_of(stringBuffer);
}

