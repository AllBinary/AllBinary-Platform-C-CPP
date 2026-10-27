
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_BUNDLE_LOGIC_SYSTEM_LOADER_CRYPTSERVICE_H
        #define ORG_ALLBINARY_BUNDLE_LOGIC_SYSTEM_LOADER_CRYPTSERVICE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
class Globals;
class URLGLOBALS;
class BasicTextJDialog;
class ExitCloseListener;
class LogUtil;
class AbCryptUtil;
class AbKeys;
class AbeClientInformationInterface;
class AbeLicenseInterface;
class AbeLicenseInterfaceFactory;
class AbeNoLicense;
class LicensingException;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CryptService
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: AbCryptUtil* abCryptUtil;

public: CryptService();

    public: InputStream* getDecryptedInputStream(AbeClientInformationInterface* abeClientInformation, std::string name, InputStream* inputStream);

    private: void showLicenseDialog(AbeClientInformationInterface* abeClientInformation, Exception* e);

};

            


        #endif //ORG_ALLBINARY_BUNDLE_LOGIC_SYSTEM_LOADER_CRYPTSERVICE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUNDLE_LOGIC_SYSTEM_LOADER_CRYPTSERVICE_H_COMPLETE)
        #define ORG_ALLBINARY_BUNDLE_LOGIC_SYSTEM_LOADER_CRYPTSERVICE_H_COMPLETE
        #if __has_include(<java/io/ByteArrayInputStream.h>)
#include <java/io/ByteArrayInputStream.h>
#endif
#if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<org/allbinary/globals/Globals.h>)
#include <org/allbinary/globals/Globals.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/gui/dialog/BasicTextJDialog.h>)
#include <org/allbinary/gui/dialog/BasicTextJDialog.h>
#endif
#if __has_include(<org/allbinary/gui/dialog/ExitCloseListener.h>)
#include <org/allbinary/gui/dialog/ExitCloseListener.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/AbCryptUtil.h>)
#include <org/allbinary/logic/system/security/AbCryptUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/AbKeys.h>)
#include <org/allbinary/logic/system/security/AbKeys.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeLicenseInterfaceFactory.h>)
#include <org/allbinary/logic/system/security/licensing/AbeLicenseInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeNoLicense.h>)
#include <org/allbinary/logic/system/security/licensing/AbeNoLicense.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
