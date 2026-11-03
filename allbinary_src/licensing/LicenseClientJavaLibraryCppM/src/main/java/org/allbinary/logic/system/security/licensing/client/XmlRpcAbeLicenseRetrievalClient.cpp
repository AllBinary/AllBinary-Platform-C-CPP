
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENT_XMLRPCABELICENSERETRIEVALCLIENT_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENT_XMLRPCABELICENSERETRIEVALCLIENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/client/XmlRpcAbeLicenseRetrievalClient.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/IOException.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/init/crypt/jcehelper/CryptInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>

      
#include <org/allbinary/logic/java/exception/ExceptionUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientLicense.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/apache/xmlrpc/XmlRpcClient.h>

      
#include <org/apache/xmlrpc/XmlRpcException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

XmlRpcAbeLicenseRetrievalClient::XmlRpcAbeLicenseRetrievalClient(AbeClientInformationInterface* clientInfo) : XmlRpcAbeClient(clientInfo, "LicServ.getLicense"), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto XmlRpcAbeLicenseRetrievalClient::get(Object* anyType, CryptInterface* cryptInterface) -> Object*{

        try {
            
    std::string server = getClientInfo()->getLicenseServer(this->getServer());;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(TRYING);
    
stringBuffer->appendint(this->getServer());
    
stringBuffer->append(SEP);
    
stringBuffer->append(server);
    
this->logUtil->putF(CommonLabels::getInstance()->START_LABEL +stringBuffer->toString(), this, this->commonStrings->GET);
    

    BasicArrayList* param = new BasicArrayListD();;
    

    XmlRpcClient* xmlRpcClient = new XmlRpcClient(server);;
    
this->setClient(xmlRpcClient);
    
xmlRpcClient->setBasicAuthentication(
                            nullptr, 
                            nullptr);
    

    ABHashtable<Object*, Object*>* hashtable = this->getClientInfo()->toHashtable();;
    
this->logUtil->putF(CLIENT_INFO +hashtable->toString(), this, this->commonStrings->GET);
    
param->add(hashtable);
    

    Object* result = JavaBoxes::toObject(xmlRpcClient->execute(this->getRemoteMethod(), param, cryptInterface));;
    
this->logUtil->putF(RESULT +result->toString(), this, this->commonStrings->GET);
    

    ABHashtable<Object*, Object*>* resultHashtable = dynamic_cast<ABHashtable<Object*, Object*>*>(result);;
    

                        if(!AbeClientLicense::hasRequiredKeys(resultHashtable))
                        
                                    {
                                    this->logUtil->putF(INVALID, this, this->commonStrings->GET);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tryAnother(anyType);;
    

                                    }
                                

    AbeLicenseInterface* abeLicenseInterface = new AbeClientLicense(resultHashtable);;
    
this->logUtil->putF(this->commonStrings->END +stringBuffer->toString(), this, this->commonStrings->GET);
    
isOnline= true;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(abeLicenseInterface);
    

                //: 
} catch(IOException& e) 
            {
this->logUtil->put(EXCEPTION_IN_CLIENT, this, this->commonStrings->GET, &e);
    
this->logUtil->putF(TRYING_OTHER_SERVERS +ExceptionUtil::getInstance()->getStackTrace(&e), this, this->commonStrings->GET);
    

                        if(!e.getMessage().startsWith(HOST_NOT_RESOLVED))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tryAnother(anyType);;
    

                                    }
                                
                        else {
                            isOnline= false;
    



                            throw Exception(HOST_NOT_RESOLVED_MSG);
                    

                        }
                            
}

                //: 
 catch(XmlRpcException& e) 
            {
this->logUtil->put(SERVER_REPORTED_ERROR, this, this->commonStrings->GET, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tryAnother(anyType);;
    
}

                //: 
 catch(Exception& e) 
            {
this->logUtil->put(UNKNOWN_ERROR, this, this->commonStrings->GET, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tryAnother(anyType);;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENT_XMLRPCABELICENSERETRIEVALCLIENT_CPP
