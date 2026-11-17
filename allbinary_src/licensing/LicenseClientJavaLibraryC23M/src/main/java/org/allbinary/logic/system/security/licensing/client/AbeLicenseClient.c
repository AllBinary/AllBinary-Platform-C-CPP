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
// package org.allbinary.logic.system.security.licensing.client

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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct AbeLicenseClient AbeLicenseClient;
struct AbeLicenseClient {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    int32_t MINSERVERS;
};


AbeLicenseClient* AbeLicenseClient_new(void);

void AbeLicenseClient_init(AbeLicenseClient* this);
AbeLicenseInterface* AbeLicenseClient_get(AbeLicenseClient* this, AbeClientInformationInterface* abeClientInformation);

static void AbeLicenseClient_initFields(AbeLicenseClient* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->MINSERVERS = 3;
}


void AbeLicenseClient_init(AbeLicenseClient* this) {
    AbeLicenseClient_initFields(this);
}

AbeLicenseClient* AbeLicenseClient_new(void) {
    AbeLicenseClient* this = calloc(1, sizeof(AbeLicenseClient));
    AbeLicenseClient_init(this);
    return this;
}


// throws Exception
// synchronized
AbeLicenseInterface* AbeLicenseClient_get(AbeLicenseClient* this, AbeClientInformationInterface* abeClientInformation) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->GET);
            XmlRpcAbeClient* xmlRpcAbeLicenseClient = XmlRpcAbeLicenseRetrievalClient_new(abeClientInformation);
            AbeLicenseInterface* abeLicenseInterface = ((AbeLicenseInterface*) XmlRpcAbeClient_get(xmlRpcAbeLicenseClient, nullptr));
            const char* licenseId = AbeLicenseInterface_getLicenseId(abeLicenseInterface);
            BasicArrayList* servers = AbeLicenseInterface_getServers(abeLicenseInterface);
            bool isNewLicenseId = false;
            bool isBetterServerList = false;
            StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
            if (StringValidationUtil_isEmpty(stringValidationUtil, AbeClientInformationInterface_getLicenseId(abeClientInformation)) && !AbeClientInformationInterface_isSameId(abeClientInformation, licenseId)) {
                isNewLicenseId = true;
            }
            if (BasicArrayList_size(servers) >= this->MINSERVERS && AbeClientInformationInterface_isLargerOrDifferentServerList(abeClientInformation, servers)) {
                isBetterServerList = true;
            }
            if (isBetterServerList || isNewLicenseId) {
                LicenseInitInfo* initInfo = LicenseInitInfoUtil_read(LicenseInitInfoUtil_getInstance());
                LicenseInitInfo_setLicenseId(initInfo, licenseId);
                LicenseInitInfo_setServerList(initInfo, servers);
                LicenseInitInfoUtil_write(LicenseInitInfoUtil_getInstance(), initInfo);
                AbeClientInformationInterface_init(abeClientInformation);
            }
            LogUtil_putF(this->logUtil, this->commonStrings->END, this, this->commonStrings->GET);
            return abeLicenseInterface;
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}

