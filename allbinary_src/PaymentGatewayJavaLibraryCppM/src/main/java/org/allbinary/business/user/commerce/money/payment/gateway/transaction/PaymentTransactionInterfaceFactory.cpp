
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/PaymentType.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/PaymentTypeUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterfaceFactoryInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterface.h"

auto PaymentTransactionInterfaceFactory::instance_owner() -> PaymentTransactionInterfaceFactory* { static std::unique_ptr<PaymentTransactionInterfaceFactory> value(new PaymentTransactionInterfaceFactory()); return value.get(); }
PaymentTransactionInterfaceFactory* PaymentTransactionInterfaceFactory::instance = PaymentTransactionInterfaceFactory::instance_owner();

    auto PaymentTransactionInterfaceFactory::getInstance() -> PaymentTransactionInterfaceFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PaymentTransactionInterfaceFactory::instance;
    
}


PaymentTransactionInterfaceFactory::PaymentTransactionInterfaceFactory() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto PaymentTransactionInterfaceFactory::getInstance(OrderHistory* orderReview) -> PaymentTransactionInterface*{

        try {
            
    std::string gatewayName = orderReview->getPaymentMethod();;
    

                        if(true)
                        
                                    {
                                    
    PaymentType* paymentType = PaymentTypeUtil::getInstance()->get(gatewayName);;
    

    PaymentTransactionInterfaceFactoryInterface* paymentTransactionInterfaceFactoryInterface = paymentType->getPaymentTransactionInterfaceFactoryInterface();;
    

    PaymentTransactionInterface* paymentTransactionInterface = paymentTransactionInterfaceFactoryInterface->getInstance(orderReview);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return paymentTransactionInterface;
    

                                    }
                                



                            throw Exception(JavaString::valueOf(JavaString::valueOf("Failed to create PaymentTransactionInterface: ") +JavaString::valueOf("GatewayName is: ")) +JavaString::valueOf(gatewayName));
                    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->PAYMENTERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put("Failed to generate test data", this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONINTERFACEFACTORY_CPP
