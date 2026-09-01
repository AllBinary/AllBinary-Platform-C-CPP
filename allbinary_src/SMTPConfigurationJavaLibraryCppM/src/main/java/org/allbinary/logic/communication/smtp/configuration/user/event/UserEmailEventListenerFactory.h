
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTLISTENERFACTORY_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTLISTENERFACTORY_H

            #include <vector>
        
            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Class.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailEventConfigurationInterface.h"

class UserEmailEventListenerFactory
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static UserEmailEventListenerInterface getInstance(AbeClientInformationInterface abeClientInformation, UserEmailEventConfigurationInterface userEmailEventConfigurationInterface, UserInterface userInterface);

private: UserEmailEventListenerFactory();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTLISTENERFACTORY_H
