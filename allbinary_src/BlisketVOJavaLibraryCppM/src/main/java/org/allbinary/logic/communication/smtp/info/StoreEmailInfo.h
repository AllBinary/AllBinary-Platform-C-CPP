
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_STOREEMAILINFO_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_STOREEMAILINFO_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/context/configuration/ContextConfigurationInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicEmailInfo.h"

class StoreEmailInfo: public BasicEmailInfo {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: StoreFrontInterface storeFrontInterface;

public: StoreEmailInfo(StoreFrontInterface storeFrontInterface, std::string subject, std::string textBody);

                //@Throws(Exception.constructor)
            
    protected: void init();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_STOREEMAILINFO_H
