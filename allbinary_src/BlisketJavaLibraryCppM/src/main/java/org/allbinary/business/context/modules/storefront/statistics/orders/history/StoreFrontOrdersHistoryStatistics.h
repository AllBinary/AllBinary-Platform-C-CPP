
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICS_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICS_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreFrontOrdersHistoryStatisticsInterface.h"
#include "StoreFrontOrdersHistoryStatisticsData.h"

class StoreFrontOrdersHistoryStatistics
            : public Object
        : public StoreFrontOrdersHistoryStatisticsInterface {

    private: Long numberOfOrdersLong;

    private: Money subTotalMoney;

    private: Money shippingCostMoney;

    private: Money taxesMoney;

    private: Money totalMoney;

public: StoreFrontOrdersHistoryStatistics(StoreFrontInterface storeFrontInterface);

    public: Long getNumberOfOrders();

    public: Money getSubTotal();

    public: Money getShippingCost();

    public: Money getTaxes();

    public: Money getTotal();

    public: HashMap<Object*, Object*> toHashMap();

    public: BasicArrayList toVector();

    public: Object* getKey();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICS_H
