
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterfaceRequestFactory.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/PaymentType.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/PaymentTypeUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/gateway/processor/PaymentProcessorInterfaceFactoryInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/processor/PaymentProcessorInterface.h"

class PaymentProcessorInterfaceFactory
            : public Object
         {

    private: static PaymentProcessorInterfaceFactory* instance() { static std::unique_ptr<PaymentProcessorInterfaceFactory> value(new PaymentProcessorInterfaceFactory()); return value.get(); }

    public: static PaymentProcessorInterfaceFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PaymentProcessorInterfaceFactory::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

private: PaymentProcessorInterfaceFactory(){
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: PaymentProcessorInterface* getInstance(TransformInfoInterface* transformInfoInterface){

        try {
            
    PaymentTransactionInterface* paymentTransactionInterface = PaymentTransactionInterfaceRequestFactory::getInstance()->getInstance(transformInfoInterface);;
    

    std::string gatewayName = paymentTransactionInterface->getOrderHistory()->getPaymentMethod();;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(gatewayName))
                        
                                    {
                                    
    PaymentType* paymentType = PaymentTypeUtil::getInstance()->get(gatewayName);;
    

    PaymentProcessorInterfaceFactoryInterface* paymentProcessorInterfaceFactoryInterface = paymentType->getPaymentProcessorInterfaceFactoryInterface();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<PaymentProcessorInterface*>(paymentProcessorInterfaceFactoryInterface->getInstance(transformInfoInterface, paymentTransactionInterface));
    

                                    }
                                



                            throw new Exception("Error Getting PaymentProcessorInterface");
                    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->PAYMENTERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

