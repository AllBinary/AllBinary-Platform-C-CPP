// Generated Code Do Not Modify
#include "org/allbinary/logic/io/file/FileFactory.h"
#include "org/allbinary/logic/io/file/AbFile.h"


static FileFactory* FileFactory_instance;





void FileFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    FileFactory_instance = FileFactory_new();
}

void FileFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FileFactory", nullptr);
    java_register_method("FileFactory", "getInstance@2", (void*) FileFactory_getInstance2);
    java_register_method("FileFactory", "getInstance@3", (void*) FileFactory_getInstance3);
    java_register_method("FileFactory", "isFile", (void*) FileFactory_isFile);
}

void FileFactory_init(FileFactory* this) {
    FileFactory_register();
}

FileFactory* FileFactory_new(void) {
    FileFactory* this = java_object_alloc(sizeof(FileFactory), "FileFactory");
    FileFactory_init(this);
    return this;
}


FileFactory* FileFactory_getInstance0(void) {
        return (FileFactory_staticInit(), FileFactory_instance);
}


// throws Exception
// Java overloaded method: C needs a different name
AbFile* FileFactory_getInstance2(FileFactory* this, const char* filePath) {
        return AbFile_createAbFileFromRawPath(filePath);
}


// throws Exception
// Java overloaded method: C needs a different name
AbFile* FileFactory_getInstance3(FileFactory* this, AbFile* file, const char* childFilePath) {
        return AbFile_createAbFileWithChild(file, childFilePath);
}


// throws Exception
bool FileFactory_isFile(FileFactory* this, const char* path) {
        AbFile* file = AbFile_createAbFile(path);
        if (AbFile_exists(file)) {
            return true;
        } else {
            return false;
        }
}

