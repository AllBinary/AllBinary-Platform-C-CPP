
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>
class EntryData;
class TimeCreated;
class TimeLastModified;
class UserEmailConfiguration;
class UserEmailConfigurationInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserConfiguration
            : public virtual Object
        , public UserConfigurationInterface {

    private: UserEmailConfigurationInterface* userEmailConfigurationInterface;

    private: TimeCreated* timeCreated;

    private: TimeLastModified* timeLastModified;

public: UserConfiguration();

public: UserConfiguration(HashMap<Object*, Object*>* hashMap);

    public: UserEmailConfigurationInterface* getUserEmailConfigurationInterface();

    public: void setUserEmailConfigurationInterface(UserEmailConfigurationInterface* userEmailConfigurationInterface);

    public: TimeCreated* getTimeCreated();

    public: TimeLastModified* getTimeLastModified();

    public: void setTimeCreated(TimeCreated* timeCreated);

    public: void setTimeLastModified(TimeLastModified* timeLastModified);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATION_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATION_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/time/created/TimeCreated.h>)
#include <org/allbinary/business/time/created/TimeCreated.h>
#endif
#if __has_include(<org/allbinary/business/time/modified/TimeLastModified.h>)
#include <org/allbinary/business/time/modified/TimeLastModified.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfiguration.h>)
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfiguration.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h>)
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h>
#endif
#if __has_include("org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h")
#include "org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h"
#endif

        #endif
    
