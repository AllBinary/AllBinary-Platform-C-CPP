
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

            #include "java/lang/Long.h"
        
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //import org.allbinary.business.user.commerce.money.Money;
class StoreFrontUsersStatisticsInterface: public TableMappingInterface {

    Long getNumberOfUsers();

    Long getNumberOfUsersByRole(std::string role);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICSINTERFACE_H
