// Generated Code Do Not Modify
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif


static const char* GPoint_POINT_LABEL = "Point: ";











void GPoint_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GPoint_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GPoint", nullptr);
    java_register_method("GPoint", "getX", (void*) GPoint_getX);
    java_register_method("GPoint", "getY", (void*) GPoint_getY);
    java_register_method("GPoint", "getZ", (void*) GPoint_getZ);
    java_register_method("GPoint", "getRawX", (void*) GPoint_getRawX);
    java_register_method("GPoint", "getRawY", (void*) GPoint_getRawY);
    java_register_method("GPoint", "getRawZ", (void*) GPoint_getRawZ);
    java_register_method("GPoint", "toString", (void*) GPoint_toString);
}

static void GPoint_initFields(GPoint* this) {
    
    
    
}


GPoint* GPoint_getInstance(GPoint* point) {
        return GPoint_new(GPoint_getX(point), GPoint_getY(point), GPoint_getZ(point));
}


void GPoint_init(GPoint* this, int32_t x, int32_t y, int32_t z) {
    GPoint_register();
    GPoint_initFields(this);
        this->x = x;
        this->y = y;
        this->z = z;
}

GPoint* GPoint_new(int32_t x, int32_t y, int32_t z) {
    GPoint* this = java_object_alloc(sizeof(GPoint), "GPoint");
    GPoint_init(this, x, y, z);
    return this;
}


int32_t GPoint_getX(GPoint* this) {
        return this->x;
}


int32_t GPoint_getY(GPoint* this) {
        return this->y;
}


int32_t GPoint_getZ(GPoint* this) {
        return this->z;
}


int32_t GPoint_getRawX(GPoint* this) {
        return this->x;
}


int32_t GPoint_getRawY(GPoint* this) {
        return this->y;
}


int32_t GPoint_getRawZ(GPoint* this) {
        return this->z;
}


const char* GPoint_toString(GPoint* this) {
        return GPoint_toStringStatic(GPoint_getX(this), GPoint_getY(this), GPoint_getZ(this));
}


const char* GPoint_toStringStatic(int32_t x, int32_t y, int32_t z) {
        StringMaker* stringBuffer = StringMaker_new();
        PositionStrings* positionStrings = PositionStrings_getInstance();
        StringMaker_append(stringBuffer, GPoint_POINT_LABEL);
        StringMaker_append(stringBuffer, positionStrings->X_LABEL);
        StringMaker_appendint(stringBuffer, x);
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, positionStrings->Y_LABEL);
        StringMaker_appendint(stringBuffer, y);
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, positionStrings->Z_LABEL);
        StringMaker_appendint(stringBuffer, z);
        return java_string_of(stringBuffer);
}

