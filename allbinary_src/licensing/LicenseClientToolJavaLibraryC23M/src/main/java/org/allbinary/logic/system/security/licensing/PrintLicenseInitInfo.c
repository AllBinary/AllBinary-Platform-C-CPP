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
#include "org/allbinary/business/init/LicenseInitInfo.h"
#include "org/allbinary/business/init/LicenseInitInfoUtil.h"
#include "org/allbinary/logic/io/file/FileFactory.h"
#include "org/allbinary/globals/PATH_GLOBALS.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct PrintLicenseInitInfo PrintLicenseInitInfo;
struct PrintLicenseInitInfo {
    char unused;
};

const char* PrintLicenseInitInfo_PATH = "G:\\mnt\\bc\\mydev\\work\\allbinary_src\\licensing\\data\\";

PrintLicenseInitInfo* PrintLicenseInitInfo_new(const char** options);

void PrintLicenseInitInfo_init(PrintLicenseInitInfo* this, const char** options);
LicenseInitInfo* PrintLicenseInitInfo_getLicenseInitInfo(PrintLicenseInitInfo* this);
void PrintLicenseInitInfo_printInitInfo(PrintLicenseInitInfo* this);
void PrintLicenseInitInfo_main(const char** args);


void PrintLicenseInitInfo_init(PrintLicenseInitInfo* this, const char** options) {
        LicenseInitInfoUtil_setFilePath(LicenseInitInfoUtil_getInstance(), PrintLicenseInitInfo_PATH + JAVA_CALL(_PATH_GLOBALS, getInstance)->INIT_PATH);
}

PrintLicenseInitInfo* PrintLicenseInitInfo_new(const char** options) {
    PrintLicenseInitInfo* this = calloc(1, sizeof(PrintLicenseInitInfo));
    PrintLicenseInitInfo_init(this, options);
    return this;
}


// throws Exception
LicenseInitInfo* PrintLicenseInitInfo_getLicenseInitInfo(PrintLicenseInitInfo* this) {
        LicenseInitInfoUtil* licenseInitInfoUtil = LicenseInitInfoUtil_getInstance();
        if (FileFactory_isFile(FileFactory_getInstance(), LicenseInitInfoUtil_getFilePath(licenseInitInfoUtil))) {
            return LicenseInitInfoUtil_read(licenseInitInfoUtil);
        } else {
            puts(java_string_of(java_concat("No Licence File at: ", java_string_of(LicenseInitInfoUtil_getFilePath(licenseInitInfoUtil)))));
            return LicenseInitInfo_new();
        }
}


void PrintLicenseInitInfo_printInitInfo(PrintLicenseInitInfo* this) {
        JAVA_TRY {
            LicenseInitInfo* licenseInitInfo = PrintLicenseInitInfo_getLicenseInitInfo(this);
            puts(java_string_of(java_concat("License ID: ", java_string_of(LicenseInitInfo_getLicenseId(licenseInitInfo)))));
            BasicArrayList* list = LicenseInitInfo_getServerList(licenseInitInfo);
            int32_t size = BasicArrayList_size(list);
            for (int32_t index = 0; index < size; index++) {
                puts(java_string_of(java_concat("Lic Serv: ", java_string_of(BasicArrayList_get(list, index)))));
            }
        } JAVA_CATCH(Exception, e) {
            fputs(java_string_of(java_concat("Error: ", java_string_of(e))), stdout);
            java_print_exception(e);
        } JAVA_END_TRY;
}


// throws Exception
void PrintLicenseInitInfo_main(const char** args) {
        PrintLicenseInitInfo* initInfo = PrintLicenseInitInfo_new(args);
        PrintLicenseInitInfo_printInitInfo(initInfo);
}

