
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICSINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICSINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Long.h"
        
#include <org/allbinary/data/tables/TableMappingInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //import org.allbinary.business.user.commerce.money.Money;
class StoreFrontUsersStatisticsInterface: public virtual TableMappingInterface {

    public: virtual int64_t getNumberOfUsers() = 0;

    public: virtual int64_t getNumberOfUsersByRole(std::string role) = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICSINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICSINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICSINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/data/tables/TableMappingInterface.h>)
#include <org/allbinary/data/tables/TableMappingInterface.h>
#endif

        #endif
    
