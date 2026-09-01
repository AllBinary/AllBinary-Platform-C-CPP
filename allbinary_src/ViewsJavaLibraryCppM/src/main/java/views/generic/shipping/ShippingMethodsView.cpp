
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
        



            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Float.h"
        
#include <java/util/Vector.h>

      
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
        
class ShippingMethodsView: public HttpStoreComponentView, public DomNodeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: ShippingMethods shippingMethods;

    private: StoreFrontInterface storeFrontInterface;

public: ShippingMethodsView(TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->storeFrontInterface= StoreFrontFactory::getInstance(this->getTransformInfoInterface().getStoreName());
    
this->shippingMethods= ShippingMethods(this->abeClientInformation, this->storeFrontInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

        try {
            
    Node shippingMethodsNode = document.createElement(ShippingMethodsData::SHIPPINGMETHODSORDERSUMMARIES);;
    

    OrderInterface order = this->getWeblisketSession().getOrder();;
    

    BasketInterface basket = this->getWeblisketSession().getOrder().getBasket();;
    

    StreetAddressesEntityInterface shippingAddressesEntityInterface = ShippingAddressesEntityFactory::getInstance().getInstance(this->getWeblisketSession().getUserName());;
    

    StreetAddress streetAddress = shippingAddressesEntityInterface.getDefault();;
    

    Vector shippingVector = this->shippingMethods.get();;
    

    int32_t size = shippingVector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Node shippingMethodNode = document.createElement(ShippingMethodsData::SHIPPINGMETHODORDERSUMMARY);;
    

    ShippingInterface shipping = shippingVector.get(index) as ShippingInterface;;
    

    DomNodeInterface shippingView = shipping as DomNodeInterface;;
    
shippingMethodNode.appendChild(shippingView.toXmlNode(document));
    

    Money shippingCost = shipping.getCost(order);;
    

    Money subTotal = basket.getSubTotal();;
    

    number taxRate = TaxFactory::getInstance().getInstance(this->abeClientInformation, storeFrontInterface).getTaxRate(streetAddress, storeFrontInterface);;
    

    Money tax = Money();;
    

    Money total = Money();;
    
total.add(shippingCost.toString());
    
total.add(subTotal.toString());
    
tax.add(total.toString());
    
tax.multiply(taxRate);
    
total.add(tax.toString());
    
shippingMethodNode.appendChild(ModDomHelper::createNameValueNodes(document, ShippingMethodsData::SHIPPINGCOST, shippingCost.toString()));
    
shippingMethodNode.appendChild(ModDomHelper::createNameValueNodes(document, ShippingMethodsData::TAXRATE, taxRate.toString()));
    
shippingMethodNode.appendChild(ModDomHelper::createNameValueNodes(document, ShippingMethodsData::SUBTOTAL, subTotal.toString()));
    
shippingMethodNode.appendChild(ModDomHelper::createNameValueNodes(document, ShippingMethodsData::TAX, tax.toString()));
    
shippingMethodNode.appendChild(ModDomHelper::createNameValueNodes(document, ShippingMethodsData::TOTAL, total.toString()));
    
shippingMethodNode.appendChild(ModDomHelper::createNameValueNodes(document, EntryData::getInstance().DEFAULT, this->shippingMethods.getDefault().getName()));
    
shippingMethodsNode.appendChild(shippingMethodNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return shippingMethodsNode;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().XSLLOGGINGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "toXmlNode", e);
    

                                    }
                                



                            throw e;
                    
}

}


    public: void addDomNodeInterfaces(){
this->addDomNodeInterface(this as DomNodeInterface);
    
}


    public: std::string view(){

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.view();;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to view ShippingMethods";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "view()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


};

            

