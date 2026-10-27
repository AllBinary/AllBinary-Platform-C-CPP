
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_APACHE_XMLRPC_XMLRPCCLIENT_H
        #define ORG_APACHE_XMLRPC_XMLRPCCLIENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/io/IOException.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
class BasicArrayList;

class CryptInterface;
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/apache/xmlrpc/XmlRpcHandler.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class XmlRpcClient
            : public virtual Object
        , public XmlRpcHandler {

    private: URL* url;

public: XmlRpcClient(std::string url);

    public: URL* getURL();

    public: void setBasicAuthentication(std::string user, std::string password);

                //@Throws(XmlRpcException.constructor, IOException.constructor)
            
    public: Object* execute(std::string method, BasicArrayList* params);

                //@Throws(XmlRpcException.constructor, IOException.constructor)
            
    public: Object* execute(std::string method, BasicArrayList* params, CryptInterface* cryptInterface);

};

            


        #endif //ORG_APACHE_XMLRPC_XMLRPCCLIENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_APACHE_XMLRPC_XMLRPCCLIENT_H_COMPLETE)
        #define ORG_APACHE_XMLRPC_XMLRPCCLIENT_H_COMPLETE
        #if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<java/net/MalformedURLException.h>)
#include <java/net/MalformedURLException.h>
#endif
#if __has_include(<java/net/URL.h>)
#include <java/net/URL.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/init/crypt/jcehelper/CryptInterface.h>)
#include <org/allbinary/init/crypt/jcehelper/CryptInterface.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include("org/apache/xmlrpc/XmlRpcHandler.h")
#include "org/apache/xmlrpc/XmlRpcHandler.h"
#endif

        #endif
    
