
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
        



        #ifndef VIEWS_ADMIN_PAYMENT_GATEWAY_PAYMENTGATEWAYCOMPONENT_H
        #define VIEWS_ADMIN_PAYMENT_GATEWAY_PAYMENTGATEWAYCOMPONENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class PaymentGatewayInterface;
class PaymentGatewayDomNodeFactoryInterface;
class BasicPaymentType;
class BasicPaymentTypeUtil;
class DomNodeInterface;
class LogUtil;
class TransformInfoInterface;
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaymentGatewayComponent: public HttpStoreComponentView {

    /*protected*/ public: LogUtil* logUtil;

    private: PaymentGatewayInterface* paymentGatewayInterface;

public: PaymentGatewayComponent(TransformInfoInterface* transformInfoInterface, PaymentGatewayInterface* paymentGatewayInterface);

                //@Throws(Exception.constructor)
            
    public: void addDomNodeInterfaces();

    public: std::string view();

};

            


        #endif //VIEWS_ADMIN_PAYMENT_GATEWAY_PAYMENTGATEWAYCOMPONENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_PAYMENT_GATEWAY_PAYMENTGATEWAYCOMPONENT_H_COMPLETE)
        #define VIEWS_ADMIN_PAYMENT_GATEWAY_PAYMENTGATEWAYCOMPONENT_H_COMPLETE
        #if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/modules/gateway/PaymentGatewayDomNodeFactoryInterface.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/modules/gateway/PaymentGatewayDomNodeFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>)
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h>)
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<views/business/context/modules/storefront/HttpStoreComponentView.h>)
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
#endif

        #endif
    
