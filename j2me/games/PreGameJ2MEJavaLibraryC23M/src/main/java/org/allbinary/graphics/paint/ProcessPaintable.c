// Generated Code Do Not Modify
#include "org/allbinary/graphics/paint/ProcessPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"




void ProcessPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ProcessPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ProcessPaintable", "Paintable");
    java_register_method("ProcessPaintable", "process", (void*) ProcessPaintable_process);
}

void ProcessPaintable_init(ProcessPaintable* this) {
    ProcessPaintable_register();
    Paintable_init(&this->base);
}

ProcessPaintable* ProcessPaintable_new(void) {
    ProcessPaintable* this = java_object_alloc(sizeof(ProcessPaintable), "ProcessPaintable");
    ProcessPaintable_init(this);
    return this;
}


void ProcessPaintable_process(ProcessPaintable* this) {
}

