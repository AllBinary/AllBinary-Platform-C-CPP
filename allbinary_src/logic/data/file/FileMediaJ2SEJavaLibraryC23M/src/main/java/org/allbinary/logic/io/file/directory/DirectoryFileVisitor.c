/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
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
// package org.allbinary.logic.io.file.directory

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
#include "org/allbinary/logic/util/visitor/VisitorInterface.h"

typedef struct DirectoryFileVisitor DirectoryFileVisitor;
struct DirectoryFileVisitor {
    VisitorInterface VisitorInterface_interface;
    FileFilter FileFilter_interface;
};


DirectoryFileVisitor* DirectoryFileVisitor_new(void);

void DirectoryFileVisitor_init(DirectoryFileVisitor* this);
bool DirectoryFileVisitor_accept(DirectoryFileVisitor* this, File* arg0);
Any* DirectoryFileVisitor_visit(DirectoryFileVisitor* this, Any* anyType);


void DirectoryFileVisitor_init(DirectoryFileVisitor* this) {
}

DirectoryFileVisitor* DirectoryFileVisitor_new(void) {
    DirectoryFileVisitor* this = calloc(1, sizeof(DirectoryFileVisitor));
    DirectoryFileVisitor_init(this);
    return this;
}


bool DirectoryFileVisitor_accept(DirectoryFileVisitor* this, File* arg0) {
        return Boolean_booleanValue((((bool) DirectoryFileVisitor_visit(this, ((Any*) arg0)))));
}


Any* DirectoryFileVisitor_visit(DirectoryFileVisitor* this, Any* anyType) {
        File* file = ((File*) anyType);
        int32_t index = 1;
        File* aFile = File_getParentFile(file);
        while (((aFile = File_getParentFile(aFile))) != nullptr) {
            index++;
        }
        if (File_isDirectory(file) && index < 5) {
            return true;
        }
        return false;
}

