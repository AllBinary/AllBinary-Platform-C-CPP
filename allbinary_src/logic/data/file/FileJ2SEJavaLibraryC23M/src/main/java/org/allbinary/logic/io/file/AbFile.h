#ifndef ORG_ALLBINARY_LOGIC_IO_FILE_ABFILE_H
#define ORG_ALLBINARY_LOGIC_IO_FILE_ABFILE_H
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
typedef struct AbFileInterface AbFileInterface;
typedef struct TsUtil TsUtil;
typedef struct AbPath AbPath;
typedef struct StringUtil StringUtil;
#include "java/io/File.h"
#include "java/io/FileFilter.h"
#include "java/io/FilenameFilter.h"
#include "java/io/IOException.h"
#include "java/net/URI.h"
#include "org/allbinary/logic/io/file/AbFileInterface.h"

typedef struct AbFile AbFile;
struct AbFile {
    AbFileInterface AbFileInterface_interface;
    File* file;
};

extern AbFile* AbFile_NULL_FILE;

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

void* AbFile_getParentFile(AbFile* this);

const char* AbFile_getPath(AbFile* this);

bool AbFile_isAbsolute(AbFile* this);

const char* AbFile_getAbsolutePath(AbFile* this);

void* AbFile_getAbsoluteFile(AbFile* this);

const char* AbFile_getCanonicalPath(AbFile* this);

void* AbFile_getCanonicalFile(AbFile* this);

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

void** AbFile_listFiles(AbFile* this);

void** AbFile_listFilesFileNameFilter(AbFile* this, FilenameFilter* filter);

void** AbFile_listFilesFileFilter(AbFile* this, FileFilter* filter);

bool AbFile_mkdir(AbFile* this);

bool AbFile_mkdirs(AbFile* this);

bool AbFile_renameTo(AbFile* this, AbFile* dest);

bool AbFile_setLastModified(AbFile* this, int64_t time);

bool AbFile_setReadOnly(AbFile* this);

bool AbFile_setWritable3(AbFile* this, bool writable, bool ownerOnly);

bool AbFile_setWritable2(AbFile* this, bool writable);

bool AbFile_setReadable3(AbFile* this, bool readable, bool ownerOnly);

bool AbFile_setReadable2(AbFile* this, bool readable);

bool AbFile_setExecutable3(AbFile* this, bool executable, bool ownerOnly);

bool AbFile_setExecutable2(AbFile* this, bool executable);

bool AbFile_canExecute(AbFile* this);

int64_t AbFile_getTotalSpace(AbFile* this);

int64_t AbFile_getFreeSpace(AbFile* this);

int64_t AbFile_getUsableSpace(AbFile* this);

int32_t AbFile_compareTo(AbFile* this, File* pathname);

bool AbFile_equals(AbFile* this, void* obj);

int32_t AbFile_hashCode(AbFile* this);

const char* AbFile_toString(AbFile* this);
#define AbFile_setWritable(...) JAVA_OVERLOADED(AbFile_setWritable, __VA_ARGS__)
#define AbFile_setReadable(...) JAVA_OVERLOADED(AbFile_setReadable, __VA_ARGS__)
#define AbFile_setExecutable(...) JAVA_OVERLOADED(AbFile_setExecutable, __VA_ARGS__)
#define AbFile_new1 AbFile_new
#define AbFile_init1 AbFile_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AbFile_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AbFile_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_FILE_ABFILE_H
