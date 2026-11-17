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
// package org.allbinary.logic.communication.sql

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"
// #include "java/sql/ResultSet.h"
// #include "java/sql/ResultSetMetaData.h"
// #include "java/util/Calendar.h"
#include "org/allbinary/business/installer/Portion.h"
#include "org/allbinary/logic/io/AbFileOutputStream.h"
#include "org/allbinary/logic/io/BufferedLineReader.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/FileUtil.h"
#include "org/allbinary/logic/io/file/directory/Directory.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/globals/PATH_GLOBALS.h"
// #include "java/io/OutputStream.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct AbSqlTableUtil AbSqlTableUtil;
struct AbSqlTableUtil {
    LogUtil* logUtil;
    const char* EXTENSION;
    const char* END;
    const char* SAVING_BACKUP_PATH;
    const char* FILE_LABEL;
    const char* METHOD_RESTORE_TABLE;
    const char* METHOD_BACKUP_TABLE;
    const char* METHOD_BACKUP_FILE;
    const char* METHOD_GET_OUTPUT_STREAM;
    const char* TABLE_CREATION_SUCCESS;
    const char* DROPPED_SUCCESS;
    const char* SAVING;
    const char* APPENDING;
    const char* TABLE_LABEL;
    const char* BACKUP_SUCCESS;
    const char* ERROR_CREATING;
    const char* TOTAL_LABEL;
    const char* SECTION_LABEL;
    const char* DASH;
    const char* PORTION_RESTORED;
    uint16_t* specialCharArray;
    const char* NEW_LINE;
    StringUtil* stringUtil;
    CommonStrings* commonStrings;
    CommonSeps* commonSeps;
    SqlStrings* sqlStrings;
};

static AbSqlTableUtil* AbSqlTableUtil_instance;

AbSqlTableUtil* AbSqlTableUtil_new(void);
AbSqlTableUtil* AbSqlTableUtil_getInstance(void);
static OutputStream* AbSqlTableUtil_getOutputStream(AbSqlTableUtil* this, const char* backupPath, const char* tableName);
static bool AbSqlTableUtil_backupFile(AbSqlTableUtil* this, AbPath* path, const char* backupPath, const char* tableName);
static const char* AbSqlTableUtil_convertNewLines(AbSqlTableUtil* this, const char* value);
const char* AbSqlTableUtil_backupTable(AbSqlTableUtil* this, AbSqlTable* abSqlTable);
const char* AbSqlTableUtil_restoreTable(AbSqlTableUtil* this, AbSqlTable* abSqlTable, Portion* portion);

// Static fields with runtime initializers: call this once at startup
void AbSqlTableUtil_staticInit(void) {
    AbSqlTableUtil_instance = AbSqlTableUtil_new();
}

static void AbSqlTableUtil_initFields(AbSqlTableUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->EXTENSION = ".adb";
    this->END = "')\n";
    this->SAVING_BACKUP_PATH = "Saving Backup: Path: ";
    this->FILE_LABEL = " File: ";
    this->METHOD_RESTORE_TABLE = "restoreTable()";
    this->METHOD_BACKUP_TABLE = "backupTable()";
    this->METHOD_BACKUP_FILE = "backupFile()";
    this->METHOD_GET_OUTPUT_STREAM = "getOutputStream()";
    this->TABLE_CREATION_SUCCESS = "Table Creation Successful: ";
    this->DROPPED_SUCCESS = " Dropped Successfully";
    this->SAVING = "Saving: ";
    this->APPENDING = "Appending: ";
    this->TABLE_LABEL = "Table: ";
    this->BACKUP_SUCCESS = " Backup Success";
    this->ERROR_CREATING = "Error Creating: ";
    this->TOTAL_LABEL = " Total: ";
    this->SECTION_LABEL = " Section: ";
    this->DASH = " - ";
    this->PORTION_RESTORED = " Portion Restored";
    this->specialCharArray = ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'\n', u'\f', u'\r' }) / sizeof(uint16_t), (uint16_t[]){ u'\n', u'\f', u'\r' }));
    this->NEW_LINE = "\\n";
    this->stringUtil = StringUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->sqlStrings = SqlStrings_getInstance();
}

void AbSqlTableUtil_init(AbSqlTableUtil* this) {
    AbSqlTableUtil_initFields(this);
}

AbSqlTableUtil* AbSqlTableUtil_new(void) {
    AbSqlTableUtil* this = calloc(1, sizeof(AbSqlTableUtil));
    AbSqlTableUtil_init(this);
    return this;
}


AbSqlTableUtil* AbSqlTableUtil_getInstance(void) {
        return AbSqlTableUtil_instance;
}


// synchronized
static OutputStream* AbSqlTableUtil_getOutputStream(AbSqlTableUtil* this, const char* backupPath, const char* tableName) {
        JAVA_TRY {
            const char* fileName = java_concat(tableName, this->EXTENSION);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat(this->SAVING, tableName), this, this->METHOD_GET_OUTPUT_STREAM);
            }
            AbPath* backupFilePath = AbPath_new(backupPath, fileName);
            AbFile* backupFile = AbFile_createAbFile(backupFilePath);
            if (AbFile_exists(backupFile)) {
                AbSqlTableUtil_backupFile(this, backupFilePath, backupPath, tableName);
                AbFile_delete(backupFile);
            }
            AbFile_createNewFile(backupFile);
            OutputStream* outputStream = AbFileOutputStream_new(backupFile);
            return outputStream;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, "Create File", this, this->METHOD_GET_OUTPUT_STREAM, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// synchronized
static bool AbSqlTableUtil_backupFile(AbSqlTableUtil* this, AbPath* path, const char* backupPath, const char* tableName) {
        JAVA_TRY {
            Calendar* calendar = Calendar_getInstance();
            int64_t timeLong = Calendar_getTimeInMillis(calendar);
            const char* time = Long_toString(timeLong);
            StringMaker* stringBuffer = StringMaker_new();
            const char* fileName = java_concat(tableName, this->EXTENSION);
            StringMaker_append(stringBuffer, backupPath);
            StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
            StringMaker_append(stringBuffer, time);
            AbPath* backupAbPath = AbPath_new(StringMaker_toString(stringBuffer));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, this->SAVING_BACKUP_PATH);
                StringMaker_append(stringBuffer, AbPath_toFileSystemString(backupAbPath));
                StringMaker_append(stringBuffer, this->FILE_LABEL);
                StringMaker_append(stringBuffer, fileName);
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->METHOD_BACKUP_FILE);
            }
            Directory_create(backupAbPath);
            AbFile* backupFileBak = AbFile_createAbFile(AbPath_toFileSystemString(backupAbPath));
            AbFile_createNewFile(backupFileBak);
            FileUtil_copy(FileUtil_getInstance(), path, backupAbPath);
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->METHOD_BACKUP_FILE, e);
            }
            return false;
        } JAVA_END_TRY;
}


static const char* AbSqlTableUtil_convertNewLines(AbSqlTableUtil* this, const char* value) {
        StringMaker* stringBuffer = StringMaker_new();
        int32_t index = 0;
        int32_t lastIndex = 0;
        while (index < ((int32_t) strlen(value))) {
            index = java_string_indexOf(value, this->specialCharArray[0], lastIndex);
            if (index != -1) {
                const char* nextLine = java_substring(value, lastIndex, index - 1);
                StringMaker_append(stringBuffer, nextLine);
                StringMaker_append(stringBuffer, this->NEW_LINE);
                lastIndex = index + 1;
            } else {
                break;
            }
        }
        if (lastIndex < ((int32_t) strlen(value))) {
            StringMaker_append(stringBuffer, java_substring(value, lastIndex, ((int32_t) strlen(value))));
        }
        return StringMaker_toString(stringBuffer);
}


// synchronized
const char* AbSqlTableUtil_backupTable(AbSqlTableUtil* this, AbSqlTable* abSqlTable) {
        const char* tableName = AbSqlTable_getTableName(abSqlTable);
        JAVA_TRY {
            int32_t count = 0;
            const char* sqlStatement = java_concat(java_string_of(this->sqlStrings->SELECT_ALL_FROM), tableName);
            const char* path = JAVA_CALL(org_allbinary->globals->URLGLOBALS, getMainPath) + JAVA_CALL(_PATH_GLOBALS, getInstance)->BACKUP_PATH;
            if (!Directory_create(AbPath_new(path))) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    LogUtil_putF(this->logUtil, java_concat(this->ERROR_CREATING, java_string_of(path)), this, this->METHOD_BACKUP_TABLE);
                }
            }
            ResultSet* rset = AbSqlTable_executeSQLStatement(abSqlTable, sqlStatement);
            ResultSetMetaData* rsmd = ResultSet_getMetaData(rset);
            int32_t colNum = ResultSetMetaData_getColumnCount(rsmd);
            const char* QUERY_START = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringBuilder_append(StringBuilder_new(), this->sqlStrings->INSERT_INTO), append, tableName), append, this->sqlStrings->VALUES), toString);
            StringMaker* stringBuffer = StringMaker_new();
            OutputStream* outputStream = AbSqlTableUtil_getOutputStream(this, path, tableName);
            while (ResultSet_next(rset)) {
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, QUERY_START);
                for (int32_t i = 1; i < colNum; i++) {
                    const char* value = ResultSet_getString(rset, i);
                    StringMaker_append(stringBuffer, AbSqlTableUtil_convertNewLines(this, value));
                    StringMaker_append(stringBuffer, this->sqlStrings->SINGLE_QUOTE_COMMA_SEP);
                }
                StringMaker_append(stringBuffer, ResultSet_getString(rset, colNum));
                StringMaker_append(stringBuffer, this->END);
                const char* sqlStatementLine = StringMaker_toString(stringBuffer);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    LogUtil_putF(this->logUtil, java_concat(this->APPENDING, sqlStatementLine), this, this->METHOD_BACKUP_TABLE);
                }
                OutputStream_write(outputStream, java_string_getBytes(sqlStatementLine));
            }
            StreamUtil_close(StreamUtil_getInstance(), outputStream);
            return java_concat(java_concat(this->TABLE_LABEL, tableName), this->BACKUP_SUCCESS);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, "Backup Table Failed\nSQL Statement", this, this->METHOD_BACKUP_TABLE, e);
            }
            return java_concat(java_concat(this->TABLE_LABEL, tableName), " Backup Failed");
        } JAVA_END_TRY;
}


// synchronized
const char* AbSqlTableUtil_restoreTable(AbSqlTableUtil* this, AbSqlTable* abSqlTable, Portion* portion) {
        const char* tableName = AbSqlTable_getTableName(abSqlTable);
        JAVA_TRY {
            const char* path = JAVA_CALL(org_allbinary->globals->URLGLOBALS, getMainPath) + JAVA_CALL(_PATH_GLOBALS, getInstance)->BACKUP_PATH;
            int32_t current = JAVA_CALL(Portion_getCurrent(portion), intValue);
            if (current == 0) {
                if (Directory_create(AbPath_new(path))) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                        LogUtil_putF(this->logUtil, java_concat(this->ERROR_CREATING, java_string_of(path)), this, this->METHOD_RESTORE_TABLE);
                    }
                }
            }
            AbFile* backupFile = AbFile_createAbFile(path, java_concat(tableName, this->EXTENSION));
            BufferedLineReader* bufferedLineReader = BufferedLineReader_new(backupFile);
            int64_t size = BufferedLineReader_getSize(bufferedLineReader);
            int64_t section = size / JAVA_CALL(Portion_getTotal(portion), intValue) + 1;
            int64_t start = section * ((int64_t) current);
            int64_t end = start + section;
            if (end > size) {
                end = size;
            }
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, this->TOTAL_LABEL);
            StringMaker_append(stringBuffer, size);
            StringMaker_append(stringBuffer, this->SECTION_LABEL);
            StringMaker_append(stringBuffer, start);
            StringMaker_append(stringBuffer, this->DASH);
            StringMaker_append(stringBuffer, end);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->METHOD_RESTORE_TABLE);
            }
            BufferedLineReader_readUpToLines(bufferedLineReader, start);
            const char* line = this->stringUtil->EMPTY_STRING;
            while (BufferedLineReader_getCurrent(bufferedLineReader) < end && BufferedLineReader_ready(bufferedLineReader)) {
                line = BufferedLineReader_readLine(bufferedLineReader);
                if (((int32_t) strlen(line)) > 1) {
                    AbSqlTable_executeSQLStatement(abSqlTable, line);
                }
            }
            StringMaker_append(stringBuffer, this->commonSeps->SPACE);
            StringMaker_append(stringBuffer, this->TABLE_LABEL);
            StringMaker_append(stringBuffer, tableName);
            StringMaker_append(stringBuffer, this->PORTION_RESTORED);
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, "Restore Table Failed\nSQL Statement", this, this->METHOD_RESTORE_TABLE, e);
            }
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, this->TABLE_LABEL);
            StringMaker_append(stringBuffer, tableName);
            StringMaker_append(stringBuffer, " Restoration Failed");
            return StringMaker_toString(stringBuffer);
        } JAVA_END_TRY;
}

