
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
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasketView: public HttpStoreComponentView: public DomNodeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const request: HttpServletRequest;

public constructor (TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.request= this.getPageContext()!.getRequest() as HttpServletRequest;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

        try {
            
    inventoryEntity: InventoryEntity = InventoryEntityFactory.getInstance()!.getInventoryEntityInstance()!;;
    

    basketInterface: BasketInterface = this.getWeblisketSession()!.getOrder()!.getBasket()!;;
    

    basketNode: Node = document.createElement(BasketData.BASKET)!;;
    

    itemsAndNumberInBasket: HashMap<any, any> = basketInterface!.getItems()!;;
    

    numberOfResults: int32_t = 1;;
    

    items: Set = itemsAndNumberInBasket!.keySet()!;;
    

    productArray: std::vector<any> = items.toArray()!;;
    

    size: int32_t = productArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    product: string = .toCharArray();;
    

    itemInterface: ItemInterface = inventoryEntity!.getItem(product)!;;
    

                        if(itemInterface != 
                                    null
                                )
                        
                                    {
                                    
    basicItemView: BasicItemView = new BasicItemView(itemInterface, new Vector());;
    

    node: Node = basicItemView!.toXmlNode(document)!;;
    

    numberInBasket: string = basketInterface!.getNumberOf(product)!.toString()!;;
    
node.appendChild(ModDomHelper.createNameValueNodes(document, BasketData.ITEMTOTALINBASKET, numberInBasket));
    

    itemPrice: Money = itemInterface!.getPrice()!;;
    

    itemTotal: Money = new Money(itemPrice);;
    
itemTotal!.multiply(basketInterface!.getNumberOf(product)!.intValue());
    
node.appendChild(ModDomHelper.createNameValueNodes(document, BasketData.ITEMTOTAL, itemTotal!.toString()));
    
basketNode!.appendChild(node);
    

                                    }
                                
                        else {
                            this.logUtil!.putF("Product Failed: " +product, this, "toXmlNode");
    

                        }
                            
numberOfResults++;
    
}


    totalNumberNode: Node = document.createElement(SearchData.TOTAL_NUMBER_ITEMS)!;;
    

    totalNumberTextNode: Node = document.createTextNode(basketInterface!.getNumberOfItems()!.toString())!;;
    
totalNumberNode!.appendChild(totalNumberTextNode);
    

    totalWeightNode: Node = document.createElement(BasketData.TOTALWEIGHT)!;;
    

    totalWeightTextNode: Node = document.createTextNode(basketInterface!.getTotalWeight()!.toString())!;;
    
totalWeightNode!.appendChild(totalWeightTextNode);
    

    subTotalNode: Node = document.createElement(BasketData.SUBTOTAL)!;;
    

    subTotalTextNode: Node = document.createTextNode(basketInterface!.getSubTotal()!.toString())!;;
    
subTotalNode!.appendChild(subTotalTextNode);
    
basketNode!.appendChild(totalNumberNode);
    
basketNode!.appendChild(totalWeightNode);
    
basketNode!.appendChild(subTotalNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return basketNode;
    

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


                //@Throws(Exception.constructor)
            
    public string view(){

        try {
            this.addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.view();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "view()", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

