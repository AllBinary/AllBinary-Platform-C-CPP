
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_APACHE_XMLRPC_XMLRPCHANDLER_H
        #define ORG_APACHE_XMLRPC_XMLRPCHANDLER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class XmlRpcHandler
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual Object* execute(std::string method, BasicArrayList* params) = 0;

};

            


        #endif //ORG_APACHE_XMLRPC_XMLRPCHANDLER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_APACHE_XMLRPC_XMLRPCHANDLER_H_COMPLETE)
        #define ORG_APACHE_XMLRPC_XMLRPCHANDLER_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif


        #endif
    
