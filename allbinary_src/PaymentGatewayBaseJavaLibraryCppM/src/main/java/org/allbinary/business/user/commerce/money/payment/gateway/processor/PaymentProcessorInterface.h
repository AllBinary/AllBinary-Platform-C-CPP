
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PROCESSOR_PAYMENTPROCESSORINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PROCESSOR_PAYMENTPROCESSORINTERFACE_H

            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/user/commerce/money/payment/PaymentException.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaymentProcessorInterface: public DomNodeInterface {

                //@Throws(PaymentException.constructor, Exception.constructor)
            
    void process();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PROCESSOR_PAYMENTPROCESSORINTERFACE_H
