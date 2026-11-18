// Generated Code Do Not Modify
#include "org/allbinary/logic/io/AbFileOutputStream.h"
#include "org/allbinary/logic/io/file/AbFile.h"








void AbFileOutputStream_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AbFileOutputStream_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AbFileOutputStream", "FileOutputStream");
}


// throws FileNotFoundException
AbFileOutputStream* AbFileOutputStream_createFromAbFile(AbFile* file) {
        return AbFileOutputStream_new(AbFile_getPath(file), false);
}


// throws FileNotFoundException
AbFileOutputStream* AbFileOutputStream_createFromAbFileAppend(AbFile* file, bool append) {
        return AbFileOutputStream_new(AbFile_getPath(file), append);
}


// throws FileNotFoundException
AbFileOutputStream* AbFileOutputStream_createFromFilePath(const char* name) {
        return AbFileOutputStream_new(name, false);
}


// throws FileNotFoundException
AbFileOutputStream* AbFileOutputStream_createFromFilePathAppend(const char* name, bool append) {
        return AbFileOutputStream_new(name, append);
}


void AbFileOutputStream_init(AbFileOutputStream* this, const char* name, bool append) {
    AbFileOutputStream_register();
        FileOutputStream_init(&this->base, name, append);
}

AbFileOutputStream* AbFileOutputStream_new(const char* name, bool append) {
    AbFileOutputStream* this = java_object_alloc(sizeof(AbFileOutputStream), "AbFileOutputStream");
    AbFileOutputStream_init(this, name, append);
    return this;
}

