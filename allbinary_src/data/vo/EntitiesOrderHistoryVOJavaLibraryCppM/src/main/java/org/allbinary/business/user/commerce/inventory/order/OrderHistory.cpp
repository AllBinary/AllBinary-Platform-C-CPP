
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/inventory/order/OrderHistory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
//#include <java/util/Date.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/address/BillingAddressData.h>

      
#include <org/allbinary/business/user/address/ShippingAddressData.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/business/user/commerce/money/MoneyException.h>

      
#include <org/allbinary/business/user/commerce/money/payment/Payment.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/inventory/order/Order.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryInterface.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderData.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h"


OrderHistory::OrderHistory(BasketInterface* basketInterface) : Order(basketInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


OrderHistory::OrderHistory(BasketInterface* basketInterface, OrderHistory* orderHistory) : Order(orderHistory->getStoreName(), basketInterface, orderHistory->getId(), orderHistory->getShippingMethod(), orderHistory->getSpecial(), orderHistory->getPaymentMethod()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->userName= orderHistory->getUserName();
    
this->shippingAddress= orderHistory->getShippingAddress();
    
this->billingAddress= orderHistory->getBillingAddress();
    
this->payment= orderHistory->getPaymentInfo();
    
this->shipDate= orderHistory->getShipDate();
    
this->orderDate= orderHistory->getOrderDate();
    
this->transDate= orderHistory->getTransDate();
    
this->cancelDate= orderHistory->getCancelDate();
    
this->status= orderHistory->getStatus();
    
this->subTotal= orderHistory->getSubTotal();
    
this->shippingCost= orderHistory->getShippingCost();
    
this->taxes= orderHistory->getTaxes();
    
this->total= orderHistory->getTotal();
    
Order::setUserComments(JavaBoxes::unbox<std::string>(orderHistory->getUserComments()));
    
Order::setUserCancelComments(JavaBoxes::unbox<std::string>(orderHistory->getUserCancelComments()));
    
Order::setStoreComments(JavaBoxes::unbox<std::string>(orderHistory->getStoreComments()));
    
Order::setStoreCancelComments(JavaBoxes::unbox<std::string>(orderHistory->getStoreCancelComments()));
    
}


OrderHistory::OrderHistory(BasketInterface* basketInterface, HashMap<Object*, Object*>* orderHistoryHashMap) : Order(JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(StoreFrontData::getInstance()->NAME)), basketInterface, JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(OrderData::ID)), JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(ShippingMethodData::NAME)), JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(EntryData::getInstance()->SPECIAL)), JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(PaymentData::METHOD))){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->shippingAddress= new StreetAddress(JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(ShippingAddressData::NAME)), JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(ShippingAddressData::STREET)), JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(ShippingAddressData::CITY)), JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(ShippingAddressData::STATE)), JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(ShippingAddressData::CODE)), JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(ShippingAddressData::COUNTRY)));
    
this->billingAddress= new StreetAddress(JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(BillingAddressData::NAME)), JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(BillingAddressData::STREET)), JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(BillingAddressData::CITY)), JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(BillingAddressData::STATE)), JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(BillingAddressData::CODE)), JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(BillingAddressData::COUNTRY)));
    
this->payment= new Payment(orderHistoryHashMap);
    
this->userName= JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(UserData::USERNAME));
    
this->orderDate= JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(OrderHistoryData::ORDERDATE));
    
this->shipDate= JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(OrderHistoryData::SHIPPEDDATE));
    
this->transDate= JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(OrderHistoryData::TRANSDATE));
    
this->cancelDate= JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(OrderHistoryData::CANCELDATE));
    
this->status= JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(OrderHistoryData::STATUS));
    
this->subTotal= new Money(JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(OrderHistoryData::SUBTOTAL)));
    
this->total= new Money(JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(OrderHistoryData::TOTAL)));
    
this->shippingCost= new Money(JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(OrderHistoryData::SHIPPINGCOST)));
    
this->taxes= new Money(JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(OrderHistoryData::TAX)));
    
Order::setUserComments(JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(OrderData::CUSTOMERCOMMENT)));
    
Order::setUserCancelComments(JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(OrderData::CUSTOMERCANCELCOMMENT)));
    
Order::setStoreComments(JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(OrderData::STORECOMMENT)));
    
Order::setStoreCancelComments(JavaBoxes::unbox<std::string>(orderHistoryHashMap->get(OrderData::STORECANCELCOMMENT)));
    
}


    auto OrderHistory::setUserName(std::string value) -> void{
this->userName= value;
    
}


    auto OrderHistory::setDefaultShippingAddress(StreetAddress* shippingAddress) -> void{
this->shippingAddress= shippingAddress;
    
}


    auto OrderHistory::setBillingAddress(StreetAddress* billingAddress) -> void{
this->billingAddress= billingAddress;
    
}


    auto OrderHistory::setPaymentInfo(Payment* payment) -> void{
this->payment= payment;
    
}


    auto OrderHistory::setShipDate(std::string value) -> void{
this->shipDate= value;
    
}


    auto OrderHistory::setOrderDate(std::string value) -> void{
this->orderDate= value;
    
}


    auto OrderHistory::setTransDate(std::string value) -> void{
this->transDate= value;
    
}


    auto OrderHistory::setCancelDate(std::string value) -> void{
this->cancelDate= value;
    
}


    auto OrderHistory::setStatus(std::string value) -> void{
this->status= value;
    
}


    auto OrderHistory::setSubTotal(Money* value) -> void{
this->subTotal= value;
    
}


    auto OrderHistory::setShippingCost(Money* value) -> void{
this->shippingCost= value;
    
}


    auto OrderHistory::setTaxes(Money* value) -> void{
this->taxes= value;
    
}


    auto OrderHistory::setTotal(Money* value) -> void{
this->total= value;
    
}


    auto OrderHistory::getUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userName;
    
}


    auto OrderHistory::getShippingAddress() -> StreetAddress*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->shippingAddress;
    
}


    auto OrderHistory::getBillingAddress() -> StreetAddress*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->billingAddress;
    
}


    auto OrderHistory::getPaymentInfo() -> Payment*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->payment;
    
}


    auto OrderHistory::getShipDate() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->shipDate;
    
}


    auto OrderHistory::getOrderDate() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->orderDate;
    
}


    auto OrderHistory::getTransDate() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->transDate;
    
}


    auto OrderHistory::getCancelDate() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cancelDate;
    
}


    auto OrderHistory::getStatus() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->status;
    
}


    auto OrderHistory::getSubTotal() -> Money*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->subTotal;
    
}


    auto OrderHistory::getShippingCost() -> Money*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->shippingCost;
    
}


    auto OrderHistory::getTaxes() -> Money*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->taxes;
    
}


    auto OrderHistory::getTotal() -> Money*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->total;
    
}


    auto OrderHistory::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(UserData::USERNAME, this->userName);
    
hashMap->put(OrderHistoryData::ORDERDATE, this->orderDate);
    
hashMap->put(OrderHistoryData::SHIPPEDDATE, this->shipDate);
    
hashMap->put(OrderHistoryData::TRANSDATE, this->transDate);
    
hashMap->put(OrderHistoryData::CANCELDATE, this->cancelDate);
    
hashMap->put(OrderHistoryData::ORDERDATEFORMATTED, (new Date((int64_t(this->orderDate)).longValue()))->toString());
    
hashMap->put(OrderHistoryData::SHIPPEDDATEFORMATTED, (new Date((int64_t(this->shipDate)).longValue()))->toString());
    
hashMap->put(OrderHistoryData::TRANSDATEFORMATTED, (new Date((int64_t(this->transDate)).longValue()))->toString());
    
hashMap->put(OrderHistoryData::CANCELDATEFORMATTED, (new Date((int64_t(this->cancelDate)).longValue()))->toString());
    
hashMap->put(OrderHistoryData::STATUS, this->status);
    
hashMap->put(OrderHistoryData::SUBTOTAL, this->subTotal->toString());
    
hashMap->put(OrderHistoryData::TOTAL, this->total->toString());
    
hashMap->put(OrderHistoryData::SHIPPINGCOST, this->shippingCost->toString());
    
hashMap->put(OrderHistoryData::TAX, this->taxes->toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto OrderHistory::toXmlNode(Document* document) -> Node*{

    HashMap<Object*, Object*>* hashMap = this->toHashMap();;
    

    Set* keySet = hashMap->keys();;
    

    std::vector<Object*> keyArray = keySet->();;
    

    int32_t size = keyArray.size();;
    

    Node* node = document->createElement(OrderHistoryData::ORDERHISTORY);;
    
node->appendChild(Order::toXmlNode(document));
    

    Node* billingAddressNode = document->createElement(BillingAddressData::BILLINGADDRESS);;
    
billingAddressNode->appendChild(this->billingAddress->toXmlNode(document));
    

    Node* shippingAddressNode = document->createElement(ShippingAddressData::SHIPPINGADDRESS);;
    
shippingAddressNode->appendChild(this->shippingAddress->toXmlNode(document));
    
node->appendChild(billingAddressNode);
    
node->appendChild(shippingAddressNode);
    
node->appendChild(this->payment->toXmlNode(document));
    




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




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORY_CPP
