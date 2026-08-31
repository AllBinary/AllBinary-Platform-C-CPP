
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_APACHE_XMLRPC_XMLRPCCLIENT_H
        #define ORG_APACHE_XMLRPC_XMLRPCCLIENT_H

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

public constructor (string url);

    public URL getURL();

    public setBasicAuthentication(string user, string password);

                //@Throws(XmlRpcException.constructor, IOException.constructor)
            
    public any execute(string method, Vector<any> params);

                //@Throws(XmlRpcException.constructor, IOException.constructor)
            
    public any execute(string method, Vector<any> params, CryptInterface cryptInterface);

};

            


        #endif //ORG_APACHE_XMLRPC_XMLRPCCLIENT_H
