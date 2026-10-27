
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENT_ABELICENSECLIENT_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENT_ABELICENSECLIENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class LicenseInitInfo;
class LicenseInitInfoUtil;
class LogUtil;
class XmlRpcAbeClient;
class StringValidationUtil;
class AbeClientInformationInterface;
class AbeLicenseInterface;
class CommonStrings;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class XmlRpcAbeLicenseRetrievalClient;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbeLicenseClient
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: const int32_t MINSERVERS = 3;

public: AbeLicenseClient();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: AbeLicenseInterface* get(AbeClientInformationInterface* abeClientInformation);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENT_ABELICENSECLIENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENT_ABELICENSECLIENT_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENT_ABELICENSECLIENT_H_COMPLETE
        #if __has_include(<org/allbinary/business/init/LicenseInitInfo.h>)
#include <org/allbinary/business/init/LicenseInitInfo.h>
#endif
#if __has_include(<org/allbinary/business/init/LicenseInitInfoUtil.h>)
#include <org/allbinary/business/init/LicenseInitInfoUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>)
#include <org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/client/XmlRpcAbeLicenseRetrievalClient.h")
#include "org/allbinary/logic/system/security/licensing/client/XmlRpcAbeLicenseRetrievalClient.h"
#endif

        #endif
    
