
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORY_H

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

public constructor (BasketInterface basketInterface);

public constructor (BasketInterface basketInterface, OrderHistory orderHistory);

public constructor (BasketInterface basketInterface, HashMap<any, any> orderHistoryHashMap);

    public setUserName(string value);

    public setDefaultShippingAddress(StreetAddress shippingAddress);

    public setBillingAddress(StreetAddress billingAddress);

    public setPaymentInfo(Payment payment);

    public setShipDate(string value);

    public setOrderDate(string value);

    public setTransDate(string value);

    public setCancelDate(string value);

    public setStatus(string value);

    public setSubTotal(Money value);

    public setShippingCost(Money value);

    public setTaxes(Money value);

    public setTotal(Money value);

    public string getUserName();

    public StreetAddress getShippingAddress();

    public StreetAddress getBillingAddress();

    public Payment getPaymentInfo();

    public string getShipDate();

    public string getOrderDate();

    public string getTransDate();

    public string getCancelDate();

    public string getStatus();

    public Money getSubTotal();

    public Money getShippingCost();

    public Money getTaxes();

    public Money getTotal();

    public HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORY_H
