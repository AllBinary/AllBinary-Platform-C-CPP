
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
        
            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../../java/lang/Float.h"
        
#include <java/util/HashSet.h>

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/Item.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemView.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasketData.h"

class BasketReview
            : public Object
         {
        

    items: Vector = new Vector();

public constructor (){

            super();
        }


    public Boolean isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    
}


    public addItem(Item item){
this.items.add(item);
    
}


    public Vector getItems(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.items;
    
}


    public removeItem(string id){

    itemArray: std::vector<any> = this.items.toArray()!;;
    

    size: int32_t = itemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    item: Item = itemArray[index]! as Item;;
    

                        if(item.getId()!.compareTo(id) == 0)
                        
                                    {
                                    this.items.remove(item);
    

                                    }
                                
}

}


    public adjustItem(string id, string num){

    itemArray: std::vector<any> = this.items.toArray()!;;
    

    size: int32_t = itemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    item: Item = itemArray[index]! as Item;;
    

                        if(item.getId()!.compareTo(id) == 0)
                        
                                    {
                                    item.setNumber(num);
    

                                    }
                                
}

}


    public string getTotalWeight(){

    weightFloat: float = 0;;
    

    itemArray: std::vector<any> = this.items.toArray()!;;
    

    size: int32_t = itemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    item: Item = itemArray[index]! as Item;;
    
weightFloat += new number(item.getWeight());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new number(weightFloat).toString();;
    
}


    public Integer getNumberOfItems(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Integer(this.items.length);
    
}


    public Set getIds(){

    idSet: HashSet = new HashSet();;
    

    itemArray: std::vector<any> = this.items.toArray()!;;
    

    size: int32_t = itemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    item: Item = itemArray[index]! as Item;;
    
idSet!.add(item.getId());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return idSet as Set;
    
}


    public Integer getNumberOf(string id){

    itemArray: std::vector<any> = this.items.toArray()!;;
    

    size: int32_t = itemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    item: Item = itemArray[index]! as Item;;
    

                        if(item.getId()!.compareTo(id) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Integer(item.getNumber());
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Integer(0);
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = document.createElement(BasketData.BASKET)!;;
    

    itemArray: std::vector<any> = this.items.toArray()!;;
    

    size: int32_t = itemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    item: Item = itemArray[index]! as Item;;
    
node.appendChild(new ItemView(item, new Vector()).toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

