
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEFACTORYINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEFACTORYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class OrderHistory;
class TenderType;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PaymentTransactionInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaymentTransactionInterfaceFactoryInterface
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual PaymentTransactionInterface* getInstance(OrderHistory* orderHistory) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual PaymentTransactionInterface* getSaleTransaction(TenderType* tenderType) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual PaymentTransactionInterface* getCreditTransaction(TenderType* tenderType) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual PaymentTransactionInterface* getAuthorizationTransaction(TenderType* tenderType) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual PaymentTransactionInterface* getCaptureDelayedTransaction(TenderType* tenderType) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual PaymentTransactionInterface* getVoidTransaction(TenderType* tenderType) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual PaymentTransactionInterface* getInquiryTransaction(TenderType* tenderType) = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEFACTORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEFACTORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEFACTORYINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/types/TenderType.h>)
#include <org/allbinary/business/user/commerce/money/payment/types/TenderType.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterface.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterface.h"
#endif

        #endif
    
