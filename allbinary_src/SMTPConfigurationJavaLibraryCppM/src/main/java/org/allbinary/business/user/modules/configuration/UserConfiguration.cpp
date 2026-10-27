
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATION_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/modules/configuration/UserConfiguration.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/time/created/TimeCreated.h>

      
#include <org/allbinary/business/time/modified/TimeLastModified.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfiguration.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h"


UserConfiguration::UserConfiguration(){
this->userEmailConfigurationInterface= dynamic_cast<UserEmailConfigurationInterface*>(new UserEmailConfiguration());
    
this->timeCreated= new TimeCreated(0);
    
this->timeLastModified= new TimeLastModified(0);
    
}


UserConfiguration::UserConfiguration(HashMap<Object*, Object*>* hashMap){
this->userEmailConfigurationInterface= dynamic_cast<UserEmailConfigurationInterface*>(new UserEmailConfiguration(hashMap));
    
this->timeCreated= new TimeCreated(hashMap->get(EntryData::getInstance()->TIMECREATED));
    
this->timeLastModified= new TimeLastModified(hashMap->get(EntryData::getInstance()->LASTMODIFIED));
    
}


    auto UserConfiguration::getUserEmailConfigurationInterface() -> UserEmailConfigurationInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userEmailConfigurationInterface;
    
}


    auto UserConfiguration::setUserEmailConfigurationInterface(UserEmailConfigurationInterface* userEmailConfigurationInterface) -> void{
this->userEmailConfigurationInterface= userEmailConfigurationInterface;
    
}


    auto UserConfiguration::getTimeCreated() -> TimeCreated*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeCreated;
    
}


    auto UserConfiguration::getTimeLastModified() -> TimeLastModified*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeLastModified;
    
}


    auto UserConfiguration::setTimeCreated(TimeCreated* timeCreated) -> void{
this->timeCreated= timeCreated;
    
}


    auto UserConfiguration::setTimeLastModified(TimeLastModified* timeLastModified) -> void{
this->timeLastModified= timeLastModified;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATION_CPP
