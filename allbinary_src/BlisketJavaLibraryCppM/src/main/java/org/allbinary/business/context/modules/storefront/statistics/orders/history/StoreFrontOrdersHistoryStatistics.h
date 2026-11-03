
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class StoreFrontInterface;
class OrderHistoryInterface;
class Money;
class OrderHistoryEntityFactory;
class OrderHistoryEntityInterface;
class StdUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsInterface.h"
class StoreFrontOrdersHistoryStatisticsData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreFrontOrdersHistoryStatistics
            : public virtual Object
        , public virtual StoreFrontOrdersHistoryStatisticsInterface {

    private: int64_t numberOfOrdersLong;

    private: Money* subTotalMoney;

    private: Money* shippingCostMoney;

    private: Money* taxesMoney;

    private: Money* totalMoney;

public: StoreFrontOrdersHistoryStatistics(StoreFrontInterface* storeFrontInterface);

    public: int64_t getNumberOfOrders();

    public: Money* getSubTotal();

    public: Money* getShippingCost();

    public: Money* getTaxes();

    public: Money* getTotal();

    public: HashMap<Object*, Object*>* toHashMap();

    public: BasicArrayList* toVector();

    public: Object* getKey();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICS_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICS_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderHistoryInterface.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/Money.h>)
#include <org/allbinary/business/user/commerce/money/Money.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include("org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsInterface.h")
#include "org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsInterface.h"
#endif
#if __has_include("org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsData.h")
#include "org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsData.h"
#endif

        #endif
    
