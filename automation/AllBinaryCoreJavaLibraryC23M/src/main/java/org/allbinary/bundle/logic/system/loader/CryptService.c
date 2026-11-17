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
// package org.allbinary.bundle.logic.system.loader

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/ByteArrayInputStream.h"
// #include "java/io/InputStream.h"
#include "org/allbinary/globals/Globals.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/gui/dialog/BasicTextJDialog.h"
#include "org/allbinary/gui/dialog/ExitCloseListener.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/AbCryptUtil.h"
#include "org/allbinary/logic/system/security/AbKeys.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h"
#include "org/allbinary/logic/system/security/licensing/AbeLicenseInterfaceFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeNoLicense.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct CryptService CryptService;
struct CryptService {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    AbCryptUtil* abCryptUtil;
};


CryptService* CryptService_new(void);

void CryptService_init(CryptService* this);
InputStream* CryptService_getDecryptedInputStream(CryptService* this, AbeClientInformationInterface* abeClientInformation, const char* name, InputStream* inputStream);
static void CryptService_showLicenseDialog(CryptService* this, AbeClientInformationInterface* abeClientInformation, JavaException* e);

static void CryptService_initFields(CryptService* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->abCryptUtil = AbCryptUtil_getInstance();
}


void CryptService_init(CryptService* this) {
    CryptService_initFields(this);
        Globals_init(Globals_getInstance(), JAVA_CALL(java_class_of(this), getClassLoader), "./");
        LogUtil_putF(this->logUtil, java_concat("Set Globals: ", java_string_of(JAVA_CALL(_URLGLOBALS, getWebappPath))), this, this->commonStrings->CONSTRUCTOR);
}

CryptService* CryptService_new(void) {
    CryptService* this = calloc(1, sizeof(CryptService));
    CryptService_init(this);
    return this;
}


InputStream* CryptService_getDecryptedInputStream(CryptService* this, AbeClientInformationInterface* abeClientInformation, const char* name, InputStream* inputStream) {
        JAVA_TRY {
            const char* key = AbKeys_getKey(AbKeys_getInstance(), abeClientInformation, name);
            int8_t* decrypted = AbCryptUtil_decrypt(this->abCryptUtil, inputStream, key);
            return ByteArrayInputStream_new(decrypted);
        } JAVA_CATCH(LicensingException, e) {
            CryptService_showLicenseDialog(this, abeClientInformation, e);
        } JAVA_CATCH(Exception, e) {
            CryptService_showLicenseDialog(this, abeClientInformation, e);
        } JAVA_END_TRY;
        return nullptr;
}


static void CryptService_showLicenseDialog(CryptService* this, AbeClientInformationInterface* abeClientInformation, JavaException* e) {
        JAVA_TRY {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, e);
            BasicTextJDialog* basicTextJDialog = BasicTextJDialog_new(java_exception_message(e));
            JAVA_TRY {
                AbeLicenseInterface* abeLicenseInterface = AbeLicenseInterfaceFactory_getLicenseInstance(AbeLicenseInterfaceFactory_getInstance(), abeClientInformation);
                if (abeLicenseInterface != AbeNoLicense_getInstance()) {
                    if (AbeLicenseInterface_isValid(abeLicenseInterface)) {
                        BasicTextJDialog_setText(basicTextJDialog, "Subscription Invalid");
                    }
                }
            } JAVA_CATCH(LicensingException, e2) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, e2);
            } JAVA_END_TRY;
            BasicTextJDialog_addCloseListener(basicTextJDialog, ExitCloseListener_new());
            BasicTextJDialog_setVisible(basicTextJDialog, true);
        } JAVA_CATCH(Exception, e3) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, e3);
        } JAVA_END_TRY;
}

