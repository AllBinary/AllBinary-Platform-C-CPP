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
#include "org/allbinary/logic/io/file/directory/DirectoryBooleanFileVisitor.h"
#include "org/allbinary/logic/io/file/directory/DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor.h"
#include "org/allbinary/logic/io/file/directory/DirectoryOrIncludeFileExtensionBooleanFileVisitor.h"
#include "org/allbinary/logic/io/file/directory/SubDirectory.h"
#include "org/allbinary/logic/io/file/filter/VisitorFileFilter.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct FileListFetcher FileListFetcher;
struct FileListFetcher {
    SubDirectory* subDirectory;
};

static FileListFetcher* FileListFetcher_instance;

FileListFetcher* FileListFetcher_new(void);
FileListFetcher* FileListFetcher_getInstance(void);
BasicArrayList* FileListFetcher_getFiles(FileListFetcher* this, const char* path);
BasicArrayList* FileListFetcher_getFiles(FileListFetcher* this, const char* path, const char** includeExtensions);
BasicArrayList* FileListFetcher_getFiles(FileListFetcher* this, const char* path, const char* includeExtension);
BasicArrayList* FileListFetcher_getFiles(FileListFetcher* this, const char* path, const char* pathIncludes, const char* includeExtension);
BasicArrayList* FileListFetcher_getTrackedFiles(FileListFetcher* this, const char* path, const char** includeExtensions);
BasicArrayList* FileListFetcher_getTrackedFiles(FileListFetcher* this, const char* path, const char* includeExtension);
BasicArrayList* FileListFetcher_getDirectories(FileListFetcher* this, const char* path);

// Static fields with runtime initializers: call this once at startup
void FileListFetcher_staticInit(void) {
    FileListFetcher_instance = FileListFetcher_new();
}

static void FileListFetcher_initFields(FileListFetcher* this) {
    this->subDirectory = SubDirectory_getInstance();
}

void FileListFetcher_init(FileListFetcher* this) {
    FileListFetcher_initFields(this);
}

FileListFetcher* FileListFetcher_new(void) {
    FileListFetcher* this = calloc(1, sizeof(FileListFetcher));
    FileListFetcher_init(this);
    return this;
}


FileListFetcher* FileListFetcher_getInstance(void) {
        return FileListFetcher_instance;
}


BasicArrayList* FileListFetcher_getFiles(FileListFetcher* this, const char* path) {
        JAVA_TRY {
            BasicArrayList* files = SubDirectory_search(this->subDirectory, AbFile_createAbFile(path));
            return files;
        } JAVA_CATCH(Exception, e) {
            java_print_exception(e);
            puts(java_string_of(java_concat(java_concat(java_concat("Error: ", java_string_of(e)), "\nMsg: "), java_exception_message(e))));
        } JAVA_END_TRY;
        return nullptr;
}


// Java overloaded method: C needs a different name
BasicArrayList* FileListFetcher_getFiles(FileListFetcher* this, const char* path, const char** includeExtensions) {
        JAVA_TRY {
            BasicArrayList* includeExtensionBasicArrayList = BasicArrayListD_new();
            int32_t size = java_array_length(includeExtensions);
            for (int32_t index = 0; index < size; index++) {
                BasicArrayList_add(includeExtensionBasicArrayList, includeExtensions[index]);
            }
            VisitorFileFilter* visitorFileFilter = VisitorFileFilter_new(DirectoryOrIncludeFileExtensionBooleanFileVisitor_new(includeExtensionBasicArrayList));
            BasicArrayList* files = SubDirectory_search(this->subDirectory, visitorFileFilter, AbFile_createAbFile(path));
            return files;
        } JAVA_CATCH(Exception, e) {
            java_print_exception(e);
            puts(java_string_of(java_concat(java_concat(java_concat("Error: ", java_string_of(e)), "\nMsg: "), java_exception_message(e))));
        } JAVA_END_TRY;
        return nullptr;
}


// Java overloaded method: C needs a different name
BasicArrayList* FileListFetcher_getFiles(FileListFetcher* this, const char* path, const char* includeExtension) {
        JAVA_TRY {
            BasicArrayList* includeExtensionBasicArrayList = BasicArrayListD_new();
            BasicArrayList_add(includeExtensionBasicArrayList, includeExtension);
            VisitorFileFilter* visitorFileFilter = VisitorFileFilter_new(DirectoryOrIncludeFileExtensionBooleanFileVisitor_new(includeExtensionBasicArrayList));
            BasicArrayList* files = SubDirectory_search(this->subDirectory, visitorFileFilter, AbFile_createAbFile(path));
            return files;
        } JAVA_CATCH(Exception, e) {
            java_print_exception(e);
            puts(java_string_of(java_concat(java_concat(java_concat("Error: ", java_string_of(e)), "\nMsg: "), java_exception_message(e))));
        } JAVA_END_TRY;
        return nullptr;
}


// Java overloaded method: C needs a different name
BasicArrayList* FileListFetcher_getFiles(FileListFetcher* this, const char* path, const char* pathIncludes, const char* includeExtension) {
        JAVA_TRY {
            BasicArrayList* includeExtensionBasicArrayList = BasicArrayListD_new();
            BasicArrayList_add(includeExtensionBasicArrayList, includeExtension);
            VisitorFileFilter* visitorFileFilter = VisitorFileFilter_new(DirectoryOrIncludeFileExtensionBooleanFileVisitor_new(includeExtensionBasicArrayList, pathIncludes));
            BasicArrayList* files = SubDirectory_search(this->subDirectory, visitorFileFilter, AbFile_createAbFile(path));
            return files;
        } JAVA_CATCH(Exception, e) {
            java_print_exception(e);
            puts(java_string_of(java_concat(java_concat(java_concat("Error: ", java_string_of(e)), "\nMsg: "), java_exception_message(e))));
        } JAVA_END_TRY;
        return nullptr;
}


BasicArrayList* FileListFetcher_getTrackedFiles(FileListFetcher* this, const char* path, const char** includeExtensions) {
        JAVA_TRY {
            BasicArrayList* includeExtensionBasicArrayList = BasicArrayListD_new();
            int32_t size = java_array_length(includeExtensions);
            for (int32_t index = 0; index < size; index++) {
                BasicArrayList_add(includeExtensionBasicArrayList, includeExtensions[index]);
            }
            VisitorFileFilter* visitorFileFilter = VisitorFileFilter_new(DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_new(includeExtensionBasicArrayList));
            BasicArrayList* files = SubDirectory_search(this->subDirectory, visitorFileFilter, AbFile_createAbFile(path));
            return files;
        } JAVA_CATCH(Exception, e) {
            java_print_exception(e);
            puts(java_string_of(java_concat(java_concat(java_concat("Error: ", java_string_of(e)), "\nMsg: "), java_exception_message(e))));
        } JAVA_END_TRY;
        return nullptr;
}


// Java overloaded method: C needs a different name
BasicArrayList* FileListFetcher_getTrackedFiles(FileListFetcher* this, const char* path, const char* includeExtension) {
        JAVA_TRY {
            BasicArrayList* includeExtensionBasicArrayList = BasicArrayListD_new();
            BasicArrayList_add(includeExtensionBasicArrayList, includeExtension);
            VisitorFileFilter* visitorFileFilter = VisitorFileFilter_new(DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_new(includeExtensionBasicArrayList));
            BasicArrayList* files = SubDirectory_search(this->subDirectory, visitorFileFilter, AbFile_createAbFile(path));
            return files;
        } JAVA_CATCH(Exception, e) {
            java_print_exception(e);
            puts(java_string_of(java_concat(java_concat(java_concat("Error: ", java_string_of(e)), "\nMsg: "), java_exception_message(e))));
        } JAVA_END_TRY;
        return nullptr;
}


BasicArrayList* FileListFetcher_getDirectories(FileListFetcher* this, const char* path) {
        JAVA_TRY {
            VisitorFileFilter* visitorFileFilter = VisitorFileFilter_new(DirectoryBooleanFileVisitor_new());
            BasicArrayList* files = SubDirectory_search(this->subDirectory, visitorFileFilter, AbFile_createAbFile(path));
            return files;
        } JAVA_CATCH(Exception, e) {
            java_print_exception(e);
            puts(java_string_of(java_concat(java_concat(java_concat("Error: ", java_string_of(e)), "\nMsg: "), java_exception_message(e))));
        } JAVA_END_TRY;
        return nullptr;
}

