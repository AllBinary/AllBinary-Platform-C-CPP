
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_XMLRPCREMOTELICENSEREGISTRATIONCLIENT_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_XMLRPCREMOTELICENSEREGISTRATIONCLIENT_H

            #include "java/lang/Exception.h"
        
#include <java/io/IOException.h>

      
#include <org/apache/xmlrpc/XmlRpcClient.h>

      
#include <org/apache/xmlrpc/XmlRpcException.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/init/crypt/jcehelper/CryptInterface.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>

      
#include <org/allbinary/logic/java/exception/ExceptionUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class XmlRpcRemoteLicenseRegistrationClient: public XmlRpcAbeClient {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const std::string PAGE = "licenseregistrationserverssl.php";

public: XmlRpcRemoteLicenseRegistrationClient(AbeClientInformationInterface clientInfo);

                //@Throws(Exception.constructor)
            
    public: Object* get(Object* anyType, CryptInterface cryptInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_XMLRPCREMOTELICENSEREGISTRATIONCLIENT_H
