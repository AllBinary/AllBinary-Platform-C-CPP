
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactoryInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h"


PaymentGatewayInterfaceFactory::PaymentGatewayInterfaceFactory() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto PaymentGatewayInterfaceFactory::getInstance(HttpServletRequest* httpServletRequest) -> PaymentGatewayInterface*{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

        try {
            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->PAYMENT))
                        
                                    {
                                    this->logUtil->putF("Getting", this, commonStrings->GET_INSTANCE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getInstance((new RequestParams(httpServletRequest))->toHashMap());;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->PAYMENTERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, "getInstance(HttpServletRequest)", &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto PaymentGatewayInterfaceFactory::getInstance(BasicPaymentType* paymentType) -> PaymentGatewayInterface*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(PaymentGatewayData::NAME->toString(), paymentType->getName());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getInstance(hashMap);;
    
}


                //@Throws(Exception.constructor)
            
    auto PaymentGatewayInterfaceFactory::getInstance(HashMap<Object*, Object*>* hashMap) -> PaymentGatewayInterface*{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

        try {
            
    std::string gatewayName = hashMap->get(PaymentGatewayData::NAME->toString());;
    

    BasicPaymentType* paymentType = BasicPaymentTypeUtil::getInstance()->get(gatewayName);;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->PAYMENT))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Getting PaymentGatewayInterface for PaymentType: ") +JavaString::valueOf(paymentType->getName())) +JavaString::valueOf(" with: ")) +JavaString::valueOf(hashMap), this, commonStrings->GET_INSTANCE);
    

                                    }
                                

    PaymentGatewayInterfaceFactoryInterface* paymentGatewayInterfaceFactoryInterface = paymentType->getPaymentGatewayInterfaceFactoryInterface();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentGatewayInterfaceFactoryInterface->getInstance(hashMap);;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->PAYMENTERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYINTERFACEFACTORY_CPP
