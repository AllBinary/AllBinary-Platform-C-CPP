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
// package org.allbinary.data.tree.dom

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tables/TableMappingInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/FileData.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/io/path/PathUtil.h"

typedef struct FileTableMapping FileTableMapping;
struct FileTableMapping {
    TableMappingInterface TableMappingInterface_interface;
    AbFile* file;
};


FileTableMapping* FileTableMapping_new(AbFile* file);

void FileTableMapping_init(FileTableMapping* this, AbFile* file);
Any* FileTableMapping_getKey(FileTableMapping* this);
BasicArrayList* FileTableMapping_toVector(FileTableMapping* this);
HashMap* FileTableMapping_toHashMap(FileTableMapping* this);

static void FileTableMapping_initFields(FileTableMapping* this) {
    
}


void FileTableMapping_init(FileTableMapping* this, AbFile* file) {
    FileTableMapping_initFields(this);
        this->file = file;
}

FileTableMapping* FileTableMapping_new(AbFile* file) {
    FileTableMapping* this = calloc(1, sizeof(FileTableMapping));
    FileTableMapping_init(this, file);
    return this;
}


// throws Exception
Any* FileTableMapping_getKey(FileTableMapping* this) {
        return ((Any*) AbFile_getPath(this->file));
}


// throws Exception
BasicArrayList* FileTableMapping_toVector(FileTableMapping* this) {
        BasicArrayList* filePropertyVector = BasicArrayListD_new();
        BasicArrayList_add(filePropertyVector, AbFile_getAbsolutePath(this->file));
        BasicArrayList_add(filePropertyVector, AbFile_getCanonicalPath(this->file));
        BasicArrayList_add(filePropertyVector, AbFile_getName(this->file));
        BasicArrayList_add(filePropertyVector, AbFile_getParent(this->file));
        BasicArrayList_add(filePropertyVector, AbFile_getPath(this->file));
        return filePropertyVector;
}


// throws Exception
HashMap* FileTableMapping_toHashMap(FileTableMapping* this) {
        HashMap* filePropertyHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        AbPathData* pathData = AbPathData_getInstance();
        PathUtil* pathUtil = PathUtil_getInstance();
        const char* rootFileName = AbPathData_getNameFromPath(pathData, PathUtil_getWithoutExtension(pathUtil, AbFile_getPath(this->file)));
        FileData* fileData = FileData_getInstance();
        HashMap_put(filePropertyHashMap, fileData->ROOT_NAME, rootFileName);
        HashMap_put(filePropertyHashMap, fileData->ISFILE, JAVA_CALL(java_string_of(AbFile_isFile(this->file)), toString));
        HashMap_put(filePropertyHashMap, fileData->ISDIRECTORY, JAVA_CALL(java_string_of(AbFile_isDirectory(this->file)), toString));
        HashMap_put(filePropertyHashMap, fileData->ISHIDDEN, JAVA_CALL(java_string_of(AbFile_isHidden(this->file)), toString));
        HashMap_put(filePropertyHashMap, fileData->ISABSOLUTE, JAVA_CALL(java_string_of(AbFile_isAbsolute(this->file)), toString));
        HashMap_put(filePropertyHashMap, fileData->ABSOLUTE_PATH, AbFile_getAbsolutePath(this->file));
        HashMap_put(filePropertyHashMap, fileData->CANONICAL_PATH, AbFile_getCanonicalPath(this->file));
        HashMap_put(filePropertyHashMap, fileData->NAME, AbFile_getName(this->file));
        HashMap_put(filePropertyHashMap, fileData->PARENT, AbFile_getParent(this->file));
        HashMap_put(filePropertyHashMap, fileData->PATH, AbFile_getPath(this->file));
        return filePropertyHashMap;
}

