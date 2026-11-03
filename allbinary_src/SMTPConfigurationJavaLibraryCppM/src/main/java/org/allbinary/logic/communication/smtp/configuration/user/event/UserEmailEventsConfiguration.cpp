
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATION_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfiguration.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventListenerFactory.h"


UserEmailEventsConfiguration::UserEmailEventsConfiguration() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->init();
    
}


UserEmailEventsConfiguration::UserEmailEventsConfiguration(HashMap<Object*, Object*>* hashMap) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->init();
    
}


    auto UserEmailEventsConfiguration::init() -> void{
this->emailEventHashMap= StdUtil::getInstance()->createHashMap();
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->CONSTRUCTOR, this, " Constructor");
    

                                    }
                                
}


    auto UserEmailEventsConfiguration::getEventConfigurationHashMap() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->emailEventHashMap;
    
}


    auto UserEmailEventsConfiguration::addUserEmailEventConfiguration(UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface) -> void{

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Adding: ") +JavaString::valueOf(userEmailEventConfigurationInterface->log()), this, "addUserEmailEventConfiguration");
    

                                    }
                                
this->emailEventHashMap->put(userEmailEventConfigurationInterface->getName(), userEmailEventConfigurationInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto UserEmailEventsConfiguration::getEventListener(AbeClientInformationInterface* abeClientInformation, UserEmailEventNameData* userEmailEventNameData, UserInterface* userInterface) -> UserEmailEventListenerInterface*{

    UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface = dynamic_cast<UserEmailEventConfigurationInterface*>(this->emailEventHashMap->get(userEmailEventNameData->toString()));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return UserEmailEventListenerFactory::getInstance(abeClientInformation, userEmailEventConfigurationInterface, userInterface);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATION_CPP
