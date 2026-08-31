
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
        



            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../../java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreFrontOrdersHistoryStatisticsInterface.h"
#include "StoreFrontOrdersHistoryStatisticsData.h"

class StoreFrontOrdersHistoryStatistics
            : public Object
        : public StoreFrontOrdersHistoryStatisticsInterface {
        

    private: numberOfOrdersLong: Long;

    private: subTotalMoney: Money;

    private: shippingCostMoney: Money;

    private: taxesMoney: Money;

    private: totalMoney: Money;

public constructor (StoreFrontInterface storeFrontInterface){

            super();
        this.subTotalMoney= new Money();
    
this.shippingCostMoney= new Money();
    
this.taxesMoney= new Money();
    
this.totalMoney= new Money();
    

    orderHistoryEntityInterface: OrderHistoryEntityInterface = OrderHistoryEntityFactory.getInstance()!;;
    

    orderHistoryInterfaceVector: Vector = orderHistoryEntityInterface!.getStoreOrders(storeFrontInterface)!;;
    

    numberOfOrders: int64_t = 0;;
    

    orderHistoryInterface: OrderHistoryInterface;;
    

    size: int32_t = orderHistoryInterfaceVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
orderHistoryInterface= orderHistoryInterfaceVector!.get(index) as OrderHistoryInterface;
    
numberOfOrders= numberOfOrders +1;
    
this.subTotalMoney!.add(orderHistoryInterface!.getSubTotal());
    
this.shippingCostMoney!.add(orderHistoryInterface!.getShippingCost());
    
this.taxesMoney!.add(orderHistoryInterface!.getTaxes());
    
this.totalMoney!.add(orderHistoryInterface!.getTotal());
    
}

this.numberOfOrdersLong= new Long(numberOfOrders);
    
}


    public Long getNumberOfOrders(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.numberOfOrdersLong;
    
}


    public Money getSubTotal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.subTotalMoney;
    
}


    public Money getShippingCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.shippingCostMoney;
    
}


    public Money getTaxes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.taxesMoney;
    
}


    public Money getTotal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.totalMoney;
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    

    storeFrontOrdersHistoryStatisticsData: StoreFrontOrdersHistoryStatisticsData = StoreFrontOrdersHistoryStatisticsData.getInstance()!;;
    
hashMap!.put(storeFrontOrdersHistoryStatisticsData!.NUMBEROFORDERS, this.getNumberOfOrders()!.toString());
    
hashMap!.put(storeFrontOrdersHistoryStatisticsData!.SUBTOTAL, this.getSubTotal()!.toString());
    
hashMap!.put(storeFrontOrdersHistoryStatisticsData!.SHIPPINGCOST, this.getShippingCost()!.toString());
    
hashMap!.put(storeFrontOrdersHistoryStatisticsData!.TAXES, this.getTaxes()!.toString());
    
hashMap!.put(storeFrontOrdersHistoryStatisticsData!.TOTAL, this.getTotal()!.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    public Vector toVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

