
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/io/Serializable.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OrderInterface.h"
#include "OrderHistoryData.h"
#include "OrderData.h"

class Order
            : public Object
        : public OrderInterface, public Serializable {
        

    private: const basket: BasketInterface;

    private: paymentMethod: string;

    private: shippingType: string;

    private: storeName: string;

    private: special: string;

    private: id: string;

    private: userComment: string;

    private: userCancelComment: string;

    private: storeComment: string;

    private: storeCancelComment: string;

public constructor (BasketInterface basket){

            super();
        this.basket= basket;
    
this.id= 
                                        nullptr
                                    ;
    
this.shippingType= StringUtil.getInstance()!.EMPTY_STRING;
    
}


public constructor (string storeName, BasketInterface basket, string id, string shippingType, string special, string paymentMethod){

            super();
        this.storeName= storeName;
    
this.basket= basket;
    
this.id= id;
    
this.shippingType= shippingType;
    
this.special= special;
    
this.paymentMethod= paymentMethod;
    
}


    public Boolean isIdValid(){

                        if(this.getId() == 
                                    null
                                 || this.getId()!.compareTo(StringUtil.getInstance()!.EMPTY_STRING) == 0 || this.getId()!.length() > OrderHistoryData.MAXIDLEN || !StringValidationUtil.getInstance()!.isNumber(this.getId()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    
}


    public Boolean isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    
}


    public string getIdValidationInfo(){

    EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

                        if(this.getId() == 
                                    null
                                 || this.getId()!.compareTo(EMPTY_STRING) == 0 || this.getId()!.length() > OrderHistoryData.MAXIDLEN || !StringValidationUtil.getInstance()!.isNumber(this.getId()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Please enter a valid order Id < " +OrderHistoryData.MAXIDLEN +" digits in length.<br>";
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EMPTY_STRING;
    
}


    public setShippingMethod(string shippingType){
this.shippingType= shippingType;
    
}


    public setPaymentMethod(string value){
this.paymentMethod= value;
    
}


    public setSpecial(string special){
this.special= special;
    
}


    public setId(string value){
this.id= value;
    
}


    public setStoreName(string value){
this.storeName= value;
    
}


    public setUserComments(string value){
this.userComment= value;
    
}


    public setUserCancelComments(string value){
this.userCancelComment= value;
    
}


    public setStoreComments(string value){
this.storeComment= value;
    
}


    public setStoreCancelComments(string value){
this.storeCancelComment= value;
    
}


    public BasketInterface getBasket(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basket;
    
}


    public string getShippingMethod(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.shippingType;
    
}


    public string getPaymentMethod(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.paymentMethod;
    
}


    public string getSpecial(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.special;
    
}


    public string getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.id;
    
}


    public string getStoreName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.storeName;
    
}


    public string getUserComments(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.userComment;
    
}


    public string getUserCancelComments(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.userCancelComment;
    
}


    public string getStoreComments(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.storeComment;
    
}


    public string getStoreCancelComments(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.storeCancelComment;
    
}


    public string reviewOrder(string paymentMethod){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Create your own Order.reviewOrder";
    
}


    public string viewOrder(string paymentMethod){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Create your own Order.viewOrder";
    
}


    public string emailOrder(string userName, string paymentMethod, StoreFrontInterface storeFrontInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Create your own Order.emailOrder";
    
}


    public HashMap<any, any> toHashMapOrder(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(PaymentData.METHOD, this.paymentMethod);
    
hashMap!.put(ShippingMethodData.NAME, this.shippingType);
    
hashMap!.put(StoreFrontData.getInstance()!.NAME, this.storeName);
    
hashMap!.put(EntryData.getInstance()!.SPECIAL, this.special);
    
hashMap!.put(OrderData.ID, this.id);
    
hashMap!.put(OrderData.CUSTOMERCOMMENT, this.userComment);
    
hashMap!.put(OrderData.CUSTOMERCANCELCOMMENT, this.userCancelComment);
    
hashMap!.put(OrderData.STORECOMMENT, this.storeComment);
    
hashMap!.put(OrderData.STORECANCELCOMMENT, this.storeCancelComment);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    hashMap: HashMap<any, any> = this.toHashMapOrder()!;;
    

    keySet: Set = hashMap!.keys()!;;
    

    keyArray: std::vector<any> = keySet!.()!;;
    

    size: int32_t = keyArray!.length
                ;;
    

    node: Node = document.createElement(OrderData.ORDER)!;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    name: string = keyArray[i]! as string;;
    

    value: string = hashMap!.get(name) as string;;
    
value= StringUtil.getInstance()!.getNonNull(value);
    
node.appendChild(ModDomHelper.createNameValueNodes(document, name, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

