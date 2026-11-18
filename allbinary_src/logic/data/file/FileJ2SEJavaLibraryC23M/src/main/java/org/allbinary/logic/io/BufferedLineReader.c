// Generated Code Do Not Modify
#include "org/allbinary/logic/io/BufferedLineReader.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/AbFileNativeUtil.h"









void BufferedLineReader_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BufferedLineReader_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BufferedLineReader", nullptr);
    java_register_method("BufferedLineReader", "readUpToLines", (void*) BufferedLineReader_readUpToLines);
    java_register_method("BufferedLineReader", "readLine", (void*) BufferedLineReader_readLine);
    java_register_method("BufferedLineReader", "ready", (void*) BufferedLineReader_ready);
    java_register_method("BufferedLineReader", "getSize", (void*) BufferedLineReader_getSize);
    java_register_method("BufferedLineReader", "getCurrent", (void*) BufferedLineReader_getCurrent);
}

static void BufferedLineReader_initFields(BufferedLineReader* this) {
    
}


void BufferedLineReader_init(BufferedLineReader* this, AbFile* file) {
    BufferedLineReader_register();
    BufferedLineReader_initFields(this);
        this->tmpIn = BufferedReader_new(FileReader_new(AbFileNativeUtil_get(file)));
}

BufferedLineReader* BufferedLineReader_new(AbFile* file) {
    BufferedLineReader* this = java_object_alloc(sizeof(BufferedLineReader), "BufferedLineReader");
    BufferedLineReader_init(this, file);
    return this;
}


void BufferedLineReader_readUpToLines(BufferedLineReader* this, int64_t readAheadIndex) {
}


// throws Exception
const char* BufferedLineReader_readLine(BufferedLineReader* this) {
        return BufferedReader_readLine(this->tmpIn);
}


// throws Exception
bool BufferedLineReader_ready(BufferedLineReader* this) {
        return BufferedReader_ready(this->tmpIn);
}


int64_t BufferedLineReader_getSize(BufferedLineReader* this) {
        return 0LL;
}


int32_t BufferedLineReader_getCurrent(BufferedLineReader* this) {
        return 0;
}

