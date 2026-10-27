
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_APACHE_XMLRPC_XMLRPCEXCEPTION_H
        #define ORG_APACHE_XMLRPC_XMLRPCEXCEPTION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class XmlRpcException: public Exception {

public: XmlRpcException(int32_t code, std::string message);

};

            


        #endif //ORG_APACHE_XMLRPC_XMLRPCEXCEPTION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_APACHE_XMLRPC_XMLRPCEXCEPTION_H_COMPLETE)
        #define ORG_APACHE_XMLRPC_XMLRPCEXCEPTION_H_COMPLETE
        
        #endif
    
