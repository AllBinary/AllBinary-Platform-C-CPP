
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
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Float.h"
        
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
        #include "org/allbinary/business/user/commerce/inventory/basket/BasketData.h"

class BasketReview
            : public Object
         {

    BasicArrayList* items = new BasicArrayListD();

public: BasketReview(){
}


    public: bool isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


    public: void addItem(Item* item){
this->items->add(item);
    
}


    public: BasicArrayList* getItems(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->items;
    
}


    public: void removeItem(std::string id){

    std::vector<Object*> itemArray = this->items->toArray();;
    

    int32_t size = itemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Item* item = dynamic_cast<Item*>(itemArray[index]);;
    

                        if(item->getId()->compareTo(id) == 0)
                        
                                    {
                                    this->items->remove(item);
    

                                    }
                                
}

}


    public: void adjustItem(std::string id, std::string num){

    std::vector<Object*> itemArray = this->items->toArray();;
    

    int32_t size = itemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Item* item = dynamic_cast<Item*>(itemArray[index]);;
    

                        if(item->getId()->compareTo(id) == 0)
                        
                                    {
                                    item->setNumber(num);
    

                                    }
                                
}

}


    public: std::string getTotalWeight(){

    float weightFloat = 0;;
    

    std::vector<Object*> itemArray = this->items->toArray();;
    

    int32_t size = itemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Item* item = dynamic_cast<Item*>(itemArray[index]);;
    
weightFloat += (float(item->getWeight()));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (float(weightFloat)).toString();;
    
}


    public: int32_t getNumberOfItems(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int32_t(this->items->size());
    
}


    public: Set* getIds(){

    HashSet* idSet = new HashSet();;
    

    std::vector<Object*> itemArray = this->items->toArray();;
    

    int32_t size = itemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Item* item = dynamic_cast<Item*>(itemArray[index]);;
    
idSet->add(item->getId());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<Set*>(idSet);
    
}


    public: int32_t getNumberOf(std::string id){

    std::vector<Object*> itemArray = this->items->toArray();;
    

    int32_t size = itemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Item* item = dynamic_cast<Item*>(itemArray[index]);;
    

                        if(item->getId()->compareTo(id) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int32_t(item->getNumber());
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int32_t(0);
    
}


                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document){

    Node* node = document->createElement(BasketData::BASKET);;
    

    std::vector<Object*> itemArray = this->items->toArray();;
    

    int32_t size = itemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Item* item = dynamic_cast<Item*>(itemArray[index]);;
    
node->appendChild((new ItemView(item, new BasicArrayListD()))->toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

