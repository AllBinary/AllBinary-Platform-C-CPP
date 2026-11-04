
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
        



        #ifndef VIEWS_GENERIC_BASKET_BASKETVIEW_CPP
        #define VIEWS_GENERIC_BASKET_BASKETVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/basket/BasketView.h"
        

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

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketData.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemView.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/search/SearchData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BasketView::BasketView(TransformInfoInterface* transformInfoInterface) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->request= dynamic_cast<HttpServletRequest*>(this->getPageContext()->getRequest());
    
}


                //@Throws(Exception.constructor)
            
    auto BasketView::toXmlNode(Document* document) -> Node*{

        try {
            
    InventoryEntity* inventoryEntity = InventoryEntityFactory::getInstance()->getInventoryEntityInstance();;
    

    BasketInterface* basketInterface = this->getWeblisketSession()->getOrder()->getBasket();;
    

    Node* basketNode = document->createElement(BasketData::BASKET);;
    

    HashMap<Object*, Object*>* itemsAndNumberInBasket = basketInterface->getItems();;
    

    int32_t numberOfResults = 1;;
    

    Set* items = itemsAndNumberInBasket->keySet();;
    

    std::vector<Object*> productArray = items->toArray();;
    

    int32_t size = productArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string product = .toCharArray();;
    

    ItemInterface* itemInterface = inventoryEntity->getItem(product);;
    

                        if(itemInterface != 
                                    nullptr
                                )
                        
                                    {
                                    
    BasicItemView* basicItemView = new BasicItemView(itemInterface, new BasicArrayListD());;
    

    Node* node = basicItemView->toXmlNode(document);;
    

    std::string numberInBasket = basketInterface->getNumberOf(product)->toString();;
    
node->appendChild(ModDomHelper::createNameValueNodes(document, BasketData::ITEMTOTALINBASKET, numberInBasket));
    

    Money* itemPrice = itemInterface->getPrice();;
    

    Money* itemTotal = new Money(itemPrice);;
    
itemTotal->multiply(JavaBoxes::value<int32_t>(basketInterface->getNumberOf(product)));
    
node->appendChild(ModDomHelper::createNameValueNodes(document, BasketData::ITEMTOTAL, itemTotal->toString()));
    
basketNode->appendChild(node);
    

                                    }
                                
                        else {
                            this->logUtil->putF(JavaString::valueOf("Product Failed: ") +JavaString::valueOf(product), this, "toXmlNode");
    

                        }
                            
numberOfResults++;
    
}


    Node* totalNumberNode = document->createElement(SearchData::TOTAL_NUMBER_ITEMS);;
    

    Node* totalNumberTextNode = document->createTextNode(basketInterface->getNumberOfItems()->toString());;
    
totalNumberNode->appendChild(totalNumberTextNode);
    

    Node* totalWeightNode = document->createElement(BasketData::TOTALWEIGHT);;
    

    Node* totalWeightTextNode = document->createTextNode(basketInterface->getTotalWeight()->toString());;
    
totalWeightNode->appendChild(totalWeightTextNode);
    

    Node* subTotalNode = document->createElement(BasketData::SUBTOTAL);;
    

    Node* subTotalTextNode = document->createTextNode(basketInterface->getSubTotal()->toString());;
    
subTotalNode->appendChild(subTotalTextNode);
    
basketNode->appendChild(totalNumberNode);
    
basketNode->appendChild(totalWeightNode);
    
basketNode->appendChild(subTotalNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return basketNode;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->XSLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "toXmlNode", &e);
    

                                    }
                                



                            throw e;
                    
}

}


    auto BasketView::addDomNodeInterfaces() -> void{
this->addDomNodeInterface(dynamic_cast<DomNodeInterface*>(this));
    
}


                //@Throws(Exception.constructor)
            
    auto BasketView::view() -> std::string{

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return HttpStoreComponentView::view();;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //VIEWS_GENERIC_BASKET_BASKETVIEW_CPP
