// Generated Code Do Not Modify
#include "org/allbinary/logic/io/NullWriter.h"


NullWriter* NullWriter_NULL_WRITER;







void NullWriter_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullWriter_NULL_WRITER = NullWriter_new();
}

void NullWriter_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullWriter", "Writer");
    java_register_method("NullWriter", "write", (void*) NullWriter_write2_1);
    java_register_method("NullWriter", "write@2_1", (void*) NullWriter_write2_1);
    java_register_method("NullWriter", "write@4_1", (void*) NullWriter_write4_1);
    java_register_method("NullWriter", "write@2_2", (void*) NullWriter_write2_2);
    java_register_method("NullWriter", "write@4_2", (void*) NullWriter_write4_2);
    java_register_method("NullWriter", "flush", (void*) NullWriter_flush);
    java_register_method("NullWriter", "close", (void*) NullWriter_close);
}

void NullWriter_init(NullWriter* this) {
    NullWriter_register();
    Writer_init(&this->base);
}

NullWriter* NullWriter_new(void) {
    NullWriter* this = java_object_alloc(sizeof(NullWriter), "NullWriter");
    NullWriter_init(this);
    return this;
}


// throws IOException
void NullWriter_write2_1(NullWriter* this, int32_t c) {
}


// throws IOException
// Java overloaded method: C needs a different name
void NullWriter_write4_1(NullWriter* this, uint16_t* cbuf, int32_t off, int32_t len) {
}


// throws IOException
// Java overloaded method: C needs a different name
void NullWriter_write2_2(NullWriter* this, const char* str) {
}


// throws IOException
// Java overloaded method: C needs a different name
void NullWriter_write4_2(NullWriter* this, const char* str, int32_t off, int32_t len) {
}


// throws IOException
void NullWriter_flush(NullWriter* this) {
}


// throws IOException
void NullWriter_close(NullWriter* this) {
}

