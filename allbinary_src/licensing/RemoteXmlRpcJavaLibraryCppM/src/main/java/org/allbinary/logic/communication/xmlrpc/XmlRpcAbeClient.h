
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/apache/xmlrpc/NullXmlRpcHandler.h>

      
#include <org/apache/xmlrpc/XmlRpcClient.h>

      
#include <org/apache/xmlrpc/XmlRpcHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class XmlRpcAbeClient
            : public Object
         {

    public: static inline bool isOnline = true;

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: std::string remoteMethod;

    private: AbeClientInformationInterface* clientInfo;

    private: XmlRpcHandler* client = NullXmlRpcHandler::NULL_XML_RPC_HANDLER;

    private: int32_t server;

    private: int32_t start= 0;

    private: int32_t maxServers= 0;

    private: bool isDone;

    private: const std::string START_SERVER = "Start With Server #";

    protected: const std::string TRYING = "Trying Server #";

    protected: const std::string SEP = CommonLabels::getInstance()->COLON_SEP;

    protected: const std::string CLIENT_INFO = "Client Info: \n";

    protected: const std::string RESULT = CommonLabels::getInstance()->RESULT_ +CommonSeps::getInstance()->NEW_LINE;

    protected: const std::string INVALID = "License data is Invalid Trying Other Servers";

    protected: const std::string EXCEPTION_IN_CLIENT = "Exception in client";

    protected: const std::string SERVER_REPORTED_ERROR = "Server reported error";

    protected: const std::string UNKNOWN_ERROR = "Unknown License Retrieval Failure";

    protected: const std::string TRYING_OTHER_SERVERS = "IOException Trying Other Servers";

    protected: const std::string HOST_NOT_RESOLVED_MSG = "Not Trying Again Since Host Unresolved";

    protected: const std::string HOST_NOT_RESOLVED = "Host is unresolved";

    private: MyRandomFactory* myRandomFactory = MyRandomFactory::getInstance();

public: XmlRpcAbeClient(AbeClientInformationInterface* clientInfo, std::string remoteMethod);

                //@Throws(Exception.constructor)
            
    public: Object* get(Object* anyType);

                //@Throws(Exception.constructor)
            
    protected: Object* tryAnother(Object* anyType);

    protected: AbeClientInformationInterface* getClientInfo();

    protected: XmlRpcHandler* getClient();

    protected: void setClient(XmlRpcClient* client);

    protected: int32_t getServer();

    protected: void setServer(int32_t server);

    protected: int32_t getStart();

    protected: void setStart(int32_t start);

    protected: int32_t getMaxServers();

    protected: void setMaxServers(int32_t maxServers);

    protected: bool isIsDone();

    protected: void setIsDone(bool isDone);

    protected: std::string getRemoteMethod();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_XMLRPC_XMLRPCABECLIENT_H
