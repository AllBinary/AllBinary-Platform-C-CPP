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
// package org.allbinary.logic.io.file.directory

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/util/visitor/VisitorInterface.h"

typedef struct DirectoryBooleanFileVisitor DirectoryBooleanFileVisitor;
struct DirectoryBooleanFileVisitor {
    VisitorInterface VisitorInterface_interface;
};


DirectoryBooleanFileVisitor* DirectoryBooleanFileVisitor_new(void);

void DirectoryBooleanFileVisitor_init(DirectoryBooleanFileVisitor* this);
Any* DirectoryBooleanFileVisitor_visit(DirectoryBooleanFileVisitor* this, Any* anyType);
bool DirectoryBooleanFileVisitor_visit(DirectoryBooleanFileVisitor* this, AbFile* file);


void DirectoryBooleanFileVisitor_init(DirectoryBooleanFileVisitor* this) {
}

DirectoryBooleanFileVisitor* DirectoryBooleanFileVisitor_new(void) {
    DirectoryBooleanFileVisitor* this = calloc(1, sizeof(DirectoryBooleanFileVisitor));
    DirectoryBooleanFileVisitor_init(this);
    return this;
}


Any* DirectoryBooleanFileVisitor_visit(DirectoryBooleanFileVisitor* this, Any* anyType) {
        return ((Any*) DirectoryBooleanFileVisitor_visit(this, ((AbFile*) anyType)));
}


// Java overloaded method: C needs a different name
bool DirectoryBooleanFileVisitor_visit(DirectoryBooleanFileVisitor* this, AbFile* file) {
        if (AbFile_isDirectory(file)) {
            return true;
        }
        return false;
}

