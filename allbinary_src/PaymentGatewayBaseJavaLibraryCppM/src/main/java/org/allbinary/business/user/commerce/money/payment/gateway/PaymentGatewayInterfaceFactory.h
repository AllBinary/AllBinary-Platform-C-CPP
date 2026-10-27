
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYINTERFACEFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class HttpServletRequest;
class BasicPaymentType;
class BasicPaymentTypeUtil;
class StdUtil;
class RequestParams;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactoryInterface.h"
class PaymentGatewayInterface;
class PaymentGatewayData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaymentGatewayInterfaceFactory
            : public virtual Object
        , public PaymentGatewayInterfaceFactoryInterface {

    /*protected*/ public: LogUtil* logUtil;

public: PaymentGatewayInterfaceFactory();

                //@Throws(Exception.constructor)
            
    public: PaymentGatewayInterface* getInstance(HttpServletRequest* httpServletRequest);

                //@Throws(Exception.constructor)
            
    public: PaymentGatewayInterface* getInstance(BasicPaymentType* paymentType);

                //@Throws(Exception.constructor)
            
    public: PaymentGatewayInterface* getInstance(HashMap<Object*, Object*>* hashMap);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>)
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h>)
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/RequestParams.h>)
#include <org/allbinary/logic/communication/http/request/RequestParams.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactoryInterface.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h"
#endif

        #endif
    
