
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
        



            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/TenderType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaymentTransactionInterface.h"

class PaymentTransactionInterfaceFactoryInterface {
        

                //@Throws(Exception.constructor)
            
    PaymentTransactionInterface getInstance(OrderHistory orderHistory)

                //@Throws(Exception.constructor)
            
    PaymentTransactionInterface getSaleTransaction(TenderType tenderType)

                //@Throws(Exception.constructor)
            
    PaymentTransactionInterface getCreditTransaction(TenderType tenderType)

                //@Throws(Exception.constructor)
            
    PaymentTransactionInterface getAuthorizationTransaction(TenderType tenderType)

                //@Throws(Exception.constructor)
            
    PaymentTransactionInterface getCaptureDelayedTransaction(TenderType tenderType)

                //@Throws(Exception.constructor)
            
    PaymentTransactionInterface getVoidTransaction(TenderType tenderType)

                //@Throws(Exception.constructor)
            
    PaymentTransactionInterface getInquiryTransaction(TenderType tenderType)

};

            

