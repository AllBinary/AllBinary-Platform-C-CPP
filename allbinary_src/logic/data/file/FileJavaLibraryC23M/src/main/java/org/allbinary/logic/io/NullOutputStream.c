// Generated Code Do Not Modify
#include "org/allbinary/logic/io/NullOutputStream.h"


NullOutputStream* NullOutputStream_NULL_OUTPUT_STREAM;




void NullOutputStream_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullOutputStream_NULL_OUTPUT_STREAM = NullOutputStream_new();
}

void NullOutputStream_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullOutputStream", "OutputStream");
    java_register_method("NullOutputStream", "write", (void*) NullOutputStream_write2);
    java_register_method("NullOutputStream", "write@2", (void*) NullOutputStream_write2);
    java_register_method("NullOutputStream", "write@4", (void*) NullOutputStream_write4);
    java_register_method("NullOutputStream", "close", (void*) NullOutputStream_close);
}

void NullOutputStream_init(NullOutputStream* this) {
    NullOutputStream_register();
    OutputStream_init(&this->base);
}

NullOutputStream* NullOutputStream_new(void) {
    NullOutputStream* this = java_object_alloc(sizeof(NullOutputStream), "NullOutputStream");
    NullOutputStream_init(this);
    return this;
}


// throws IOException
void NullOutputStream_write2(NullOutputStream* this, int32_t b) {
}


// throws IOException
// Java overloaded method: C needs a different name
void NullOutputStream_write4(NullOutputStream* this, int8_t* b, int32_t off, int32_t len) {
}


void NullOutputStream_close(NullOutputStream* this) {
}

