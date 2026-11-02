
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_XMLRPCREMOTELICENSEREGISTRATIONCLIENT_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_XMLRPCREMOTELICENSEREGISTRATIONCLIENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/IOException.h>
class XmlRpcClient;
class XmlRpcException;
class BasicArrayList;
class BasicArrayListD;
class CryptInterface;
class CommonLabels;
class StringMaker;
class LogUtil;
#include <org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>
class ExceptionUtil;
class AbeClientInformationInterface;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class XmlRpcRemoteLicenseRegistrationClient: public XmlRpcAbeClient {

    /*protected*/ public: LogUtil* logUtil;

    private: const std::string PAGE = "licenseregistrationserverssl.php";

public: XmlRpcRemoteLicenseRegistrationClient(AbeClientInformationInterface* clientInfo);

                //@Throws(Exception.constructor)
            
    public: Object* get(Object* anyType, CryptInterface* cryptInterface);
    public: Object* get(const std::string& anyType, CryptInterface* cryptInterface) { return get(JavaString::box(anyType), cryptInterface); }

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_XMLRPCREMOTELICENSEREGISTRATIONCLIENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_XMLRPCREMOTELICENSEREGISTRATIONCLIENT_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_XMLRPCREMOTELICENSEREGISTRATIONCLIENT_H_COMPLETE
        #if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<org/apache/xmlrpc/XmlRpcClient.h>)
#include <org/apache/xmlrpc/XmlRpcClient.h>
#endif
#if __has_include(<org/apache/xmlrpc/XmlRpcException.h>)
#include <org/apache/xmlrpc/XmlRpcException.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/init/crypt/jcehelper/CryptInterface.h>)
#include <org/allbinary/init/crypt/jcehelper/CryptInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>)
#include <org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>
#endif
#if __has_include(<org/allbinary/logic/java/exception/ExceptionUtil.h>)
#include <org/allbinary/logic/java/exception/ExceptionUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif

        #endif
    
