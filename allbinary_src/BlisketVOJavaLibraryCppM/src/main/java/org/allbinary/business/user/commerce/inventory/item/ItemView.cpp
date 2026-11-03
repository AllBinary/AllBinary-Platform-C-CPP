
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ITEMVIEW_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ITEMVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/inventory/item/ItemView.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/business/user/commerce/inventory/item/OrderItemInterface.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemView.h"


ItemView::ItemView(OrderItemInterface* itemInterface, BasicArrayList* vector){
this->itemInterface= itemInterface;
    
this->vector= vector;
    
}


                //@Throws(Exception.constructor)
            
    auto ItemView::toXmlNode(Document* document) -> Node*{

    HashMap<Object*, Object*>* hashMap = this->itemInterface->toHashMap();;
    

    Set* keySet = hashMap->keys();;
    

    Node* node = document->createElement(ItemData::ITEM);;
    

    BasicItemView* basicItemView = new BasicItemView(this->itemInterface, this->vector);;
    
node->appendChild(basicItemView->toXmlNode(document));
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    std::vector<Object*> nameArray = keySet->toArray();;
    

    int32_t size = nameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string name = JavaBoxes::unbox<std::string>(nameArray[index]);;
    

    std::string value = JavaBoxes::unbox<std::string>(hashMap->get(name));;
    
value= stringUtil->getNonNull(value);
    
node->appendChild(ModDomHelper::createNameValueNodes(document, name, value));
    
}


    Node* shippingAddressNode = document->createElement(StreetAddressData::NAME);;
    
shippingAddressNode->appendChild(this->itemInterface->getShippingAddress()->toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ITEMVIEW_CPP
