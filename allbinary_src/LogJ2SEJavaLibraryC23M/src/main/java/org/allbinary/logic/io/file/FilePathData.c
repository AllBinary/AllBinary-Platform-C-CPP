// Generated Code Do Not Modify
#include "org/allbinary/logic/io/file/FilePathData.h"


static FilePathData* FilePathData_instance;



void FilePathData_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    FilePathData_instance = FilePathData_new();
}

void FilePathData_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FilePathData", nullptr);
}

static void FilePathData_initFields(FilePathData* this) {
    this->SEPARATORCHAR = (File_staticInit(), File_separatorChar);
    this->PATH_START = (File_staticInit(), File_separator);
}


FilePathData* FilePathData_getInstance(void) {
        return (FilePathData_staticInit(), FilePathData_instance);
}


void FilePathData_init(FilePathData* this) {
    FilePathData_register();
    FilePathData_initFields(this);
        if ((File_staticInit(), File_separatorChar) == u'\\') {
            this->PATH_START = java_concat((File_staticInit(), File_separator), (File_staticInit(), File_separator));
        }
}

FilePathData* FilePathData_new(void) {
    FilePathData* this = java_object_alloc(sizeof(FilePathData), "FilePathData");
    FilePathData_init(this);
    return this;
}

