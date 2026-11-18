// Generated Code Do Not Modify
#include "org/allbinary/logic/io/NullCloseable.h"


NullCloseable* NullCloseable_NULL_CLOSEABLE;


void NullCloseable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullCloseable_NULL_CLOSEABLE = NullCloseable_new();
}

void NullCloseable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullCloseable", nullptr);
    java_register_method("NullCloseable", "close", (void*) NullCloseable_close);
}

void NullCloseable_init(NullCloseable* this) {
    NullCloseable_register();
}

NullCloseable* NullCloseable_new(void) {
    NullCloseable* this = java_object_alloc(sizeof(NullCloseable), "NullCloseable");
    NullCloseable_init(this);
    return this;
}


// throws IOException
void NullCloseable_close(NullCloseable* this) {
}

