
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
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/address/StreetAddressData.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OrderItemInterface.h"
#include "ItemData.h"
#include "BasicItemView.h"

class ItemView
            : public Object
         {

    private: OrderItemInterface itemInterface;

    private: BasicArrayList vector;

public: ItemView(OrderItemInterface itemInterface, BasicArrayList vector){
this->itemInterface= itemInterface;
    
this->vector= vector;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    HashMap<Object*, Object*> hashMap = this->itemInterface.toHashMap();;
    

    Set keySet = hashMap.keys();;
    

    Node node = document.createElement(ItemData::ITEM);;
    

    BasicItemView basicItemView = BasicItemView(this->itemInterface, this->vector);;
    
node.appendChild(basicItemView.toXmlNode(document));
    

    StringUtil stringUtil = StringUtil::getInstance();;
    

    std::vector<Object*> nameArray = keySet.();;
    

    int32_t size = nameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string name = nameArray[index];;
    

    std::string value = hashMap.get(name);;
    
value= stringUtil.getNonNull(value);
    
node.appendChild(ModDomHelper::createNameValueNodes(document, name, value));
    
}


    Node shippingAddressNode = document.createElement(StreetAddressData::NAME);;
    
shippingAddressNode.appendChild(this->itemInterface.getShippingAddress().toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

