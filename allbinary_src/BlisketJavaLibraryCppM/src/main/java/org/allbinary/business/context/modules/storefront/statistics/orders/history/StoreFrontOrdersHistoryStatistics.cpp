
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICS_CPP
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatistics.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsInterface.h"
#include "org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsData.h"


StoreFrontOrdersHistoryStatistics::StoreFrontOrdersHistoryStatistics(StoreFrontInterface* storeFrontInterface){
this->subTotalMoney= new Money();
    
this->shippingCostMoney= new Money();
    
this->taxesMoney= new Money();
    
this->totalMoney= new Money();
    

    OrderHistoryEntityInterface* orderHistoryEntityInterface = OrderHistoryEntityFactory::getInstance();;
    

    BasicArrayList* orderHistoryInterfaceVector = orderHistoryEntityInterface->getStoreOrders(storeFrontInterface);;
    

    int64_t numberOfOrders = 0;;
    

    OrderHistoryInterface* orderHistoryInterface;;
    

    int32_t size = orderHistoryInterfaceVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
orderHistoryInterface= dynamic_cast<OrderHistoryInterface*>(orderHistoryInterfaceVector->get(index));
    
numberOfOrders= numberOfOrders +1;
    
this->subTotalMoney->add(orderHistoryInterface->getSubTotal());
    
this->shippingCostMoney->add(orderHistoryInterface->getShippingCost());
    
this->taxesMoney->add(orderHistoryInterface->getTaxes());
    
this->totalMoney->add(orderHistoryInterface->getTotal());
    
}

this->numberOfOrdersLong= int64_t(numberOfOrders);
    
}


    auto StoreFrontOrdersHistoryStatistics::getNumberOfOrders() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->numberOfOrdersLong;
    
}


    auto StoreFrontOrdersHistoryStatistics::getSubTotal() -> Money*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->subTotalMoney;
    
}


    auto StoreFrontOrdersHistoryStatistics::getShippingCost() -> Money*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->shippingCostMoney;
    
}


    auto StoreFrontOrdersHistoryStatistics::getTaxes() -> Money*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->taxesMoney;
    
}


    auto StoreFrontOrdersHistoryStatistics::getTotal() -> Money*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->totalMoney;
    
}


    auto StoreFrontOrdersHistoryStatistics::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    StoreFrontOrdersHistoryStatisticsData* storeFrontOrdersHistoryStatisticsData = StoreFrontOrdersHistoryStatisticsData::getInstance();;
    
hashMap->put(storeFrontOrdersHistoryStatisticsData->NUMBEROFORDERS, this->getNumberOfOrders().toString());
    
hashMap->put(storeFrontOrdersHistoryStatisticsData->SUBTOTAL, this->getSubTotal()->toString());
    
hashMap->put(storeFrontOrdersHistoryStatisticsData->SHIPPINGCOST, this->getShippingCost()->toString());
    
hashMap->put(storeFrontOrdersHistoryStatisticsData->TAXES, this->getTaxes()->toString());
    
hashMap->put(storeFrontOrdersHistoryStatisticsData->TOTAL, this->getTotal()->toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


    auto StoreFrontOrdersHistoryStatistics::toVector() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto StoreFrontOrdersHistoryStatistics::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICS_CPP
