
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class OrderHistory;
class PaymentType;
class PaymentTypeUtil;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PaymentTransactionInterfaceFactoryInterface;
class PaymentTransactionInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaymentTransactionInterfaceFactory
            : public virtual Object
         {

    private: static PaymentTransactionInterfaceFactory* instance_owner();
    private: static PaymentTransactionInterfaceFactory* instance;

    public: static PaymentTransactionInterfaceFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: PaymentTransactionInterfaceFactory();

                //@Throws(Exception.constructor)
            
    public: PaymentTransactionInterface* getInstance(OrderHistory* orderReview);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>
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
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterfaceFactoryInterface.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterface.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterface.h"
#endif

        #endif
    
