
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

            #include <vector>
        
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

class OrderHistory: public Order, public OrderHistoryInterface {

    private: std::string userName;

    private: StreetAddress shippingAddress;

    private: StreetAddress billingAddress;

    private: Payment payment;

    private: std::string shipDate;

    private: std::string orderDate;

    private: std::string transDate;

    private: std::string cancelDate;

    private: std::string status;

    private: Money subTotal;

    private: Money shippingCost;

    private: Money taxes;

    private: Money total;

public: OrderHistory(BasketInterface basketInterface);

public: OrderHistory(BasketInterface basketInterface, OrderHistory orderHistory);

public: OrderHistory(BasketInterface basketInterface, HashMap<any, any> orderHistoryHashMap);

    public: void setUserName(std::string value);

    public: void setDefaultShippingAddress(StreetAddress shippingAddress);

    public: void setBillingAddress(StreetAddress billingAddress);

    public: void setPaymentInfo(Payment payment);

    public: void setShipDate(std::string value);

    public: void setOrderDate(std::string value);

    public: void setTransDate(std::string value);

    public: void setCancelDate(std::string value);

    public: void setStatus(std::string value);

    public: void setSubTotal(Money value);

    public: void setShippingCost(Money value);

    public: void setTaxes(Money value);

    public: void setTotal(Money value);

    public: std::string getUserName();

    public: StreetAddress getShippingAddress();

    public: StreetAddress getBillingAddress();

    public: Payment getPaymentInfo();

    public: std::string getShipDate();

    public: std::string getOrderDate();

    public: std::string getTransDate();

    public: std::string getCancelDate();

    public: std::string getStatus();

    public: Money getSubTotal();

    public: Money getShippingCost();

    public: Money getTaxes();

    public: Money getTotal();

    public: HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORY_H
