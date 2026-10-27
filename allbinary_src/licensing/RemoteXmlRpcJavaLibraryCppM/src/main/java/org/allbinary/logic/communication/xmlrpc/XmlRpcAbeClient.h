
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_XMLRPC_XMLRPCABECLIENT_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_XMLRPC_XMLRPCABECLIENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class MyRandomFactory;
class NullUtil;
class ForcedLogUtil;
class LogUtil;
class StringMaker;
class AbeClientInformationInterface;
class CommonLabels;
class CommonSeps;
class CommonStrings;
class NullXmlRpcHandler;
class XmlRpcClient;
class XmlRpcHandler;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class XmlRpcAbeClient
            : public virtual Object
         {

    public: static inline bool isOnline = true;

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: std::string remoteMethod;

    private: AbeClientInformationInterface* clientInfo;

    private: XmlRpcHandler* client;

    private: int32_t server;

    private: int32_t start= 0;

    private: int32_t maxServers= 0;

    private: bool isDone;

    private: const std::string START_SERVER = "Start With Server #";

    /*protected*/ public: const std::string TRYING = "Trying Server #";

    /*protected*/ public: const std::string SEP;

    /*protected*/ public: const std::string CLIENT_INFO = "Client Info: \n";

    /*protected*/ public: const std::string RESULT;

    /*protected*/ public: const std::string INVALID = "License data is Invalid Trying Other Servers";

    /*protected*/ public: const std::string EXCEPTION_IN_CLIENT = "Exception in client";

    /*protected*/ public: const std::string SERVER_REPORTED_ERROR = "Server reported error";

    /*protected*/ public: const std::string UNKNOWN_ERROR = "Unknown License Retrieval Failure";

    /*protected*/ public: const std::string TRYING_OTHER_SERVERS = "IOException Trying Other Servers";

    /*protected*/ public: const std::string HOST_NOT_RESOLVED_MSG = "Not Trying Again Since Host Unresolved";

    /*protected*/ public: const std::string HOST_NOT_RESOLVED = "Host is unresolved";

    private: MyRandomFactory* myRandomFactory;

public: XmlRpcAbeClient(AbeClientInformationInterface* clientInfo, std::string remoteMethod);

                //@Throws(Exception.constructor)
            
    public: Object* get(Object* anyType);
    public: Object* get(const std::string& anyType) { return get(JavaString::box(anyType)); }

                //@Throws(Exception.constructor)
            
    /*protected*/ public: Object* tryAnother(Object* anyType);
    /*protected*/ public: Object* tryAnother(const std::string& anyType) { return tryAnother(JavaString::box(anyType)); }

    /*protected*/ public: AbeClientInformationInterface* getClientInfo();

    /*protected*/ public: XmlRpcHandler* getClient();

    /*protected*/ public: void setClient(XmlRpcClient* client);

    /*protected*/ public: int32_t getServer();

    /*protected*/ public: void setServer(int32_t server);

    /*protected*/ public: int32_t getStart();

    /*protected*/ public: void setStart(int32_t start);

    /*protected*/ public: int32_t getMaxServers();

    /*protected*/ public: void setMaxServers(int32_t maxServers);

    /*protected*/ public: bool isIsDone();

    /*protected*/ public: void setIsDone(bool isDone);

    /*protected*/ public: std::string getRemoteMethod();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_XMLRPC_XMLRPCABECLIENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_XMLRPC_XMLRPCABECLIENT_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_XMLRPC_XMLRPCABECLIENT_H_COMPLETE
        #if __has_include(<org/allbinary/game/rand/MyRandomFactory.h>)
#include <org/allbinary/game/rand/MyRandomFactory.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
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
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/apache/xmlrpc/NullXmlRpcHandler.h>)
#include <org/apache/xmlrpc/NullXmlRpcHandler.h>
#endif
#if __has_include(<org/apache/xmlrpc/XmlRpcClient.h>)
#include <org/apache/xmlrpc/XmlRpcClient.h>
#endif
#if __has_include(<org/apache/xmlrpc/XmlRpcHandler.h>)
#include <org/apache/xmlrpc/XmlRpcHandler.h>
#endif

        #endif
    
