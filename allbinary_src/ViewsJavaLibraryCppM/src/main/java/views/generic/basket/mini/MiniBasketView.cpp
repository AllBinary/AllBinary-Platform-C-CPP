
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
        



        #ifndef VIEWS_GENERIC_BASKET_MINI_MINIBASKETVIEW_CPP
        #define VIEWS_GENERIC_BASKET_MINI_MINIBASKETVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/basket/mini/MiniBasketView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/user/commerce/inventory/basket/BasketData.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/search/SearchData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MiniBasketView::MiniBasketView(TransformInfoInterface* transformInfoInterface) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto MiniBasketView::toXmlNode(Document* document) -> Node*{

        try {
            
    BasketInterface* basketInterface = this->getWeblisketSession()->getOrder()->getBasket();;
    

    Node* basketNode = document->createElement(BasketData::BASKET);;
    

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

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->XSLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "toXmlNode", &e);
    

                                    }
                                



                            throw e;
                    
}

}


    auto MiniBasketView::addDomNodeInterfaces() -> void{
this->addDomNodeInterface(dynamic_cast<DomNodeInterface*>(this));
    
}


                //@Throws(Exception.constructor)
            
    auto MiniBasketView::view() -> std::string{

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return HttpStoreComponentView::view();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //VIEWS_GENERIC_BASKET_MINI_MINIBASKETVIEW_CPP
