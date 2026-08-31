
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
        



        #ifndef VIEWS_ADMIN_PAYMENT_GATEWAY_PAYMENTGATEWAYVIEWABSTRACT_H
        #define VIEWS_ADMIN_PAYMENT_GATEWAY_PAYMENTGATEWAYVIEWABSTRACT_H

#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayPrimaryKey.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpComposite.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaymentGatewayViewAbstract: public TransformInfoHttpComposite {
        

    private: paymentGatewayPrimaryKey: PaymentGatewayPrimaryKey;

public constructor (TransformInfoInterface transformInfoInterface);

    public getFormData(HttpServletRequest request);

    public PaymentGatewayPrimaryKey getPaymentGatewayPrimaryKey();

    public setPaymentGatewayPrimaryKey(PaymentGatewayPrimaryKey paymentGatewayPrimaryKey);

};

            


        #endif //VIEWS_ADMIN_PAYMENT_GATEWAY_PAYMENTGATEWAYVIEWABSTRACT_H
