
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTLISTENERFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTLISTENERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventListenerFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h"


UserEmailEventListenerFactory::UserEmailEventListenerFactory(){
}


                //@Throws(Exception.constructor)
            
    auto UserEmailEventListenerFactory::getInstance(AbeClientInformationInterface* abeClientInformation, UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface, UserInterface* userInterface) -> UserEmailEventListenerInterface*{

    std::vector<Object*> params = std::vector<Object*>(1);;
    

    std::vector<Class*> classes = std::vector<Class*>(1);;
    
classes[0]= 
                                    //Otherwise - expression - AssignExpr - value - ClassExpr
;
    
params[0]= userInterface;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<UserEmailEventListenerInterface*>(AbeFactory::getInstance()->getInstance(abeClientInformation, userEmailEventConfigurationInterface->getEventListenerClassPath(), classes, params));
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTLISTENERFACTORY_CPP
