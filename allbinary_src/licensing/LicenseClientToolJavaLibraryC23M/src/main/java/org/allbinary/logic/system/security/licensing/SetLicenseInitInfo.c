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
// #include "java/io/BufferedReader.h"
// #include "java/io/InputStreamReader.h"
#include "org/allbinary/business/init/LicenseInitInfo.h"
#include "org/allbinary/business/init/LicenseInitInfoUtil.h"
#include "org/allbinary/logic/io/file/FileFactory.h"
#include "org/allbinary/globals/PATH_GLOBALS.h"
// #include "java/io/File.h"
// #include "java/io/FileReader.h"
// #include "java/io/LineNumberReader.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct SetLicenseInitInfo SetLicenseInitInfo;
struct SetLicenseInitInfo {
    BasicArrayList* vector;
};

static BufferedReader* SetLicenseInitInfo_stdinput;

SetLicenseInitInfo* SetLicenseInitInfo_new(const char** options);

void SetLicenseInitInfo_init(SetLicenseInitInfo* this, const char** options);
LicenseInitInfo* SetLicenseInitInfo_getLicenseInitInfo(SetLicenseInitInfo* this);
void SetLicenseInitInfo_createNewLicenseInitInfo(SetLicenseInitInfo* this, BasicArrayList* licenceServerVector);
void SetLicenseInitInfo_main(const char** args);

// Static fields with runtime initializers: call this once at startup
void SetLicenseInitInfo_staticInit(void) {
    SetLicenseInitInfo_stdinput = BufferedReader_new(InputStreamReader_new(System_in));
}

static void SetLicenseInitInfo_initFields(SetLicenseInitInfo* this) {
    this->vector = BasicArrayListD_new();
}


void SetLicenseInitInfo_init(SetLicenseInitInfo* this, const char** options) {
    SetLicenseInitInfo_initFields(this);
        LicenseInitInfoUtil_setFilePath(LicenseInitInfoUtil_getInstance(), PrintLicenseInitInfo_PATH + JAVA_CALL(_PATH_GLOBALS, getInstance)->INIT_PATH);
        for (int32_t index = 1; index < java_array_length(options); index++) {
            BasicArrayList_add(this->vector, options[index]);
        }
}

SetLicenseInitInfo* SetLicenseInitInfo_new(const char** options) {
    SetLicenseInitInfo* this = calloc(1, sizeof(SetLicenseInitInfo));
    SetLicenseInitInfo_init(this, options);
    return this;
}


// throws Exception
LicenseInitInfo* SetLicenseInitInfo_getLicenseInitInfo(SetLicenseInitInfo* this) {
        LicenseInitInfoUtil* licenseInitInfoUtil = LicenseInitInfoUtil_getInstance();
        if (FileFactory_isFile(FileFactory_getInstance(), licenseInitInfoUtil->INITFILENAME)) {
            return LicenseInitInfoUtil_read(licenseInitInfoUtil);
        } else {
            return LicenseInitInfo_new();
        }
}


void SetLicenseInitInfo_createNewLicenseInitInfo(SetLicenseInitInfo* this, BasicArrayList* licenceServerVector) {
        JAVA_TRY {
            if (licenceServerVector == nullptr) {
                java_throw(java_exception_new("Exception", "null BasicArrayList Passed - Just Make Empty if you want"));
            }
            LicenseInitInfo* licenseInitInfo = SetLicenseInitInfo_getLicenseInitInfo(this);
            puts(java_string_of("License Serv Example: http://www.dartstatistics.com/LicServ/serverssl.php"));
            LicenseInitInfo_clearServers(licenseInitInfo);
            File* file = File_new(java_concat(java_string_of(PrintLicenseInitInfo_PATH), "licenseservers.txt"));
            FileReader* reader = FileReader_new(file);
            LineNumberReader* lineNumberReader = LineNumberReader_new(reader);
            while (LineNumberReader_ready(lineNumberReader)) {
                LicenseInitInfo_addServer(licenseInitInfo, LineNumberReader_readLine(lineNumberReader));
            }
            LicenseInitInfoUtil_write(LicenseInitInfoUtil_getInstance(), licenseInitInfo);
            LicenseInitInfoUtil_read(LicenseInitInfoUtil_getInstance());
        } JAVA_CATCH(Exception, e) {
            fputs(java_string_of(java_concat("Error: ", java_string_of(e))), stdout);
            java_print_exception(e);
        } JAVA_END_TRY;
}


// throws Exception
void SetLicenseInitInfo_main(const char** args) {
        SetLicenseInitInfo* initInfo = SetLicenseInitInfo_new(args);
        SetLicenseInitInfo_createNewLicenseInitInfo(initInfo, BasicArrayListD_new());
}

