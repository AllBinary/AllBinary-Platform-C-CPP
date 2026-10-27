
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_APACHE_XMLRPC_XMLRPCCLIENT_CPP
        #define ORG_APACHE_XMLRPC_XMLRPCCLIENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/apache/xmlrpc/XmlRpcClient.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/io/IOException.h>

      
#include <java/net/MalformedURLException.h>

      
#include <java/net/URL.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/init/crypt/jcehelper/CryptInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/apache/xmlrpc/XmlRpcHandler.h"


XmlRpcClient::XmlRpcClient(std::string url){
this->url= new URL(url);
    
}


    auto XmlRpcClient::getURL() -> URL*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->url;
    
}


    auto XmlRpcClient::setBasicAuthentication(std::string user, std::string password) -> void{
}


                //@Throws(XmlRpcException.constructor, IOException.constructor)
            
    auto XmlRpcClient::execute(std::string method, BasicArrayList* params) -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance()->NULL_OBJECT;
    
}


                //@Throws(XmlRpcException.constructor, IOException.constructor)
            
    auto XmlRpcClient::execute(std::string method, BasicArrayList* params, CryptInterface* cryptInterface) -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance()->NULL_OBJECT;
    
}




        #endif //ORG_APACHE_XMLRPC_XMLRPCCLIENT_CPP
