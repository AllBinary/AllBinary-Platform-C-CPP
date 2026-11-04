
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATION_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfiguration.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfiguration.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h"


UserEmailConfiguration::UserEmailConfiguration() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->CONSTRUCTOR, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->setUserEmailEventsConfigurationInterface(new UserEmailEventsConfiguration());
    
}


UserEmailConfiguration::UserEmailConfiguration(HashMap<Object*, Object*>* hashMap) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->CONSTRUCTOR, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->setUserEmailEventsConfigurationInterface(new UserEmailEventsConfiguration(hashMap));
    
}


    auto UserEmailConfiguration::getUserEmailEventsConfigurationInterface() -> UserEmailEventsConfigurationInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->userEmailEventsConfigurationInterface;
    
}


    auto UserEmailConfiguration::setUserEmailEventsConfigurationInterface(UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface) -> void{
this->userEmailEventsConfigurationInterface= userEmailEventsConfigurationInterface;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATION_CPP
