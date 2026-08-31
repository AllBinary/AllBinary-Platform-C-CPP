
        /* Generated Code Do Not Modify */
        



            #include "../../../java/lang/Object.h"
        
#include <java/io/IOException.h>

      
#include <java/net/MalformedURLException.h>

      
#include <java/net/URL.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/init/crypt/jcehelper/CryptInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "XmlRpcHandler.h"

class XmlRpcClient
            : public Object
        : public XmlRpcHandler {
        

    private: const url: URL;

public constructor (string url){

            super();
        this.url= new URL(url);
    
}


    public URL getURL(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.url;
    
}


    public setBasicAuthentication(string user, string password){
}


                //@Throws(XmlRpcException.constructor, IOException.constructor)
            
    public any execute(string method, Vector<any> params){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_OBJECT;
    
}


                //@Throws(XmlRpcException.constructor, IOException.constructor)
            
    public any execute(string method, Vector<any> params, CryptInterface cryptInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_OBJECT;
    
}


};

            

