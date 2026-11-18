// Generated Code Do Not Modify
#include "org/allbinary/business/init/LicenseInitInfoUtil.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/globals/PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/AbDataInputStream.h"
#include "org/allbinary/logic/io/AbDataOutputStream.h"
#include "org/allbinary/logic/io/AbFileInputStream.h"
#include "org/allbinary/logic/io/DataOutputStreamFactory.h"
#include "org/allbinary/logic/io/FileStreamFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/crypt/DatabaseEncoder.h"
#include "org/allbinary/logic/system/security/crypt/WeakCrypt.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/business/init/LicenseInitInfo.h"
#if __has_include("org/allbinary/globals/PATH_GLOBALS.h")
#include "org/allbinary/globals/PATH_GLOBALS.h"
#endif
#if __has_include("org/allbinary/logic/io/DataOutputStreamFactory.h")
#include "org/allbinary/logic/io/DataOutputStreamFactory.h"
#endif
#if __has_include("org/allbinary/logic/io/FileStreamFactory.h")
#include "org/allbinary/logic/io/FileStreamFactory.h"
#endif
#if __has_include("org/allbinary/globals/PATH_GLOBALS.h")
#include "org/allbinary/globals/PATH_GLOBALS.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif


static LicenseInitInfoUtil* LicenseInitInfoUtil_instance;







void LicenseInitInfoUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LicenseInitInfoUtil_instance = LicenseInitInfoUtil_new();
}

void LicenseInitInfoUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LicenseInitInfoUtil", nullptr);
    java_register_method("LicenseInitInfoUtil", "setFilePath", (void*) LicenseInitInfoUtil_setFilePath);
    java_register_method("LicenseInitInfoUtil", "write", (void*) LicenseInitInfoUtil_write);
    java_register_method("LicenseInitInfoUtil", "read", (void*) LicenseInitInfoUtil_read);
    java_register_method("LicenseInitInfoUtil", "readAgain", (void*) LicenseInitInfoUtil_readAgain);
    java_register_method("LicenseInitInfoUtil", "getFilePath", (void*) LicenseInitInfoUtil_getFilePath);
}

static void LicenseInitInfoUtil_initFields(LicenseInitInfoUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->stringUtil = StringUtil_getInstance();
    this->INITFILENAME = "licenseinitdata.dat";
    this->ABOUT = "about";
    this->PRIVACY_POLICY = "privacy_policy";
    this->filePath = this->stringUtil->EMPTY_STRING;
}

void LicenseInitInfoUtil_init(LicenseInitInfoUtil* this) {
    LicenseInitInfoUtil_register();
    LicenseInitInfoUtil_initFields(this);
}

LicenseInitInfoUtil* LicenseInitInfoUtil_new(void) {
    LicenseInitInfoUtil* this = java_object_alloc(sizeof(LicenseInitInfoUtil), "LicenseInitInfoUtil");
    LicenseInitInfoUtil_init(this);
    return this;
}


LicenseInitInfoUtil* LicenseInitInfoUtil_getInstance(void) {
        return (LicenseInitInfoUtil_staticInit(), LicenseInitInfoUtil_instance);
}


// synchronized
void LicenseInitInfoUtil_setFilePath(LicenseInitInfoUtil* this, const char* filePath) {
        this->filePath = filePath;
}


// throws Exception
// synchronized
void LicenseInitInfoUtil_write(LicenseInitInfoUtil* this, LicenseInitInfo* initData) {
        if (this->filePath == this->stringUtil->EMPTY_STRING) {
            this->filePath = java_concat(URLGLOBALS_getMainPath(), PATH_GLOBALS_getInstance()->INIT_PATH);
        }
        JAVA_TRY {
            TsUtil* tsUtil = TsUtil_getInstance();
            AbDataOutputStream* dataOutputStream = DataOutputStreamFactory_getInstance(DataOutputStreamFactory_getInstance(), this->filePath, this->INITFILENAME);
            int8_t* licenseIdCrypted = TsUtil_getByteArray(tsUtil, WeakCrypt_encrypt(WeakCrypt_new(1), LicenseInitInfo_getLicenseId(initData)));
            DataOutputStream_writeUTF(dataOutputStream, DatabaseEncoder_encode(licenseIdCrypted));
            int32_t numberOfLicenseServers = LicenseInitInfo_getNumberOfServers(initData);
            DataOutputStream_writeInt(dataOutputStream, numberOfLicenseServers);
            int8_t* licenseServerCrypted = nullptr;
            for (int32_t index = 0; index < numberOfLicenseServers; index++) {
                licenseServerCrypted = TsUtil_getByteArray(tsUtil, WeakCrypt_encrypt(WeakCrypt_new(3), LicenseInitInfo_getServer(initData, index)));
                DataOutputStream_writeUTF(dataOutputStream, DatabaseEncoder_encode(licenseServerCrypted));
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, java_concat("Command Failed: ", this->INITFILENAME), this, "write", e);
            FileStreamFactory_delete(FileStreamFactory_getInstance(), this->filePath, this->INITFILENAME);
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// synchronized
LicenseInitInfo* LicenseInitInfoUtil_read(LicenseInitInfoUtil* this) {
        return LicenseInitInfoUtil_readAgain(this, 0);
}


// throws Exception
// synchronized
LicenseInitInfo* LicenseInitInfoUtil_readAgain(LicenseInitInfoUtil* this, int32_t initializeCounter) {
        const char* METHOD_NAME = "readAgain";
        if (this->filePath == this->stringUtil->EMPTY_STRING) {
            this->filePath = java_concat(URLGLOBALS_getMainPath(), PATH_GLOBALS_getInstance()->INIT_PATH);
        }
        JAVA_TRY {
            LogUtil_putF(this->logUtil, java_concat("LicenseInitInfo File: ", this->INITFILENAME), this, METHOD_NAME);
            FileStreamFactory* fileStreamFactory = FileStreamFactory_getInstance();
            AbFileInputStream* iFile = FileStreamFactory_getFileInputStreamInstance(fileStreamFactory, this->filePath, this->INITFILENAME);
            if (iFile != nullptr) {
                AbDataInputStream* iData = AbDataInputStream_new(iFile);
                LicenseInitInfo* initInfo = LicenseInitInfo_new();
                int8_t* decodedByteArray = DatabaseEncoder_decode(DataInputStream_readUTF(iData));
                const char* licenseIdDecoded = java_string_new(decodedByteArray);
                LicenseInitInfo_setLicenseId(initInfo, WeakCrypt_decrypt(WeakCrypt_new(1), licenseIdDecoded));
                int32_t numberOfLicenseServers = DataInputStream_readInt(iData);
                const char* NEXT_FILE = java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->NEXT), " License Server From File: "));
                const char* licenseServerDecoded = nullptr;
                for (int32_t index = 0; index < numberOfLicenseServers; index++) {
                    decodedByteArray = DatabaseEncoder_decode(DataInputStream_readUTF(iData));
                    licenseServerDecoded = java_string_new(decodedByteArray);
                    LicenseInitInfo_setServer(initInfo, WeakCrypt_decrypt(WeakCrypt_new(3), licenseServerDecoded), index);
                    LogUtil_putF(this->logUtil, java_concat(NEXT_FILE, LicenseInitInfo_getServer(initInfo, index)), this, METHOD_NAME);
                }
                return initInfo;
            } else {
                java_throw(java_exception_new("Exception", java_concat("Could Not Load License InitInfo: ", this->INITFILENAME)));
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_TRY {
                LogUtil_put(this->logUtil, java_concat("Command Failed: ", this->INITFILENAME), this, METHOD_NAME, e);
            } JAVA_CATCH(Exception, e2) {
                LogUtil_put(this->logUtil, java_concat("LicenseInitInfo Read Retry: ", this->INITFILENAME), this, "readAgain()", e2);
            } JAVA_END_TRY;
            java_throw(java_exception_new("Exception", java_concat("LicenseInitInfo Read Error: ", this->INITFILENAME)));
        } JAVA_END_TRY;
}


const char* LicenseInitInfoUtil_getFilePath(LicenseInitInfoUtil* this) {
        return this->filePath;
}

