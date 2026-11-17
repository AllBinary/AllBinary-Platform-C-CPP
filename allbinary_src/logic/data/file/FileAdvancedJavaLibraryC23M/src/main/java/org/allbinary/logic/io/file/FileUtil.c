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
// #include "java/io/InputStream.h"
// #include "java/io/OutputStream.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/io/AbDataOutputStream.h"
#include "org/allbinary/logic/io/AbFileInputStream.h"
#include "org/allbinary/logic/io/AbFileLocalInputStream.h"
#include "org/allbinary/logic/io/AbIOSystem.h"
#include "org/allbinary/logic/io/DataOutputStreamFactory.h"
#include "org/allbinary/logic/io/FileStreamFactory.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/io/file/directory/Directory.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"

//data/init/views/TestStore/template/type/genericTemplateObjectConfig.xml
typedef struct FileUtil FileUtil;
struct FileUtil {
    LogUtil* logUtil;
    Directory* directory;
    LogConfigTypeFactory* logConfigTypeFactory;
    CommonStrings* commonStrings;
    StreamUtil* streamUtil;
    const char* WRITE_LABEL;
    const char* DATA_LABEL;
    const char* WRITE_METHOD;
};

static FileUtil* FileUtil_instance;

FileUtil* FileUtil_new(void);
FileUtil* FileUtil_getInstance(void);

void FileUtil_init(FileUtil* this);
void FileUtil_write(FileUtil* this, InputStream* inputStream, AbFile* file);
void FileUtil_write(FileUtil* this, InputStream* inputStream, AbDataOutputStream* dataOutputStream);
void FileUtil_write(FileUtil* this, InputStream* inputStream, AbDataOutputStream* dataOutputStream, int8_t* buffer);
static void FileUtil_copy(FileUtil* this, AbFileInputStream* dataInputStream, AbDataOutputStream* dataOutputStream);
static AbPath* FileUtil_fixPath(FileUtil* this, AbFile* file, AbPath* path, AbPath* realPath, const char* cloud);
void FileUtil_copyToCloud(FileUtil* this, AbFile* file, AbPath* path, AbPath* realPath, const char* cloud);
void FileUtil_copyToCloud(FileUtil* this, AbFile* file, AbPath* path, AbPath* realPath, const char* cloud, bool overwriteNewer, bool overwriteAll);
void FileUtil_copyToCloud(FileUtil* this, AbFile* file, AbFile* outFile);
void FileUtil_copyToCloud(FileUtil* this, AbFile* file, AbFile* outFile, bool overwriteNewer, bool overwriteAll);
static bool FileUtil_copyPrepare(FileUtil* this, AbFile* fromFile, AbFile* toFile, bool overwriteNewer, bool overwriteAll);
static void FileUtil_copyFile(FileUtil* this, AbFile* fromFile, AbFile* toFile);
static void FileUtil_copyFile(FileUtil* this, AbFile* fromFile, AbFile* toFile, bool overwriteNewer, bool overwriteAll);
static const char* FileUtil_getNewDirectory(AbFile* fromFile);
void FileUtil_copyDirectoryPortion(FileUtil* this, AbPath* fromDirectoryAbPath, AbPath* toDirectoryAbPath, bool overwriteNewer, bool overwriteAll, int32_t current, int32_t total);
static void FileUtil_copyDirectory(FileUtil* this, AbFile* fromFile, AbFile* to);
bool FileUtil_copy(FileUtil* this, AbPath* fromAbPath, AbPath* to);
bool FileUtil_shouldSkip(FileUtil* this, AbFile* file, const char** skipFiles);
void FileUtil_write(FileUtil* this, const char* filePath, const char* string);
BasicArrayList* FileUtil_loadFileAsList(FileUtil* this, AbFile* file, int32_t max, int8_t* byteArray1);

// Static fields with runtime initializers: call this once at startup
void FileUtil_staticInit(void) {
    FileUtil_instance = FileUtil_new();
}

static void FileUtil_initFields(FileUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->directory = Directory_getInstance();
    this->logConfigTypeFactory = LogConfigTypeFactory_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->streamUtil = StreamUtil_getInstance();
    this->WRITE_LABEL = "Write file: ";
    this->DATA_LABEL = " data: ";
    this->WRITE_METHOD = "write";
}


FileUtil* FileUtil_getInstance(void) {
        return FileUtil_instance;
}


void FileUtil_init(FileUtil* this) {
    FileUtil_initFields(this);
}

FileUtil* FileUtil_new(void) {
    FileUtil* this = calloc(1, sizeof(FileUtil));
    FileUtil_init(this);
    return this;
}


// throws Exception
void FileUtil_write(FileUtil* this, InputStream* inputStream, AbFile* file) {
        AbDataOutputStream* dataOutputStream = DataOutputStreamFactory_getInstanceForAbFile(DataOutputStreamFactory_getInstance(), file);
        FileUtil_write(this, inputStream, dataOutputStream);
}


// throws Exception
// Java overloaded method: C needs a different name
void FileUtil_write(FileUtil* this, InputStream* inputStream, AbDataOutputStream* dataOutputStream) {
        JAVA_TRY {
            dataOutputStream = ((AbDataOutputStream*) StreamUtil_get(StreamUtil_getInstance(), inputStream, dataOutputStream, ((int8_t*) java_array_new(sizeof(int8_t), 16384))));
            AbDataOutputStream_flush(dataOutputStream);
        } JAVA_FINALLY {
            StreamUtil_close(StreamUtil_getInstance(), dataOutputStream);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
void FileUtil_write(FileUtil* this, InputStream* inputStream, AbDataOutputStream* dataOutputStream, int8_t* buffer) {
        JAVA_TRY {
            dataOutputStream = ((AbDataOutputStream*) StreamUtil_get(StreamUtil_getInstance(), inputStream, dataOutputStream, buffer));
            AbDataOutputStream_flush(dataOutputStream);
        } JAVA_FINALLY {
            StreamUtil_close(StreamUtil_getInstance(), dataOutputStream);
        } JAVA_END_TRY;
}


// throws Exception
static void FileUtil_copy(FileUtil* this, AbFileInputStream* dataInputStream, AbDataOutputStream* dataOutputStream) {
        JAVA_TRY {
            dataOutputStream = ((AbDataOutputStream*) StreamUtil_get(StreamUtil_getInstance(), dataInputStream, dataOutputStream, ((int8_t*) java_array_new(sizeof(int8_t), 16384))));
            AbDataOutputStream_flush(dataOutputStream);
        } JAVA_FINALLY {
            StreamUtil_close(StreamUtil_getInstance(), dataOutputStream);
            StreamUtil_close(StreamUtil_getInstance(), dataInputStream);
        } JAVA_END_TRY;
}


// throws Exception
static AbPath* FileUtil_fixPath(FileUtil* this, AbFile* file, AbPath* path, AbPath* realPath, const char* cloud) {
        int32_t beginIndex = JAVA_CALL(AbFile_getPath(file), indexOf, cloud) + ((int32_t) strlen(cloud));
        int32_t endIndex = JAVA_CALL(AbFile_getPath(file), indexOf, AbFile_getName(file));
        const char* fixedPathString = java_concat(java_string_of(AbPath_toFileSystemString(realPath)), JAVA_CALL(AbFile_getPath(file), substring, beginIndex, endIndex));
        AbPath* fixedPath = AbPath_new(fixedPathString, StringUtil_getInstance()->EMPTY_STRING);
        Directory_create(this->directory, fixedPath);
        const char* string = AbPath_toFileSystemString(fixedPath);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILE)) {
            LogUtil_putF(this->logUtil, string, this, "fixPath");
        }
        AbPath* outPath = AbPath_new(string, AbFile_getName(file));
        return outPath;
}


// throws Exception
void FileUtil_copyToCloud(FileUtil* this, AbFile* file, AbPath* path, AbPath* realPath, const char* cloud) {
        FileUtil_copyToCloud(this, file, path, realPath, cloud, false, false);
}


// throws Exception
// Java overloaded method: C needs a different name
void FileUtil_copyToCloud(FileUtil* this, AbFile* file, AbPath* path, AbPath* realPath, const char* cloud, bool overwriteNewer, bool overwriteAll) {
        JAVA_TRY {
            AbPath* outPath = FileUtil_fixPath(this, file, path, realPath, cloud);
            AbFile* outFile = AbFile_createAbFileFromAbPath(outPath);
            if (!FileUtil_copyPrepare(this, file, outFile, overwriteNewer, overwriteAll)) {
                return;
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILE)) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, "Out File: ");
                    StringMaker_append(stringBuffer, AbFile_getPath(outFile));
                    StringMaker_append(stringBuffer, " In File: ");
                    StringMaker_append(stringBuffer, AbFile_getPath(file));
                    StringMaker_append(stringBuffer, " to cloud.");
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), FileUtil_getInstance(), "copyToCloud");
                }
            }
            AbDataOutputStream* dataOutputStream = DataOutputStreamFactory_getInstanceForAbFile(DataOutputStreamFactory_getInstance(), outFile);
            AbFileInputStream* fileInputStream = AbFileLocalInputStream_new(file);
            FileUtil_copy(this, fileInputStream, dataOutputStream);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILEERROR)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Error Copying File File: ");
                StringMaker_append(stringBuffer, AbFile_toString(file));
                StringMaker_append(stringBuffer, " to cloud.");
                LogUtil_put(this->logUtil, StringMaker_toString(stringBuffer), FileUtil_getInstance(), "copyToCloud", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
void FileUtil_copyToCloud(FileUtil* this, AbFile* file, AbFile* outFile) {
        FileUtil_copyToCloud(this, file, outFile, false, false);
}


// throws Exception
// Java overloaded method: C needs a different name
void FileUtil_copyToCloud(FileUtil* this, AbFile* file, AbFile* outFile, bool overwriteNewer, bool overwriteAll) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            if (!FileUtil_copyPrepare(this, file, outFile, overwriteNewer, overwriteAll)) {
                return;
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILE)) {
                    StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                    StringMaker_append(stringBuffer, "Out File: ");
                    StringMaker_append(stringBuffer, AbFile_getPath(outFile));
                    StringMaker_append(stringBuffer, " In File: ");
                    StringMaker_append(stringBuffer, AbFile_getPath(file));
                    StringMaker_append(stringBuffer, " to cloud.");
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), FileUtil_getInstance(), "copyToCloud");
                }
            }
            AbDataOutputStream* dataOutputStream = DataOutputStreamFactory_getInstanceForAbFile(DataOutputStreamFactory_getInstance(), outFile);
            AbFileInputStream* fileInputStream = AbFileLocalInputStream_new(file);
            FileUtil_copy(this, fileInputStream, dataOutputStream);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILEERROR)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Error Copying File File: ");
                StringMaker_append(stringBuffer, AbFile_toString(file));
                StringMaker_append(stringBuffer, " to cloud.");
                LogUtil_put(this->logUtil, StringMaker_toString(stringBuffer), FileUtil_getInstance(), "copyToCloud", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
static bool FileUtil_copyPrepare(FileUtil* this, AbFile* fromFile, AbFile* toFile, bool overwriteNewer, bool overwriteAll) {
        if (AbFile_exists(toFile)) {
            StringMaker* stringBuffer = StringMaker_new();
            if (overwriteAll) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILE)) {
                    StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                    StringMaker_append(stringBuffer, "Overwriting File: ");
                    StringMaker_append(stringBuffer, AbFile_getPath(toFile));
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), FileUtil_getInstance(), "copyFile");
                }
                AbFile_delete(toFile);
                AbFile_createNewFile(toFile);
            } else if (AbFile_lastModified(toFile) < AbFile_lastModified(fromFile) && overwriteNewer) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILE)) {
                    StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                    StringMaker_append(stringBuffer, "Newer by: ");
                    StringMaker_appendlong(stringBuffer, ((int64_t) (AbFile_lastModified(fromFile) - AbFile_lastModified(toFile))));
                    StringMaker_append(stringBuffer, "ms ");
                    StringMaker_append(stringBuffer, "Copying File: ");
                    StringMaker_append(stringBuffer, AbFile_getPath(toFile));
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), FileUtil_getInstance(), "copyFile");
                }
                AbFile_delete(toFile);
                AbFile_createNewFile(toFile);
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILE)) {
                    StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                    StringMaker_append(stringBuffer, "File Already Exists");
                    if (overwriteNewer) {
                        StringMaker_append(stringBuffer, " And Is Not Older");
                    } else {
                        StringMaker_append(stringBuffer, " And Not A In Overwrite Mode");
                    }
                    StringMaker_append(stringBuffer, CommonLabels_getInstance()->COLON_SEP);
                    StringMaker_append(stringBuffer, AbFile_getPath(toFile));
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), FileUtil_getInstance(), "copyFile");
                }
                return false;
            }
        } else {
            AbFile_createNewFile(toFile);
        }
        return true;
}


// throws Exception
static void FileUtil_copyFile(FileUtil* this, AbFile* fromFile, AbFile* toFile) {
        FileUtil_copyFile(this, fromFile, toFile, false, false);
}


// throws Exception
// Java overloaded method: C needs a different name
static void FileUtil_copyFile(FileUtil* this, AbFile* fromFile, AbFile* toFile, bool overwriteNewer, bool overwriteAll) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILE)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Copying ");
                StringMaker_appendlong(stringBuffer, ((int64_t) AbFile_length(fromFile)));
                StringMaker_append(stringBuffer, " bytes from File: ");
                StringMaker_append(stringBuffer, AbFile_getPath(fromFile));
                StringMaker_append(stringBuffer, " to: ");
                StringMaker_append(stringBuffer, AbFile_getPath(toFile));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), FileUtil_getInstance(), "copyFile");
            }
            if (!FileUtil_copyPrepare(this, fromFile, toFile, overwriteNewer, overwriteAll)) {
                return;
            }
            AbDataOutputStream* dataOutputStream = DataOutputStreamFactory_getInstanceForAbFile(DataOutputStreamFactory_getInstance(), toFile);
            AbFileInputStream* fileInputStream = AbFileInputStream_createFromAbFile(fromFile);
            FileUtil_copy(this, fileInputStream, dataOutputStream);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILEERROR)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Error Copying File fromFile: ");
                StringMaker_append(stringBuffer, AbFile_toString(fromFile));
                StringMaker_append(stringBuffer, " to: ");
                StringMaker_append(stringBuffer, AbFile_toString(toFile));
                LogUtil_put(this->logUtil, StringMaker_toString(stringBuffer), FileUtil_getInstance(), "copyFile", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


static const char* FileUtil_getNewDirectory(AbFile* fromFile) {
        const char* newDirectory = AbFile_getPath(fromFile);
        const char* separatorChar = FilePathData_getInstance()->PATH_START;
        if (AbIOSystem_isType(AbIOSystem_getInstance(), "com.vobject.appengine.java.io")) {
            separatorChar = AbPathData_getInstance()->SEPARATOR;
        }
        int32_t lastIndex = java_string_lastIndexOf(newDirectory, separatorChar);
        if (lastIndex >= ((int32_t) strlen(newDirectory))) {
            newDirectory = java_substring(newDirectory, 0, ((int32_t) strlen(newDirectory)) - 1);
            lastIndex = java_string_lastIndexOf(newDirectory, separatorChar);
        }
        return java_substring(newDirectory, lastIndex, ((int32_t) strlen(newDirectory)));
}


// throws Exception
void FileUtil_copyDirectoryPortion(FileUtil* this, AbPath* fromDirectoryAbPath, AbPath* toDirectoryAbPath, bool overwriteNewer, bool overwriteAll, int32_t current, int32_t total) {
        AbFile* file = AbFile_createAbFileFromAbPath(fromDirectoryAbPath);
        if (!AbFile_isDirectory(file)) {
            java_throw(java_exception_new("Exception", java_concat("Not a directory: ", java_string_of(AbFile_getPath(file)))));
        }
        BasicArrayList* fileList = Directory_search(this->directory, file, true);
        int32_t size = BasicArrayList_size(fileList);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Searched: ");
        StringMaker_append(stringBuffer, AbFile_getPath(file));
        StringMaker_append(stringBuffer, " Total: ");
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
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILE)) {
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), FileUtil_getInstance(), "copySomeFilesToDirectory()");
        }
        AbFile* nextFile = nullptr;
        for (int32_t index = start; index < end; index++) {
            nextFile = ((AbFile*) BasicArrayList_get(fileList, index));
            if (AbFile_isDirectory(nextFile)) {
            } else {
                const char* path = AbPath_getPath(AbPath_new(AbFile_getPath(nextFile), StringUtil_getInstance()->EMPTY_STRING));
                int32_t beginIndex = JAVA_CALL(AbPath_getPath(fromDirectoryAbPath), length);
                if (AbPath_indexOf(path, JAVA_CALL(_URLGLOBALS, getWebappPath)) < 0) {
                    beginIndex -= JAVA_CALL(AbPath_getPath(AbPath_new(JAVA_CALL(_URLGLOBALS, getWebappPath), StringUtil_getInstance()->EMPTY_STRING)), length);
                }
                const char* newPath = java_concat(java_string_of(AbPath_toFileSystemString(toDirectoryAbPath)), AbPath_substring(path, beginIndex));
                AbFile* toFile = AbFile_createAbFileFromAbPath(AbPath_new(newPath, StringUtil_getInstance()->EMPTY_STRING));
                FileUtil_copyFile(this, nextFile, toFile, overwriteNewer, overwriteAll);
            }
        }
}


// throws Exception
static void FileUtil_copyDirectory(FileUtil* this, AbFile* fromFile, AbFile* to) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILE)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Copying Directory from: ");
                StringMaker_append(stringBuffer, AbFile_getPath(fromFile));
                StringMaker_append(stringBuffer, " to: ");
                StringMaker_append(stringBuffer, AbFile_getPath(to));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), FileUtil_getInstance(), "copyDirectory");
            }
            const char* newDirectory = FileUtil_getNewDirectory(fromFile);
            AbPath* newDirectoryAbPath = AbPath_new(java_concat(java_string_of(AbFile_getPath(to) + AbPathData_getInstance()->SEPARATOR), newDirectory), StringUtil_getInstance()->EMPTY_STRING);
            if (!Directory_create(this->directory, newDirectoryAbPath)) {
                java_throw(java_exception_new("Exception", java_concat("Failed to create directory: ", java_string_of(newDirectoryAbPath))));
            }
            AbFile** fileArray = FileWrapperUtil_wrapFiles(AbFile_listFiles(fromFile));
            int32_t size = java_array_length(fileArray);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILE)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Copying ");
                StringMaker_appendint(stringBuffer, size);
                StringMaker_append(stringBuffer, " files from: ");
                StringMaker_append(stringBuffer, AbFile_getPath(fromFile));
                StringMaker_append(stringBuffer, " to: ");
                StringMaker_append(stringBuffer, AbFile_getPath(to));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), FileUtil_getInstance(), "copyDirectory");
            }
            AbFile* file = nullptr;
            for (int32_t index = 0; index < size; index++) {
                file = fileArray[index];
                if (AbFile_isFile(file)) {
                    FileUtil_copyFile(this, file, AbFile_createAbFilePathAndName(AbPath_toString(newDirectoryAbPath), AbFile_getName(file)));
                } else if (AbFile_isDirectory(file)) {
                    FileUtil_copyDirectory(this, file, AbFile_createAbFileFromAbPath(newDirectoryAbPath));
                } else {
                    java_throw(java_exception_new("Exception", "File Copy Error"));
                }
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILEERROR)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Error Copying Directory fromFile: ");
                StringMaker_append(stringBuffer, AbFile_toString(fromFile));
                StringMaker_append(stringBuffer, " to: ");
                StringMaker_append(stringBuffer, AbFile_toString(to));
                LogUtil_put(this->logUtil, StringMaker_toString(stringBuffer), FileUtil_getInstance(), "copyDirectory", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
// synchronized
bool FileUtil_copy(FileUtil* this, AbPath* fromAbPath, AbPath* to) {
        const char* COPY = "copy";
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILE)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Copying AbPaths from: ");
                StringMaker_append(stringBuffer, AbPath_toString(fromAbPath));
                StringMaker_append(stringBuffer, " to: ");
                StringMaker_append(stringBuffer, AbFile_toString(to));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), FileUtil_getInstance(), COPY);
            }
            if (fromAbPath == nullptr) {
                java_throw(java_exception_new("Exception", "Cannot Copy From A Null Location"));
            }
            if (to == nullptr) {
                java_throw(java_exception_new("Exception", "Cannot Copy To A Null Location"));
            }
            AbFile* fromLocationFile = AbFile_createAbFileFromAbPath(fromAbPath);
            AbFile* toLocationFile = AbFile_createAbFileFromAbPath(to);
            if (AbFile_isFile(fromLocationFile)) {
                if (AbFile_isDirectory(toLocationFile)) {
                    AbFile* file = AbFile_createAbFileWithChild(toLocationFile, AbFile_getName(fromLocationFile));
                    FileUtil_copyFile(this, fromLocationFile, file);
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILE)) {
                        StringMaker* stringBuffer = StringMaker_new();
                        StringMaker_append(stringBuffer, "Copied file=");
                        StringMaker_append(stringBuffer, AbFile_getName(fromLocationFile));
                        StringMaker_append(stringBuffer, " from: ");
                        StringMaker_append(stringBuffer, AbFile_getPath(fromLocationFile));
                        StringMaker_append(stringBuffer, " to: ");
                        StringMaker_append(stringBuffer, AbFile_getPath(toLocationFile));
                        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), FileUtil_getInstance(), COPY);
                    }
                } else {
                    FileUtil_copyFile(this, fromLocationFile, toLocationFile);
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILE)) {
                        StringMaker* stringBuffer = StringMaker_new();
                        StringMaker_append(stringBuffer, "Copied file with new name ");
                        StringMaker_append(stringBuffer, " from: ");
                        StringMaker_append(stringBuffer, AbFile_getPath(fromLocationFile));
                        StringMaker_append(stringBuffer, " to: ");
                        StringMaker_append(stringBuffer, AbFile_getPath(toLocationFile));
                        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), FileUtil_getInstance(), COPY);
                    }
                }
            } else if (AbFile_isDirectory(fromLocationFile) && AbFile_isDirectory(toLocationFile)) {
                if (JAVA_CALL(AbPath_toFileSystemString(fromAbPath), charAt, JAVA_CALL(AbPath_toFileSystemString(fromAbPath), length) - 1) == java_io->File->separatorChar) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILE)) {
                        LogUtil_putF(this->logUtil, "Copying subdirectories", FileUtil_getInstance(), COPY);
                    }
                    AbFile** fileArray = FileWrapperUtil_wrapFiles(AbFile_listFiles(fromLocationFile));
                    for (int32_t index = 0; index < java_array_length(fileArray); index++) {
                        AbFile* file = fileArray[index];
                        if (AbFile_isFile(file)) {
                            AbFile* aFile = AbFile_createAbFileWithChild(toLocationFile, AbFile_getName(file));
                            FileUtil_copyFile(this, file, aFile);
                        } else if (AbFile_isDirectory(file)) {
                            FileUtil_copyDirectory(this, file, toLocationFile);
                        } else {
                            java_throw(java_exception_new("Exception", "File Copy Error"));
                        }
                    }
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILE)) {
                        LogUtil_putF(this->logUtil, "Copied subdirectories", FileUtil_getInstance(), COPY);
                    }
                } else {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILE)) {
                        LogUtil_putF(this->logUtil, "Copyinhg directory", FileUtil_getInstance(), COPY);
                    }
                    FileUtil_copyDirectory(this, fromLocationFile, toLocationFile);
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILE)) {
                        LogUtil_putF(this->logUtil, "Copied directory", FileUtil_getInstance(), COPY);
                    }
                }
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, this->logConfigTypeFactory->FILEERROR)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Error Copying fromAbPath: ");
                StringMaker_append(stringBuffer, AbPath_toString(fromAbPath));
                StringMaker_append(stringBuffer, " to: ");
                StringMaker_append(stringBuffer, AbFile_toString(to));
                LogUtil_put(this->logUtil, StringMaker_toString(stringBuffer), FileUtil_getInstance(), COPY, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


bool FileUtil_shouldSkip(FileUtil* this, AbFile* file, const char** skipFiles) {
        int32_t size = java_array_length(skipFiles);
        const char* skipFile = nullptr;
        for (int32_t index = 0; index < size; index++) {
            skipFile = skipFiles[index];
            if (JAVA_CALL(AbFile_getPath(file), compareTo, skipFile) == 0) {
                return true;
            }
        }
        return false;
}


// throws Exception
// Java overloaded method: C needs a different name
void FileUtil_write(FileUtil* this, const char* filePath, const char* string) {
        AbDataOutputStream* dataOutputStream = nullptr;
        JAVA_TRY {
            PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->WRITE_LABEL), append, filePath), append, this->DATA_LABEL), append, string), toString), this, this->WRITE_METHOD);
            FileStreamFactory* fileInputStreamFactory = FileStreamFactory_getInstance();
            OutputStream* fileOutputStream = FileStreamFactory_getFileOutputStreamInstance(fileInputStreamFactory, StringUtil_getInstance()->EMPTY_STRING, filePath);
            dataOutputStream = AbDataOutputStream_new(fileOutputStream);
            AbDataOutputStream_write(dataOutputStream, java_string_getBytes(string), 0, ((int32_t) strlen(string)));
            AbDataOutputStream_flush(dataOutputStream);
        } JAVA_FINALLY {
            StreamUtil_close(StreamUtil_getInstance(), dataOutputStream);
        } JAVA_END_TRY;
}


BasicArrayList* FileUtil_loadFileAsList(FileUtil* this, AbFile* file, int32_t max, int8_t* byteArray1) {
        return FileUtil2_loadFileAsList(FileUtil2_getInstance(), file, max, byteArray1);
}

