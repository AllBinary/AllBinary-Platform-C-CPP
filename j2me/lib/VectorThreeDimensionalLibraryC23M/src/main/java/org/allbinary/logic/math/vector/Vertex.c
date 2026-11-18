// Generated Code Do Not Modify
#include "org/allbinary/logic/math/vector/Vertex.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif





void Vertex_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Vertex_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Vertex", nullptr);
    java_register_method("Vertex", "toString", (void*) Vertex_toString);
}

static void Vertex_initFields(Vertex* this) {
    this->x = BasicDecimal_new(0);
    this->y = BasicDecimal_new(0);
    this->z = BasicDecimal_new(0);
}


void Vertex_init(Vertex* this) {
    Vertex_register();
    Vertex_initFields(this);
}

Vertex* Vertex_new(void) {
    Vertex* this = java_object_alloc(sizeof(Vertex), "Vertex");
    Vertex_init(this);
    return this;
}


const char* Vertex_toString(Vertex* this) {
        StringMaker* stringBuffer = StringMaker_new();
        PositionStrings* positionStrings = PositionStrings_getInstance();
        StringMaker_append(stringBuffer, positionStrings->X_LABEL);
        StringMaker_append(stringBuffer, java_string_of(this->x));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, positionStrings->Y_LABEL);
        StringMaker_append(stringBuffer, java_string_of(this->y));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, positionStrings->Z_LABEL);
        StringMaker_append(stringBuffer, java_string_of(this->z));
        return java_string_of(stringBuffer);
}

