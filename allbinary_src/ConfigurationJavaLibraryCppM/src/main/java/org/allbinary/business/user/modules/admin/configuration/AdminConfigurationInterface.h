
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_CONFIGURATION_ADMINCONFIGURATIONINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_CONFIGURATION_ADMINCONFIGURATIONINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class ContextConfigurationInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdminConfigurationInterface
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual void write() = 0;

    public: virtual ContextConfigurationInterface* getContextConfigurationInterface() = 0;

    public: virtual void setContextConfigurationInterface(ContextConfigurationInterface* contextConfigurationInterface) = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_CONFIGURATION_ADMINCONFIGURATIONINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_CONFIGURATION_ADMINCONFIGURATIONINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_CONFIGURATION_ADMINCONFIGURATIONINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/business/context/configuration/ContextConfigurationInterface.h>)
#include <org/allbinary/business/context/configuration/ContextConfigurationInterface.h>
#endif

        #endif
    
