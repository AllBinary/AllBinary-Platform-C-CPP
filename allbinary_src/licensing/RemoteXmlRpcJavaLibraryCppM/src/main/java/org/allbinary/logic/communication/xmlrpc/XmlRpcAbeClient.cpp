
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_XMLRPC_XMLRPCABECLIENT_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_XMLRPC_XMLRPCABECLIENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h"
        

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
        

XmlRpcAbeClient::XmlRpcAbeClient(AbeClientInformationInterface* clientInfo, std::string remoteMethod) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), client(NullXmlRpcHandler::NULL_XML_RPC_HANDLER), SEP(CommonLabels::getInstance()->COLON_SEP), RESULT(CommonLabels::getInstance()->RESULT_ +CommonSeps::getInstance()->NEW_LINE), myRandomFactory(MyRandomFactory::getInstance()){
this->remoteMethod= remoteMethod;
    
this->clientInfo= clientInfo;
    

                        if(clientInfo->getNumberOfLicenseServers() > 1)
                        
                                    {
                                    this->maxServers= clientInfo->getNumberOfLicenseServers() -2;
    
this->start= this->myRandomFactory->getAbsoluteNextInt(this->maxServers) +1;
    

                                    }
                                
                             else 
                        if(clientInfo->getNumberOfLicenseServers() == 1)
                        
                                    {
                                    this->maxServers= 0;
    
this->start= 0;
    

                                    }
                                
this->isDone= false;
    
this->server= this->start;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->START_SERVER);
    
stringBuffer->appendint(this->getServer());
    
stringBuffer->append(this->SEP);
    
stringBuffer->append(clientInfo->getLicenseServer(this->getServer()));
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, this->commonStrings->CONSTRUCTOR);
    
}


                //@Throws(Exception.constructor)
            
    auto XmlRpcAbeClient::get(Object* anyType) -> Object*{
ForcedLogUtil::log(this->commonStrings->NOT_IMPLEMENTED, this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(NullUtil::getInstance()->NULL_OBJECT);
    
}


                //@Throws(Exception.constructor)
            
    auto XmlRpcAbeClient::tryAnother(Object* anyType) -> Object*{

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


    auto XmlRpcAbeClient::getClientInfo() -> AbeClientInformationInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->clientInfo;
    
}


    auto XmlRpcAbeClient::getClient() -> XmlRpcHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->client;
    
}


    auto XmlRpcAbeClient::setClient(XmlRpcClient* client) -> void{
this->client= client;
    
}


    auto XmlRpcAbeClient::getServer() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->server;
    
}


    auto XmlRpcAbeClient::setServer(int32_t server) -> void{
this->server= server;
    
}


    auto XmlRpcAbeClient::getStart() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->start;
    
}


    auto XmlRpcAbeClient::setStart(int32_t start) -> void{
this->start= start;
    
}


    auto XmlRpcAbeClient::getMaxServers() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->maxServers;
    
}


    auto XmlRpcAbeClient::setMaxServers(int32_t maxServers) -> void{
this->maxServers= maxServers;
    
}


    auto XmlRpcAbeClient::isIsDone() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isDone;
    
}


    auto XmlRpcAbeClient::setIsDone(bool isDone) -> void{
this->isDone= isDone;
    
}


    auto XmlRpcAbeClient::getRemoteMethod() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->remoteMethod;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_XMLRPC_XMLRPCABECLIENT_CPP
