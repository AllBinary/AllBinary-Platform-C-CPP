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
// package org.allbinary.logic.io

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/DataInputStream.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct LineReader LineReader;
struct LineReader {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* fileName;
    const char* string;
    int32_t index;
    AbFileInputStream* idFile;
    DataInputStream* idData;
};


LineReader* LineReader_new(const char* fileName);

void LineReader_init(LineReader* this, const char* fileName);
bool LineReader_hasNext(LineReader* this);
const char* LineReader_next(LineReader* this);

static void LineReader_initFields(LineReader* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->fileName = nullptr;
    this->string = nullptr;
    this->index = 0;
    this->idFile = nullptr;
    this->idData = nullptr;
}


void LineReader_init(LineReader* this, const char* fileName) {
    LineReader_initFields(this);
        JAVA_TRY {
            int8_t* bytes = ((int8_t*) java_array_new(sizeof(int8_t), 100000));
            this->fileName = fileName;
            this->idFile = AbFileInputStream_new(fileName);
            AbFileInputStream_read(this->idFile, bytes);
            this->string = java_string_new(bytes);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, java_concat("File: ", fileName), this, "LineReader", e);
            {
            }
        } JAVA_END_TRY;
}

LineReader* LineReader_new(const char* fileName) {
    LineReader* this = calloc(1, sizeof(LineReader));
    LineReader_init(this, fileName);
    return this;
}


bool LineReader_hasNext(LineReader* this) {
        JAVA_TRY {
            int32_t nextIndex = java_string_indexOf(this->string, CommonSeps_getInstance()->NEW_LINE, this->index);
            if (nextIndex == -1) {
                return false;
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "hasNext", e);
            {
            }
            return false;
        } JAVA_END_TRY;
}


// throws Exception
const char* LineReader_next(LineReader* this) {
        JAVA_TRY {
            int32_t nextIndex = java_string_indexOf(this->string, CommonSeps_getInstance()->NEW_LINE, this->index);
            if (nextIndex == -1) {
                java_throw(java_exception_new("Exception", "next() should have been called first"));
            }
            const char* temp = java_substring(this->string, this->index, nextIndex);
            this->index = nextIndex + 1;
            return temp;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "next", e);
            {
            }
            java_throw(e);
        } JAVA_END_TRY;
}

