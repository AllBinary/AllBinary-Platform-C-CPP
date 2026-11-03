
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_XMLRPCREMOTELOGCLIENT_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_XMLRPCREMOTELOGCLIENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <java/io/IOException.h>
class XmlRpcClient;
class XmlRpcException;
class BasicArrayList;
class BasicArrayListD;
#include <org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>
class NoCrypt;
class AbeClientInformationInterface;
class CommonLabels;
class CommonSeps;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class XmlRpcRemoteLogClient: public XmlRpcAbeClient {

    private: NoCrypt* noCrypt;

public: XmlRpcRemoteLogClient(AbeClientInformationInterface* clientInfo);

                //@Throws(Exception.constructor)
            
    public: Object* get(Object* anyType);
    public: Object* get(const std::string& anyType) { return get(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> Object* get(BoxValue anyType) { return get(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> Object* get(const std::vector<BoxElement>& anyType) { return get(JavaBoxes::toObject(anyType)); }

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_XMLRPCREMOTELOGCLIENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_XMLRPCREMOTELOGCLIENT_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_XMLRPCREMOTELOGCLIENT_H_COMPLETE
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
#if __has_include(<org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>)
#include <org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/crypt/jcehelper/NoCrypt.h>)
#include <org/allbinary/logic/system/security/crypt/jcehelper/NoCrypt.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif

        #endif
    
