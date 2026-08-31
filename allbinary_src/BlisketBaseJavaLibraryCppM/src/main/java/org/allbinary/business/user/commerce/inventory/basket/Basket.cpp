
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../../java/lang/Float.h"
        
#include <java/io/Serializable.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/business/user/commerce/money/MoneyException.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasketInterface.h"

class Basket
            : public Object
        : public BasketInterface, public Serializable {
        

    private: items: HashMap<any, any> = new HashMap<any, any>();

public constructor (){

            super();
        }


    public addItem(string id, string num){

                        if(this.items.containsKey(id))
                        
                                    {
                                    
    oldNumStr: string = .toCharArray();;
    

    oldNumInt: Integer = Integer.valueOf(oldNumStr)!;;
    

    numInt: Integer = Integer.valueOf(num)!;;
    

    newNumInt: Integer = new Integer(oldNumInt!.intValue() +numInt!.intValue());;
    
this.items.put(id, newNumInt!.toString());
    

                                    }
                                
                        else {
                            this.items.put(id, num);
    

                        }
                            
}


    public removeItem(string id){
this.items.remove(id);
    
}


    public adjustItem(string id, string num){

                        if(Integer.valueOf(num)!.intValue() > 0)
                        
                                    {
                                    this.items.put(id, num);
    

                                    }
                                
                        else {
                            this.items.remove(id);
    

                        }
                            
}


    public string getTotalWeight(){

    itemsAndNumberInBasket: HashMap<any, any> = this.getItems()!;;
    

    totalWeight: Money = new Money();;
    

                        if(itemsAndNumberInBasket!.size() > 0)
                        
                                    {
                                    
    items: Set = itemsAndNumberInBasket!.keySet()!;;
    

    product: string;;
    

    weightFloat: number;;
    

    itemArray: std::vector<any> = items.toArray()!;;
    

    size: int32_t = itemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
product= .toCharArray();
    
weightFloat= new number(new InventoryEntity().getWeight(product));
    
weightFloat= new number(getNumberOf(product)! *weightFloat!);
    
totalWeight!.add(weightFloat!.toString());
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return totalWeight!.toString();;
    
}


    public Integer getNumberOfItems(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Integer(this.items.size());
    
}


    public Set getIds(){

    set: Set = this.items.keySet()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return set;
    
}


    public HashMap<any, any> getItems(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.items;
    
}


    public Integer getNumberOf(string product){

    numStr: string = this.items.get(product) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Integer.valueOf(numStr);;
    
}


                //@Throws(MoneyException.constructor)
            
    public Money getSubTotal(){

    itemsAndNumberInBasket: HashMap<any, any> = this.getItems()!;;
    

    subTotal: Money = new Money();;
    

                        if(itemsAndNumberInBasket!.size() > 0)
                        
                                    {
                                    
    items: Set = itemsAndNumberInBasket!.keySet()!;;
    

    inventoryEntityFactory: InventoryEntityFactory = InventoryEntityFactory.getInstance()!;;
    

    inventoryEntity: InventoryEntity = inventoryEntityFactory!.getInventoryEntityInstance() as InventoryEntity;;
    

    itemArray: std::vector<any> = items.toArray()!;;
    

    size: int32_t = itemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    product: string = .toCharArray();;
    

    itemInterface: ItemInterface = inventoryEntity!.getItem(product)!;;
    

    productTotal: Money = itemInterface!.getPrice()!;;
    
productTotal!.multiply(getNumberOf(product)!.intValue());
    
subTotal!.add(productTotal!.toString());
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return subTotal;
    
}


};

            

