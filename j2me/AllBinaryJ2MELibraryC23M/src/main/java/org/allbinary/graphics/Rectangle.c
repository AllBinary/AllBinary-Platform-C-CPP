// Generated Code Do Not Modify
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/graphics/GPoint.h"
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif













void Rectangle_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Rectangle_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Rectangle", nullptr);
    java_register_method("Rectangle", "getPoint", (void*) Rectangle_getPoint);
    java_register_method("Rectangle", "setPoint", (void*) Rectangle_setPoint);
    java_register_method("Rectangle", "getMaxX", (void*) Rectangle_getMaxX);
    java_register_method("Rectangle", "getMaxY", (void*) Rectangle_getMaxY);
    java_register_method("Rectangle", "getWidth", (void*) Rectangle_getWidth);
    java_register_method("Rectangle", "setWidth", (void*) Rectangle_setWidth);
    java_register_method("Rectangle", "getHeight", (void*) Rectangle_getHeight);
    java_register_method("Rectangle", "setHeight", (void*) Rectangle_setHeight);
    java_register_method("Rectangle", "toString", (void*) Rectangle_toString);
}

static void Rectangle_initFields(Rectangle* this) {
    
    
    
}


void Rectangle_init(Rectangle* this, GPoint* point, int32_t width, int32_t height) {
    Rectangle_register();
    Rectangle_initFields(this);
        this->point = point;
        this->width = width;
        this->height = height;
}

Rectangle* Rectangle_new(GPoint* point, int32_t width, int32_t height) {
    Rectangle* this = java_object_alloc(sizeof(Rectangle), "Rectangle");
    Rectangle_init(this, point, width, height);
    return this;
}


GPoint* Rectangle_getPoint(Rectangle* this) {
        return this->point;
}


void Rectangle_setPoint(Rectangle* this, GPoint* point) {
        this->point = point;
}


int32_t Rectangle_getMaxX(Rectangle* this) {
        return GPoint_getX(this->point) + this->width;
}


int32_t Rectangle_getMaxY(Rectangle* this) {
        return GPoint_getY(this->point) + this->height;
}


int32_t Rectangle_getWidth(Rectangle* this) {
        return this->width;
}


void Rectangle_setWidth(Rectangle* this, int32_t width) {
        this->width = width;
}


int32_t Rectangle_getHeight(Rectangle* this) {
        return this->height;
}


void Rectangle_setHeight(Rectangle* this, int32_t height) {
        this->height = height;
}


const char* Rectangle_toString(Rectangle* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, java_string_of(Rectangle_getPoint(this)));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, CommonLabels_getInstance()->WIDTH_LABEL);
        StringMaker_appendint(stringBuffer, Rectangle_getWidth(this));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, CommonLabels_getInstance()->HEIGHT_LABEL);
        StringMaker_appendint(stringBuffer, Rectangle_getHeight(this));
        StringMaker_append(stringBuffer, " MaxX: ");
        StringMaker_appendint(stringBuffer, Rectangle_getMaxX(this));
        StringMaker_append(stringBuffer, " MaxY: ");
        StringMaker_appendint(stringBuffer, Rectangle_getMaxY(this));
        return java_string_of(stringBuffer);
}

