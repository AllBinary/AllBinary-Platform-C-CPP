
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPAGEDATA_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPAGEDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayPageData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
const std::string PaymentGatewayPageData::NAME = StringUtil::getInstance()->EMPTY_STRING;
const std::string PaymentGatewayPageData::PAYMENTOPTIONS = JavaString::valueOf("PaymentOptions") +JavaString::valueOf(PaymentGatewayPageData::EXTENSION);
const std::string PaymentGatewayPageData::STARTCHECKOUT = JavaString::valueOf("StartCheckout") +JavaString::valueOf(PaymentGatewayPageData::EXTENSION);

PaymentGatewayPageData::PaymentGatewayPageData(std::string location, std::string paymentMethod){

    std::string paymentMethodString = JavaString::valueOf(PaymentGatewayPageData::NAME) +JavaString::valueOf(paymentMethod);;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(location);
    
stringBuffer->append("MakePayment");
    
stringBuffer->append(PaymentGatewayPageData::EXTENSION);
    
MAKEPAYMENT= JavaString::valueOf(stringBuffer);
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(paymentMethodString);
    
stringBuffer->append("Checkout");
    
stringBuffer->append(PaymentGatewayPageData::EXTENSION);
    
CHECKOUT= JavaString::valueOf(stringBuffer);
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(paymentMethodString);
    
stringBuffer->append("Shipping");
    
stringBuffer->append(PaymentGatewayPageData::EXTENSION);
    
SHIPPING= JavaString::valueOf(stringBuffer);
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(paymentMethodString);
    
stringBuffer->append("ShippingAddress");
    
stringBuffer->append(PaymentGatewayPageData::EXTENSION);
    
SHIPPINGADDRESS= JavaString::valueOf(stringBuffer);
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(paymentMethodString);
    
stringBuffer->append("ShippingAddressAction");
    
stringBuffer->append(PaymentGatewayPageData::EXTENSION);
    
SHIPPINGADDRESSACTION= JavaString::valueOf(stringBuffer);
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(paymentMethodString);
    
stringBuffer->append("BillingAddress");
    
stringBuffer->append(PaymentGatewayPageData::EXTENSION);
    
BILLINGADDRESS= JavaString::valueOf(stringBuffer);
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(paymentMethodString);
    
stringBuffer->append("Payment");
    
stringBuffer->append(PaymentGatewayPageData::EXTENSION);
    
PAYMENT= JavaString::valueOf(stringBuffer);
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(paymentMethodString);
    
stringBuffer->append("Authorize");
    
stringBuffer->append(PaymentGatewayPageData::EXTENSION);
    
AUTHORIZE= JavaString::valueOf(stringBuffer);
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(paymentMethodString);
    
stringBuffer->append("PaymentFinish");
    
stringBuffer->append(PaymentGatewayPageData::EXTENSION);
    
FINISH= JavaString::valueOf(stringBuffer);
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPAGEDATA_CPP
