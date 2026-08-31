
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
        



#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/business/user/commerce/money/payment/Payment.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OrderHistoryInterface {
        

    setUserName(string value)

    setDefaultShippingAddress(StreetAddress shippingAddress)

    setBillingAddress(StreetAddress billingAddress)

    setPaymentInfo(Payment payment)

    setShipDate(string value)

    setOrderDate(string value)

    setTransDate(string value)

    setCancelDate(string value)

    setStatus(string value)

    setSubTotal(Money value)

    setShippingCost(Money value)

    setTaxes(Money value)

    setTotal(Money value)

    string getUserName()

    StreetAddress getShippingAddress()

    StreetAddress getBillingAddress()

    Payment getPaymentInfo()

    string getShipDate()

    string getOrderDate()

    string getTransDate()

    string getCancelDate()

    string getStatus()

    Money getSubTotal()

    Money getShippingCost()

    Money getTaxes()

    Money getTotal()

    string getPaymentMethod()

};

            

