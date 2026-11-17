/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2026 AllBinary 
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
// package org.allbinary.java.runtime.process.git

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/File.h"
// #include "java/io/IOException.h"
// #include "java/nio/charset/StandardCharsets.h"
// #include "java/util/ArrayList.h"
// #include "java/util/List.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/AbFileNativeUtil.h"
#include "org/allbinary/logic/io/file/directory/TrackedStrings.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"

//Do not use this instead just skip target, build, Application paths.
typedef struct GitProcessHelper GitProcessHelper;
struct GitProcessHelper {
    TrackedStrings* trackedStrings;
};

static GitProcessHelper* GitProcessHelper_instance;

GitProcessHelper* GitProcessHelper_new(void);
GitProcessHelper* GitProcessHelper_getInstance(void);

void GitProcessHelper_init(GitProcessHelper* this);
List* GitProcessHelper_trackedFiles(GitProcessHelper* this, const char* rootAsString, const char* pathspec);
List* GitProcessHelper_trackedFiles(GitProcessHelper* this, const char* rootAsString, const char* pathspec, const char* suffix);
bool GitProcessHelper_isTracked(GitProcessHelper* this, AbFile* file);

// Static fields with runtime initializers: call this once at startup
void GitProcessHelper_staticInit(void) {
    GitProcessHelper_instance = GitProcessHelper_new();
}

static void GitProcessHelper_initFields(GitProcessHelper* this) {
    this->trackedStrings = TrackedStrings_getInstance();
}


GitProcessHelper* GitProcessHelper_getInstance(void) {
        return GitProcessHelper_instance;
}


void GitProcessHelper_init(GitProcessHelper* this) {
    GitProcessHelper_initFields(this);
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        const char* THIS_IS_SLOW = "This is slow consider path exclusion instead";
        LogUtil_putF(logUtil, THIS_IS_SLOW, this, commonStrings->CONSTRUCTOR);
}

GitProcessHelper* GitProcessHelper_new(void) {
    GitProcessHelper* this = calloc(1, sizeof(GitProcessHelper));
    GitProcessHelper_init(this);
    return this;
}


// throws IOException, InterruptedException
List* GitProcessHelper_trackedFiles(GitProcessHelper* this, const char* rootAsString, const char* pathspec) {
        return GitProcessHelper_trackedFiles(this, rootAsString, pathspec, ".java");
}


// throws IOException, InterruptedException
// Java overloaded method: C needs a different name
List* GitProcessHelper_trackedFiles(GitProcessHelper* this, const char* rootAsString, const char* pathspec, const char* suffix) {
        Process* process = JAVA_CALL(ProcessBuilder_redirectError(ProcessBuilder_new(this->trackedStrings->GIT_COMMAND, this->trackedStrings->CHANGE_DIRECTORY_OPTION, rootAsString, this->trackedStrings->LIST_FILES_COMMAND, this->trackedStrings->SEP_BY_NULL_CHAR_INSTEAD_OF_NEW_LINE, this->trackedStrings->PATHSPEC_SEPARATOR, pathspec), ProcessBuilder_Redirect->INHERIT), start);
        int8_t* output = JAVA_CALL(Process_getInputStream(process), readAllBytes);
        int32_t exitCode = Process_waitFor(process);
        if (exitCode != 0) {
            java_throw(java_exception_new("IllegalStateException", JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "git ls-files failed for "), append, rootAsString), append, " with exit code "), appendint, exitCode), toString)));
        }
        List* files = ArrayList_new();
        int32_t start = 0;
        const char* relativePath = nullptr;
        for (int32_t index = 0; index < java_array_length(output); index++) {
            if (((int32_t) output[index]) == 0) {
                relativePath = java_string_new(output, start, index - start, StandardCharsets_UTF_8);
                if (java_string_endsWith(relativePath, suffix)) {
                    List_add(files, relativePath);
                }
                start = index + 1;
            }
        }
        return files;
}


bool GitProcessHelper_isTracked(GitProcessHelper* this, AbFile* file) {
        JAVA_TRY {
            File* nativeFile = AbFileNativeUtil_get(file);
            File* parentFile = File_getParentFile(nativeFile);
            Process* process = JAVA_CALL(ProcessBuilder_redirectErrorStream(ProcessBuilder_new(this->trackedStrings->GIT_COMMAND, this->trackedStrings->CHANGE_DIRECTORY_OPTION, File_getPath(parentFile), this->trackedStrings->LIST_FILES_COMMAND, this->trackedStrings->ERROR_UNMATCH_OPTION, this->trackedStrings->PATHSPEC_SEPARATOR, File_getName(nativeFile)), true), start);
            JAVA_CALL(Process_getInputStream(process), readAllBytes);
            return Process_waitFor(process) == 0;
        } JAVA_CATCH(Exception, e) {
            return false;
        } JAVA_END_TRY;
}

