
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_REALTIMESTOREFRONTSTATISTICS_CPP
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_REALTIMESTOREFRONTSTATISTICS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/context/modules/storefront/statistics/RealTimeStoreFrontStatistics.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/advertisements/StoreFrontAdvertisementsStatistics.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/advertisements/StoreFrontAdvertisementsStatisticsInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatistics.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatistics.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatistics.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/context/modules/storefront/statistics/StoreFrontStatisticsInterface.h"


RealTimeStoreFrontStatistics::RealTimeStoreFrontStatistics(StoreFrontInterface* storeFrontInterface){
this->storeFrontAdvertisementsStatisticsInterface= dynamic_cast<StoreFrontAdvertisementsStatisticsInterface*>(new StoreFrontAdvertisementsStatistics(storeFrontInterface));
    
this->storeFrontUsersStatisticsInterface= dynamic_cast<StoreFrontUsersStatisticsInterface*>(new StoreFrontUsersStatistics(storeFrontInterface));
    
this->storeFrontInventoryStatisticsInterface= dynamic_cast<StoreFrontInventoryStatisticsInterface*>(new StoreFrontInventoryStatistics(storeFrontInterface));
    
this->storeFrontOrderHistoryStatisticsInterface= dynamic_cast<StoreFrontOrdersHistoryStatisticsInterface*>(new StoreFrontOrdersHistoryStatistics(storeFrontInterface));
    
}


    auto RealTimeStoreFrontStatistics::getAdvertisements() -> StoreFrontAdvertisementsStatisticsInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeFrontAdvertisementsStatisticsInterface;
    
}


    auto RealTimeStoreFrontStatistics::getUsers() -> StoreFrontUsersStatisticsInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeFrontUsersStatisticsInterface;
    
}


    auto RealTimeStoreFrontStatistics::getInventory() -> StoreFrontInventoryStatisticsInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeFrontInventoryStatisticsInterface;
    
}


    auto RealTimeStoreFrontStatistics::getOrders() -> StoreFrontOrdersHistoryStatisticsInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeFrontOrderHistoryStatisticsInterface;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_REALTIMESTOREFRONTSTATISTICS_CPP
