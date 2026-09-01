
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPAGEDATA_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPAGEDATA_H

            #include "../../../../../../../../java/lang/Object.h"
        
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

public: PaymentGatewayPageData(std::string location, std::string paymentMethod);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPAGEDATA_H
