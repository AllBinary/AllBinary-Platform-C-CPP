
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONINTERFACE_H

#include <org/allbinary/business/time/created/TimeCreated.h>

      
#include <org/allbinary/business/time/modified/TimeLastModified.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UserConfigurationInterface {

    UserEmailConfigurationInterface getUserEmailConfigurationInterface();

    void setUserEmailConfigurationInterface(UserEmailConfigurationInterface userEmailConfigurationInterface);

    TimeCreated getTimeCreated();

    TimeLastModified getTimeLastModified();

    void setTimeCreated(TimeCreated timeCreated);

    void setTimeLastModified(TimeLastModified timeLastModified);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONINTERFACE_H
