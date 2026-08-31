
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
        
class ShippingMethodsView: public HttpStoreComponentView: public DomNodeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: shippingMethods: ShippingMethods;

    private: storeFrontInterface: StoreFrontInterface;

public constructor (TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.storeFrontInterface= StoreFrontFactory.getInstance(this.getTransformInfoInterface()!.getStoreName());
    
this.shippingMethods= new ShippingMethods(this.abeClientInformation, this.storeFrontInterface);
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

        try {
            
    shippingMethodsNode: Node = document.createElement(ShippingMethodsData.SHIPPINGMETHODSORDERSUMMARIES)!;;
    

    order: OrderInterface = this.getWeblisketSession()!.getOrder()!;;
    

    basket: BasketInterface = this.getWeblisketSession()!.getOrder()!.getBasket()!;;
    

    shippingAddressesEntityInterface: StreetAddressesEntityInterface = ShippingAddressesEntityFactory.getInstance()!.getInstance(this.getWeblisketSession()!.getUserName())!;;
    

    streetAddress: StreetAddress = shippingAddressesEntityInterface!.getDefault()!;;
    

    shippingVector: Vector = this.shippingMethods!.get()!;;
    

    size: int32_t = shippingVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    shippingMethodNode: Node = document.createElement(ShippingMethodsData.SHIPPINGMETHODORDERSUMMARY)!;;
    

    shipping: ShippingInterface = shippingVector!.get(index) as ShippingInterface;;
    

    shippingView: DomNodeInterface = shipping as DomNodeInterface;;
    
shippingMethodNode!.appendChild(shippingView!.toXmlNode(document));
    

    shippingCost: Money = shipping.getCost(order)!;;
    

    subTotal: Money = basket.getSubTotal()!;;
    

    taxRate: number = TaxFactory.getInstance()!.getInstance(this.abeClientInformation, storeFrontInterface)!.getTaxRate(streetAddress, storeFrontInterface)!;;
    

    tax: Money = new Money();;
    

    total: Money = new Money();;
    
total.add(shippingCost!.toString());
    
total.add(subTotal!.toString());
    
tax.add(total.toString());
    
tax.multiply(taxRate);
    
total.add(tax.toString());
    
shippingMethodNode!.appendChild(ModDomHelper.createNameValueNodes(document, ShippingMethodsData.SHIPPINGCOST, shippingCost!.toString()));
    
shippingMethodNode!.appendChild(ModDomHelper.createNameValueNodes(document, ShippingMethodsData.TAXRATE, taxRate!.toString()));
    
shippingMethodNode!.appendChild(ModDomHelper.createNameValueNodes(document, ShippingMethodsData.SUBTOTAL, subTotal!.toString()));
    
shippingMethodNode!.appendChild(ModDomHelper.createNameValueNodes(document, ShippingMethodsData.TAX, tax.toString()));
    
shippingMethodNode!.appendChild(ModDomHelper.createNameValueNodes(document, ShippingMethodsData.TOTAL, total.toString()));
    
shippingMethodNode!.appendChild(ModDomHelper.createNameValueNodes(document, EntryData.getInstance()!.DEFAULT, this.shippingMethods!.getDefault()!.getName()));
    
shippingMethodsNode!.appendChild(shippingMethodNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return shippingMethodsNode;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.XSLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "toXmlNode", e);
    

                                    }
                                



                            throw e;
                    
}

}


    public addDomNodeInterfaces(){
this.addDomNodeInterface(this as DomNodeInterface);
    
}


    public string view(){

        try {
            this.addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.view();;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to view ShippingMethods";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "view()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


};

            

