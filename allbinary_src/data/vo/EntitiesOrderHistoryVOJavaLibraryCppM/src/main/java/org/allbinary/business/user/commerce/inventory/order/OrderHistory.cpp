
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
        



            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Long.h"
        
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

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Order.h"
#include "OrderHistoryInterface.h"
#include "OrderData.h"
#include "OrderHistoryData.h"

class OrderHistory: public Order: public OrderHistoryInterface {
        

    private: userName: string;

    private: shippingAddress: StreetAddress;

    private: billingAddress: StreetAddress;

    private: payment: Payment;

    private: shipDate: string;

    private: orderDate: string;

    private: transDate: string;

    private: cancelDate: string;

    private: status: string;

    private: subTotal: Money;

    private: shippingCost: Money;

    private: taxes: Money;

    private: total: Money;

public constructor (BasketInterface basketInterface){
            super(basketInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public constructor (BasketInterface basketInterface, OrderHistory orderHistory){
            super(orderHistory!.getStoreName(), basketInterface, orderHistory!.getId(), orderHistory!.getShippingMethod(), orderHistory!.getSpecial(), orderHistory!.getPaymentMethod());
                    

                            //For kotlin this is before the body of the constructor.
                    
this.userName= orderHistory!.getUserName();
    
this.shippingAddress= orderHistory!.getShippingAddress();
    
this.billingAddress= orderHistory!.getBillingAddress();
    
this.payment= orderHistory!.getPaymentInfo();
    
this.shipDate= orderHistory!.getShipDate();
    
this.orderDate= orderHistory!.getOrderDate();
    
this.transDate= orderHistory!.getTransDate();
    
this.cancelDate= orderHistory!.getCancelDate();
    
this.status= orderHistory!.getStatus();
    
this.subTotal= orderHistory!.getSubTotal();
    
this.shippingCost= orderHistory!.getShippingCost();
    
this.taxes= orderHistory!.getTaxes();
    
this.total= orderHistory!.getTotal();
    
super.setUserComments(orderHistory!.getUserComments() as string);
    
super.setUserCancelComments(orderHistory!.getUserCancelComments() as string);
    
super.setStoreComments(orderHistory!.getStoreComments() as string);
    
super.setStoreCancelComments(orderHistory!.getStoreCancelComments() as string);
    
}


public constructor (BasketInterface basketInterface, HashMap<any, any> orderHistoryHashMap){
            super(orderHistoryHashMap!.get(StoreFrontData.getInstance()!.NAME) as string, basketInterface, orderHistoryHashMap!.get(OrderData.ID) as string, orderHistoryHashMap!.get(ShippingMethodData.NAME) as string, orderHistoryHashMap!.get(EntryData.getInstance()!.SPECIAL) as string, orderHistoryHashMap!.get(PaymentData.METHOD) as string);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.shippingAddress= new StreetAddress(orderHistoryHashMap!.get(ShippingAddressData.NAME) as string, orderHistoryHashMap!.get(ShippingAddressData.STREET) as string, orderHistoryHashMap!.get(ShippingAddressData.CITY) as string, orderHistoryHashMap!.get(ShippingAddressData.STATE) as string, orderHistoryHashMap!.get(ShippingAddressData.CODE) as string, orderHistoryHashMap!.get(ShippingAddressData.COUNTRY) as string);
    
this.billingAddress= new StreetAddress(orderHistoryHashMap!.get(BillingAddressData.NAME) as string, orderHistoryHashMap!.get(BillingAddressData.STREET) as string, orderHistoryHashMap!.get(BillingAddressData.CITY) as string, orderHistoryHashMap!.get(BillingAddressData.STATE) as string, orderHistoryHashMap!.get(BillingAddressData.CODE) as string, orderHistoryHashMap!.get(BillingAddressData.COUNTRY) as string);
    
this.payment= new Payment(orderHistoryHashMap);
    
this.userName= orderHistoryHashMap!.get(UserData.USERNAME) as string;
    
this.orderDate= orderHistoryHashMap!.get(OrderHistoryData.ORDERDATE) as string;
    
this.shipDate= orderHistoryHashMap!.get(OrderHistoryData.SHIPPEDDATE) as string;
    
this.transDate= orderHistoryHashMap!.get(OrderHistoryData.TRANSDATE) as string;
    
this.cancelDate= orderHistoryHashMap!.get(OrderHistoryData.CANCELDATE) as string;
    
this.status= orderHistoryHashMap!.get(OrderHistoryData.STATUS) as string;
    
this.subTotal= new Money(orderHistoryHashMap!.get(OrderHistoryData.SUBTOTAL) as string);
    
this.total= new Money(orderHistoryHashMap!.get(OrderHistoryData.TOTAL) as string);
    
this.shippingCost= new Money(orderHistoryHashMap!.get(OrderHistoryData.SHIPPINGCOST) as string);
    
this.taxes= new Money(orderHistoryHashMap!.get(OrderHistoryData.TAX) as string);
    
super.setUserComments(orderHistoryHashMap!.get(OrderData.CUSTOMERCOMMENT) as string);
    
super.setUserCancelComments(orderHistoryHashMap!.get(OrderData.CUSTOMERCANCELCOMMENT) as string);
    
super.setStoreComments(orderHistoryHashMap!.get(OrderData.STORECOMMENT) as string);
    
super.setStoreCancelComments(orderHistoryHashMap!.get(OrderData.STORECANCELCOMMENT) as string);
    
}


    public setUserName(string value){
this.userName= value;
    
}


    public setDefaultShippingAddress(StreetAddress shippingAddress){
this.shippingAddress= shippingAddress;
    
}


    public setBillingAddress(StreetAddress billingAddress){
this.billingAddress= billingAddress;
    
}


    public setPaymentInfo(Payment payment){
this.payment= payment;
    
}


    public setShipDate(string value){
this.shipDate= value;
    
}


    public setOrderDate(string value){
this.orderDate= value;
    
}


    public setTransDate(string value){
this.transDate= value;
    
}


    public setCancelDate(string value){
this.cancelDate= value;
    
}


    public setStatus(string value){
this.status= value;
    
}


    public setSubTotal(Money value){
this.subTotal= value;
    
}


    public setShippingCost(Money value){
this.shippingCost= value;
    
}


    public setTaxes(Money value){
this.taxes= value;
    
}


    public setTotal(Money value){
this.total= value;
    
}


    public string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.userName;
    
}


    public StreetAddress getShippingAddress(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.shippingAddress;
    
}


    public StreetAddress getBillingAddress(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.billingAddress;
    
}


    public Payment getPaymentInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.payment;
    
}


    public string getShipDate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.shipDate;
    
}


    public string getOrderDate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.orderDate;
    
}


    public string getTransDate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.transDate;
    
}


    public string getCancelDate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.cancelDate;
    
}


    public string getStatus(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.status;
    
}


    public Money getSubTotal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.subTotal;
    
}


    public Money getShippingCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.shippingCost;
    
}


    public Money getTaxes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.taxes;
    
}


    public Money getTotal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.total;
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(UserData.USERNAME, this.userName);
    
hashMap!.put(OrderHistoryData.ORDERDATE, this.orderDate);
    
hashMap!.put(OrderHistoryData.SHIPPEDDATE, this.shipDate);
    
hashMap!.put(OrderHistoryData.TRANSDATE, this.transDate);
    
hashMap!.put(OrderHistoryData.CANCELDATE, this.cancelDate);
    
hashMap!.put(OrderHistoryData.ORDERDATEFORMATTED, new Date(new Long(this.orderDate).longValue()).toString());
    
hashMap!.put(OrderHistoryData.SHIPPEDDATEFORMATTED, new Date(new Long(this.shipDate).longValue()).toString());
    
hashMap!.put(OrderHistoryData.TRANSDATEFORMATTED, new Date(new Long(this.transDate).longValue()).toString());
    
hashMap!.put(OrderHistoryData.CANCELDATEFORMATTED, new Date(new Long(this.cancelDate).longValue()).toString());
    
hashMap!.put(OrderHistoryData.STATUS, this.status);
    
hashMap!.put(OrderHistoryData.SUBTOTAL, this.subTotal!.toString());
    
hashMap!.put(OrderHistoryData.TOTAL, this.total.toString());
    
hashMap!.put(OrderHistoryData.SHIPPINGCOST, this.shippingCost!.toString());
    
hashMap!.put(OrderHistoryData.TAX, this.taxes.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    hashMap: HashMap<any, any> = this.toHashMap()!;;
    

    keySet: Set = hashMap!.keys()!;;
    

    keyArray: std::vector<any> = keySet!.()!;;
    

    size: int32_t = keyArray!.length
                ;;
    

    node: Node = document.createElement(OrderHistoryData.ORDERHISTORY)!;;
    
node.appendChild(super.toXmlNode(document));
    

    billingAddressNode: Node = document.createElement(BillingAddressData.BILLINGADDRESS)!;;
    
billingAddressNode!.appendChild(this.billingAddress!.toXmlNode(document));
    

    shippingAddressNode: Node = document.createElement(ShippingAddressData.SHIPPINGADDRESS)!;;
    
shippingAddressNode!.appendChild(this.shippingAddress!.toXmlNode(document));
    
node.appendChild(billingAddressNode);
    
node.appendChild(shippingAddressNode);
    
node.appendChild(this.payment.toXmlNode(document));
    




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

            

