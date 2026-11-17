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
// package org.allbinary.logic.io.file.visitor

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/logic/io/file/visitor/BooleanFileVisitor.h"

typedef struct ExcludeFileExtensionsBooleanFileVisitor ExcludeFileExtensionsBooleanFileVisitor;
struct ExcludeFileExtensionsBooleanFileVisitor {
    BooleanFileVisitor base;
};


ExcludeFileExtensionsBooleanFileVisitor* ExcludeFileExtensionsBooleanFileVisitor_new(BasicArrayList* filterStringBasicArrayList);

void ExcludeFileExtensionsBooleanFileVisitor_init(ExcludeFileExtensionsBooleanFileVisitor* this, BasicArrayList* filterStringBasicArrayList);
bool ExcludeFileExtensionsBooleanFileVisitor_visit(ExcludeFileExtensionsBooleanFileVisitor* this, AbFile* file);
bool ExcludeFileExtensionsBooleanFileVisitor_visit(ExcludeFileExtensionsBooleanFileVisitor* this, AbFile* file, const char* fileNameString);


void ExcludeFileExtensionsBooleanFileVisitor_init(ExcludeFileExtensionsBooleanFileVisitor* this, BasicArrayList* filterStringBasicArrayList) {
        BooleanFileVisitor_init(&this->base, filterStringBasicArrayList);
}

ExcludeFileExtensionsBooleanFileVisitor* ExcludeFileExtensionsBooleanFileVisitor_new(BasicArrayList* filterStringBasicArrayList) {
    ExcludeFileExtensionsBooleanFileVisitor* this = calloc(1, sizeof(ExcludeFileExtensionsBooleanFileVisitor));
    ExcludeFileExtensionsBooleanFileVisitor_init(this, filterStringBasicArrayList);
    return this;
}


bool ExcludeFileExtensionsBooleanFileVisitor_visit(ExcludeFileExtensionsBooleanFileVisitor* this, AbFile* file) {
        if (JAVA_CALL(ExcludeFileExtensionsBooleanFileVisitor_getFilterStringBasicArrayList(this), size) == 0) {
            return true;
        }
        return BooleanFileVisitor_visit((&this->base), file);
}


// Java overloaded method: C needs a different name
bool ExcludeFileExtensionsBooleanFileVisitor_visit(ExcludeFileExtensionsBooleanFileVisitor* this, AbFile* file, const char* fileNameString) {
        const char* fileNameAndExtension = AbFile_getPath(file);
        if (((int32_t) strlen(fileNameAndExtension)) > ((int32_t) strlen(fileNameString))) {
            int32_t startIndex = ((int32_t) strlen(fileNameAndExtension)) - ((int32_t) strlen(fileNameString));
            const char* fileName = java_substring(fileNameAndExtension, startIndex, (int32_t) strlen(fileNameAndExtension));
            if (strcmp(fileName, fileNameString) == 0) {
                return false;
            }
        }
        return true;
}

