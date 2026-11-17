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
// #include "java/io/IOException.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/apache/commons/fileupload/FileItemFactory.h"
#include "org/apache/commons/fileupload/FileItemIterator.h"
#include "org/apache/commons/fileupload/FileUpload.h"
#include "org/apache/commons/fileupload/FileUploadException.h"
#include "org/apache/commons/fileupload/servlet/ServletRequestContext.h"

typedef struct AbFileUpload AbFileUpload;
struct AbFileUpload {
    FileUpload base;
};


AbFileUpload* AbFileUpload_new(FileItemFactory* fileItemFactory);

void AbFileUpload_init(AbFileUpload* this, FileItemFactory* fileItemFactory);
FileItemIterator* AbFileUpload_getItemIterator(AbFileUpload* this, HttpServletRequest* request);


void AbFileUpload_init(AbFileUpload* this, FileItemFactory* fileItemFactory) {
        FileUpload_init(&this->base, fileItemFactory);
}

AbFileUpload* AbFileUpload_new(FileItemFactory* fileItemFactory) {
    AbFileUpload* this = calloc(1, sizeof(AbFileUpload));
    AbFileUpload_init(this, fileItemFactory);
    return this;
}


// throws FileUploadException, IOException
FileItemIterator* AbFileUpload_getItemIterator(AbFileUpload* this, HttpServletRequest* request) {
        return FileUpload_getItemIterator((&this->base), ServletRequestContext_new(request));
}

