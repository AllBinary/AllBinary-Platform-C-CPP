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
// package org.allbinary.log

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/BufferedReader.h"
// #include "java/io/BufferedWriter.h"
// #include "java/io/File.h"
// #include "java/io/FileReader.h"
// #include "java/io/FileWriter.h"
// #include "java/io/RandomAccessFile.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/communication/log/LogFormatUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct FileLog FileLog;
struct FileLog {
    char unused;
};

static StringUtil* FileLog_stringUtil;
static constexpr int64_t FileLog_logLength = 33000000LL;
static const char* FileLog_logPath = "g:\\log\\";
static const char* FileLog_extension;
static const char* FileLog_fileName;
static const char* FileLog_backupFileName;
static const char* FileLog_ORG_ALLBINARY = "org.allbinary: ";
static bool FileLog_firstTime = true;
static File* FileLog_logFile;
static File* FileLog_logFileBak = nullptr;
static BufferedWriter* FileLog_fileOut = nullptr;
static int32_t FileLog_backupIndex = 0;

FileLog* FileLog_new(void);

void FileLog_init(FileLog* this);
bool FileLog_createLogFile(void);
static bool FileLog_createLogFileBackup(void);
const char* FileLog_put(const char* specialMessage, Any* anyType, const char* functionName);
const char* FileLog_put(const char* specialMessage, Any* anyType, const char* functionName, JavaException* exception);
const char* FileLog_put(const char* specialMessage, const char* className, const char* functionName);
const char* FileLog_put(const char* specialMessage, const char* className, const char* functionName, JavaException* exception);
const char* FileLog_getFilePath(void);

// Static fields with runtime initializers: call this once at startup
void FileLog_staticInit(void) {
    FileLog_stringUtil = StringUtil_getInstance();
    FileLog_extension = java_string_new("dat");
    FileLog_fileName = java_string_new(java_concat("log.", java_string_of(FileLog_extension)));
    FileLog_backupFileName = JAVA_CALL(FileLog_fileName, concat, ".bak");
    FileLog_logFile = File_new(FileLog_logPath, FileLog_fileName);
}


void FileLog_init(FileLog* this) {
}

FileLog* FileLog_new(void) {
    FileLog* this = calloc(1, sizeof(FileLog));
    FileLog_init(this);
    return this;
}


// synchronized
bool FileLog_createLogFile(void) {
        JAVA_TRY {
            FileLog_logFile = File_new(FileLog_logPath, FileLog_fileName);
            if (!FileLog_firstTime) {
                FileLog_fileOut = BufferedWriter_new(FileWriter_new(FileLog_logFile));
            } else {
                FileLog_firstTime = false;
                RandomAccessFile* raFile = RandomAccessFile_new(FileLog_logFile, "rw");
                RandomAccessFile_seek(raFile, RandomAccessFile_length(raFile));
                FileLog_fileOut = BufferedWriter_new(FileWriter_new(RandomAccessFile_getFD(raFile)));
            }
            bool canWrite = JAVA_CALL(FileLog_logFile, canWrite);
            return canWrite;
        } JAVA_CATCH(Exception, e) {
            puts(java_string_of(java_concat("Error Creating Log: ", java_string_of(e))));
            return false;
        } JAVA_END_TRY;
}


// synchronized
static bool FileLog_createLogFileBackup(void) {
        JAVA_TRY {
            StringMaker* stringMaker = StringMaker_new();
            FileLog_logFileBak = File_new(FileLog_logPath, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, FileLog_backupFileName), append, CommonSeps_getInstance()->PERIOD), appendint, FileLog_backupIndex), toString));
            while (JAVA_CALL(FileLog_logFileBak, isFile)) {
                FileLog_backupIndex++;
                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                FileLog_logFileBak = File_new(FileLog_logPath, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, FileLog_backupFileName), append, CommonSeps_getInstance()->PERIOD), appendint, FileLog_backupIndex), toString));
            }
            const char* line = "";
            BufferedWriter* tmpOut = BufferedWriter_new(FileWriter_new(FileLog_logFileBak));
            BufferedReader* tmpIn = BufferedReader_new(FileReader_new(FileLog_logFile));
            while (BufferedReader_ready(tmpIn)) {
                line = BufferedReader_readLine(tmpIn);
                BufferedWriter_write(tmpOut, line, 0, ((int32_t) strlen(line)));
                BufferedWriter_newLine(tmpOut);
            }
            BufferedWriter_flush(tmpOut);
            BufferedWriter_close(tmpOut);
            BufferedReader_close(tmpIn);
            JAVA_CALL(FileLog_logFile, delete);
            return true;
        } JAVA_CATCH(Exception, e) {
            puts(java_string_of(java_concat("Error Creating Backup: ", java_string_of(e))));
            return false;
        } JAVA_END_TRY;
}


// synchronized
const char* FileLog_put(const char* specialMessage, Any* anyType, const char* functionName) {
        return FileLog_put(specialMessage, anyType, functionName, nullptr);
}


// Java overloaded method: C needs a different name
// synchronized
const char* FileLog_put(const char* specialMessage, Any* anyType, const char* functionName, JavaException* exception) {
        JAVA_TRY {
            if (FileLog_firstTime == true) {
                FileLog_createLogFileBackup();
                if (FileLog_createLogFile() == false) {
                    return java_string_new("Log File Creation Error");
                }
            }
            int64_t length = ((int64_t) JAVA_CALL(FileLog_logFile, length));
            if (length > FileLog_logLength) {
                if (!(FileLog_createLogFileBackup()) || FileLog_createLogFile() == false) {
                    return java_string_new("Couldn't Create a Backup file");
                }
            }
            const char* className = java_string_new(FileLog_stringUtil->NULL_STRING);
            if (functionName == nullptr) {
                functionName = java_string_new(FileLog_stringUtil->NULL_STRING);
            }
            if (specialMessage == nullptr) {
                specialMessage = java_string_new(FileLog_stringUtil->NULL_STRING);
            }
            if (java_class_of(anyType) != nullptr) {
                className = java_string_new(java_class_of(anyType));
            }
            const char* message = LogFormatUtil_get(LogFormatUtil_getInstance(), className, functionName, specialMessage, exception);
            JAVA_CALL(FileLog_fileOut, write, message, 0, ((int32_t) strlen(message)));
            JAVA_CALL(FileLog_fileOut, newLine);
            JAVA_CALL(FileLog_fileOut, flush);
            return java_string_new(java_concat(java_string_of(FileLog_ORG_ALLBINARY), message));
        } JAVA_CATCH(Exception, e) {
            return java_string_new(java_concat("Error: ", java_string_of(e)));
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
// synchronized
const char* FileLog_put(const char* specialMessage, const char* className, const char* functionName) {
        return FileLog_put(specialMessage, className, functionName, nullptr);
}


// Java overloaded method: C needs a different name
// synchronized
const char* FileLog_put(const char* specialMessage, const char* className, const char* functionName, JavaException* exception) {
        JAVA_TRY {
            if (FileLog_firstTime == true) {
                FileLog_createLogFileBackup();
                if (FileLog_createLogFile() == false) {
                    return java_string_new("Log File Creation Error");
                }
            }
            int64_t length = ((int64_t) JAVA_CALL(FileLog_logFile, length));
            if (length > FileLog_logLength) {
                if (!(FileLog_createLogFileBackup()) || FileLog_createLogFile() == false) {
                    return java_string_new("Couldn't Create a Backup file");
                }
            }
            if (functionName == nullptr) {
                functionName = java_string_new(FileLog_stringUtil->NULL_STRING);
            }
            if (specialMessage == nullptr) {
                specialMessage = java_string_new(FileLog_stringUtil->NULL_STRING);
            }
            const char* message = LogFormatUtil_get(LogFormatUtil_getInstance(), className, functionName, specialMessage, exception);
            JAVA_CALL(FileLog_fileOut, write, message, 0, ((int32_t) strlen(message)));
            JAVA_CALL(FileLog_fileOut, newLine);
            JAVA_CALL(FileLog_fileOut, flush);
            return java_string_new(java_concat(java_string_of(FileLog_ORG_ALLBINARY), message));
        } JAVA_CATCH(Exception, e) {
            return java_string_new(java_concat("Error: ", java_string_of(e)));
        } JAVA_END_TRY;
}


const char* FileLog_getFilePath(void) {
        return FileLog_logPath + FileLog_fileName;
}

