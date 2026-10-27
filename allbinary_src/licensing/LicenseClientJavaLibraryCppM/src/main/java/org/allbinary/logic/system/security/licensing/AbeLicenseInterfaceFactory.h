
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABELICENSEINTERFACEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABELICENSEINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/IOException.h>
#include <java/util/Calendar.h>
class LogUtil;
class AbeLicenseClient;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AbeLicenseInterface;
class AbeClientInformationInterface;
class AbeNoLicense;
class AbeClientInformationData;
class LicensingException;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbeLicenseInterfaceFactory
            : public virtual Object
         {

    private: static AbeLicenseInterfaceFactory* SINGLETON_owner();
    private: static AbeLicenseInterfaceFactory* SINGLETON;

    public: static AbeLicenseInterfaceFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: int64_t time = 0;

    private: bool check = false;

    private: int32_t checkPeriod = 36000000;

    private: AbeLicenseInterface* abeLicenseInterface = 
                nullptr
            ;

private: AbeLicenseInterfaceFactory();

                //@Throws(LicensingException.constructor)
            
    public: AbeLicenseInterface* getLicenseInstance(AbeClientInformationInterface* abeClientInformation);

                //@Throws(LicensingException.constructor)
            
    private: AbeLicenseInterface* get(AbeClientInformationInterface* abeClientInformation);

    private: bool isTimeToGetKey();

    public: void setCheck(bool check);

    private: bool isCheck();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABELICENSEINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABELICENSEINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABELICENSEINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<java/util/Calendar.h>)
#include <java/util/Calendar.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/client/AbeLicenseClient.h>)
#include <org/allbinary/logic/system/security/licensing/client/AbeLicenseClient.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h")
#include "org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h")
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/AbeNoLicense.h")
#include "org/allbinary/logic/system/security/licensing/AbeNoLicense.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/AbeClientInformationData.h")
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationData.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/LicensingException.h")
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#endif

        #endif
    
