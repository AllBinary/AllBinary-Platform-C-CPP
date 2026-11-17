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
#include "org/allbinary/globals/PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/AbIOSystem.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/FileUtil.h"
#include "org/allbinary/logic/io/file/directory/Directory.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct InitializeCloud InitializeCloud;
struct InitializeCloud {
    LogUtil* logUtil;
};

const char* InitializeCloud_CLOUD = "cloud/";
const char* InitializeCloud_CLOUD_UPDATE = "cloudupdate/";

InitializeCloud* InitializeCloud_new(void);

void InitializeCloud_init(InitializeCloud* this);
bool InitializeCloud_initialize(InitializeCloud* this, const char* cloud, bool overwriteNewer, bool overwriteAll, int32_t current, int32_t total);

static void InitializeCloud_initFields(InitializeCloud* this) {
    this->logUtil = LogUtil_getInstance();
}


void InitializeCloud_init(InitializeCloud* this) {
    InitializeCloud_initFields(this);
}

InitializeCloud* InitializeCloud_new(void) {
    InitializeCloud* this = calloc(1, sizeof(InitializeCloud));
    InitializeCloud_init(this);
    return this;
}


bool InitializeCloud_initialize(InitializeCloud* this, const char* cloud, bool overwriteNewer, bool overwriteAll, int32_t current, int32_t total) {
        JAVA_TRY {
            if (AbIOSystem_isType(AbIOSystem_getInstance(), "com.vobject.appengine.java.io")) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getWebappPath));
                StringMaker_append(stringBuffer, cloud);
                StringMaker_append(stringBuffer, JAVA_CALL(_PATH_GLOBALS, getInstance)->DATA_PATH);
                AbPath* path = AbPath_new(StringMaker_toString(stringBuffer), StringUtil_getInstance()->EMPTY_STRING);
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getWebappPath));
                AbPath* realPath = AbPath_new(StringMaker_toString(stringBuffer), StringUtil_getInstance()->EMPTY_STRING);
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
                    if (AbFile_isDirectory(nextFile)) {
                    } else {
                        FileUtil_copyToCloud(FileUtil_getInstance(), nextFile, path, realPath, cloud, overwriteNewer, overwriteAll);
                    }
                }
                LogUtil_putF(this->logUtil, "Copied Files To Cloud", this, "initialize()");
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, "Unable to copy installer files into cloud", this, "initialize()", e);
            return false;
        } JAVA_END_TRY;
}

