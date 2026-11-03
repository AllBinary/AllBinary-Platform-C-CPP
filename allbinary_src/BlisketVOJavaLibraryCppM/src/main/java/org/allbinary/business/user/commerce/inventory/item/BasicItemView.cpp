
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_BASICITEMVIEW_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_BASICITEMVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/inventory/item/BasicItemView.h"
        

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

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"


BasicItemView::BasicItemView(ItemInterface* itemInterface, BasicArrayList* vector) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), basicItemData(BasicItemData::getInstance()){
this->itemInterface= itemInterface;
    
this->vector= vector;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicItemView::toXmlNode(Document* document) -> Node*{

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "toXmlNode");
    

                                    }
                                

    HashMap<Object*, Object*>* hashMap = this->itemInterface->toHashMap();;
    

    std::string EMPTY_STRING = StringUtil::getInstance()->EMPTY_STRING;;
    
hashMap->put(this->basicItemData->IMAGE, EMPTY_STRING);
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    Set* keySet = hashMap->keys();;
    

    Node* node = document->createElement(this->basicItemData->ITEM);;
    

    std::vector<Object*> nameArray = keySet->toArray();;
    

    int32_t size2 = nameArray.size();;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {

    std::string name = JavaBoxes::unbox<std::string>(nameArray[index]);;
    

    std::string value = JavaBoxes::unbox<std::string>(hashMap->get(name));;
    
value= stringUtil->getNonNull(value);
    
node->appendChild(ModDomHelper::createNameValueNodes(document, name, value));
    
}


    Node* totalNode = ModDomHelper::createNameValueNodes(document, this->basicItemData->TOTAL, this->itemInterface->getTotal()->toString());;
    
node->appendChild(totalNode);
    

    int32_t size = this->vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    DomNodeInterface* domNodeInterface = dynamic_cast<DomNodeInterface*>(this->vector->get(index));;
    

    Node* customNode = domNodeInterface->toXmlNode(document);;
    
node->appendChild(customNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}


    auto BasicItemView::toXmlDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto BasicItemView::view() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_BASICITEMVIEW_CPP
