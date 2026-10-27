
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_REALTIMESTOREFRONTSTATISTICS_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_REALTIMESTOREFRONTSTATISTICS_H

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

class RealTimeStoreFrontStatistics
            : public Object
        , public StoreFrontStatisticsInterface {

    private: StoreFrontAdvertisementsStatisticsInterface* storeFrontAdvertisementsStatisticsInterface;

    private: StoreFrontUsersStatisticsInterface* storeFrontUsersStatisticsInterface;

    private: StoreFrontInventoryStatisticsInterface* storeFrontInventoryStatisticsInterface;

    private: StoreFrontOrdersHistoryStatisticsInterface* storeFrontOrderHistoryStatisticsInterface;

public: RealTimeStoreFrontStatistics(StoreFrontInterface* storeFrontInterface);

    public: StoreFrontAdvertisementsStatisticsInterface* getAdvertisements();

    public: StoreFrontUsersStatisticsInterface* getUsers();

    public: StoreFrontInventoryStatisticsInterface* getInventory();

    public: StoreFrontOrdersHistoryStatisticsInterface* getOrders();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_REALTIMESTOREFRONTSTATISTICS_H
