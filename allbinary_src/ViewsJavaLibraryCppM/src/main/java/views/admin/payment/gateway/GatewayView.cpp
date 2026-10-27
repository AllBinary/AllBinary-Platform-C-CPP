
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
        



        #ifndef VIEWS_ADMIN_PAYMENT_GATEWAY_GATEWAYVIEW_CPP
        #define VIEWS_ADMIN_PAYMENT_GATEWAY_GATEWAYVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/admin/payment/gateway/GatewayView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/admin/payment/gateway/PaymentGatewayViewAbstract.h"
#include "views/admin/payment/gateway/PaymentGatewayComponent.h"


GatewayView::GatewayView(TransformInfoInterface* transformInfoInterface) : PaymentGatewayViewAbstract(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto GatewayView::getFormData(HttpServletRequest* request) -> void{
PaymentGatewayViewAbstract::getFormData(request);
    

                        if(StringValidationUtil::getInstance()->isEmpty(this->getPaymentGatewayPrimaryKey()->getName()))
                        
                                    {
                                    this->getPaymentGatewayPrimaryKey()->setName(this->getWeblisketSession()->getPaymentMethod());
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto GatewayView::view() -> std::string{

        try {
            
    PaymentGatewayInterface* paymentGatewayInterface = PaymentGatewayEntityFactory::getInstance()->getPaymentGatewayInterface(this->getPaymentGatewayPrimaryKey()->getStoreName(), BasicPaymentTypeUtil::getInstance()->get(this->getPaymentGatewayPrimaryKey()->getName()));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new PaymentGatewayComponent(this->getTransformInfoInterface(), paymentGatewayInterface))->view();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "edit()", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //VIEWS_ADMIN_PAYMENT_GATEWAY_GATEWAYVIEW_CPP
