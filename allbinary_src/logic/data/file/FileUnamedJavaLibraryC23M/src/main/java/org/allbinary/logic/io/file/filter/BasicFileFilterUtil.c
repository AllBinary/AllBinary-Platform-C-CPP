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
// #include "java/io/FileFilter.h"
#include "org/allbinary/logic/io/file/visitor/IncludeFileExtensionsBooleanFileVisitor.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct BasicFileFilterUtil BasicFileFilterUtil;
struct BasicFileFilterUtil {
    char unused;
};


BasicFileFilterUtil* BasicFileFilterUtil_new(void);

void BasicFileFilterUtil_init(BasicFileFilterUtil* this);
FileFilter* BasicFileFilterUtil_getInstance(const char* extension);


void BasicFileFilterUtil_init(BasicFileFilterUtil* this) {
}

BasicFileFilterUtil* BasicFileFilterUtil_new(void) {
    BasicFileFilterUtil* this = calloc(1, sizeof(BasicFileFilterUtil));
    BasicFileFilterUtil_init(this);
    return this;
}


FileFilter* BasicFileFilterUtil_getInstance(const char* extension) {
        BasicArrayList* vector = BasicArrayListD_new();
        BasicArrayList_add(vector, extension);
        IncludeFileExtensionsBooleanFileVisitor* includeFileExtensionsBooleanFileVisitor = IncludeFileExtensionsBooleanFileVisitor_new(vector);
        return ((FileFilter*) VisitorFileFilter_new(includeFileExtensionsBooleanFileVisitor));
}

