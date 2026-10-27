
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_PAYMENTTYPE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_PAYMENTTYPE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class PaymentGatewayData;
class PaymentProcessorInterfaceFactoryInterface;
class PaymentTransactionInterfaceFactoryInterface;
class StdUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicPaymentType;
class PaymentTypeUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaymentType
            : public virtual Object
         {

    private: BasicPaymentType* basicPaymentType;

    private: PaymentTransactionInterfaceFactoryInterface* paymentTransactionInterfaceFactoryInterface;

    private: PaymentProcessorInterfaceFactoryInterface* paymentProcessorInterfaceFactoryInterface;

/*protected*/ public: PaymentType(BasicPaymentType* basicPaymentType);

/*protected*/ public: PaymentType(BasicPaymentType* basicPaymentType, PaymentTransactionInterfaceFactoryInterface* paymentTransactionInterfaceFactoryInterface, PaymentProcessorInterfaceFactoryInterface* paymentProcessorInterfaceFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: PaymentTransactionInterfaceFactoryInterface* getPaymentTransactionInterfaceFactoryInterface();

                //@Throws(Exception.constructor)
            
    public: PaymentProcessorInterfaceFactoryInterface* getPaymentProcessorInterfaceFactoryInterface();

    public: BasicArrayList* toVector();

    public: HashMap<Object*, Object*>* toHashMap();

    public: BasicPaymentType* getBasicPaymentType();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_PAYMENTTYPE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_PAYMENTTYPE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_PAYMENTTYPE_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/processor/PaymentProcessorInterfaceFactoryInterface.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/processor/PaymentProcessorInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterfaceFactoryInterface.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h")
#include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/types/PaymentTypeUtil.h")
#include "org/allbinary/business/user/commerce/money/payment/types/PaymentTypeUtil.h"
#endif

        #endif
    
