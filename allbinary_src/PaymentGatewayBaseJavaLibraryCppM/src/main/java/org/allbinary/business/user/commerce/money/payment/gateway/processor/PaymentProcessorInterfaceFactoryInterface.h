
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PROCESSOR_PAYMENTPROCESSORINTERFACEFACTORYINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PROCESSOR_PAYMENTPROCESSORINTERFACEFACTORYINTERFACE_H

            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaymentProcessorInterface.h"

class PaymentProcessorInterfaceFactoryInterface {

                //@Throws(Exception.constructor)
            
    PaymentProcessorInterface getInstance(TransformInfoInterface transformInfoInterface, PaymentTransactionInterface paymentTransactionInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PROCESSOR_PAYMENTPROCESSORINTERFACEFACTORYINTERFACE_H
