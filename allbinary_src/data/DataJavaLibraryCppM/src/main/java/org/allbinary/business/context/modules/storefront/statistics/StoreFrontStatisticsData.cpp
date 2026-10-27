
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_STOREFRONTSTATISTICSDATA_CPP
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_STOREFRONTSTATISTICSDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/context/modules/storefront/statistics/StoreFrontStatisticsData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto StoreFrontStatisticsData::instance_owner() -> StoreFrontStatisticsData* { static std::unique_ptr<StoreFrontStatisticsData> value(new StoreFrontStatisticsData()); return value.get(); }
StoreFrontStatisticsData* StoreFrontStatisticsData::instance = StoreFrontStatisticsData::instance_owner();

    auto StoreFrontStatisticsData::getInstance() -> StoreFrontStatisticsData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreFrontStatisticsData::instance;
    
}


StoreFrontStatisticsData::StoreFrontStatisticsData(){
}




        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_STOREFRONTSTATISTICSDATA_CPP
