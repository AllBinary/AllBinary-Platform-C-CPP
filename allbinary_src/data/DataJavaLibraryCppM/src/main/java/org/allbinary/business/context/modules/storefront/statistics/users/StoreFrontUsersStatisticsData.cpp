
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICSDATA_CPP
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICSDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto StoreFrontUsersStatisticsData::instance_owner() -> StoreFrontUsersStatisticsData* { static std::unique_ptr<StoreFrontUsersStatisticsData> value(new StoreFrontUsersStatisticsData()); return value.get(); }
StoreFrontUsersStatisticsData* StoreFrontUsersStatisticsData::instance = StoreFrontUsersStatisticsData::instance_owner();

StoreFrontUsersStatisticsData::StoreFrontUsersStatisticsData(){
}


    auto StoreFrontUsersStatisticsData::getInstance() -> StoreFrontUsersStatisticsData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StoreFrontUsersStatisticsData::instance;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICSDATA_CPP
