// Generated Code Do Not Modify
#include "org/allbinary/logic/java/FileExtensionData.h"


static FileExtensionData* FileExtensionData_instance;



void FileExtensionData_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    FileExtensionData_instance = FileExtensionData_new();
}

void FileExtensionData_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FileExtensionData", nullptr);
}

static void FileExtensionData_initFields(FileExtensionData* this) {
    this->DOT_JAVA_SOURCE = ".java";
    this->JAVA_SOURCE = "java";
}


FileExtensionData* FileExtensionData_getInstance(void) {
        return (FileExtensionData_staticInit(), FileExtensionData_instance);
}


void FileExtensionData_init(FileExtensionData* this) {
    FileExtensionData_register();
    FileExtensionData_initFields(this);
}

FileExtensionData* FileExtensionData_new(void) {
    FileExtensionData* this = java_object_alloc(sizeof(FileExtensionData), "FileExtensionData");
    FileExtensionData_init(this);
    return this;
}

