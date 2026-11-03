
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
class StoreFrontData;
class EntryData;
class UserData;
class BillingAddressData;
class ShippingAddressData;
class StreetAddress;
class BasketInterface;
class Money;
class MoneyException;
class Payment;
class PaymentData;
class ShippingMethodData;
class ModDomHelper;
class StdUtil;
class StringUtil;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/inventory/order/Order.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryInterface.h"
class OrderData;
class OrderHistoryData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OrderHistory: public Order, public virtual OrderHistoryInterface {

    private: std::string userName;

    private: StreetAddress* shippingAddress;

    private: StreetAddress* billingAddress;

    private: Payment* payment;

    private: std::string shipDate;

    private: std::string orderDate;

    private: std::string transDate;

    private: std::string cancelDate;

    private: std::string status;

    private: Money* subTotal;

    private: Money* shippingCost;

    private: Money* taxes;

    private: Money* total;

public: OrderHistory(BasketInterface* basketInterface);

public: OrderHistory(BasketInterface* basketInterface, OrderHistory* orderHistory);

public: OrderHistory(BasketInterface* basketInterface, HashMap<Object*, Object*>* orderHistoryHashMap);

    public: void setUserName(std::string value);

    public: void setDefaultShippingAddress(StreetAddress* shippingAddress);

    public: void setBillingAddress(StreetAddress* billingAddress);

    public: void setPaymentInfo(Payment* payment);

    public: void setShipDate(std::string value);

    public: void setOrderDate(std::string value);

    public: void setTransDate(std::string value);

    public: void setCancelDate(std::string value);

    public: void setStatus(std::string value);

    public: void setSubTotal(Money* value);

    public: void setShippingCost(Money* value);

    public: void setTaxes(Money* value);

    public: void setTotal(Money* value);

    public: std::string getUserName();

    public: StreetAddress* getShippingAddress();

    public: StreetAddress* getBillingAddress();

    public: Payment* getPaymentInfo();

    public: std::string getShipDate();

    public: std::string getOrderDate();

    public: std::string getTransDate();

    public: std::string getCancelDate();

    public: std::string getStatus();

    public: Money* getSubTotal();

    public: Money* getShippingCost();

    public: Money* getTaxes();

    public: Money* getTotal();

    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORY_H_COMPLETE
        
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/user/UserData.h>)
#include <org/allbinary/business/user/UserData.h>
#endif
#if __has_include(<org/allbinary/business/user/address/BillingAddressData.h>)
#include <org/allbinary/business/user/address/BillingAddressData.h>
#endif
#if __has_include(<org/allbinary/business/user/address/ShippingAddressData.h>)
#include <org/allbinary/business/user/address/ShippingAddressData.h>
#endif
#if __has_include(<org/allbinary/business/user/address/StreetAddress.h>)
#include <org/allbinary/business/user/address/StreetAddress.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>)
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/Money.h>)
#include <org/allbinary/business/user/commerce/money/Money.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/MoneyException.h>)
#include <org/allbinary/business/user/commerce/money/MoneyException.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/Payment.h>)
#include <org/allbinary/business/user/commerce/money/payment/Payment.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/PaymentData.h>)
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>)
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/inventory/order/Order.h")
#include "org/allbinary/business/user/commerce/inventory/order/Order.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/inventory/order/OrderHistoryInterface.h")
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryInterface.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/inventory/order/OrderData.h")
#include "org/allbinary/business/user/commerce/inventory/order/OrderData.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h")
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h"
#endif

        #endif
    
