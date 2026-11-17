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
// package org.allbinary.logic.io.file

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
// #include "java/io/FilenameFilter.h"
// #include "java/io/IOException.h"
// #include "java/net/URI.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/io/file/AbFileInterface.h"

typedef struct AbFile AbFile;
struct AbFile {
    AbFileInterface AbFileInterface_interface;
    File* file;
};

AbFile* AbFile_NULL_FILE;

AbFile* AbFile_new(File* file);
AbFile* AbFile_createAbFileWithChild(AbFile* file, const char* childPathName);
AbFile* AbFile_createAbFile(const char* filePath);
AbFile* AbFile_createAbFilePathAndName(const char* filePath, const char* fileName);
AbFile* AbFile_createAbFileFromAbPath(AbPath* abPath);
AbFile* AbFile_createAbFileFromRawPath(const char* filePath);

void AbFile_init(AbFile* this, File* file);
File* AbFile_getFile(AbFile* this);
const char* AbFile_getName(AbFile* this);
const char* AbFile_getParent(AbFile* this);
File* AbFile_getParentFile(AbFile* this);
const char* AbFile_getPath(AbFile* this);
bool AbFile_isAbsolute(AbFile* this);
const char* AbFile_getAbsolutePath(AbFile* this);
File* AbFile_getAbsoluteFile(AbFile* this);
const char* AbFile_getCanonicalPath(AbFile* this);
File* AbFile_getCanonicalFile(AbFile* this);
URI* AbFile_toURI(AbFile* this);
bool AbFile_canRead(AbFile* this);
bool AbFile_canWrite(AbFile* this);
bool AbFile_exists(AbFile* this);
bool AbFile_isDirectory(AbFile* this);
bool AbFile_isFile(AbFile* this);
bool AbFile_isHidden(AbFile* this);
int64_t AbFile_lastModified(AbFile* this);
int64_t AbFile_length(AbFile* this);
bool AbFile_createNewFile(AbFile* this);
bool AbFile_delete(AbFile* this);
void AbFile_deleteOnExit(AbFile* this);
const char** AbFile_list(AbFile* this);
const char** AbFile_listWithFilter(AbFile* this, FilenameFilter* filter);
Any** AbFile_listFiles(AbFile* this);
Any** AbFile_listFilesFileNameFilter(AbFile* this, FilenameFilter* filter);
Any** AbFile_listFilesFileFilter(AbFile* this, FileFilter* filter);
bool AbFile_mkdir(AbFile* this);
bool AbFile_mkdirs(AbFile* this);
bool AbFile_renameTo(AbFile* this, AbFile* dest);
bool AbFile_setLastModified(AbFile* this, int64_t time);
bool AbFile_setReadOnly(AbFile* this);
int32_t AbFile_compareTo(AbFile* this, File* pathname);
bool AbFile_equals(AbFile* this, Any* obj);
int32_t AbFile_hashCode(AbFile* this);
const char* AbFile_toString(AbFile* this);

// Static fields with runtime initializers: call this once at startup
void AbFile_staticInit(void) {
    AbFile_NULL_FILE = AbFile_createAbFileFromRawPath(StringUtil_getInstance()->EMPTY_STRING);
}

static void AbFile_initFields(AbFile* this) {
    
}


// throws Exception
AbFile* AbFile_createAbFileWithChild(AbFile* file, const char* childPathName) {
        return AbFile_new(File_new(AbFile_getFile(file), childPathName));
}


// throws Exception
AbFile* AbFile_createAbFile(const char* filePath) {
        return AbFile_new(File_new(AbPath_toFileSystemString(AbPath_new(filePath, StringUtil_getInstance()->EMPTY_STRING))));
}


// throws Exception
AbFile* AbFile_createAbFilePathAndName(const char* filePath, const char* fileName) {
        return AbFile_new(File_new(AbPath_toFileSystemString(AbPath_new(filePath, StringUtil_getInstance()->EMPTY_STRING)), fileName));
}


AbFile* AbFile_createAbFileFromAbPath(AbPath* abPath) {
        return AbFile_new(File_new(AbPath_toFileSystemString(abPath)));
}


AbFile* AbFile_createAbFileFromRawPath(const char* filePath) {
        return AbFile_new(File_new(filePath));
}


void AbFile_init(AbFile* this, File* file) {
    AbFile_initFields(this);
        this->file = file;
}

AbFile* AbFile_new(File* file) {
    AbFile* this = calloc(1, sizeof(AbFile));
    AbFile_init(this, file);
    return this;
}


File* AbFile_getFile(AbFile* this) {
        return this->file;
}


const char* AbFile_getName(AbFile* this) {
        return AbFile_getName(this->file);
}


const char* AbFile_getParent(AbFile* this) {
        return AbFile_getParent(this->file);
}


File* AbFile_getParentFile(AbFile* this) {
        return AbFile_getParentFile(this->file);
}


const char* AbFile_getPath(AbFile* this) {
        return AbFile_getPath(this->file);
}


bool AbFile_isAbsolute(AbFile* this) {
        return AbFile_isAbsolute(this->file);
}


const char* AbFile_getAbsolutePath(AbFile* this) {
        return AbFile_getAbsolutePath(this->file);
}


File* AbFile_getAbsoluteFile(AbFile* this) {
        return AbFile_getAbsoluteFile(this->file);
}


// throws IOException
const char* AbFile_getCanonicalPath(AbFile* this) {
        return AbFile_getCanonicalPath(this->file);
}


// throws IOException
File* AbFile_getCanonicalFile(AbFile* this) {
        return AbFile_getCanonicalFile(this->file);
}


URI* AbFile_toURI(AbFile* this) {
        return AbFile_toURI(this->file);
}


bool AbFile_canRead(AbFile* this) {
        return AbFile_canRead(this->file);
}


bool AbFile_canWrite(AbFile* this) {
        return AbFile_canWrite(this->file);
}


bool AbFile_exists(AbFile* this) {
        return AbFile_exists(this->file);
}


bool AbFile_isDirectory(AbFile* this) {
        return AbFile_isDirectory(this->file);
}


bool AbFile_isFile(AbFile* this) {
        return AbFile_isFile(this->file);
}


bool AbFile_isHidden(AbFile* this) {
        return AbFile_isHidden(this->file);
}


int64_t AbFile_lastModified(AbFile* this) {
        return AbFile_lastModified(this->file);
}


int64_t AbFile_length(AbFile* this) {
        return ((int64_t) AbFile_length(this->file));
}


// throws IOException
bool AbFile_createNewFile(AbFile* this) {
        return AbFile_createNewFile(this->file);
}


// throws IOException
bool AbFile_delete(AbFile* this) {
        return AbFile_delete(this->file);
}


void AbFile_deleteOnExit(AbFile* this) {
        AbFile_deleteOnExit(this->file);
}


const char** AbFile_list(AbFile* this) {
        return AbFile_list(this->file);
}


const char** AbFile_listWithFilter(AbFile* this, FilenameFilter* filter) {
        return AbFile_list(this->file, filter);
}


Any** AbFile_listFiles(AbFile* this) {
        return ((Any**) AbFile_listFiles(this->file));
}


Any** AbFile_listFilesFileNameFilter(AbFile* this, FilenameFilter* filter) {
        return ((Any**) AbFile_listFiles(this->file, filter));
}


Any** AbFile_listFilesFileFilter(AbFile* this, FileFilter* filter) {
        return ((Any**) AbFile_listFiles(this->file, filter));
}


bool AbFile_mkdir(AbFile* this) {
        return AbFile_mkdir(this->file);
}


bool AbFile_mkdirs(AbFile* this) {
        return AbFile_mkdirs(this->file);
}


bool AbFile_renameTo(AbFile* this, AbFile* dest) {
        return AbFile_renameTo(this->file, AbFile_getFile(dest));
}


bool AbFile_setLastModified(AbFile* this, int64_t time) {
        return AbFile_setLastModified(this->file, time);
}


bool AbFile_setReadOnly(AbFile* this) {
        return AbFile_setReadOnly(this->file);
}


int32_t AbFile_compareTo(AbFile* this, File* pathname) {
        return AbFile_compareTo(this->file, pathname);
}


bool AbFile_equals(AbFile* this, Any* obj) {
        return TsUtil_equalsNotstring(TsUtil_getInstance(), this->file, obj);
}


int32_t AbFile_hashCode(AbFile* this) {
        return AbFile_hashCode(this->file);
}


const char* AbFile_toString(AbFile* this) {
        return AbFile_toString(this->file);
}

