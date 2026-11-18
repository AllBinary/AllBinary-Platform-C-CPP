// Generated Code Do Not Modify
#include "org/allbinary/logic/io/file/FileWrapperUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"





void FileWrapperUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void FileWrapperUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FileWrapperUtil", nullptr);
}

void FileWrapperUtil_init(FileWrapperUtil* this) {
    FileWrapperUtil_register();
}

FileWrapperUtil* FileWrapperUtil_new(void) {
    FileWrapperUtil* this = java_object_alloc(sizeof(FileWrapperUtil), "FileWrapperUtil");
    FileWrapperUtil_init(this);
    return this;
}


AbFile** FileWrapperUtil_wrapFiles(void** files) {
        JAVA_TRY {
            AbFile** abFileArray = ((AbFile**) java_array_new(sizeof(AbFile*), java_array_length(files)));
            for (int32_t index = java_array_length(files) - 1; index >= 0; index--) {
                abFileArray[index] = AbFile_new(((File*) files[index]));
            }
            return abFileArray;
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putSE("Exception Wrapping Files", "FileWrapperUtil", "wrapFiles", e);
            return ((AbFile**) java_array_new(sizeof(AbFile*), 0));
        } JAVA_END_TRY;
}


AbFile* FileWrapperUtil_wrapFile(File* file) {
        JAVA_TRY {
            return AbFile_new(file);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putSE("Exception Wrapping File", "FileWrapperUtil", "wrapFile", e);
            return (AbFile_staticInit(), AbFile_NULL_FILE);
        } JAVA_END_TRY;
}

