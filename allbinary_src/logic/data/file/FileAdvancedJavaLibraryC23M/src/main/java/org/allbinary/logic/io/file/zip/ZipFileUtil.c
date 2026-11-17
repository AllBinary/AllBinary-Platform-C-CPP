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
// package org.allbinary.logic.io.file.zip

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/zip/ZipEntry.h"
// #include "java/util/zip/ZipInputStream.h"
// #include "java/util/zip/ZipOutputStream.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/AbDataOutputStream.h"
#include "org/allbinary/logic/io/AbFileInputStream.h"
#include "org/allbinary/logic/io/AbFileOutputStream.h"
#include "org/allbinary/logic/io/DataOutputStreamFactory.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/FileUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct ZipFileUtil ZipFileUtil;
struct ZipFileUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};

static ZipFileUtil* ZipFileUtil_instance;

ZipFileUtil* ZipFileUtil_new(void);
ZipFileUtil* ZipFileUtil_getInstance(void);
void ZipFileUtil_create(ZipFileUtil* this, const char* outFilename, BasicArrayList* fileBasicArrayList);
void ZipFileUtil_unzip(ZipFileUtil* this, const char* path, AbFile* zipFile, const char* fileName);

// Static fields with runtime initializers: call this once at startup
void ZipFileUtil_staticInit(void) {
    ZipFileUtil_instance = ZipFileUtil_new();
}

static void ZipFileUtil_initFields(ZipFileUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}

void ZipFileUtil_init(ZipFileUtil* this) {
    ZipFileUtil_initFields(this);
}

ZipFileUtil* ZipFileUtil_new(void) {
    ZipFileUtil* this = calloc(1, sizeof(ZipFileUtil));
    ZipFileUtil_init(this);
    return this;
}


ZipFileUtil* ZipFileUtil_getInstance(void) {
        return ZipFileUtil_instance;
}


void ZipFileUtil_create(ZipFileUtil* this, const char* outFilename, BasicArrayList* fileBasicArrayList) {
        JAVA_TRY {
            AbFile* zipFile = AbFile_createAbFile(outFilename);
            if (AbFile_exists(zipFile)) {
                AbFile_delete(zipFile);
            }
            AbFile_createNewFile(zipFile);
            ZipOutputStream* outputStream = ZipOutputStream_new(AbFileOutputStream_createFromAbFile(zipFile));
            StreamUtil* streamUtil = StreamUtil_getInstance();
            StringMaker* stringBuffer = StringMaker_new();
            int8_t* byteArray = ((int8_t*) java_array_new(sizeof(int8_t), 16384));
            AbFileInputStream* fileInputStream = nullptr;
            int32_t size = BasicArrayList_size(fileBasicArrayList);
            int32_t current = 0;
            for (int32_t i = 0; i < size; i++) {
                AbFile* file = ((AbFile*) BasicArrayList_get(fileBasicArrayList, i));
                if (AbFile_isDirectory(file)) {
                } else if (AbFile_isFile(file)) {
                    StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                    StringMaker_appendint(stringBuffer, current);
                    StringMaker_append(stringBuffer, " Creating Zip File Entry: ");
                    StringMaker_append(stringBuffer, AbFile_getPath(file));
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "create()");
                    JAVA_TRY {
                        fileInputStream = AbFileInputStream_createFromAbFile(file);
                        ZipOutputStream_putNextEntry(outputStream, ZipEntry_new(AbFile_getPath(file)));
                        StreamUtil_get(streamUtil, fileInputStream, outputStream, byteArray);
                        ZipOutputStream_closeEntry(outputStream);
                        StreamUtil_close(streamUtil, fileInputStream);
                    } JAVA_CATCH(Exception, e) {
                        LogUtil_putF(this->logUtil, java_concat("Skipping File (Probably Local): ", java_string_of(AbFile_getPath(file))), this, "create()");
                    } JAVA_END_TRY;
                }
                current++;
            }
            StreamUtil_close(streamUtil, outputStream);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "create", e);
        } JAVA_END_TRY;
}


// throws Exception
void ZipFileUtil_unzip(ZipFileUtil* this, const char* path, AbFile* zipFile, const char* fileName) {
        int8_t* buffer = ((int8_t*) java_array_new(sizeof(int8_t), 16384));
        ZipInputStream* inputStream = nullptr;
        JAVA_TRY {
            inputStream = ZipInputStream_new(AbFileInputStream_createFromAbFile(zipFile));
            ZipEntry* zipEntry = nullptr;
            StringMaker* stringBuffer = StringMaker_new();
            FileUtil* fileUtil = FileUtil_getInstance();
            while (((zipEntry = ZipInputStream_getNextEntry(inputStream))) != nullptr) {
                const char* entryName = ZipEntry_getName(zipEntry);
                if (ZipEntry_isDirectory(zipEntry)) {
                } else {
                    AbFile* entryFile = AbFile_createAbFile(java_concat(path, entryName));
                    StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                    StringMaker_append(stringBuffer, "ZipEntry Name: ");
                    StringMaker_append(stringBuffer, entryName);
                    StringMaker_append(stringBuffer, " isFile: ");
                    StringMaker_appendboolean(stringBuffer, AbFile_isFile(entryFile));
                    StringMaker_append(stringBuffer, " isDirectory: ");
                    StringMaker_appendboolean(stringBuffer, AbFile_isDirectory(entryFile));
                    StringMaker_append(stringBuffer, " getParent: ");
                    StringMaker_append(stringBuffer, AbFile_getParent(entryFile));
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "unzip");
                    AbDataOutputStream* dataOutputStream = DataOutputStreamFactory_getInstanceForAbFile(DataOutputStreamFactory_getInstance(), entryFile);
                    FileUtil_write(fileUtil, inputStream, dataOutputStream, buffer);
                }
                ZipInputStream_closeEntry(inputStream);
            }
        } JAVA_FINALLY {
            StreamUtil_close(StreamUtil_getInstance(), inputStream);
        } JAVA_END_TRY;
}

