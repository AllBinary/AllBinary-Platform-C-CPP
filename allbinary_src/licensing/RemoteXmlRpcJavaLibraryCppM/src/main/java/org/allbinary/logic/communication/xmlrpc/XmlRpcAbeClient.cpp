
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

    public: static bool isOnline = true;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: std::string remoteMethod;

    private: AbeClientInformationInterface clientInfo;

    private: XmlRpcHandler client = NullXmlRpcHandler::NULL_XML_RPC_HANDLER;

    private: int32_t server;

    private: int32_t start= 0;

    private: int32_t maxServers= 0;

    private: bool isDone;

    private: const std::string START_SERVER = "Start With Server #";

    protected: const std::string TRYING = "Trying Server #";

    protected: const std::string SEP = CommonLabels::getInstance().COLON_SEP;

    protected: const std::string CLIENT_INFO = "Client Info: \n";

    protected: const std::string RESULT = CommonLabels::getInstance().RESULT_ +CommonSeps::getInstance().NEW_LINE;

    protected: const std::string INVALID = "License data is Invalid Trying Other Servers";

    protected: const std::string EXCEPTION_IN_CLIENT = "Exception in client";

    protected: const std::string SERVER_REPORTED_ERROR = "Server reported error";

    protected: const std::string UNKNOWN_ERROR = "Unknown License Retrieval Failure";

    protected: const std::string TRYING_OTHER_SERVERS = "IOException Trying Other Servers";

    protected: const std::string HOST_NOT_RESOLVED_MSG = "Not Trying Again Since Host Unresolved";

    protected: const std::string HOST_NOT_RESOLVED = "Host is unresolved";

    private: const MyRandomFactory myRandomFactory = MyRandomFactory::getInstance();

public: XmlRpcAbeClient(AbeClientInformationInterface clientInfo, std::string remoteMethod){
this->remoteMethod= remoteMethod;
    
this->clientInfo= clientInfo;
    

                        if(clientInfo.getNumberOfLicenseServers() > 1)
                        
                                    {
                                    this->maxServers= clientInfo.getNumberOfLicenseServers() -2;
    
this->start= this->myRandomFactory.getAbsoluteNextInt(this->maxServers) +1;
    

                                    }
                                
                             else 
                        if(clientInfo.getNumberOfLicenseServers() == 1)
                        
                                    {
                                    this->maxServers= 0;
    
this->start= 0;
    

                                    }
                                
this->isDone= false;
    
this->server= this->start;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->START_SERVER);
    
stringBuffer.appendint(this->getServer());
    
stringBuffer.append(this->SEP);
    
stringBuffer.append(clientInfo.getLicenseServer(this->getServer()));
    
this->logUtil.putF(stringBuffer.toString(), this, this->commonStrings.CONSTRUCTOR);
    
}


                //@Throws(Exception.constructor)
            
    public: Object* get(Object* anyType){
ForcedLogUtil::log(this->commonStrings.NOT_IMPLEMENTED, this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance().NULL_OBJECT;
    
}


                //@Throws(Exception.constructor)
            
    protected: Object* tryAnother(Object* anyType){

                        if(getServer() < getMaxServers())
                        
                                    {
                                    this->setServer(getServer() +1);
    

                                    }
                                
                        else {
                            this->setServer(0);
    

                        }
                            

                        if(getServer() != getStart() && !isIsDone())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->get(anyType);;
    

                                    }
                                
                        else {
                            this->setIsDone(true);
    

                        }
                            



                            throw Exception("Tried All Servers But Still Failed");
                    
}


    protected: AbeClientInformationInterface getClientInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->clientInfo;
    
}


    protected: XmlRpcHandler getClient(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->client;
    
}


    protected: void setClient(XmlRpcClient client){
this->client= client;
    
}


    protected: int32_t getServer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->server;
    
}


    protected: void setServer(int32_t server){
this->server= server;
    
}


    protected: int32_t getStart(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->start;
    
}


    protected: void setStart(int32_t start){
this->start= start;
    
}


    protected: int32_t getMaxServers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxServers;
    
}


    protected: void setMaxServers(int32_t maxServers){
this->maxServers= maxServers;
    
}


    protected: bool isIsDone(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isDone;
    
}


    protected: void setIsDone(bool isDone){
this->isDone= isDone;
    
}


    protected: std::string getRemoteMethod(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->remoteMethod;
    
}


};

            

