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
// package org.allbinary.logic.system.security.licensing

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
#include "org/allbinary/business/init/LicenseInitInfoUtil.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/FileStreamFactory.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/io/file/FileFactory.h"
#include "org/allbinary/logic/io/file/SimpleFileUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct LicenseServerInitFileUtil LicenseServerInitFileUtil;
struct LicenseServerInitFileUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    OutputStream* NULL_OUTPUT_STREAM;
};


LicenseServerInitFileUtil* LicenseServerInitFileUtil_new(void);
void LicenseServerInitFileUtil_init(LicenseServerInitFileUtil* this);
static void LicenseServerInitFileUtil_write(LicenseServerInitFileUtil* this);

static void LicenseServerInitFileUtil_initFields(LicenseServerInitFileUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->NULL_OUTPUT_STREAM = SimpleFileUtil_nullOutputStream();
}

void LicenseServerInitFileUtil_init(LicenseServerInitFileUtil* this) {
    LicenseServerInitFileUtil_initFields(this);
}

LicenseServerInitFileUtil* LicenseServerInitFileUtil_new(void) {
    LicenseServerInitFileUtil* this = calloc(1, sizeof(LicenseServerInitFileUtil));
    LicenseServerInitFileUtil_init(this);
    return this;
}


void LicenseServerInitFileUtil_init(LicenseServerInitFileUtil* this) {
        JAVA_TRY {
            const char* filePath = LicenseInitInfoUtil_getInstance()->INITFILENAME;
            LicenseInitInfoUtil_setFilePath(LicenseInitInfoUtil_getInstance(), StringUtil_getInstance()->EMPTY_STRING);
            if (FileFactory_isFile(FileFactory_getInstance(), filePath)) {
                LogUtil_putF(this->logUtil, "Using Existing License File", this, this->commonStrings->INIT);
            } else {
                LicenseServerInitFileUtil_write(this);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, e);
        } JAVA_END_TRY;
}


static void LicenseServerInitFileUtil_write(LicenseServerInitFileUtil* this) {
        OutputStream* fileOutputStream = this->NULL_OUTPUT_STREAM;
        JAVA_TRY {
            ResourceUtil* resourceUtil = ResourceUtil_getInstance();
            const char* filePath = LicenseInitInfoUtil_getInstance()->INITFILENAME;
            InputStream* inputStream = ResourceUtil_getResourceAsStream(resourceUtil, filePath);
            LogUtil_putF(this->logUtil, "Writing Default License File", this, this->commonStrings->INIT);
            FileStreamFactory* fileStreamFactory = FileStreamFactory_getInstance();
            fileOutputStream = FileStreamFactory_getFileOutputStreamInstance(fileStreamFactory, StringUtil_getInstance()->EMPTY_STRING, filePath);
            int32_t b = 0;
            int32_t index = 0;
            while (true) {
                b = InputStream_read(inputStream);
                if (b == -1) {
                    break;
                }
                OutputStream_write(fileOutputStream, b);
                index++;
            }
            LogUtil_putF(this->logUtil, java_concat("Wrote Bytes: ", java_string_of(index)), this, this->commonStrings->INIT);
            OutputStream_flush(fileOutputStream);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, e);
        } JAVA_FINALLY {
            StreamUtil_close(StreamUtil_getInstance(), fileOutputStream);
        } JAVA_END_TRY;
}

