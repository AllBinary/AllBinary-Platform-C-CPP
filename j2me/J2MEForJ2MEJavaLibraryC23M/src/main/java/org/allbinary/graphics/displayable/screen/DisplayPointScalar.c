// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/screen/DisplayPointScalar.h"
#include "org/allbinary/graphics/GPoint.h"


static DisplayPointScalar* DisplayPointScalar_instance;





void DisplayPointScalar_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DisplayPointScalar_instance = DisplayPointScalar_new();
}

void DisplayPointScalar_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DisplayPointScalar", nullptr);
    java_register_method("DisplayPointScalar", "processX", (void*) DisplayPointScalar_processX);
    java_register_method("DisplayPointScalar", "processY", (void*) DisplayPointScalar_processY);
    java_register_method("DisplayPointScalar", "process", (void*) DisplayPointScalar_process);
}

void DisplayPointScalar_init(DisplayPointScalar* this) {
    DisplayPointScalar_register();
}

DisplayPointScalar* DisplayPointScalar_new(void) {
    DisplayPointScalar* this = java_object_alloc(sizeof(DisplayPointScalar), "DisplayPointScalar");
    DisplayPointScalar_init(this);
    return this;
}


DisplayPointScalar* DisplayPointScalar_getInstance(void) {
        return (DisplayPointScalar_staticInit(), DisplayPointScalar_instance);
}


int32_t DisplayPointScalar_processX(DisplayPointScalar* this, int32_t value) {
        return value;
}


int32_t DisplayPointScalar_processY(DisplayPointScalar* this, int32_t value) {
        return value;
}


GPoint* DisplayPointScalar_process(DisplayPointScalar* this, GPoint* point) {
        return point;
}

