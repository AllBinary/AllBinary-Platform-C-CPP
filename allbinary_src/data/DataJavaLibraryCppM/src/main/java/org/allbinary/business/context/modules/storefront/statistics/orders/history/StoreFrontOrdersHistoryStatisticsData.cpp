
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICSDATA_CPP
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICSDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto StoreFrontOrdersHistoryStatisticsData::instance_owner() -> StoreFrontOrdersHistoryStatisticsData* { static std::unique_ptr<StoreFrontOrdersHistoryStatisticsData> value(new StoreFrontOrdersHistoryStatisticsData()); return value.get(); }
StoreFrontOrdersHistoryStatisticsData* StoreFrontOrdersHistoryStatisticsData::instance = StoreFrontOrdersHistoryStatisticsData::instance_owner();

    auto StoreFrontOrdersHistoryStatisticsData::getInstance() -> StoreFrontOrdersHistoryStatisticsData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreFrontOrdersHistoryStatisticsData::instance;
    
}


StoreFrontOrdersHistoryStatisticsData::StoreFrontOrdersHistoryStatisticsData(){
}




        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICSDATA_CPP
