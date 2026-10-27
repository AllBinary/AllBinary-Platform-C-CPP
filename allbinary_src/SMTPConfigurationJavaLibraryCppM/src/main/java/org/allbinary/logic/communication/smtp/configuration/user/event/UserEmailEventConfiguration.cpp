
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATION_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfiguration.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationData.h"


UserEmailEventConfiguration::UserEmailEventConfiguration() : logUtil(LogUtil::getInstance()){
this->setName(StringUtil::getInstance()->EMPTY_STRING);
    
this->setEventListenerClassPath(StringUtil::getInstance()->EMPTY_STRING);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF("New", this, " Constructor");
    

                                    }
                                
}


UserEmailEventConfiguration::UserEmailEventConfiguration(HashMap<Object*, Object*>* hashMap) : logUtil(LogUtil::getInstance()){
this->setName(hashMap->get(UserEmailEventConfigurationData::NAME));
    
this->setEventListenerClassPath(hashMap->get(UserEmailEventConfigurationData::LISTENER_CLASSPATH));
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Log: ") +JavaString::valueOf(this->log()), this, " Constructor");
    

                                    }
                                
}


    auto UserEmailEventConfiguration::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto UserEmailEventConfiguration::setName(std::string name) -> void{
this->name= name;
    
}


    auto UserEmailEventConfiguration::getEventListenerClassPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->eventListenerClassPath;
    
}


    auto UserEmailEventConfiguration::setEventListenerClassPath(std::string eventListenerClassPath) -> void{
this->eventListenerClassPath= eventListenerClassPath;
    
}


    auto UserEmailEventConfiguration::log() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("\nUser Email Event Log Info:") +JavaString::valueOf("\nName: ")) +JavaString::valueOf(this->getName())) +JavaString::valueOf("\nEventListenerClassPath: ")) +JavaString::valueOf(this->getEventListenerClassPath());
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATION_CPP
