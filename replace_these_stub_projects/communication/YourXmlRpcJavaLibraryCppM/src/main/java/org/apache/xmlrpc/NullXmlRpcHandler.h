
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_APACHE_XMLRPC_NULLXMLRPCHANDLER_H
        #define ORG_APACHE_XMLRPC_NULLXMLRPCHANDLER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;

class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/apache/xmlrpc/XmlRpcHandler.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullXmlRpcHandler
            : public virtual Object
        , public virtual XmlRpcHandler {

    private: static NullXmlRpcHandler* NULL_XML_RPC_HANDLER_owner();
    public: static NullXmlRpcHandler* NULL_XML_RPC_HANDLER;


            
    public: NullXmlRpcHandler();
        
                //@Throws(Exception.constructor)
            
    public: Object* execute(std::string method, BasicArrayList* params);

};

            


        #endif //ORG_APACHE_XMLRPC_NULLXMLRPCHANDLER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_APACHE_XMLRPC_NULLXMLRPCHANDLER_H_COMPLETE)
        #define ORG_APACHE_XMLRPC_NULLXMLRPCHANDLER_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include("org/apache/xmlrpc/XmlRpcHandler.h")
#include "org/apache/xmlrpc/XmlRpcHandler.h"
#endif

        #endif
    
