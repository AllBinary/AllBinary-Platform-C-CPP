
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

            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterfaceRequestFactory.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/PaymentType.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/PaymentTypeUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaymentProcessorInterfaceFactoryInterface.h"
#include "PaymentProcessorInterface.h"

class PaymentProcessorInterfaceFactory
            : public Object
         {

    private: static PaymentProcessorInterfaceFactory instance() { return PaymentProcessorInterfaceFactory(); }

    public: static PaymentProcessorInterfaceFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: PaymentProcessorInterfaceFactory();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: PaymentProcessorInterface getInstance(TransformInfoInterface transformInfoInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PROCESSOR_PAYMENTPROCESSORINTERFACEFACTORY_H
