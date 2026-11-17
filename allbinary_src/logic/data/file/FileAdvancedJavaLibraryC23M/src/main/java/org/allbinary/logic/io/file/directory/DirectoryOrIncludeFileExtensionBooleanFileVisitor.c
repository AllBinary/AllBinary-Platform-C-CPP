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
#include "org/allbinary/logic/io/file/visitor/IncludeFileExtensionsBooleanFileVisitor.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct DirectoryOrIncludeFileExtensionBooleanFileVisitor DirectoryOrIncludeFileExtensionBooleanFileVisitor;
struct DirectoryOrIncludeFileExtensionBooleanFileVisitor {
    IncludeFileExtensionsBooleanFileVisitor base;
    const char* includesString;
};


DirectoryOrIncludeFileExtensionBooleanFileVisitor* DirectoryOrIncludeFileExtensionBooleanFileVisitor_new(BasicArrayList* filterStringBasicArrayList);

void DirectoryOrIncludeFileExtensionBooleanFileVisitor_init(DirectoryOrIncludeFileExtensionBooleanFileVisitor* this, BasicArrayList* filterStringBasicArrayList);

DirectoryOrIncludeFileExtensionBooleanFileVisitor* DirectoryOrIncludeFileExtensionBooleanFileVisitor_new2(BasicArrayList* filterStringBasicArrayList, const char* includesString);
void DirectoryOrIncludeFileExtensionBooleanFileVisitor_init2(DirectoryOrIncludeFileExtensionBooleanFileVisitor* this, BasicArrayList* filterStringBasicArrayList, const char* includesString);
bool DirectoryOrIncludeFileExtensionBooleanFileVisitor_visit(DirectoryOrIncludeFileExtensionBooleanFileVisitor* this, AbFile* file);

static void DirectoryOrIncludeFileExtensionBooleanFileVisitor_initFields(DirectoryOrIncludeFileExtensionBooleanFileVisitor* this) {
    
}


void DirectoryOrIncludeFileExtensionBooleanFileVisitor_init(DirectoryOrIncludeFileExtensionBooleanFileVisitor* this, BasicArrayList* filterStringBasicArrayList) {
        IncludeFileExtensionsBooleanFileVisitor_init(&this->base, filterStringBasicArrayList);
        DirectoryOrIncludeFileExtensionBooleanFileVisitor_initFields(this);
        this->includesString = nullptr;
}

DirectoryOrIncludeFileExtensionBooleanFileVisitor* DirectoryOrIncludeFileExtensionBooleanFileVisitor_new(BasicArrayList* filterStringBasicArrayList) {
    DirectoryOrIncludeFileExtensionBooleanFileVisitor* this = calloc(1, sizeof(DirectoryOrIncludeFileExtensionBooleanFileVisitor));
    DirectoryOrIncludeFileExtensionBooleanFileVisitor_init(this, filterStringBasicArrayList);
    return this;
}


void DirectoryOrIncludeFileExtensionBooleanFileVisitor_init2(DirectoryOrIncludeFileExtensionBooleanFileVisitor* this, BasicArrayList* filterStringBasicArrayList, const char* includesString) {
        IncludeFileExtensionsBooleanFileVisitor_init(&this->base, filterStringBasicArrayList);
        DirectoryOrIncludeFileExtensionBooleanFileVisitor_initFields(this);
        this->includesString = includesString;
}

DirectoryOrIncludeFileExtensionBooleanFileVisitor* DirectoryOrIncludeFileExtensionBooleanFileVisitor_new2(BasicArrayList* filterStringBasicArrayList, const char* includesString) {
    DirectoryOrIncludeFileExtensionBooleanFileVisitor* this = calloc(1, sizeof(DirectoryOrIncludeFileExtensionBooleanFileVisitor));
    DirectoryOrIncludeFileExtensionBooleanFileVisitor_init2(this, filterStringBasicArrayList, includesString);
    return this;
}


bool DirectoryOrIncludeFileExtensionBooleanFileVisitor_visit(DirectoryOrIncludeFileExtensionBooleanFileVisitor* this, AbFile* file) {
        if (AbFile_isDirectory(file)) {
            return true;
        }
        if (this->includesString == nullptr || JAVA_CALL(AbFile_getAbsolutePath(file), indexOf, this->includesString) >= 0) {
            return IncludeFileExtensionsBooleanFileVisitor_visit((&this->base), file);
        } else {
            return false;
        }
}

