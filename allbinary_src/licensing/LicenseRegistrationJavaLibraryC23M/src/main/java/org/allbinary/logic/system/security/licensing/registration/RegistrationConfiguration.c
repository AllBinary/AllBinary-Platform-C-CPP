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
// package org.allbinary.logic.system.security.licensing.registration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/DataInputStream.h"
// #include "java/io/InputStream.h"
// #include "java/io/OutputStream.h"
#include "org/allbinary/logic/io/AbDataOutputStream.h"
#include "org/allbinary/logic/io/FileStreamFactory.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/io/file/FileFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"

typedef struct RegistrationConfiguration RegistrationConfiguration;
struct RegistrationConfiguration {
    LogUtil* logUtil;
    const char* registrationCode;
    const char* NAME;
    const char* FILE;
};

static RegistrationConfiguration* RegistrationConfiguration_SINGLETON;

RegistrationConfiguration* RegistrationConfiguration_new(void);

void RegistrationConfiguration_init(RegistrationConfiguration* this);
RegistrationConfiguration* RegistrationConfiguration_getInstance(void);
static void RegistrationConfiguration_read(RegistrationConfiguration* this);
void RegistrationConfiguration_write(RegistrationConfiguration* this);
const char* RegistrationConfiguration_toString(RegistrationConfiguration* this);
void RegistrationConfiguration_setRegistrationCode(RegistrationConfiguration* this, const char* registrationCode);
const char* RegistrationConfiguration_getRegistrationCode(RegistrationConfiguration* this);

// Static fields with runtime initializers: call this once at startup
void RegistrationConfiguration_staticInit(void) {
    RegistrationConfiguration_SINGLETON = RegistrationConfiguration_new();
}

static void RegistrationConfiguration_initFields(RegistrationConfiguration* this) {
    this->logUtil = LogUtil_getInstance();
    this->registrationCode = "No Registration Code";
    this->NAME = "registrationid";
    this->FILE = "Registration.dat";
}


void RegistrationConfiguration_init(RegistrationConfiguration* this) {
    RegistrationConfiguration_initFields(this);
        JAVA_TRY {
            if (FileFactory_isFile(FileFactory_getInstance(), this->FILE)) {
                RegistrationConfiguration_read(this);
            } else {
                RegistrationConfiguration_write(this);
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

RegistrationConfiguration* RegistrationConfiguration_new(void) {
    RegistrationConfiguration* this = calloc(1, sizeof(RegistrationConfiguration));
    RegistrationConfiguration_init(this);
    return this;
}


RegistrationConfiguration* RegistrationConfiguration_getInstance(void) {
        return RegistrationConfiguration_SINGLETON;
}


// throws Exception
static void RegistrationConfiguration_read(RegistrationConfiguration* this) {
        FileStreamFactory* fileInputStreamFactory = FileStreamFactory_getInstance();
        InputStream* fileInputStream = FileStreamFactory_getFileInputStreamInstance(fileInputStreamFactory, StringUtil_getInstance()->EMPTY_STRING, this->FILE);
        DataInputStream* dataInputStream = DataInputStream_new(fileInputStream);
        RegistrationConfiguration_setRegistrationCode(this, DataInputStream_readUTF(dataInputStream));
        PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Read Configuration: "), append, RegistrationConfiguration_toString(this)), toString), this, "read");
}


// throws Exception
void RegistrationConfiguration_write(RegistrationConfiguration* this) {
        AbDataOutputStream* dataOutputStream = nullptr;
        JAVA_TRY {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Write Configuration: "), append, RegistrationConfiguration_toString(this)), toString), this, "write");
            FileStreamFactory* fileInputStreamFactory = FileStreamFactory_getInstance();
            OutputStream* fileOutputStream = FileStreamFactory_getFileOutputStreamInstance(fileInputStreamFactory, StringUtil_getInstance()->EMPTY_STRING, this->FILE);
            dataOutputStream = AbDataOutputStream_new(fileOutputStream);
            AbDataOutputStream_writeUTF(dataOutputStream, RegistrationConfiguration_getRegistrationCode(this));
            AbDataOutputStream_flush(dataOutputStream);
        } JAVA_FINALLY {
            StreamUtil_close(StreamUtil_getInstance(), dataOutputStream);
        } JAVA_END_TRY;
}


const char* RegistrationConfiguration_toString(RegistrationConfiguration* this) {
        return JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Registration Code: "), append, RegistrationConfiguration_getRegistrationCode(this)), toString);
}


void RegistrationConfiguration_setRegistrationCode(RegistrationConfiguration* this, const char* registrationCode) {
        this->registrationCode = registrationCode;
}


const char* RegistrationConfiguration_getRegistrationCode(RegistrationConfiguration* this) {
        return this->registrationCode;
}

