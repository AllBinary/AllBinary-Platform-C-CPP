
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
        

    private: static const EXTENSION: string = ".jsp";

    private: static const NAME: string = StringUtil.getInstance()!.EMPTY_STRING;

    public static const FORWARDMAKEPAYMENT: string = "MakePayment.jsp";

    public static const PAYMENTOPTIONS: string = "PaymentOptions" +PaymentGatewayPageData.EXTENSION;

    public static const STARTCHECKOUT: string = "StartCheckout" +PaymentGatewayPageData.EXTENSION;

    public const MAKEPAYMENT: string;

    public const CHECKOUT: string;

    public const SHIPPING: string;

    public const SHIPPINGADDRESS: string;

    public const SHIPPINGADDRESSACTION: string;

    public const BILLINGADDRESS: string;

    public const PAYMENT: string;

    public const AUTHORIZE: string;

    public const FINISH: string;

public constructor (string location, string paymentMethod);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPAGEDATA_H
