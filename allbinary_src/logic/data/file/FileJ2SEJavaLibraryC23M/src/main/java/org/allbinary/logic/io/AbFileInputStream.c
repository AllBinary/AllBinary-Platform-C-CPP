// Generated Code Do Not Modify
#include "org/allbinary/logic/io/AbFileInputStream.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/AbFileNativeUtil.h"






void AbFileInputStream_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AbFileInputStream_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AbFileInputStream", "FileInputStream");
}


void AbFileInputStream_init(AbFileInputStream* this, const char* name) {
    AbFileInputStream_register();
        FileInputStream_init(&this->base, name);
}

AbFileInputStream* AbFileInputStream_new(const char* name) {
    AbFileInputStream* this = java_object_alloc(sizeof(AbFileInputStream), "AbFileInputStream");
    AbFileInputStream_init(this, name);
    return this;
}


// throws FileNotFoundException
AbFileInputStream* AbFileInputStream_createFromAbFile(AbFile* file) {
        return AbFileInputStream_new(File_getPath(AbFileNativeUtil_get(file)));
}


// throws FileNotFoundException
AbFileInputStream* AbFileInputStream_createFromFile(File* file) {
        return AbFileInputStream_new(File_getPath(file));
}

