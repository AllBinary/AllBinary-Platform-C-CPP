// Generated Code Do Not Modify
#include "org/allbinary/logic/io/AbFileLocalInputStream.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/AbFileNativeUtil.h"
#include "org/allbinary/logic/io/AbFileInputStream.h"
#if __has_include("org/allbinary/logic/io/File.h")
#include "org/allbinary/logic/io/File.h"
#endif
#if __has_include("org/allbinary/logic/io/file/File.h")
#include "org/allbinary/logic/io/file/File.h"
#endif
#if __has_include("org/allbinary/logic/io/file/File.h")
#include "org/allbinary/logic/io/file/File.h"
#endif




void AbFileLocalInputStream_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AbFileLocalInputStream_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AbFileLocalInputStream", "AbFileInputStream");
}


void AbFileLocalInputStream_init(AbFileLocalInputStream* this, AbFile* file) {
    AbFileLocalInputStream_register();
        AbFileInputStream_init(&this->base, File_getPath(AbFileNativeUtil_get(file)));
}

AbFileLocalInputStream* AbFileLocalInputStream_new(AbFile* file) {
    AbFileLocalInputStream* this = java_object_alloc(sizeof(AbFileLocalInputStream), "AbFileLocalInputStream");
    AbFileLocalInputStream_init(this, file);
    return this;
}

