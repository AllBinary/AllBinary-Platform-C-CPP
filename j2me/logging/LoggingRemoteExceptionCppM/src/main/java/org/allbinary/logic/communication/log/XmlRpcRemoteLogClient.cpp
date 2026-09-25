
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
        



            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/System.h"
        
#include <java/io/IOException.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/apache/xmlrpc/XmlRpcClient.h>

      
#include <org/apache/xmlrpc/XmlRpcException.h>

      
#include <org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>

      
#include <org/allbinary/logic/system/security/crypt/jcehelper/NoCrypt.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class XmlRpcRemoteLogClient: public XmlRpcAbeClient {

    private: const NoCrypt noCrypt = NoCrypt();

public: XmlRpcRemoteLogClient(AbeClientInformationInterface clientInfo){
            super(clientInfo, "SSLLogServ.logUtil");
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: Object* get(Object* anyType){

        try {
            
    BasicArrayList param = BasicArrayListD();;
    

    std::string serverUrl = getClientInfo().getLicenseServer(this->getServer());;
    

    int32_t index = serverUrl.lastIndexOf("/");;
    
serverUrl= serverUrl.substring(0, index +1) +"logservssl.php";
    

    XmlRpcClient xmlRpcClient = XmlRpcClient(serverUrl);;
    
this->setClient(xmlRpcClient);
    
xmlRpcClient.setBasicAuthentication(
                            nullptr, 
                            nullptr);
    

    Hashtable<any, any> hashtable = anyType as Hashtable<any, any>;;
    
param.add(hashtable);
    

    Object* result = xmlRpcClient.execute(this->getRemoteMethod(), param, this->noCrypt);;
    
console.log(CommonLabels::getInstance().RESULT_ +CommonSeps::getInstance().NEW_LINE +result->toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {
console.log("IOException Trying Other Servers");
    

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
/* catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tryAnother(anyType);;
    
}
*/
                //: 
/* catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tryAnother(anyType);;
    
}
*/
}


};

            

