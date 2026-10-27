
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h"

class Basket
            : public Object
        , public BasketInterface, public Serializable {

    private: HashMap<Object*, Object*>* items = StdUtil::getInstance()->createHashMap();

public: Basket(){
}


    public: void addItem(std::string id, std::string num){

                        if(this->items->containsKey(id))
                        
                                    {
                                    
    std::string oldNumStr = .toCharArray();;
    

    int32_t oldNumInt = Integer.valueOf(oldNumStr);;
    

    int32_t numInt = Integer.valueOf(num);;
    

    int32_t newNumInt = int32_t(oldNumInt.intValue() +numInt.intValue());;
    
this->items->put(id, newNumInt.toString());
    

                                    }
                                
                        else {
                            this->items->put(id, num);
    

                        }
                            
}


    public: void removeItem(std::string id){
this->items->remove(id);
    
}


    public: void adjustItem(std::string id, std::string num){

                        if(Integer.valueOf(num)->intValue() > 0)
                        
                                    {
                                    this->items->put(id, num);
    

                                    }
                                
                        else {
                            this->items->remove(id);
    

                        }
                            
}


    public: std::string getTotalWeight(){

    HashMap<Object*, Object*>* itemsAndNumberInBasket = this->getItems();;
    

    Money* totalWeight = new Money();;
    

                        if(itemsAndNumberInBasket->size() > 0)
                        
                                    {
                                    
    Set* items = itemsAndNumberInBasket->keySet();;
    

    std::string product;;
    

    float weightFloat;;
    

    std::vector<Object*> itemArray = items->toArray();;
    

    int32_t size = itemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
product= .toCharArray();
    
weightFloat= float((new InventoryEntity())->getWeight(product));
    
weightFloat= float(getNumberOf(product) *weightFloat);
    
totalWeight->add(weightFloat.toString());
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return totalWeight->toString();;
    
}


    public: int32_t getNumberOfItems(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int32_t(this->items->size());
    
}


    public: Set* getIds(){

    Set* set = this->items->keySet();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return set;
    
}


    public: HashMap<Object*, Object*>* getItems(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->items;
    
}


    public: int32_t getNumberOf(std::string product){

    std::string numStr = this->items->get(product);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Integer.valueOf(numStr);;
    
}


                //@Throws(MoneyException.constructor)
            
    public: Money* getSubTotal(){

    HashMap<Object*, Object*>* itemsAndNumberInBasket = this->getItems();;
    

    Money* subTotal = new Money();;
    

                        if(itemsAndNumberInBasket->size() > 0)
                        
                                    {
                                    
    Set* items = itemsAndNumberInBasket->keySet();;
    

    InventoryEntityFactory* inventoryEntityFactory = InventoryEntityFactory::getInstance();;
    

    InventoryEntity* inventoryEntity = dynamic_cast<InventoryEntity*>(inventoryEntityFactory->getInventoryEntityInstance());;
    

    std::vector<Object*> itemArray = items->toArray();;
    

    int32_t size = itemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string product = .toCharArray();;
    

    ItemInterface* itemInterface = inventoryEntity->getItem(product);;
    

    Money* productTotal = itemInterface->getPrice();;
    
productTotal->multiply(getNumberOf(product).intValue());
    
subTotal->add(productTotal->toString());
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return subTotal;
    
}


};

            

