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
// #include "java/io/FileFilter.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct SubDirectory SubDirectory;
struct SubDirectory {
    Directory* directory;
};

static SubDirectory* SubDirectory_instance;

SubDirectory* SubDirectory_new(void);
SubDirectory* SubDirectory_getInstance(void);

void SubDirectory_init(SubDirectory* this);
BasicArrayList* SubDirectory_search(SubDirectory* this, FileFilter* fileFilter, AbFile* file);
BasicArrayList* SubDirectory_search(SubDirectory* this, AbFile* file);
BasicArrayList* SubDirectory_search(SubDirectory* this, const char* searchValue, AbFile* file);
BasicArrayList* SubDirectory_search(SubDirectory* this, int32_t level, AbFile* file);
const char* SubDirectory_toString(BasicArrayList* files);

// Static fields with runtime initializers: call this once at startup
void SubDirectory_staticInit(void) {
    SubDirectory_instance = SubDirectory_new();
}

static void SubDirectory_initFields(SubDirectory* this) {
    this->directory = Directory_getInstance();
}


SubDirectory* SubDirectory_getInstance(void) {
        return SubDirectory_instance;
}


void SubDirectory_init(SubDirectory* this) {
    SubDirectory_initFields(this);
}

SubDirectory* SubDirectory_new(void) {
    SubDirectory* this = calloc(1, sizeof(SubDirectory));
    SubDirectory_init(this);
    return this;
}


BasicArrayList* SubDirectory_search(SubDirectory* this, FileFilter* fileFilter, AbFile* file) {
        return Directory_search(this->directory, fileFilter, file, true);
}


// Java overloaded method: C needs a different name
BasicArrayList* SubDirectory_search(SubDirectory* this, AbFile* file) {
        return Directory_search(this->directory, file, true);
}


// Java overloaded method: C needs a different name
BasicArrayList* SubDirectory_search(SubDirectory* this, const char* searchValue, AbFile* file) {
        return Directory_search(this->directory, searchValue, file, true);
}


// Java overloaded method: C needs a different name
BasicArrayList* SubDirectory_search(SubDirectory* this, int32_t level, AbFile* file) {
        return Directory_search(this->directory, level, file, true);
}


const char* SubDirectory_toString(BasicArrayList* files) {
        StringMaker* stringBuffer = StringMaker_new();
        const char* NEW_LINE = CommonSeps_getInstance()->NEW_LINE;
        int32_t size = BasicArrayList_size(files);
        for (int32_t index = 0; index < size; index++) {
            AbFile* file = ((AbFile*) BasicArrayList_get(files, index));
            StringMaker_append(stringBuffer, AbFile_getPath(file));
            StringMaker_append(stringBuffer, NEW_LINE);
        }
        return StringMaker_toString(stringBuffer);
}

