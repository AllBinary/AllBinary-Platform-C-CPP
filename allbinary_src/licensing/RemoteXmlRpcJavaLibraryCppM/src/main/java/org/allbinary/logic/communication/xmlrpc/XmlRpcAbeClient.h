
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
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
        

    public static isOnline: bool = true;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const remoteMethod: string;

    private: const clientInfo: AbeClientInformationInterface;

    private: client: XmlRpcHandler = NullXmlRpcHandler.NULL_XML_RPC_HANDLER;

    private: server: int32_t;

    private: start: int32_t= 0;

    private: maxServers: int32_t= 0;

    private: isDone: bool;

    private: const START_SERVER: string = "Start With Server #";

    const TRYING: string = "Trying Server #";

    const SEP: string = CommonLabels.getInstance()!.COLON_SEP;

    const CLIENT_INFO: string = "Client Info: \n";

    const RESULT: string = CommonLabels.getInstance()!.RESULT_ +CommonSeps.getInstance()!.NEW_LINE;

    const INVALID: string = "License data is Invalid Trying Other Servers";

    const EXCEPTION_IN_CLIENT: string = "Exception in client";

    const SERVER_REPORTED_ERROR: string = "Server reported error";

    const UNKNOWN_ERROR: string = "Unknown License Retrieval Failure";

    const TRYING_OTHER_SERVERS: string = "IOException Trying Other Servers";

    const HOST_NOT_RESOLVED_MSG: string = "Not Trying Again Since Host Unresolved";

    const HOST_NOT_RESOLVED: string = "Host is unresolved";

    private: const myRandomFactory: MyRandomFactory = MyRandomFactory.getInstance()!;

public constructor (AbeClientInformationInterface clientInfo, string remoteMethod);

                //@Throws(Exception.constructor)
            
    public any get(any = {} anyType);

                //@Throws(Exception.constructor)
            
    any tryAnother(any = {} anyType);

    AbeClientInformationInterface getClientInfo();

    XmlRpcHandler getClient();

    setClient(XmlRpcClient client);

    int32_t getServer();

    setServer(int32_t server);

    int32_t getStart();

    setStart(int32_t start);

    int32_t getMaxServers();

    setMaxServers(int32_t maxServers);

    bool isIsDone();

    setIsDone(bool isDone);

    string getRemoteMethod();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_XMLRPC_XMLRPCABECLIENT_H
