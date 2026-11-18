// Generated Code Do Not Modify
#include "org/allbinary/logic/io/NullReader.h"


NullReader* NullReader_NULL_READER;






void NullReader_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullReader_NULL_READER = NullReader_new();
}

void NullReader_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullReader", "Reader");
    java_register_method("NullReader", "read", (void*) NullReader_read1);
    java_register_method("NullReader", "read@1", (void*) NullReader_read1);
    java_register_method("NullReader", "read@4", (void*) NullReader_read4);
    java_register_method("NullReader", "ready", (void*) NullReader_ready);
    java_register_method("NullReader", "skip", (void*) NullReader_skip);
    java_register_method("NullReader", "close", (void*) NullReader_close);
}

void NullReader_init(NullReader* this) {
    NullReader_register();
    Reader_init(&this->base);
}

NullReader* NullReader_new(void) {
    NullReader* this = java_object_alloc(sizeof(NullReader), "NullReader");
    NullReader_init(this);
    return this;
}


// throws IOException
int32_t NullReader_read1(NullReader* this) {
        return -1;
}


// throws IOException
// Java overloaded method: C needs a different name
int32_t NullReader_read4(NullReader* this, uint16_t* cbuf, int32_t off, int32_t len) {
        return -1;
}


// throws IOException
bool NullReader_ready(NullReader* this) {
        return false;
}


// throws IOException
int64_t NullReader_skip(NullReader* this, int64_t n) {
        return 0LL;
}


void NullReader_close(NullReader* this) {
}

