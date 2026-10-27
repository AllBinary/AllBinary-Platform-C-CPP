
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class StreetAddress;
class Money;
class Payment;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OrderHistoryInterface
            : public virtual Object
         {

    public: virtual void setUserName(std::string value) = 0;

    public: virtual void setDefaultShippingAddress(StreetAddress* shippingAddress) = 0;

    public: virtual void setBillingAddress(StreetAddress* billingAddress) = 0;

    public: virtual void setPaymentInfo(Payment* payment) = 0;

    public: virtual void setShipDate(std::string value) = 0;

    public: virtual void setOrderDate(std::string value) = 0;

    public: virtual void setTransDate(std::string value) = 0;

    public: virtual void setCancelDate(std::string value) = 0;

    public: virtual void setStatus(std::string value) = 0;

    public: virtual void setSubTotal(Money* value) = 0;

    public: virtual void setShippingCost(Money* value) = 0;

    public: virtual void setTaxes(Money* value) = 0;

    public: virtual void setTotal(Money* value) = 0;

    public: virtual std::string getUserName() = 0;

    public: virtual StreetAddress* getShippingAddress() = 0;

    public: virtual StreetAddress* getBillingAddress() = 0;

    public: virtual Payment* getPaymentInfo() = 0;

    public: virtual std::string getShipDate() = 0;

    public: virtual std::string getOrderDate() = 0;

    public: virtual std::string getTransDate() = 0;

    public: virtual std::string getCancelDate() = 0;

    public: virtual std::string getStatus() = 0;

    public: virtual Money* getSubTotal() = 0;

    public: virtual Money* getShippingCost() = 0;

    public: virtual Money* getTaxes() = 0;

    public: virtual Money* getTotal() = 0;

    public: virtual std::string getPaymentMethod() = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/business/user/address/StreetAddress.h>)
#include <org/allbinary/business/user/address/StreetAddress.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/Money.h>)
#include <org/allbinary/business/user/commerce/money/Money.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/Payment.h>)
#include <org/allbinary/business/user/commerce/money/payment/Payment.h>
#endif

        #endif
    
