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
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/FileFactory.h"
#include "org/allbinary/logic/io/file/FileWrapperUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct Directory Directory;
struct Directory {
    char unused;
};

static Directory* Directory_instance;

Directory* Directory_new(void);
Directory* Directory_getInstance(void);

void Directory_init(Directory* this);
bool Directory_create(Directory* this, AbPath* directoryAbPath);
void Directory_remove(Directory* this, AbPath* existingDirectoryAbPath);
static bool Directory_create(Directory* this, const char* directory);
static void Directory_remove(Directory* this, const char* existingDirectory);
BasicArrayList* Directory_search(Directory* this, FileFilter* fileFilter, AbFile* file);
BasicArrayList* Directory_search(Directory* this, FileFilter* fileFilter, AbFile* file, bool isRecursiveSearch);
BasicArrayList* Directory_search(Directory* this, AbFile* file);
BasicArrayList* Directory_search(Directory* this, AbFile* file, bool isRecursiveSearch);
BasicArrayList* Directory_search(Directory* this, const char* searchValue, AbFile* file);
BasicArrayList* Directory_search(Directory* this, const char* searchValue, AbFile* file, bool isRecursiveSearch);
BasicArrayList* Directory_search(Directory* this, int32_t level, AbFile* file);
BasicArrayList* Directory_search(Directory* this, int32_t level, AbFile* file, bool isRecursiveSearch);

// Static fields with runtime initializers: call this once at startup
void Directory_staticInit(void) {
    Directory_instance = Directory_new();
}


Directory* Directory_getInstance(void) {
        return Directory_instance;
}


void Directory_init(Directory* this) {
}

Directory* Directory_new(void) {
    Directory* this = calloc(1, sizeof(Directory));
    Directory_init(this);
    return this;
}


bool Directory_create(Directory* this, AbPath* directoryAbPath) {
        return Directory_create(this, AbPath_toFileSystemString(directoryAbPath));
}


// throws Exception
void Directory_remove(Directory* this, AbPath* existingDirectoryAbPath) {
        Directory_remove(this, AbPath_toFileSystemString(existingDirectoryAbPath));
}


// Java overloaded method: C needs a different name
static bool Directory_create(Directory* this, const char* directory) {
        JAVA_TRY {
            AbFile* directoryFile = FileFactory_getInstance(FileFactory_getInstance(), directory);
            if (!AbFile_isDirectory(directoryFile)) {
                PreLogUtil_put(java_concat("Creating Directories: ", directory), this, "create");
                if (!AbFile_mkdirs(directoryFile)) {
                    return false;
                }
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE(java_concat("Error Creating Directories: ", directory), this, "create", e);
            return false;
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
static void Directory_remove(Directory* this, const char* existingDirectory) {
        AbFile* existingDirectoryFile = FileFactory_getInstance(FileFactory_getInstance(), existingDirectory);
        if (AbFile_isDirectory(existingDirectoryFile)) {
            if (java_array_length(AbFile_list(existingDirectoryFile)) > 0) {
                java_throw(java_exception_new("Exception", java_concat(java_concat("Did not remove category: ", existingDirectory), " because files exist")));
            } else if (AbFile_delete(existingDirectoryFile)) {
                PreLogUtil_put(java_concat("Successfully Removed: ", existingDirectory), "Directory", "remove");
            }
        } else {
            java_throw(java_exception_new("Exception", java_concat("Category Directory Is Missing:", existingDirectory)));
        }
}


BasicArrayList* Directory_search(Directory* this, FileFilter* fileFilter, AbFile* file) {
        return Directory_search(this, fileFilter, file, false);
}


// Java overloaded method: C needs a different name
BasicArrayList* Directory_search(Directory* this, FileFilter* fileFilter, AbFile* file, bool isRecursiveSearch) {
        BasicArrayList* fileList = BasicArrayListD_new();
        BasicArrayList* recursiveFileList = nullptr;
        if (AbFile_isDirectory(file)) {
            Any** fileArray = AbFile_listFilesFileFilter(file, fileFilter);
            if (fileArray == nullptr) {
                return fileList;
            }
            AbFile** files = FileWrapperUtil_wrapFiles(fileArray);
            if (files == nullptr) {
                return fileList;
            }
            int32_t size = java_array_length(files);
            for (int32_t index = 0; index < size; index++) {
                BasicArrayList_add(fileList, files[index]);
                if (isRecursiveSearch) {
                    recursiveFileList = Directory_search(this, fileFilter, files[index], isRecursiveSearch);
                    BasicArrayList_addAllList(fileList, recursiveFileList);
                }
            }
        }
        return fileList;
}


// Java overloaded method: C needs a different name
BasicArrayList* Directory_search(Directory* this, AbFile* file) {
        return Directory_search(this, file, false);
}


// Java overloaded method: C needs a different name
BasicArrayList* Directory_search(Directory* this, AbFile* file, bool isRecursiveSearch) {
        BasicArrayList* fileList = BasicArrayListD_new();
        BasicArrayList* recursiveFileList = nullptr;
        if (AbFile_isDirectory(file)) {
            Any** fileArray = AbFile_listFiles(file);
            if (fileArray == nullptr) {
                return fileList;
            }
            AbFile** files = FileWrapperUtil_wrapFiles(fileArray);
            if (files == nullptr) {
                return fileList;
            }
            for (int32_t index = 0; index < java_array_length(files); index++) {
                BasicArrayList_add(fileList, files[index]);
                if (isRecursiveSearch) {
                    recursiveFileList = Directory_search(this, files[index], isRecursiveSearch);
                    BasicArrayList_addAllList(fileList, recursiveFileList);
                }
            }
        }
        return fileList;
}


// Java overloaded method: C needs a different name
BasicArrayList* Directory_search(Directory* this, const char* searchValue, AbFile* file) {
        return Directory_search(this, searchValue, file, false);
}


// Java overloaded method: C needs a different name
BasicArrayList* Directory_search(Directory* this, const char* searchValue, AbFile* file, bool isRecursiveSearch) {
        BasicArrayList* fileList = BasicArrayListD_new();
        BasicArrayList* recursiveFileList = nullptr;
        if (AbFile_isDirectory(file)) {
            Any** fileArray = AbFile_listFiles(file);
            if (fileArray == nullptr) {
                return fileList;
            }
            AbFile** files = FileWrapperUtil_wrapFiles(fileArray);
            if (files == nullptr) {
                return fileList;
            }
            for (int32_t index = 0; index < java_array_length(files); index++) {
                if (JAVA_CALL(JAVA_CALL(files[index], getPath), indexOf, searchValue) >= 0) {
                    BasicArrayList_add(fileList, files[index]);
                }
                if (isRecursiveSearch) {
                    recursiveFileList = Directory_search(this, searchValue, files[index], isRecursiveSearch);
                    BasicArrayList_addAllList(fileList, recursiveFileList);
                }
            }
        }
        return fileList;
}


// Java overloaded method: C needs a different name
BasicArrayList* Directory_search(Directory* this, int32_t level, AbFile* file) {
        return Directory_search(this, level, file, false);
}


// Java overloaded method: C needs a different name
BasicArrayList* Directory_search(Directory* this, int32_t level, AbFile* file, bool isRecursiveSearch) {
        BasicArrayList* fileList = BasicArrayListD_new();
        BasicArrayList* recursiveFileList = nullptr;
        if (AbFile_isDirectory(file)) {
            Any** fileArray = AbFile_listFiles(file);
            if (fileArray == nullptr) {
                return fileList;
            }
            AbFile** files = FileWrapperUtil_wrapFiles(fileArray);
            if (files == nullptr) {
                return fileList;
            }
            for (int32_t index = 0; index < java_array_length(files); index++) {
                BasicArrayList_add(fileList, files[index]);
                if (level <= 0) {
                    return fileList;
                }
                recursiveFileList = Directory_search(this, level - 1, files[index], isRecursiveSearch);
                BasicArrayList_addAllList(fileList, recursiveFileList);
            }
        }
        return fileList;
}

