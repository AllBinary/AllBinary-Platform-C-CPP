
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
        
class BasketView: public HttpStoreComponentView, public DomNodeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HttpServletRequest request;

public: BasketView(TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->request= this->getPageContext().getRequest() as HttpServletRequest;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

        try {
            
    InventoryEntity inventoryEntity = InventoryEntityFactory::getInstance().getInventoryEntityInstance();;
    

    BasketInterface basketInterface = this->getWeblisketSession().getOrder().getBasket();;
    

    Node basketNode = document.createElement(BasketData::BASKET);;
    

    HashMap<any, any> itemsAndNumberInBasket = basketInterface.getItems();;
    

    int32_t numberOfResults = 1;;
    

    Set items = itemsAndNumberInBasket.keySet();;
    

    std::vector<Object*> productArray = items.toArray();;
    

    int32_t size = productArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string product = .toCharArray();;
    

    ItemInterface itemInterface = inventoryEntity.getItem(product);;
    

                        if(itemInterface != 
                                    nullptr
                                )
                        
                                    {
                                    
    BasicItemView basicItemView = BasicItemView(itemInterface, Vector());;
    

    Node node = basicItemView.toXmlNode(document);;
    

    std::string numberInBasket = basketInterface.getNumberOf(product).toString();;
    
node.appendChild(ModDomHelper::createNameValueNodes(document, BasketData::ITEMTOTALINBASKET, numberInBasket));
    

    Money itemPrice = itemInterface.getPrice();;
    

    Money itemTotal = Money(itemPrice);;
    
itemTotal.multiply(basketInterface.getNumberOf(product).intValue());
    
node.appendChild(ModDomHelper::createNameValueNodes(document, BasketData::ITEMTOTAL, itemTotal.toString()));
    
basketNode.appendChild(node);
    

                                    }
                                
                        else {
                            this->logUtil.putF("Product Failed: " +product, this, "toXmlNode");
    

                        }
                            
numberOfResults++;
    
}


    Node totalNumberNode = document.createElement(SearchData::TOTAL_NUMBER_ITEMS);;
    

    Node totalNumberTextNode = document.createTextNode(basketInterface.getNumberOfItems().toString());;
    
totalNumberNode.appendChild(totalNumberTextNode);
    

    Node totalWeightNode = document.createElement(BasketData::TOTALWEIGHT);;
    

    Node totalWeightTextNode = document.createTextNode(basketInterface.getTotalWeight().toString());;
    
totalWeightNode.appendChild(totalWeightTextNode);
    

    Node subTotalNode = document.createElement(BasketData::SUBTOTAL);;
    

    Node subTotalTextNode = document.createTextNode(basketInterface.getSubTotal().toString());;
    
subTotalNode.appendChild(subTotalTextNode);
    
basketNode.appendChild(totalNumberNode);
    
basketNode.appendChild(totalWeightNode);
    
basketNode.appendChild(subTotalNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return basketNode;
    

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


                //@Throws(Exception.constructor)
            
    public: std::string view(){

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.view();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "view()", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

