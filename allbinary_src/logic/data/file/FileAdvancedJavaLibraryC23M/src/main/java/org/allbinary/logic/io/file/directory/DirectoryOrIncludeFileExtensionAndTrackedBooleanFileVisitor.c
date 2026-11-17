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
#include "org/allbinary/java/runtime/process/git/GitProcessHelper.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/CommonDataFileStrings.h"
#include "org/allbinary/logic/io/file/visitor/IncludeFileExtensionsBooleanFileVisitor.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor;
struct DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor {
    IncludeFileExtensionsBooleanFileVisitor base;
    TrackedStrings* trackedStrings;
    GitProcessHelper* gitProcessHelper;
    const char* includesString;
};


DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor* DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_new(BasicArrayList* filterStringBasicArrayList);

void DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_init(DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor* this, BasicArrayList* filterStringBasicArrayList);

DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor* DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_new2(BasicArrayList* filterStringBasicArrayList, const char* includesString);
void DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_init2(DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor* this, BasicArrayList* filterStringBasicArrayList, const char* includesString);
bool DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_visit(DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor* this, AbFile* file);
bool DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_visit(DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor* this, AbFile* file, const char* fileNameString);
void DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_main(const char** args);

static void DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_initFields(DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor* this) {
    this->trackedStrings = TrackedStrings_getInstance();
    this->gitProcessHelper = GitProcessHelper_getInstance();
    
}


void DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_init(DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor* this, BasicArrayList* filterStringBasicArrayList) {
        IncludeFileExtensionsBooleanFileVisitor_init(&this->base, filterStringBasicArrayList);
        DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_initFields(this);
        this->includesString = nullptr;
}

DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor* DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_new(BasicArrayList* filterStringBasicArrayList) {
    DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor* this = calloc(1, sizeof(DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor));
    DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_init(this, filterStringBasicArrayList);
    return this;
}


void DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_init2(DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor* this, BasicArrayList* filterStringBasicArrayList, const char* includesString) {
        IncludeFileExtensionsBooleanFileVisitor_init(&this->base, filterStringBasicArrayList);
        DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_initFields(this);
        this->includesString = includesString;
}

DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor* DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_new2(BasicArrayList* filterStringBasicArrayList, const char* includesString) {
    DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor* this = calloc(1, sizeof(DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor));
    DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_init2(this, filterStringBasicArrayList, includesString);
    return this;
}


bool DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_visit(DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor* this, AbFile* file) {
        if (AbFile_isDirectory(file)) {
            return true;
        }
        if (this->includesString == nullptr || JAVA_CALL(AbFile_getAbsolutePath(file), indexOf, this->includesString) >= 0) {
            return IncludeFileExtensionsBooleanFileVisitor_visit((&this->base), file);
        } else {
            return false;
        }
}


// Java overloaded method: C needs a different name
bool DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_visit(DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor* this, AbFile* file, const char* fileNameString) {
        const char* filePath = AbFile_getPath(file);
        if (IncludeFileExtensionsBooleanFileVisitor_visit((&this->base), file, fileNameString)) {
            if (!((strstr(filePath, this->trackedStrings->APPLICATION) != nullptr) || (strstr(filePath, this->trackedStrings->APP) != nullptr) || (strstr(filePath, this->trackedStrings->HTML_TEMP) != nullptr))) {
                if (!((strstr(filePath, this->trackedStrings->TARGET_PATH_WINDOWS) != nullptr) || (strstr(filePath, this->trackedStrings->TARGET_PATH_UNIX) != nullptr))) {
                    if (GitProcessHelper_isTracked(this->gitProcessHelper, file)) {
                        return true;
                    } else {
                    }
                } else {
                }
            } else {
            }
        }
        return false;
}


void DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_main(const char** args) {
        CommonDataFileStrings* commonFileStrings = CommonDataFileStrings_getInstance();
        BasicArrayList* list = BasicArrayListD_new();
        BasicArrayList_add(list, commonFileStrings->JAVA);
        const char* filePath = "G:\\mnt\\bc\\mydev\\games\\ZeptoRacer\\platform\\j2se\\ZeptoRacerStaticPathsJ2SEM\\target\\dependency\\org\\allbinary\\logic\\system\\security\\licensing\\ZeptoRacerPCClientInformation.java";
        bool result = DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_visit(DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor_new(list), AbFile_createAbFileFromRawPath(filePath));
        puts(java_string_of(java_concat(java_concat(filePath, " is Tracked: "), java_string_of(result))));
}

