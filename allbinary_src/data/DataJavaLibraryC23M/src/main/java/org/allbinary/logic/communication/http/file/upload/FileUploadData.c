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
// package org.allbinary.logic.communication.http.file.upload

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct FileUploadData FileUploadData;
struct FileUploadData {
    const char* FILE;
    const char* UPLOAD_TO_FILE_PATH;
    const char* FILE_DATA;
};

static FileUploadData* FileUploadData_instance;

FileUploadData* FileUploadData_new(void);
FileUploadData* FileUploadData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void FileUploadData_staticInit(void) {
    FileUploadData_instance = FileUploadData_new();
}

static void FileUploadData_initFields(FileUploadData* this) {
    this->FILE = "download_file_permissions.xml";
    this->UPLOAD_TO_FILE_PATH = "FILE_UPLOAD_UPLOAD_TO_FILE_PATH";
    this->FILE_DATA = "FILE_UPLOAD_FILE_DATA";
}

void FileUploadData_init(FileUploadData* this) {
    FileUploadData_initFields(this);
}

FileUploadData* FileUploadData_new(void) {
    FileUploadData* this = calloc(1, sizeof(FileUploadData));
    FileUploadData_init(this);
    return this;
}


FileUploadData* FileUploadData_getInstance(void) {
        return FileUploadData_instance;
}

