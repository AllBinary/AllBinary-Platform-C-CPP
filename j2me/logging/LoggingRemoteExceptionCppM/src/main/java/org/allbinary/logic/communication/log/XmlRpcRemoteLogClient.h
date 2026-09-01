
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_XMLRPCREMOTELOGCLIENT_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_XMLRPCREMOTELOGCLIENT_H

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/System.h"
        
#include <java/io/IOException.h>

      
#include <java/util/Hashtable.h>

      
#include <java/util/Vector.h>

      
#include <org/apache/xmlrpc/XmlRpcClient.h>

      
#include <org/apache/xmlrpc/XmlRpcException.h>

      
#include <org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>

      
#include <org/allbinary/logic/system/security/crypt/jcehelper/NoCrypt.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class XmlRpcRemoteLogClient: public XmlRpcAbeClient {

    private: const NoCrypt noCrypt = NoCrypt();

public: XmlRpcRemoteLogClient(AbeClientInformationInterface clientInfo);

                //@Throws(Exception.constructor)
            
    public: Object* get(Object* anyType);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_XMLRPCREMOTELOGCLIENT_H
