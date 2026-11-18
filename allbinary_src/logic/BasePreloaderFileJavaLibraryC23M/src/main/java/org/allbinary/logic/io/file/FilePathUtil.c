// Generated Code Do Not Modify
#include "org/allbinary/logic/io/file/FilePathUtil.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/io/file/FilePathData.h"





void FilePathUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void FilePathUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FilePathUtil", nullptr);
}


void FilePathUtil_init(FilePathUtil* this) {
    FilePathUtil_register();
}

FilePathUtil* FilePathUtil_new(void) {
    FilePathUtil* this = java_object_alloc(sizeof(FilePathUtil), "FilePathUtil");
    FilePathUtil_init(this);
    return this;
}


const char* FilePathUtil_adjust(const char* path) {
        AbPathData* abPathData = AbPathData_getInstance();
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        FilePathData* filePathData = FilePathData_getInstance();
        if (StringValidationUtil_isEmpty(stringValidationUtil, path)) {
            return filePathData->PATH_START;
        }
        path = java_string_replace(path, abPathData->SEPARATORCHAR, filePathData->SEPARATORCHAR);
        return path;
}

