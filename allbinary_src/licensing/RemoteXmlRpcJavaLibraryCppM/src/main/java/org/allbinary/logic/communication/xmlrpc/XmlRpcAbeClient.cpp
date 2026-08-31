
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

public constructor (AbeClientInformationInterface clientInfo, string remoteMethod){

            super();
        this.remoteMethod= remoteMethod;
    
this.clientInfo= clientInfo;
    

                        if(clientInfo!.getNumberOfLicenseServers() > 1)
                        
                                    {
                                    this.maxServers= clientInfo!.getNumberOfLicenseServers() -2;
    
this.start= this.myRandomFactory!.getAbsoluteNextInt(this.maxServers) +1;
    

                                    }
                                
                             else 
                        if(clientInfo!.getNumberOfLicenseServers() == 1)
                        
                                    {
                                    this.maxServers= 0;
    
this.start= 0;
    

                                    }
                                
this.isDone= false;
    
this.server= this.start;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.START_SERVER);
    
stringBuffer!.appendint(this.getServer());
    
stringBuffer!.append(this.SEP);
    
stringBuffer!.append(clientInfo!.getLicenseServer(this.getServer()));
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.commonStrings!.CONSTRUCTOR);
    
}


                //@Throws(Exception.constructor)
            
    public any get(any = {} anyType){
ForcedLogUtil.log(this.commonStrings!.NOT_IMPLEMENTED, this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_OBJECT;
    
}


                //@Throws(Exception.constructor)
            
    any tryAnother(any = {} anyType){

                        if(getServer() < getMaxServers())
                        
                                    {
                                    this.setServer(getServer() +1);
    

                                    }
                                
                        else {
                            this.setServer(0);
    

                        }
                            

                        if(getServer() != getStart() && !isIsDone())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.get(anyType);;
    

                                    }
                                
                        else {
                            this.setIsDone(true);
    

                        }
                            



                            throw new Exception("Tried All Servers But Still Failed");
                    
}


    AbeClientInformationInterface getClientInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.clientInfo;
    
}


    XmlRpcHandler getClient(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.client;
    
}


    setClient(XmlRpcClient client){
this.client= client;
    
}


    int32_t getServer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.server;
    
}


    setServer(int32_t server){
this.server= server;
    
}


    int32_t getStart(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.start;
    
}


    setStart(int32_t start){
this.start= start;
    
}


    int32_t getMaxServers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxServers;
    
}


    setMaxServers(int32_t maxServers){
this.maxServers= maxServers;
    
}


    bool isIsDone(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isDone;
    
}


    setIsDone(bool isDone){
this.isDone= isDone;
    
}


    string getRemoteMethod(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.remoteMethod;
    
}


};

            

