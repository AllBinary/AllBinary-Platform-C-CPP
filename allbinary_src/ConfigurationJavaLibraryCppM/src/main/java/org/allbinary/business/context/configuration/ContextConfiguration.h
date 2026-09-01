
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATION_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATION_H

            #include "../../../../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfiguration.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ContextConfigurationInterface.h"

class ContextConfiguration
            : public Object
        : public ContextConfigurationInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: EmailServerConfigurationInterface emailServerConfigurationInterface;

public: ContextConfiguration();

public: ContextConfiguration(HashMap<any, any> hashMap);

    public: EmailServerConfigurationInterface getEmailServerConfigurationInterface();

    public: void setEmailServerConfigurationInterface(EmailServerConfigurationInterface emailServerConfigurationInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATION_H
