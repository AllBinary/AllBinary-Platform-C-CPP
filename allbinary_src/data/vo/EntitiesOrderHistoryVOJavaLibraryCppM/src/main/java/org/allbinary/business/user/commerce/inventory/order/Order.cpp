
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

    private: BasketInterface basket;

    private: std::string paymentMethod;

    private: std::string shippingType;

    private: std::string storeName;

    private: std::string special;

    private: std::string id;

    private: std::string userComment;

    private: std::string userCancelComment;

    private: std::string storeComment;

    private: std::string storeCancelComment;

public: Order(BasketInterface basket){
this->basket= basket;
    
this->id= 
                                        nullptr
                                    ;
    
this->shippingType= StringUtil::getInstance().EMPTY_STRING;
    
}


public: Order(std::string storeName, BasketInterface basket, std::string id, std::string shippingType, std::string special, std::string paymentMethod){
this->storeName= storeName;
    
this->basket= basket;
    
this->id= id;
    
this->shippingType= shippingType;
    
this->special= special;
    
this->paymentMethod= paymentMethod;
    
}


    public: Boolean isIdValid(){

                        if(this->getId() == 
                                    nullptr
                                 || this->getId().compareTo(StringUtil::getInstance().EMPTY_STRING) == 0 || this->getId().length() > OrderHistoryData::MAXIDLEN || !StringValidationUtil::getInstance().isNumber(this->getId()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


    public: Boolean isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


    public: std::string getIdValidationInfo(){

    std::string EMPTY_STRING = StringUtil::getInstance().EMPTY_STRING;;
    

                        if(this->getId() == 
                                    nullptr
                                 || this->getId().compareTo(EMPTY_STRING) == 0 || this->getId().length() > OrderHistoryData::MAXIDLEN || !StringValidationUtil::getInstance().isNumber(this->getId()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Please enter a valid order Id < " +OrderHistoryData::MAXIDLEN +" digits in length.<br>";
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EMPTY_STRING;
    
}


    public: void setShippingMethod(std::string shippingType){
this->shippingType= shippingType;
    
}


    public: void setPaymentMethod(std::string value){
this->paymentMethod= value;
    
}


    public: void setSpecial(std::string special){
this->special= special;
    
}


    public: void setId(std::string value){
this->id= value;
    
}


    public: void setStoreName(std::string value){
this->storeName= value;
    
}


    public: void setUserComments(std::string value){
this->userComment= value;
    
}


    public: void setUserCancelComments(std::string value){
this->userCancelComment= value;
    
}


    public: void setStoreComments(std::string value){
this->storeComment= value;
    
}


    public: void setStoreCancelComments(std::string value){
this->storeCancelComment= value;
    
}


    public: BasketInterface getBasket(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basket;
    
}


    public: std::string getShippingMethod(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->shippingType;
    
}


    public: std::string getPaymentMethod(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paymentMethod;
    
}


    public: std::string getSpecial(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->special;
    
}


    public: std::string getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


    public: std::string getStoreName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeName;
    
}


    public: std::string getUserComments(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userComment;
    
}


    public: std::string getUserCancelComments(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userCancelComment;
    
}


    public: std::string getStoreComments(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeComment;
    
}


    public: std::string getStoreCancelComments(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeCancelComment;
    
}


    public: std::string reviewOrder(std::string paymentMethod){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Create your own Order.reviewOrder";
    
}


    public: std::string viewOrder(std::string paymentMethod){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Create your own Order.viewOrder";
    
}


    public: std::string emailOrder(std::string userName, std::string paymentMethod, StoreFrontInterface storeFrontInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Create your own Order.emailOrder";
    
}


    public: HashMap<any, any> toHashMapOrder(){

    HashMap<any, any> hashMap = HashMap<any, any>();;
    
hashMap.put(PaymentData::METHOD, this->paymentMethod);
    
hashMap.put(ShippingMethodData::NAME, this->shippingType);
    
hashMap.put(StoreFrontData::getInstance().NAME, this->storeName);
    
hashMap.put(EntryData::getInstance().SPECIAL, this->special);
    
hashMap.put(OrderData::ID, this->id);
    
hashMap.put(OrderData::CUSTOMERCOMMENT, this->userComment);
    
hashMap.put(OrderData::CUSTOMERCANCELCOMMENT, this->userCancelComment);
    
hashMap.put(OrderData::STORECOMMENT, this->storeComment);
    
hashMap.put(OrderData::STORECANCELCOMMENT, this->storeCancelComment);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    HashMap<any, any> hashMap = this->toHashMapOrder();;
    

    Set keySet = hashMap.keys();;
    

    std::vector<Object*> keyArray = keySet.();;
    

    int32_t size = keyArray.size();;
    

    Node node = document.createElement(OrderData::ORDER);;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string name = keyArray[i]! as string;;
    

    std::string value = hashMap.get(name) as string;;
    
value= StringUtil::getInstance().getNonNull(value);
    
node.appendChild(ModDomHelper::createNameValueNodes(document, name, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

