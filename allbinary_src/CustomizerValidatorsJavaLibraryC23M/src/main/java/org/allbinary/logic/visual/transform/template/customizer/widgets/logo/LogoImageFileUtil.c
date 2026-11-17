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
// package org.allbinary.logic.visual.transform.template.customizer.widgets.logo

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/ByteArrayInputStream.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/FileUtil.h"
#include "org/allbinary/logic/io/file/directory/Directory.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/apache/commons/fileupload/FileItem.h"

typedef struct LogoImageFileUtil LogoImageFileUtil;
struct LogoImageFileUtil {
    Directory* directory;
    const char* fileName;
    AbPath* imageFileAbPath;
};


LogoImageFileUtil* LogoImageFileUtil_new(AbPath* imageAbPath, const char* imageFile);

void LogoImageFileUtil_init(LogoImageFileUtil* this, AbPath* imageAbPath, const char* imageFile);
void LogoImageFileUtil_saveFiles(LogoImageFileUtil* this, FileItem* fileItem);

static void LogoImageFileUtil_initFields(LogoImageFileUtil* this) {
    this->directory = Directory_getInstance();
    
    
}


void LogoImageFileUtil_init(LogoImageFileUtil* this, AbPath* imageAbPath, const char* imageFile) {
    LogoImageFileUtil_initFields(this);
        this->fileName = imageFile;
        this->imageFileAbPath = imageAbPath;
}

LogoImageFileUtil* LogoImageFileUtil_new(AbPath* imageAbPath, const char* imageFile) {
    LogoImageFileUtil* this = calloc(1, sizeof(LogoImageFileUtil));
    LogoImageFileUtil_init(this, imageAbPath, imageFile);
    return this;
}


// throws Exception
void LogoImageFileUtil_saveFiles(LogoImageFileUtil* this, FileItem* fileItem) {
        if (this->fileName == nullptr) {
            java_throw(java_exception_new("Exception", "Image File Name Was Null"));
        }
        if (!Directory_create(this->directory, this->imageFileAbPath)) {
            java_throw(java_exception_new("Exception", "Unable to save file to non creatable directory"));
        }
        AbFile* originalImageFile = AbFile_createAbFile(java_concat(AbPath_toString(this->imageFileAbPath), this->fileName));
        AbFile_createNewFile(originalImageFile);
        FileUtil_write(FileUtil_getInstance(), ByteArrayInputStream_new(FileItem_get(fileItem)), originalImageFile);
}

