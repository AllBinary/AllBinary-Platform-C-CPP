
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
        



        #ifndef VIEWS_ADMIN_PAYMENT_GATEWAY_PAYMENTGATEWAYCOMPONENT_CPP
        #define VIEWS_ADMIN_PAYMENT_GATEWAY_PAYMENTGATEWAYCOMPONENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/admin/payment/gateway/PaymentGatewayComponent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/modules/gateway/PaymentGatewayDomNodeFactoryInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PaymentGatewayComponent::PaymentGatewayComponent(TransformInfoInterface* transformInfoInterface, PaymentGatewayInterface* paymentGatewayInterface) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->paymentGatewayInterface= paymentGatewayInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto PaymentGatewayComponent::addDomNodeInterfaces() -> void{

    BasicPaymentType* paymentType = BasicPaymentTypeUtil::getInstance()->get(this->paymentGatewayInterface->getName());;
    

    PaymentGatewayDomNodeFactoryInterface* paymentGatewayDomNodeFactoryInterface = paymentType->getPaymentGatewayDomNodeFactoryInterface();;
    

    DomNodeInterface* domNodeInterface = dynamic_cast<DomNodeInterface*>(paymentGatewayDomNodeFactoryInterface->getInstance(this->paymentGatewayInterface));;
    
this->addDomNodeInterface(domNodeInterface);
    
}


    auto PaymentGatewayComponent::view() -> std::string{

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return HttpStoreComponentView::view();;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to view payment gateway";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}




        #endif //VIEWS_ADMIN_PAYMENT_GATEWAY_PAYMENTGATEWAYCOMPONENT_CPP
