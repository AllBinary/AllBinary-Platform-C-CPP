
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATION_H
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATION_H

            #include "../../../../../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/time/created/TimeCreated.h>

      
#include <org/allbinary/business/time/modified/TimeLastModified.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfiguration.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserConfigurationInterface.h"

class UserConfiguration
            : public Object
        : public UserConfigurationInterface {
        

    private: userEmailConfigurationInterface: UserEmailConfigurationInterface;

    private: timeCreated: TimeCreated;

    private: timeLastModified: TimeLastModified;

public constructor ();

public constructor (HashMap<any, any> hashMap);

    public UserEmailConfigurationInterface getUserEmailConfigurationInterface();

    public setUserEmailConfigurationInterface(UserEmailConfigurationInterface userEmailConfigurationInterface);

    public TimeCreated getTimeCreated();

    public TimeLastModified getTimeLastModified();

    public setTimeCreated(TimeCreated timeCreated);

    public setTimeLastModified(TimeLastModified timeLastModified);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATION_H
