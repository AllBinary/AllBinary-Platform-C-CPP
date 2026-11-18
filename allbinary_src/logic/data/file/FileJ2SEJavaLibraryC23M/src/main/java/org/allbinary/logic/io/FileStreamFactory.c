// Generated Code Do Not Modify
#include "org/allbinary/logic/io/FileStreamFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/AbFileInputStream.h"
#include "org/allbinary/logic/io/AbFileOutputStream.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static void* FileStreamFactory_SINGLETON;






void FileStreamFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    FileStreamFactory_SINGLETON = NullUtil_getInstance()->NULL_OBJECT;
}

void FileStreamFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FileStreamFactory", nullptr);
    java_register_method("FileStreamFactory", "getFileInputStreamInstance", (void*) FileStreamFactory_getFileInputStreamInstance);
    java_register_method("FileStreamFactory", "getFileOutputStreamInstance", (void*) FileStreamFactory_getFileOutputStreamInstance);
    java_register_method("FileStreamFactory", "delete", (void*) FileStreamFactory_delete);
}


FileStreamFactory* FileStreamFactory_getInstance(void) {
        if ((FileStreamFactory_staticInit(), FileStreamFactory_SINGLETON) == NullUtil_getInstance()->NULL_OBJECT) {
            FileStreamFactory_SINGLETON = FileStreamFactory_new();
        }
        return ((FileStreamFactory*) (FileStreamFactory_staticInit(), FileStreamFactory_SINGLETON));
}


void FileStreamFactory_init(FileStreamFactory* this) {
    FileStreamFactory_register();
}

FileStreamFactory* FileStreamFactory_new(void) {
    FileStreamFactory* this = java_object_alloc(sizeof(FileStreamFactory), "FileStreamFactory");
    FileStreamFactory_init(this);
    return this;
}


// throws Exception
AbFileInputStream* FileStreamFactory_getFileInputStreamInstance(FileStreamFactory* this, const char* path, const char* fileName) {
        AbPath* FILEABPATH = AbPath_new(path, fileName);
        AbFile* file = AbFile_createAbFileFromAbPath(FILEABPATH);
        return AbFileInputStream_createFromAbFile(file);
}


// throws Exception
AbFileOutputStream* FileStreamFactory_getFileOutputStreamInstance(FileStreamFactory* this, const char* path, const char* fileName) {
        AbPath* FILEABPATH = AbPath_new(path, fileName);
        AbFile* file = AbFile_createAbFileFromAbPath(FILEABPATH);
        if (AbFile_exists(file)) {
            AbFile_delete(file);
            AbFile_createNewFile(file);
        }
        return AbFileOutputStream_createFromAbFile(file);
}


// throws Exception
void FileStreamFactory_delete(FileStreamFactory* this, const char* path, const char* fileName) {
        AbPath* FILEABPATH = AbPath_new(path, fileName);
        AbFile* file = AbFile_createAbFileFromAbPath(FILEABPATH);
        AbFile_delete(file);
}

