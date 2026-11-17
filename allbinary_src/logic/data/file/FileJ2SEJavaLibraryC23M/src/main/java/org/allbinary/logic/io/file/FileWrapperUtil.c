/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.logic.io.file

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/File.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"

typedef struct FileWrapperUtil FileWrapperUtil;
struct FileWrapperUtil {
    char unused;
};


FileWrapperUtil* FileWrapperUtil_new(void);
AbFile** FileWrapperUtil_wrapFiles(Any** files);
AbFile* FileWrapperUtil_wrapFile(File* file);

void FileWrapperUtil_init(FileWrapperUtil* this) {
}

FileWrapperUtil* FileWrapperUtil_new(void) {
    FileWrapperUtil* this = calloc(1, sizeof(FileWrapperUtil));
    FileWrapperUtil_init(this);
    return this;
}


AbFile** FileWrapperUtil_wrapFiles(Any** files) {
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
            return AbFile_NULL_FILE;
        } JAVA_END_TRY;
}

