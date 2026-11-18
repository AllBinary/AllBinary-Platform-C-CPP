// Generated Code Do Not Modify
#include "org/allbinary/logic/io/file/AbFileNativeUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"




void AbFileNativeUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AbFileNativeUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AbFileNativeUtil", nullptr);
}

void AbFileNativeUtil_init(AbFileNativeUtil* this) {
    AbFileNativeUtil_register();
}

AbFileNativeUtil* AbFileNativeUtil_new(void) {
    AbFileNativeUtil* this = java_object_alloc(sizeof(AbFileNativeUtil), "AbFileNativeUtil");
    AbFileNativeUtil_init(this);
    return this;
}


File* AbFileNativeUtil_get(AbFile* file) {
        return AbFile_getFile(file);
}

