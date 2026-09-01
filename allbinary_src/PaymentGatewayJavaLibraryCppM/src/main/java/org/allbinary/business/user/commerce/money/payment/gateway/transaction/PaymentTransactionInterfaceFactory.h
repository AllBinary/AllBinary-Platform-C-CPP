
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

            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/PaymentType.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/PaymentTypeUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaymentTransactionInterfaceFactoryInterface.h"
#include "PaymentTransactionInterface.h"

class PaymentTransactionInterfaceFactory
            : public Object
         {

    private: static PaymentTransactionInterfaceFactory instance() { return PaymentTransactionInterfaceFactory(); }

    public: static PaymentTransactionInterfaceFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: PaymentTransactionInterfaceFactory();

                //@Throws(Exception.constructor)
            
    public: PaymentTransactionInterface getInstance(OrderHistory orderReview);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEFACTORY_H
