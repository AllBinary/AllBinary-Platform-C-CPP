
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Float.h"
        
#include <java/io/Serializable.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/business/user/commerce/money/MoneyException.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasketInterface.h"

class Basket
            : public Object
        : public BasketInterface, public Serializable {

    private: HashMap<Object*, Object*> items = StdUtil::getInstance().createHashMap();

public: Basket(){
}


    public: void addItem(std::string id, std::string num){

                        if(this->items.containsKey(id))
                        
                                    {
                                    
    std::string oldNumStr = .toCharArray();;
    

    Integer oldNumInt = Integer::valueOf(oldNumStr);;
    

    Integer numInt = Integer::valueOf(num);;
    

    Integer newNumInt = Integer(oldNumInt.intValue() +numInt.intValue());;
    
this->items.put(id, newNumInt.toString());
    

                                    }
                                
                        else {
                            this->items.put(id, num);
    

                        }
                            
}


    public: void removeItem(std::string id){
this->items.remove(id);
    
}


    public: void adjustItem(std::string id, std::string num){

                        if(Integer::valueOf(num).intValue() > 0)
                        
                                    {
                                    this->items.put(id, num);
    

                                    }
                                
                        else {
                            this->items.remove(id);
    

                        }
                            
}


    public: std::string getTotalWeight(){

    HashMap<Object*, Object*> itemsAndNumberInBasket = this->getItems();;
    

    Money totalWeight = Money();;
    

                        if(itemsAndNumberInBasket.size() > 0)
                        
                                    {
                                    
    Set items = itemsAndNumberInBasket.keySet();;
    

    std::string product;;
    

    number weightFloat;;
    

    std::vector<Object*> itemArray = items.toArray();;
    

    int32_t size = itemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
product= .toCharArray();
    
weightFloat= number(InventoryEntity().getWeight(product));
    
weightFloat= number(getNumberOf(product) *weightFloat);
    
totalWeight.add(weightFloat.toString());
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return totalWeight.toString();;
    
}


    public: Integer getNumberOfItems(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Integer(this->items.size());
    
}


    public: Set getIds(){

    Set set = this->items.keySet();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return set;
    
}


    public: HashMap<Object*, Object*> getItems(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->items;
    
}


    public: Integer getNumberOf(std::string product){

    std::string numStr = this->items.get(product);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Integer::valueOf(numStr);;
    
}


                //@Throws(MoneyException.constructor)
            
    public: Money getSubTotal(){

    HashMap<Object*, Object*> itemsAndNumberInBasket = this->getItems();;
    

    Money subTotal = Money();;
    

                        if(itemsAndNumberInBasket.size() > 0)
                        
                                    {
                                    
    Set items = itemsAndNumberInBasket.keySet();;
    

    InventoryEntityFactory inventoryEntityFactory = InventoryEntityFactory::getInstance();;
    

    InventoryEntity inventoryEntity = inventoryEntityFactory.getInventoryEntityInstance();;
    

    std::vector<Object*> itemArray = items.toArray();;
    

    int32_t size = itemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string product = .toCharArray();;
    

    ItemInterface itemInterface = inventoryEntity.getItem(product);;
    

    Money productTotal = itemInterface.getPrice();;
    
productTotal.multiply(getNumberOf(product).intValue());
    
subTotal.add(productTotal.toString());
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return subTotal;
    
}


};

            

