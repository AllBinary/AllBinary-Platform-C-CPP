
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDER_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/inventory/order/Order.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
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

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/inventory/order/OrderInterface.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderData.h"


Order::Order(BasketInterface* basket){
this->basket= basket;
    
this->id= 
                                        nullptr
                                    ;
    
this->shippingType= StringUtil::getInstance()->EMPTY_STRING;
    
}


Order::Order(std::string storeName, BasketInterface* basket, std::string id, std::string shippingType, std::string special, std::string paymentMethod){
this->storeName= storeName;
    
this->basket= basket;
    
this->id= id;
    
this->shippingType= shippingType;
    
this->special= special;
    
this->paymentMethod= paymentMethod;
    
}


    auto Order::isIdValid() -> bool{

                        if(this->getId() == 
                                    nullptr
                                 || this->getId().compareTo(StringUtil::getInstance()->EMPTY_STRING) == 0 || this->getId().length() > OrderHistoryData::MAXIDLEN || !StringValidationUtil::getInstance()->isNumber(this->getId()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    
}


    auto Order::isValid() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    
}


    auto Order::getIdValidationInfo() -> std::string{

    std::string EMPTY_STRING = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(this->getId() == 
                                    nullptr
                                 || this->getId().compareTo(EMPTY_STRING) == 0 || this->getId().length() > OrderHistoryData::MAXIDLEN || !StringValidationUtil::getInstance()->isNumber(this->getId()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(JavaString::valueOf("Please enter a valid order Id < ") +JavaString::valueOf(OrderHistoryData::MAXIDLEN)) +JavaString::valueOf(" digits in length.<br>");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return EMPTY_STRING;
    
}


    auto Order::setShippingMethod(std::string shippingType) -> void{
this->shippingType= shippingType;
    
}


    auto Order::setPaymentMethod(std::string value) -> void{
this->paymentMethod= value;
    
}


    auto Order::setSpecial(std::string special) -> void{
this->special= special;
    
}


    auto Order::setId(std::string value) -> void{
this->id= value;
    
}


    auto Order::setStoreName(std::string value) -> void{
this->storeName= value;
    
}


    auto Order::setUserComments(std::string value) -> void{
this->userComment= value;
    
}


    auto Order::setUserCancelComments(std::string value) -> void{
this->userCancelComment= value;
    
}


    auto Order::setStoreComments(std::string value) -> void{
this->storeComment= value;
    
}


    auto Order::setStoreCancelComments(std::string value) -> void{
this->storeCancelComment= value;
    
}


    auto Order::getBasket() -> BasketInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basket;
    
}


    auto Order::getShippingMethod() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->shippingType;
    
}


    auto Order::getPaymentMethod() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->paymentMethod;
    
}


    auto Order::getSpecial() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->special;
    
}


    auto Order::getId() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->id;
    
}


    auto Order::getStoreName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->storeName;
    
}


    auto Order::getUserComments() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->userComment;
    
}


    auto Order::getUserCancelComments() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->userCancelComment;
    
}


    auto Order::getStoreComments() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->storeComment;
    
}


    auto Order::getStoreCancelComments() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->storeCancelComment;
    
}


    auto Order::reviewOrder(std::string paymentMethod) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Create your own Order.reviewOrder";
    
}


    auto Order::viewOrder(std::string paymentMethod) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Create your own Order.viewOrder";
    
}


    auto Order::emailOrder(std::string userName, std::string paymentMethod, StoreFrontInterface* storeFrontInterface) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Create your own Order.emailOrder";
    
}


    auto Order::toHashMapOrder() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(PaymentData::METHOD, this->paymentMethod);
    
hashMap->put(ShippingMethodData::NAME, this->shippingType);
    
hashMap->put(StoreFrontData::getInstance()->NAME, this->storeName);
    
hashMap->put(EntryData::getInstance()->SPECIAL, this->special);
    
hashMap->put(OrderData::ID, this->id);
    
hashMap->put(OrderData::CUSTOMERCOMMENT, this->userComment);
    
hashMap->put(OrderData::CUSTOMERCANCELCOMMENT, this->userCancelComment);
    
hashMap->put(OrderData::STORECOMMENT, this->storeComment);
    
hashMap->put(OrderData::STORECANCELCOMMENT, this->storeCancelComment);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto Order::toXmlNode(Document* document) -> Node*{

    HashMap<Object*, Object*>* hashMap = this->toHashMapOrder();;
    

    Set* keySet = hashMap->keys();;
    

    std::vector<Object*> keyArray = keySet->toArray();;
    

    int32_t size = keyArray.size();;
    

    Node* node = document->createElement(OrderData::ORDER);;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string name = JavaBoxes::unbox<std::string>(keyArray[i]);;
    

    std::string value = JavaBoxes::unbox<std::string>(hashMap->get(name));;
    
value= StringUtil::getInstance()->getNonNull(value);
    
node->appendChild(ModDomHelper::createNameValueNodes(document, name, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDER_CPP
