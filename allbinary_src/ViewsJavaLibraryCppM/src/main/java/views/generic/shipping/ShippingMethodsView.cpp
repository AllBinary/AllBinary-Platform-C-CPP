
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
        



        #ifndef VIEWS_GENERIC_SHIPPING_SHIPPINGMETHODSVIEW_CPP
        #define VIEWS_GENERIC_SHIPPING_SHIPPINGMETHODSVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/shipping/ShippingMethodsView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Float.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/business/user/commerce/money/tax/TaxFactory.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethods.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodsData.h>

      
#include <org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h>

      
#include <org/allbinary/data/tables/user/address/StreetAddressesEntityInterface.h>

      
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntityFactory.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ShippingMethodsView::ShippingMethodsView(TransformInfoInterface* transformInfoInterface) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->storeFrontInterface= StoreFrontFactory::getInstance(this->getTransformInfoInterface()->getStoreName());
    
this->shippingMethods= new ShippingMethods(this->abeClientInformation, this->storeFrontInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto ShippingMethodsView::toXmlNode(Document* document) -> Node*{

        try {
            
    Node* shippingMethodsNode = document->createElement(ShippingMethodsData::SHIPPINGMETHODSORDERSUMMARIES);;
    

    OrderInterface* order = this->getWeblisketSession()->getOrder();;
    

    BasketInterface* basket = this->getWeblisketSession()->getOrder()->getBasket();;
    

    StreetAddressesEntityInterface* shippingAddressesEntityInterface = ShippingAddressesEntityFactory::getInstance()->getInstance(this->getWeblisketSession()->getUserName());;
    

    StreetAddress* streetAddress = shippingAddressesEntityInterface->getDefault();;
    

    BasicArrayList* shippingVector = this->shippingMethods->get();;
    

    int32_t size = shippingVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Node* shippingMethodNode = document->createElement(ShippingMethodsData::SHIPPINGMETHODORDERSUMMARY);;
    

    ShippingInterface* shipping = dynamic_cast<ShippingInterface*>(shippingVector->get(index));;
    

    DomNodeInterface* shippingView = dynamic_cast<DomNodeInterface*>(shipping);;
    
shippingMethodNode->appendChild(shippingView->toXmlNode(document));
    

    Money* shippingCost = shipping->getCost(order);;
    

    Money* subTotal = basket->getSubTotal();;
    

    float taxRate = TaxFactory::getInstance()->getInstance(this->abeClientInformation, storeFrontInterface)->getTaxRate(streetAddress, storeFrontInterface);;
    

    Money* tax = new Money();;
    

    Money* total = new Money();;
    
total->add(shippingCost->toString());
    
total->add(subTotal->toString());
    
tax->add(total->toString());
    
tax->multiply(taxRate);
    
total->add(tax->toString());
    
shippingMethodNode->appendChild(ModDomHelper::createNameValueNodes(document, ShippingMethodsData::SHIPPINGCOST, shippingCost->toString()));
    
shippingMethodNode->appendChild(ModDomHelper::createNameValueNodes(document, ShippingMethodsData::TAXRATE, JavaString::valueOf(taxRate)));
    
shippingMethodNode->appendChild(ModDomHelper::createNameValueNodes(document, ShippingMethodsData::SUBTOTAL, subTotal->toString()));
    
shippingMethodNode->appendChild(ModDomHelper::createNameValueNodes(document, ShippingMethodsData::TAX, tax->toString()));
    
shippingMethodNode->appendChild(ModDomHelper::createNameValueNodes(document, ShippingMethodsData::TOTAL, total->toString()));
    
shippingMethodNode->appendChild(ModDomHelper::createNameValueNodes(document, EntryData::getInstance()->DEFAULT, this->shippingMethods->getDefault()->getName()));
    
shippingMethodsNode->appendChild(shippingMethodNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return shippingMethodsNode;
    

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


    auto ShippingMethodsView::addDomNodeInterfaces() -> void{
this->addDomNodeInterface(dynamic_cast<DomNodeInterface*>(this));
    
}


    auto ShippingMethodsView::view() -> std::string{

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HttpStoreComponentView::view();;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to view ShippingMethods";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}




        #endif //VIEWS_GENERIC_SHIPPING_SHIPPINGMETHODSVIEW_CPP
