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

typedef struct IncludeFileExtensionsBooleanFileVisitor IncludeFileExtensionsBooleanFileVisitor;
struct IncludeFileExtensionsBooleanFileVisitor {
    BooleanFileVisitor base;
};


IncludeFileExtensionsBooleanFileVisitor* IncludeFileExtensionsBooleanFileVisitor_new(BasicArrayList* filterStringBasicArrayList);

void IncludeFileExtensionsBooleanFileVisitor_init(IncludeFileExtensionsBooleanFileVisitor* this, BasicArrayList* filterStringBasicArrayList);
bool IncludeFileExtensionsBooleanFileVisitor_visit(IncludeFileExtensionsBooleanFileVisitor* this, AbFile* file);
bool IncludeFileExtensionsBooleanFileVisitor_visit(IncludeFileExtensionsBooleanFileVisitor* this, AbFile* file, const char* fileNameString);


void IncludeFileExtensionsBooleanFileVisitor_init(IncludeFileExtensionsBooleanFileVisitor* this, BasicArrayList* filterStringBasicArrayList) {
        BooleanFileVisitor_init(&this->base, filterStringBasicArrayList);
}

IncludeFileExtensionsBooleanFileVisitor* IncludeFileExtensionsBooleanFileVisitor_new(BasicArrayList* filterStringBasicArrayList) {
    IncludeFileExtensionsBooleanFileVisitor* this = calloc(1, sizeof(IncludeFileExtensionsBooleanFileVisitor));
    IncludeFileExtensionsBooleanFileVisitor_init(this, filterStringBasicArrayList);
    return this;
}


bool IncludeFileExtensionsBooleanFileVisitor_visit(IncludeFileExtensionsBooleanFileVisitor* this, AbFile* file) {
        if (JAVA_CALL(IncludeFileExtensionsBooleanFileVisitor_getFilterStringBasicArrayList(this), size) == 0) {
            return false;
        }
        return BooleanFileVisitor_visit((&this->base), file);
}


// Java overloaded method: C needs a different name
bool IncludeFileExtensionsBooleanFileVisitor_visit(IncludeFileExtensionsBooleanFileVisitor* this, AbFile* file, const char* fileNameString) {
        const char* fileNameAndExtension = AbFile_getPath(file);
        if (((int32_t) strlen(fileNameAndExtension)) > ((int32_t) strlen(fileNameString))) {
            int32_t startIndex = ((int32_t) strlen(fileNameAndExtension)) - ((int32_t) strlen(fileNameString));
            const char* fileName = java_substring(fileNameAndExtension, startIndex, (int32_t) strlen(fileNameAndExtension));
            if (strcmp(fileName, fileNameString) == 0) {
                return true;
            }
        }
        return false;
}

