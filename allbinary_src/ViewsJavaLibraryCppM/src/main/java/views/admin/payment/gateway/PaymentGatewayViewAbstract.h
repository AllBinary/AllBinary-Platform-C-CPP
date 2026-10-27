
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class HttpServletRequest;
class PaymentGatewayData;
class PaymentGatewayPrimaryKey;
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpComposite.h>
class TransformInfoInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaymentGatewayViewAbstract: public TransformInfoHttpComposite {

    private: PaymentGatewayPrimaryKey* paymentGatewayPrimaryKey;

public: PaymentGatewayViewAbstract(TransformInfoInterface* transformInfoInterface);

    public: void getFormData(HttpServletRequest* request);

    public: PaymentGatewayPrimaryKey* getPaymentGatewayPrimaryKey();

    public: void setPaymentGatewayPrimaryKey(PaymentGatewayPrimaryKey* paymentGatewayPrimaryKey);

};

            


        #endif //VIEWS_ADMIN_PAYMENT_GATEWAY_PAYMENTGATEWAYVIEWABSTRACT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_PAYMENT_GATEWAY_PAYMENTGATEWAYVIEWABSTRACT_H_COMPLETE)
        #define VIEWS_ADMIN_PAYMENT_GATEWAY_PAYMENTGATEWAYVIEWABSTRACT_H_COMPLETE
        #if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayPrimaryKey.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayPrimaryKey.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpComposite.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpComposite.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif

        #endif
    
