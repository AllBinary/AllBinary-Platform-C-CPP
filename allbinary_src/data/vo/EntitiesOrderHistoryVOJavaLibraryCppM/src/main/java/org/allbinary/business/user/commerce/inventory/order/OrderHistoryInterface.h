
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

#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/business/user/commerce/money/payment/Payment.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OrderHistoryInterface {

    void setUserName(std::string value);

    void setDefaultShippingAddress(StreetAddress shippingAddress);

    void setBillingAddress(StreetAddress billingAddress);

    void setPaymentInfo(Payment payment);

    void setShipDate(std::string value);

    void setOrderDate(std::string value);

    void setTransDate(std::string value);

    void setCancelDate(std::string value);

    void setStatus(std::string value);

    void setSubTotal(Money value);

    void setShippingCost(Money value);

    void setTaxes(Money value);

    void setTotal(Money value);

    std::string getUserName();

    StreetAddress getShippingAddress();

    StreetAddress getBillingAddress();

    Payment getPaymentInfo();

    std::string getShipDate();

    std::string getOrderDate();

    std::string getTransDate();

    std::string getCancelDate();

    std::string getStatus();

    Money getSubTotal();

    Money getShippingCost();

    Money getTaxes();

    Money getTotal();

    std::string getPaymentMethod();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYINTERFACE_H
