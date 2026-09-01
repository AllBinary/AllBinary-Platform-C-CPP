
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
        



#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayPrimaryKey.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpComposite.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaymentGatewayViewAbstract: public TransformInfoHttpComposite {

    private: PaymentGatewayPrimaryKey paymentGatewayPrimaryKey;

public: PaymentGatewayViewAbstract(TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->getFormData(this->getPageContext().getRequest() as HttpServletRequest);
    
}


    public: void getFormData(HttpServletRequest request){

    std::string storeName = this->getWeblisketSession().getStoreName();;
    

    std::string gatewayName = request.getParameter(PaymentGatewayData::NAME.toString());;
    
this->setPaymentGatewayPrimaryKey(PaymentGatewayPrimaryKey(storeName, gatewayName));
    
}


    public: PaymentGatewayPrimaryKey getPaymentGatewayPrimaryKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paymentGatewayPrimaryKey;
    
}


    public: void setPaymentGatewayPrimaryKey(PaymentGatewayPrimaryKey paymentGatewayPrimaryKey){
this->paymentGatewayPrimaryKey= paymentGatewayPrimaryKey;
    
}


};

            

