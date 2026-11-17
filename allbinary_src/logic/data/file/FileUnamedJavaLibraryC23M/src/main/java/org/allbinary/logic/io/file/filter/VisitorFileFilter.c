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
// package org.allbinary.logic.io.file.filter

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/File.h"
// #include "java/io/FileFilter.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/FileWrapperUtil.h"
#include "org/allbinary/logic/util/visitor/VisitorInterface.h"

typedef struct VisitorFileFilter VisitorFileFilter;
struct VisitorFileFilter {
    FileFilter FileFilter_interface;
    VisitorInterface* booleanVisitorInterface;
};


VisitorFileFilter* VisitorFileFilter_new(VisitorInterface* booleanVisitorInterface);

void VisitorFileFilter_init(VisitorFileFilter* this, VisitorInterface* booleanVisitorInterface);
bool VisitorFileFilter_accept(VisitorFileFilter* this, File* file);
bool VisitorFileFilter_accept(VisitorFileFilter* this, AbFile* file);

static void VisitorFileFilter_initFields(VisitorFileFilter* this) {
    
}


void VisitorFileFilter_init(VisitorFileFilter* this, VisitorInterface* booleanVisitorInterface) {
    VisitorFileFilter_initFields(this);
        this->booleanVisitorInterface = booleanVisitorInterface;
}

VisitorFileFilter* VisitorFileFilter_new(VisitorInterface* booleanVisitorInterface) {
    VisitorFileFilter* this = calloc(1, sizeof(VisitorFileFilter));
    VisitorFileFilter_init(this, booleanVisitorInterface);
    return this;
}


bool VisitorFileFilter_accept(VisitorFileFilter* this, File* file) {
        AbFile* abFile = FileWrapperUtil_wrapFile(file);
        bool isFileAcceptable = Boolean_booleanValue((((bool) VisitorInterface_visit(this->booleanVisitorInterface, abFile))));
        return isFileAcceptable || File_isDirectory(file);
}


// Java overloaded method: C needs a different name
bool VisitorFileFilter_accept(VisitorFileFilter* this, AbFile* file) {
        bool isFileAcceptable = Boolean_booleanValue((((bool) VisitorInterface_visit(this->booleanVisitorInterface, file))));
        return isFileAcceptable || File_isDirectory(file);
}

