
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
        



        #ifndef VIEWS_ADMIN_PAYMENT_GATEWAY_PAYMENTGATEWAYVIEWABSTRACT_CPP
        #define VIEWS_ADMIN_PAYMENT_GATEWAY_PAYMENTGATEWAYVIEWABSTRACT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/admin/payment/gateway/PaymentGatewayViewAbstract.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayPrimaryKey.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpComposite.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PaymentGatewayViewAbstract::PaymentGatewayViewAbstract(TransformInfoInterface* transformInfoInterface) : TransformInfoHttpComposite(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->getFormData(dynamic_cast<HttpServletRequest*>(this->getPageContext()->getRequest()));
    
}


    auto PaymentGatewayViewAbstract::getFormData(HttpServletRequest* request) -> void{

    std::string storeName = this->getWeblisketSession()->getStoreName();;
    

    std::string gatewayName = request->getParameter(PaymentGatewayData::NAME->toString());;
    
this->setPaymentGatewayPrimaryKey(new PaymentGatewayPrimaryKey(storeName, gatewayName));
    
}


    auto PaymentGatewayViewAbstract::getPaymentGatewayPrimaryKey() -> PaymentGatewayPrimaryKey*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paymentGatewayPrimaryKey;
    
}


    auto PaymentGatewayViewAbstract::setPaymentGatewayPrimaryKey(PaymentGatewayPrimaryKey* paymentGatewayPrimaryKey) -> void{
this->paymentGatewayPrimaryKey= paymentGatewayPrimaryKey;
    
}




        #endif //VIEWS_ADMIN_PAYMENT_GATEWAY_PAYMENTGATEWAYVIEWABSTRACT_CPP
