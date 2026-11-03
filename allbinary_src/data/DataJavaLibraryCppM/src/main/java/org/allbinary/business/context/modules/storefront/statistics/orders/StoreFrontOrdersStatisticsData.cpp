
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_STOREFRONTORDERSSTATISTICSDATA_CPP
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_STOREFRONTORDERSSTATISTICSDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/context/modules/storefront/statistics/orders/StoreFrontOrdersStatisticsData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto StoreFrontOrdersStatisticsData::instance_owner() -> StoreFrontOrdersStatisticsData* { static std::unique_ptr<StoreFrontOrdersStatisticsData> value(new StoreFrontOrdersStatisticsData()); return value.get(); }
StoreFrontOrdersStatisticsData* StoreFrontOrdersStatisticsData::instance = StoreFrontOrdersStatisticsData::instance_owner();

    auto StoreFrontOrdersStatisticsData::getInstance() -> StoreFrontOrdersStatisticsData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StoreFrontOrdersStatisticsData::instance;
    
}


StoreFrontOrdersStatisticsData::StoreFrontOrdersStatisticsData(){
}




        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_STOREFRONTORDERSSTATISTICSDATA_CPP
