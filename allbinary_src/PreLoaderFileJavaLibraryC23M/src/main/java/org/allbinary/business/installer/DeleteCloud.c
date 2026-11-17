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
// package org.allbinary.business.installer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/http/file/upload/FileUploadData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/AbIOSystem.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/directory/Directory.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct DeleteCloud DeleteCloud;
struct DeleteCloud {
    LogUtil* logUtil;
};


DeleteCloud* DeleteCloud_new(void);

void DeleteCloud_init(DeleteCloud* this);
bool DeleteCloud_delete(DeleteCloud* this, const char* prePath, int32_t current, int32_t total);

static void DeleteCloud_initFields(DeleteCloud* this) {
    this->logUtil = LogUtil_getInstance();
}


void DeleteCloud_init(DeleteCloud* this) {
    DeleteCloud_initFields(this);
}

DeleteCloud* DeleteCloud_new(void) {
    DeleteCloud* this = calloc(1, sizeof(DeleteCloud));
    DeleteCloud_init(this);
    return this;
}


bool DeleteCloud_delete(DeleteCloud* this, const char* prePath, int32_t current, int32_t total) {
        JAVA_TRY {
            if (AbIOSystem_isType(AbIOSystem_getInstance(), "com.vobject.appengine.java.io")) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getWebappPath));
                StringMaker_append(stringBuffer, prePath);
                AbPath* path = AbPath_new(StringMaker_toString(stringBuffer), StringUtil_getInstance()->EMPTY_STRING);
                AbFile* file = AbFile_createAbFileFromAbPath(path);
                BasicArrayList* fileBasicArrayList = Directory_search(Directory_getInstance(), file, true);
                int32_t size = BasicArrayList_size(fileBasicArrayList);
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, "Searched: ");
                StringMaker_append(stringBuffer, AbPath_toFileSystemString(path));
                StringMaker_append(stringBuffer, " BasicArrayList: ");
                StringMaker_appendint(stringBuffer, size);
                int32_t portion = size / total + 1;
                int32_t start = portion * current;
                int32_t end = start + portion;
                if (end > size) {
                    end = size;
                }
                StringMaker_append(stringBuffer, " Section: ");
                StringMaker_appendint(stringBuffer, start);
                StringMaker_append(stringBuffer, " - ");
                StringMaker_appendint(stringBuffer, end);
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "initialize()");
                AbFile* nextFile = nullptr;
                for (int32_t index = start; index < end; index++) {
                    nextFile = ((AbFile*) BasicArrayList_get(fileBasicArrayList, index));
                    JAVA_TRY {
                        if (JAVA_CALL(AbFile_getPath(nextFile), indexOf, FileUploadData_getInstance()->FILE) < 0) {
                            AbFile_delete(nextFile);
                        }
                    } JAVA_CATCH(Exception, e) {
                    } JAVA_END_TRY;
                }
                LogUtil_putF(this->logUtil, "Deleted Files From Cloud", this, "initialize()");
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, "Unable to copy installer files into cloud", this, "initialize()", e);
            return false;
        } JAVA_END_TRY;
}

