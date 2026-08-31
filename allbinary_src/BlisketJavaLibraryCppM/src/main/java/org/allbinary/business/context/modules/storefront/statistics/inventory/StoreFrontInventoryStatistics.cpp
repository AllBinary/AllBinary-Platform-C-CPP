
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../../../java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreFrontInventoryStatisticsInterface.h"
#include "StoreFrontInventoryStatisticsData.h"

class StoreFrontInventoryStatistics
            : public Object
        : public StoreFrontInventoryStatisticsInterface {
        

    private: totalNumberOfItems: int64_t= 0;

    private: totalInventorySaleValueMoney: Money;

public constructor (StoreFrontInterface storeFrontInterface){

            super();
        this.totalInventorySaleValueMoney= new Money();
    

    inventoryEntityInterface: InventoryEntityInterface = InventoryEntityFactory.getInstance()!.getInventoryEntityInstance()!;;
    

    itemVector: Vector = inventoryEntityInterface!.getItems(storeFrontInterface)!;;
    

    size: int32_t = itemVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    itemInterface: ItemInterface = itemVector!.get(index) as ItemInterface;;
    

    numberInStock: int32_t = Integer.valueOf(itemInterface!.getNumber())!.intValue()!;;
    
this.totalNumberOfItems= this.totalNumberOfItems +numberInStock;
    

    itemPriceMoney: Money = itemInterface!.getPrice()!;;
    
itemPriceMoney!.multiply(numberInStock);
    
this.totalInventorySaleValueMoney!.add(itemPriceMoney!.toString());
    
}

}


    public Long getNumber(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Long(this.totalNumberOfItems);
    
}


    public Money getTotal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.totalInventorySaleValueMoney;
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(StoreFrontInventoryStatisticsData.getInstance()!.NUMBEROFITEMS, this.getNumber()!.toString());
    
hashMap!.put(StoreFrontInventoryStatisticsData.getInstance()!.TOTALVALUE, this.getTotal()!.toString());
    



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

            

