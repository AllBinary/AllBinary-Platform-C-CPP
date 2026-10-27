
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/IOException.h>

      
#include <org/apache/xmlrpc/XmlRpcClient.h>

      
#include <org/apache/xmlrpc/XmlRpcException.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/init/crypt/jcehelper/CryptInterface.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>

      
#include <org/allbinary/logic/java/exception/ExceptionUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class XmlRpcRemoteLicenseRegistrationClient: public XmlRpcAbeClient {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: const std::string PAGE = "licenseregistrationserverssl.php";

public: XmlRpcRemoteLicenseRegistrationClient(AbeClientInformationInterface* clientInfo) : XmlRpcAbeClient(clientInfo, "LicenseRegistrationServer.process"){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setServer(0);
    
}


                //@Throws(Exception.constructor)
            
    public: Object* get(Object* anyType, CryptInterface* cryptInterface){

        try {
            
    std::string server = getClientInfo()->getLicenseServer(this->getServer());;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(TRYING);
    
stringBuffer->appendint(this->getServer());
    
stringBuffer->append(SEP);
    
stringBuffer->append(server);
    
this->logUtil->putF(CommonLabels::getInstance()->START_LABEL +stringBuffer->toString(), this, this->commonStrings.GET);
    

    BasicArrayList* param = new BasicArrayListD();;
    

    std::string serverUrl = getClientInfo()->getLicenseServer(this->getServer());;
    

    int32_t index = JavaString::lastIndexOf(serverUrl, "/");;
    
serverUrl= JavaString::substring(serverUrl, 0, index +1) +this->PAGE;
    

    XmlRpcClient* xmlRpcClient = new XmlRpcClient(serverUrl);;
    
this->setClient(xmlRpcClient);
    
xmlRpcClient->setBasicAuthentication(
                            nullptr, 
                            nullptr);
    

    ABHashtable<Object*, Object*>* hashtable = dynamic_cast<ABHashtable<Object*, Object*>*>(anyType);;
    
this->logUtil->putF(CLIENT_INFO +hashtable->toString(), this, this->commonStrings.GET);
    
param->add(hashtable);
    

    Object* result = xmlRpcClient->execute(this->getRemoteMethod(), param, cryptInterface);;
    
this->logUtil->putF(RESULT +result->toString(), this, this->commonStrings.GET);
    
isOnline= true;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(IOException& e) 
            {
this->logUtil->putF(TRYING_OTHER_SERVERS +ExceptionUtil::getInstance()->getStackTrace(&e), this, this->commonStrings.GET);
    

                        if(!e.getMessage().startsWith(HOST_NOT_RESOLVED))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tryAnother(anyType);;
    

                                    }
                                
                        else {
                            


                            throw new Exception(HOST_NOT_RESOLVED_MSG);
                    

                        }
                            
}

                //: 
 catch(XmlRpcException& e) 
            {
this->logUtil->put(SERVER_REPORTED_ERROR, this, this->commonStrings.GET, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tryAnother(anyType);;
    
}

                //: 
 catch(Exception& e) 
            {
this->logUtil->put(UNKNOWN_ERROR, this, this->commonStrings.GET, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tryAnother(anyType);;
    
}

}


};

            

