
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_XMLRPCREMOTELOGCLIENT_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_XMLRPCREMOTELOGCLIENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/log/XmlRpcRemoteLogClient.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <java/io/IOException.h>

      
#include <org/apache/xmlrpc/XmlRpcClient.h>

      
#include <org/apache/xmlrpc/XmlRpcException.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>

      
#include <org/allbinary/logic/system/security/crypt/jcehelper/NoCrypt.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

XmlRpcRemoteLogClient::XmlRpcRemoteLogClient(AbeClientInformationInterface* clientInfo) : XmlRpcAbeClient(clientInfo, "SSLLogServ.logUtil"), noCrypt(new NoCrypt()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto XmlRpcRemoteLogClient::get(Object* anyType) -> Object*{

        try {
            
    BasicArrayList* param = new BasicArrayListD();;
    

    std::string serverUrl = getClientInfo()->getLicenseServer(this->getServer());;
    

    int32_t index = JavaString::lastIndexOf(serverUrl, "/");;
    
serverUrl= JavaString::valueOf(JavaString::substring(serverUrl, 0, index +1)) +JavaString::valueOf("logservssl.php");
    

    XmlRpcClient* xmlRpcClient = new XmlRpcClient(serverUrl);;
    
this->setClient(xmlRpcClient);
    
xmlRpcClient->setBasicAuthentication(
                            nullptr, 
                            nullptr);
    

    ABHashtable<Object*, Object*>* hashtable = dynamic_cast<ABHashtable<Object*, Object*>*>(anyType);;
    
param->add(hashtable);
    

    Object* result = xmlRpcClient->execute(this->getRemoteMethod(), param, this->noCrypt);;
    
System.out.println(CommonLabels::getInstance()->RESULT_ +CommonSeps::getInstance()->NEW_LINE +result->toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(IOException& e) 
            {
System.out.println("IOException Trying Other Servers");
    

                        if(!e.getMessage().startsWith(HOST_NOT_RESOLVED))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tryAnother(anyType);;
    

                                    }
                                
                        else {
                            


                            throw Exception(HOST_NOT_RESOLVED_MSG);
                    

                        }
                            
}

                //: 
 catch(XmlRpcException& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tryAnother(anyType);;
    
}

                //: 
 catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tryAnother(anyType);;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_XMLRPCREMOTELOGCLIENT_CPP
