
        /* Generated Code Do Not Modify */
        



            #include "../../../java/lang/Object.h"
        
#include <java/io/IOException.h>

      
#include <java/net/MalformedURLException.h>

      
#include <java/net/URL.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/init/crypt/jcehelper/CryptInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "XmlRpcHandler.h"

class XmlRpcClient
            : public Object
        : public XmlRpcHandler {

    private: URL url;

public: XmlRpcClient(std::string url){
this->url= URL(url);
    
}


    public: URL getURL(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->url;
    
}


    public: void setBasicAuthentication(std::string user, std::string password){
}


                //@Throws(XmlRpcException.constructor, IOException.constructor)
            
    public: Object* execute(std::string method, BasicArrayList params){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance().NULL_OBJECT;
    
}


                //@Throws(XmlRpcException.constructor, IOException.constructor)
            
    public: Object* execute(std::string method, BasicArrayList params, CryptInterface cryptInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance().NULL_OBJECT;
    
}


};

            

