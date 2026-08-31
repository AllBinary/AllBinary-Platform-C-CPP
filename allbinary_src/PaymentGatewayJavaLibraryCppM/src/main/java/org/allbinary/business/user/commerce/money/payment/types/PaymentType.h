
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

            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/processor/PaymentProcessorInterfaceFactoryInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterfaceFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicPaymentType.h"
#include "PaymentTypeUtil.h"

class PaymentType
            : public Object
         {
        

    private: const basicPaymentType: BasicPaymentType;

    private: const paymentTransactionInterfaceFactoryInterface: PaymentTransactionInterfaceFactoryInterface;

    private: const paymentProcessorInterfaceFactoryInterface: PaymentProcessorInterfaceFactoryInterface;

protected constructor (BasicPaymentType basicPaymentType);

protected constructor (BasicPaymentType basicPaymentType, PaymentTransactionInterfaceFactoryInterface paymentTransactionInterfaceFactoryInterface, PaymentProcessorInterfaceFactoryInterface paymentProcessorInterfaceFactoryInterface);

                //@Throws(Exception.constructor)
            
    public PaymentTransactionInterfaceFactoryInterface getPaymentTransactionInterfaceFactoryInterface();

                //@Throws(Exception.constructor)
            
    public PaymentProcessorInterfaceFactoryInterface getPaymentProcessorInterfaceFactoryInterface();

    public Vector toVector();

    public HashMap<any, any> toHashMap();

    public BasicPaymentType getBasicPaymentType();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_PAYMENTTYPE_H
