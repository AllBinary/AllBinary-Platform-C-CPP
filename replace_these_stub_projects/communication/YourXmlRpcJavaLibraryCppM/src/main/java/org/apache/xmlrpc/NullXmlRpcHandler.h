
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

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "XmlRpcHandler.h"

class NullXmlRpcHandler
            : public Object
        : public XmlRpcHandler {
        

    public static const NULL_XML_RPC_HANDLER: NullXmlRpcHandler = new NullXmlRpcHandler();

                //@Throws(Exception.constructor)
            
    public any execute(string method, Vector<any> params);

};

            


        #endif //ORG_APACHE_XMLRPC_NULLXMLRPCHANDLER_H
