
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_APACHE_XMLRPC_XMLRPCCLIENT_H
        #define ORG_APACHE_XMLRPC_XMLRPCCLIENT_H

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

public: XmlRpcClient(std::string url);

    public: URL getURL();

    public: void setBasicAuthentication(std::string user, std::string password);

                //@Throws(XmlRpcException.constructor, IOException.constructor)
            
    public: Object* execute(std::string method, BasicArrayList params);

                //@Throws(XmlRpcException.constructor, IOException.constructor)
            
    public: Object* execute(std::string method, BasicArrayList params, CryptInterface cryptInterface);

};

            


        #endif //ORG_APACHE_XMLRPC_XMLRPCCLIENT_H
