
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PROCESSOR_PAYMENTPROCESSORINTERFACEFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PROCESSOR_PAYMENTPROCESSORINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class PaymentTransactionInterface;
class PaymentTransactionInterfaceRequestFactory;
class PaymentType;
class PaymentTypeUtil;
class LogUtil;
class StringValidationUtil;
class TransformInfoInterface;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PaymentProcessorInterfaceFactoryInterface;
class PaymentProcessorInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaymentProcessorInterfaceFactory
            : public virtual Object
         {

    private: static PaymentProcessorInterfaceFactory* instance_owner();
    private: static PaymentProcessorInterfaceFactory* instance;

    public: static PaymentProcessorInterfaceFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: PaymentProcessorInterfaceFactory();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: PaymentProcessorInterface* getInstance(TransformInfoInterface* transformInfoInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PROCESSOR_PAYMENTPROCESSORINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PROCESSOR_PAYMENTPROCESSORINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PROCESSOR_PAYMENTPROCESSORINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterface.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterfaceRequestFactory.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterfaceRequestFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/types/PaymentType.h>)
#include <org/allbinary/business/user/commerce/money/payment/types/PaymentType.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/types/PaymentTypeUtil.h>)
#include <org/allbinary/business/user/commerce/money/payment/types/PaymentTypeUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/processor/PaymentProcessorInterfaceFactoryInterface.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/processor/PaymentProcessorInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/processor/PaymentProcessorInterface.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/processor/PaymentProcessorInterface.h"
#endif

        #endif
    
