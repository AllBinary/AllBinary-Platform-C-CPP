
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class TimeCreated;
class TimeLastModified;
class UserEmailConfigurationInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserConfigurationInterface
            : public virtual Object
         {

    public: virtual UserEmailConfigurationInterface* getUserEmailConfigurationInterface() = 0;

    public: virtual void setUserEmailConfigurationInterface(UserEmailConfigurationInterface* userEmailConfigurationInterface) = 0;

    public: virtual TimeCreated* getTimeCreated() = 0;

    public: virtual TimeLastModified* getTimeLastModified() = 0;

    public: virtual void setTimeCreated(TimeCreated* timeCreated) = 0;

    public: virtual void setTimeLastModified(TimeLastModified* timeLastModified) = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/business/time/created/TimeCreated.h>)
#include <org/allbinary/business/time/created/TimeCreated.h>
#endif
#if __has_include(<org/allbinary/business/time/modified/TimeLastModified.h>)
#include <org/allbinary/business/time/modified/TimeLastModified.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h>)
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h>
#endif

        #endif
    
