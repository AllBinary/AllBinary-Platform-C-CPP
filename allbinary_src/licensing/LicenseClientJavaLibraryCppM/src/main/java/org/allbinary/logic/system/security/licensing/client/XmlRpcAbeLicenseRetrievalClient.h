
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENT_XMLRPCABELICENSERETRIEVALCLIENT_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENT_XMLRPCABELICENSERETRIEVALCLIENT_H

            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/io/IOException.h>

      
#include <java/util/Hashtable.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/init/crypt/jcehelper/CryptInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>

      
#include <org/allbinary/logic/java/exception/ExceptionUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientLicense.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/apache/xmlrpc/XmlRpcClient.h>

      
#include <org/apache/xmlrpc/XmlRpcException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class XmlRpcAbeLicenseRetrievalClient: public XmlRpcAbeClient {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (AbeClientInformationInterface clientInfo);

                //@Throws(Exception.constructor)
            
    public any get(any = {} anyType, CryptInterface cryptInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENT_XMLRPCABELICENSERETRIEVALCLIENT_H
