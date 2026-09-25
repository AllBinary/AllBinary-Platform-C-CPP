
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
        
            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../../java/lang/Float.h"
        
#include <java/util/HashSet.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/Item.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemView.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasketData.h"

class BasketReview
            : public Object
         {

    BasicArrayList items = BasicArrayListD();

public: BasketReview(){
}


    public: Boolean isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


    public: void addItem(Item item){
this->items.add(item);
    
}


    public: BasicArrayList getItems(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->items;
    
}


    public: void removeItem(std::string id){

    std::vector<Object*> itemArray = this->items.toArray();;
    

    int32_t size = itemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Item item = itemArray[index]! as Item;;
    

                        if(item.getId().compareTo(id) == 0)
                        
                                    {
                                    this->items.remove(item);
    

                                    }
                                
}

}


    public: void adjustItem(std::string id, std::string num){

    std::vector<Object*> itemArray = this->items.toArray();;
    

    int32_t size = itemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Item item = itemArray[index]! as Item;;
    

                        if(item.getId().compareTo(id) == 0)
                        
                                    {
                                    item.setNumber(num);
    

                                    }
                                
}

}


    public: std::string getTotalWeight(){

    float weightFloat = 0;;
    

    std::vector<Object*> itemArray = this->items.toArray();;
    

    int32_t size = itemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Item item = itemArray[index]! as Item;;
    
weightFloat += number(item.getWeight());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return number(weightFloat).toString();;
    
}


    public: Integer getNumberOfItems(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Integer(this->items.size());
    
}


    public: Set getIds(){

    HashSet idSet = HashSet();;
    

    std::vector<Object*> itemArray = this->items.toArray();;
    

    int32_t size = itemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Item item = itemArray[index]! as Item;;
    
idSet.add(item.getId());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return idSet as Set;
    
}


    public: Integer getNumberOf(std::string id){

    std::vector<Object*> itemArray = this->items.toArray();;
    

    int32_t size = itemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Item item = itemArray[index]! as Item;;
    

                        if(item.getId().compareTo(id) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Integer(item.getNumber());
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Integer(0);
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = document.createElement(BasketData::BASKET);;
    

    std::vector<Object*> itemArray = this->items.toArray();;
    

    int32_t size = itemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Item item = itemArray[index]! as Item;;
    
node.appendChild(ItemView(item, BasicArrayListD()).toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

