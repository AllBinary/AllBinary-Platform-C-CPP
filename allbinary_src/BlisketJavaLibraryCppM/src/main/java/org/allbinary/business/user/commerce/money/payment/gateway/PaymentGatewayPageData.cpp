
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaymentGatewayPageData
            : public Object
         {

    private: static const std::string EXTENSION = ".jsp";

    private: static const std::string NAME = StringUtil::getInstance().EMPTY_STRING;

    public: static const std::string FORWARDMAKEPAYMENT = "MakePayment.jsp";

    public: static const std::string PAYMENTOPTIONS = "PaymentOptions" +PaymentGatewayPageData::EXTENSION;

    public: static const std::string STARTCHECKOUT = "StartCheckout" +PaymentGatewayPageData::EXTENSION;

    public: std::string MAKEPAYMENT;

    public: std::string CHECKOUT;

    public: std::string SHIPPING;

    public: std::string SHIPPINGADDRESS;

    public: std::string SHIPPINGADDRESSACTION;

    public: std::string BILLINGADDRESS;

    public: std::string PAYMENT;

    public: std::string AUTHORIZE;

    public: std::string FINISH;

public: PaymentGatewayPageData(std::string location, std::string paymentMethod){

    std::string paymentMethodString = PaymentGatewayPageData::NAME +paymentMethod;;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(location);
    
stringBuffer.append("MakePayment");
    
stringBuffer.append(PaymentGatewayPageData::EXTENSION);
    
MAKEPAYMENT= stringBuffer.toString();
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(paymentMethodString);
    
stringBuffer.append("Checkout");
    
stringBuffer.append(PaymentGatewayPageData::EXTENSION);
    
CHECKOUT= stringBuffer.toString();
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(paymentMethodString);
    
stringBuffer.append("Shipping");
    
stringBuffer.append(PaymentGatewayPageData::EXTENSION);
    
SHIPPING= stringBuffer.toString();
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(paymentMethodString);
    
stringBuffer.append("ShippingAddress");
    
stringBuffer.append(PaymentGatewayPageData::EXTENSION);
    
SHIPPINGADDRESS= stringBuffer.toString();
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(paymentMethodString);
    
stringBuffer.append("ShippingAddressAction");
    
stringBuffer.append(PaymentGatewayPageData::EXTENSION);
    
SHIPPINGADDRESSACTION= stringBuffer.toString();
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(paymentMethodString);
    
stringBuffer.append("BillingAddress");
    
stringBuffer.append(PaymentGatewayPageData::EXTENSION);
    
BILLINGADDRESS= stringBuffer.toString();
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(paymentMethodString);
    
stringBuffer.append("Payment");
    
stringBuffer.append(PaymentGatewayPageData::EXTENSION);
    
PAYMENT= stringBuffer.toString();
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(paymentMethodString);
    
stringBuffer.append("Authorize");
    
stringBuffer.append(PaymentGatewayPageData::EXTENSION);
    
AUTHORIZE= stringBuffer.toString();
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(paymentMethodString);
    
stringBuffer.append("PaymentFinish");
    
stringBuffer.append(PaymentGatewayPageData::EXTENSION);
    
FINISH= stringBuffer.toString();
    
}


};

            

