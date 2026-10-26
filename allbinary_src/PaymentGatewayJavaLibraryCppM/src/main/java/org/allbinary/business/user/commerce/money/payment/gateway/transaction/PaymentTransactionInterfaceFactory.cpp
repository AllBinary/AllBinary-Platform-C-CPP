
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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

    public: static PaymentTransactionInterfaceFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PaymentTransactionInterfaceFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: PaymentTransactionInterfaceFactory(){
}


                //@Throws(Exception.constructor)
            
    public: PaymentTransactionInterface getInstance(OrderHistory orderReview){

        try {
            
    std::string gatewayName = orderReview.getPaymentMethod();;
    

                        if(true)
                        
                                    {
                                    
    PaymentType paymentType = PaymentTypeUtil::getInstance().get(gatewayName);;
    

    PaymentTransactionInterfaceFactoryInterface paymentTransactionInterfaceFactoryInterface = paymentType.getPaymentTransactionInterfaceFactoryInterface();;
    

    PaymentTransactionInterface paymentTransactionInterface = paymentTransactionInterfaceFactoryInterface.getInstance(orderReview);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentTransactionInterface;
    

                                    }
                                



                            throw Exception("Failed to create PaymentTransactionInterface: " +"GatewayName is: " +gatewayName);
                    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PAYMENTERROR))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put("Failed to generate test data", this, commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

