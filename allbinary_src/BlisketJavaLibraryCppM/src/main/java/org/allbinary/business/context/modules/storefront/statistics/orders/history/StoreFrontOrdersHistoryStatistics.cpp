
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

public: StoreFrontOrdersHistoryStatistics(StoreFrontInterface storeFrontInterface){
this->subTotalMoney= Money();
    
this->shippingCostMoney= Money();
    
this->taxesMoney= Money();
    
this->totalMoney= Money();
    

    OrderHistoryEntityInterface orderHistoryEntityInterface = OrderHistoryEntityFactory::getInstance();;
    

    BasicArrayList orderHistoryInterfaceVector = orderHistoryEntityInterface.getStoreOrders(storeFrontInterface);;
    

    int64_t numberOfOrders = 0;;
    

    OrderHistoryInterface orderHistoryInterface;;
    

    int32_t size = orderHistoryInterfaceVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
orderHistoryInterface= orderHistoryInterfaceVector.get(index);
    
numberOfOrders= numberOfOrders +1;
    
this->subTotalMoney.add(orderHistoryInterface.getSubTotal());
    
this->shippingCostMoney.add(orderHistoryInterface.getShippingCost());
    
this->taxesMoney.add(orderHistoryInterface.getTaxes());
    
this->totalMoney.add(orderHistoryInterface.getTotal());
    
}

this->numberOfOrdersLong= Long(numberOfOrders);
    
}


    public: Long getNumberOfOrders(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->numberOfOrdersLong;
    
}


    public: Money getSubTotal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->subTotalMoney;
    
}


    public: Money getShippingCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->shippingCostMoney;
    
}


    public: Money getTaxes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->taxesMoney;
    
}


    public: Money getTotal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->totalMoney;
    
}


    public: HashMap<Object*, Object*> toHashMap(){

    HashMap<Object*, Object*> hashMap = StdUtil::getInstance().createHashMap();;
    

    StoreFrontOrdersHistoryStatisticsData storeFrontOrdersHistoryStatisticsData = StoreFrontOrdersHistoryStatisticsData::getInstance();;
    
hashMap.put(storeFrontOrdersHistoryStatisticsData.NUMBEROFORDERS, this->getNumberOfOrders().toString());
    
hashMap.put(storeFrontOrdersHistoryStatisticsData.SUBTOTAL, this->getSubTotal().toString());
    
hashMap.put(storeFrontOrdersHistoryStatisticsData.SHIPPINGCOST, this->getShippingCost().toString());
    
hashMap.put(storeFrontOrdersHistoryStatisticsData.TAXES, this->getTaxes().toString());
    
hashMap.put(storeFrontOrdersHistoryStatisticsData.TOTAL, this->getTotal().toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    public: BasicArrayList toVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

