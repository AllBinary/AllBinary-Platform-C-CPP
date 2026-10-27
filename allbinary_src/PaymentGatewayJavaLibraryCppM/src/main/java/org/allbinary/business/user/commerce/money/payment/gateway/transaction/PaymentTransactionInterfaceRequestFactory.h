
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEREQUESTFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEREQUESTFACTORY_H

        
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
class PageContext;
class StoreFrontFactory;
class StoreFrontInterface;
class StreetAddress;
class Basket;
class OrderHistory;
class OrderInterface;
class Money;
class Payment;
class PaymentData;
class PaymentGatewayData;
class TenderTypeFactory;
class TransactionTypeFactory;
class OrderIdGenerator;
class OrderHistoryEntityFactory;
class OrderHistoryEntityInterface;
class WeblisketSession;
class LogUtil;
class StringUtil;
class StringValidationUtil;
class TransformInfoHttpInterface;
class TransformInfoInterface;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PaymentTransactionInterfaceFactory;
class PaymentTransactionInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaymentTransactionInterfaceRequestFactory
            : public virtual Object
         {

    private: static PaymentTransactionInterfaceRequestFactory* instance_owner();
    private: static PaymentTransactionInterfaceRequestFactory* instance;

    public: static PaymentTransactionInterfaceRequestFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: PaymentTransactionInterfaceRequestFactory();

    /*protected*/ public: CommonStrings* commonStrings;

                //@Throws(Exception.constructor)
            
    public: PaymentTransactionInterface* getInstance(TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    private: PaymentTransactionInterface* generateFromTestData(TransformInfoInterface* transformInfoInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEREQUESTFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEREQUESTFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEREQUESTFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/address/StreetAddress.h>)
#include <org/allbinary/business/user/address/StreetAddress.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/basket/Basket.h>)
#include <org/allbinary/business/user/commerce/inventory/basket/Basket.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/Money.h>)
#include <org/allbinary/business/user/commerce/money/Money.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/Payment.h>)
#include <org/allbinary/business/user/commerce/money/payment/Payment.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/PaymentData.h>)
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/types/TenderTypeFactory.h>)
#include <org/allbinary/business/user/commerce/money/payment/types/TenderTypeFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/types/TransactionTypeFactory.h>)
#include <org/allbinary/business/user/commerce/money/payment/types/TransactionTypeFactory.h>
#endif
#if __has_include(<org/allbinary/data/generator/OrderIdGenerator.h>)
#include <org/allbinary/data/generator/OrderIdGenerator.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSession.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterfaceFactory.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterfaceFactory.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterface.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterface.h"
#endif

        #endif
    
