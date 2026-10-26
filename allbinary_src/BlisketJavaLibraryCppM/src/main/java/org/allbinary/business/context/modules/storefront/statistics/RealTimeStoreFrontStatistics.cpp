
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
        #include "StoreFrontStatisticsInterface.h"

class RealTimeStoreFrontStatistics
            : public Object
        : public StoreFrontStatisticsInterface {

    private: StoreFrontAdvertisementsStatisticsInterface storeFrontAdvertisementsStatisticsInterface;

    private: StoreFrontUsersStatisticsInterface storeFrontUsersStatisticsInterface;

    private: StoreFrontInventoryStatisticsInterface storeFrontInventoryStatisticsInterface;

    private: StoreFrontOrdersHistoryStatisticsInterface storeFrontOrderHistoryStatisticsInterface;

public: RealTimeStoreFrontStatistics(StoreFrontInterface storeFrontInterface){
this->storeFrontAdvertisementsStatisticsInterface= StoreFrontAdvertisementsStatistics(storeFrontInterface);
    
this->storeFrontUsersStatisticsInterface= StoreFrontUsersStatistics(storeFrontInterface);
    
this->storeFrontInventoryStatisticsInterface= StoreFrontInventoryStatistics(storeFrontInterface);
    
this->storeFrontOrderHistoryStatisticsInterface= StoreFrontOrdersHistoryStatistics(storeFrontInterface);
    
}


    public: StoreFrontAdvertisementsStatisticsInterface getAdvertisements(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeFrontAdvertisementsStatisticsInterface;
    
}


    public: StoreFrontUsersStatisticsInterface getUsers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeFrontUsersStatisticsInterface;
    
}


    public: StoreFrontInventoryStatisticsInterface getInventory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeFrontInventoryStatisticsInterface;
    
}


    public: StoreFrontOrdersHistoryStatisticsInterface getOrders(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeFrontOrderHistoryStatisticsInterface;
    
}


};

            

