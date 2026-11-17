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
// #include "java/io/File.h"
// #include "java/io/FileReader.h"
// #include "java/io/LineNumberReader.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/business/init/LicenseInitInfo.h"
#include "org/allbinary/business/init/LicenseInitInfoUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/client/XmlRpcAbeLicenseRetrievalClient.h"
#include "org/allbinary/globals/PATH_GLOBALS.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct LicenseClientAndServerTest LicenseClientAndServerTest;
struct LicenseClientAndServerTest {
    LogUtil* logUtil;
    BasicArrayList* vector;
};


LicenseClientAndServerTest* LicenseClientAndServerTest_new(const char** options);

void LicenseClientAndServerTest_init(LicenseClientAndServerTest* this, const char** options);
void LicenseClientAndServerTest_test(LicenseClientAndServerTest* this);
void LicenseClientAndServerTest_main(const char** args);

static void LicenseClientAndServerTest_initFields(LicenseClientAndServerTest* this) {
    this->logUtil = LogUtil_getInstance();
    this->vector = BasicArrayListD_new();
}


void LicenseClientAndServerTest_init(LicenseClientAndServerTest* this, const char** options) {
    LicenseClientAndServerTest_initFields(this);
        LicenseInitInfoUtil_setFilePath(LicenseInitInfoUtil_getInstance(), PrintLicenseInitInfo_PATH + JAVA_CALL(_PATH_GLOBALS, getInstance)->INIT_PATH);
        for (int32_t index = 1; index < java_array_length(options); index++) {
            BasicArrayList_add(this->vector, options[index]);
        }
        if (java_array_length(options) < 2) {
            File* file = File_new(java_concat(java_string_of(PrintLicenseInitInfo_PATH), "testlicenseservers.txt"));
            FileReader* reader = FileReader_new(file);
            LineNumberReader* lineNumberReader = LineNumberReader_new(reader);
            while (LineNumberReader_ready(lineNumberReader)) {
                BasicArrayList_add(this->vector, LineNumberReader_readLine(lineNumberReader));
            }
        }
}

LicenseClientAndServerTest* LicenseClientAndServerTest_new(const char** options) {
    LicenseClientAndServerTest* this = calloc(1, sizeof(LicenseClientAndServerTest));
    LicenseClientAndServerTest_init(this, options);
    return this;
}


// synchronized
void LicenseClientAndServerTest_test(LicenseClientAndServerTest* this) {
        StringMaker* stringBuffer = StringMaker_new();
        JAVA_TRY {
            BasicArrayList* list = BasicArrayListD_new();
            const char* TESTING = "Testing with new licence:<br/>";
            const char* PROCESSING = "Processing: <br/>";
            const char* END = "<br/>End<br/>";
            const char* RESULT = "Test Result: ";
            int32_t size = BasicArrayList_size(this->vector);
            for (int32_t index = 0; index < size; index++) {
                StringMaker_append(stringBuffer, TESTING);
                const char* serverName = ((const char*) BasicArrayList_get(this->vector, index));
                JAVA_TRY {
                    LicenseInitInfo* licenseInitInfo = LicenseInitInfo_new();
                    LicenseInitInfo_addServer(licenseInitInfo, serverName);
                    LicenseInitInfoUtil_write(LicenseInitInfoUtil_getInstance(), licenseInitInfo);
                    AbeClientInformationInterface* abeClientInformation = AbeClientInformationInterfaceFactory_getInstance();
                    XmlRpcAbeLicenseRetrievalClient* xmlRpcAbeLicenseClient = XmlRpcAbeLicenseRetrievalClient_new(abeClientInformation);
                    AbeLicenseInterface* abeLicenseInterface = ((AbeLicenseInterface*) XmlRpcAbeLicenseRetrievalClient_get(xmlRpcAbeLicenseClient, nullptr));
                    if (abeLicenseInterface != nullptr) {
                        StringMaker_append(stringBuffer, PROCESSING);
                        StringMaker_append(stringBuffer, AbeLicenseInterface_toString(abeLicenseInterface));
                    }
                    StringMaker_append(stringBuffer, END);
                    LogUtil_putF(this->logUtil, java_concat(RESULT, StringMaker_toString(stringBuffer)), this, "test");
                    StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                } JAVA_CATCH(Exception, e) {
                    BasicArrayList_add(list, serverName);
                    LogUtil_put(this->logUtil, java_concat("Test Error: ", StringMaker_toString(stringBuffer)), this, "test", e);
                } JAVA_END_TRY;
            }
            LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("Total Servers Failed: ", java_string_of(BasicArrayList_size(list))), " Failed Servers: "), BasicArrayList_toString(list)), this, "test");
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, java_concat("Test Error: ", StringMaker_toString(stringBuffer)), this, "test", e);
        } JAVA_END_TRY;
}


void LicenseClientAndServerTest_main(const char** args) {
        JAVA_TRY {
            LicenseClientAndServerTest* licensingTest = LicenseClientAndServerTest_new(args);
            LicenseClientAndServerTest_test(licensingTest);
        } JAVA_CATCH(Exception, e) {
            LogUtil* logUtil = LogUtil_getInstance();
            LogUtil_put(logUtil, CommonStrings_getInstance()->EXCEPTION, "main()", "main()", e);
        } JAVA_END_TRY;
}

