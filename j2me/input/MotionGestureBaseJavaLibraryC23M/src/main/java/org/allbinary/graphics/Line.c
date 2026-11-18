// Generated Code Do Not Modify
#include "org/allbinary/graphics/Line.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"





static void Line_update(Line* this);







void Line_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Line_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Line", nullptr);
    java_register_method("Line", "getGradient", (void*) Line_getGradient);
    java_register_method("Line", "update", (void*) Line_update);
    java_register_method("Line", "getDeltaX", (void*) Line_getDeltaX);
    java_register_method("Line", "getDeltaY", (void*) Line_getDeltaY);
    java_register_method("Line", "getP1", (void*) Line_getP1);
    java_register_method("Line", "getP2", (void*) Line_getP2);
    java_register_method("Line", "setP1", (void*) Line_setP1);
    java_register_method("Line", "setP2", (void*) Line_setP2);
}

static void Line_initFields(Line* this) {
    
    
    this->deltaX = 0.0;
    this->deltaY = 0.0;
}


void Line_init(Line* this, GPoint* p1, GPoint* p2) {
    Line_register();
    Line_initFields(this);
        this->p1 = PointFactory_getInstance()->ZERO_ZERO;
        this->p2 = this->p1;
        Line_setP1(this, p1);
        Line_setP2(this, p2);
}

Line* Line_new(GPoint* p1, GPoint* p2) {
    Line* this = java_object_alloc(sizeof(Line), "Line");
    Line_init(this, p1, p2);
    return this;
}


double Line_getGradient(Line* this) {
        return Line_getDeltaY(this) / Line_getDeltaX(this);
}


static void Line_update(Line* this) {
        this->deltaX = ((double) GPoint_getX(Line_getP1(this))) - ((double) GPoint_getX(Line_getP2(this)));
        this->deltaY = ((double) GPoint_getY(Line_getP1(this))) - ((double) GPoint_getY(Line_getP2(this)));
}


double Line_getDeltaX(Line* this) {
        return this->deltaX;
}


double Line_getDeltaY(Line* this) {
        return this->deltaY;
}


GPoint* Line_getP1(Line* this) {
        return this->p1;
}


GPoint* Line_getP2(Line* this) {
        return this->p2;
}


void Line_setP1(Line* this, GPoint* p1) {
        this->p1 = p1;
        Line_update(this);
}


void Line_setP2(Line* this, GPoint* p2) {
        this->p2 = p2;
        Line_update(this);
}

