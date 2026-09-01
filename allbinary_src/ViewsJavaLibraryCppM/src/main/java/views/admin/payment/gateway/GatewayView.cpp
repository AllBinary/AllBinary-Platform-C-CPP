
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaymentGatewayViewAbstract.h"
#include "PaymentGatewayComponent.h"

class GatewayView: public PaymentGatewayViewAbstract {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: GatewayView(TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void getFormData(HttpServletRequest request){
super.getFormData(request);
    

                        if(StringValidationUtil::getInstance().isEmpty(this->getPaymentGatewayPrimaryKey().getName()))
                        
                                    {
                                    this->getPaymentGatewayPrimaryKey().setName(this->getWeblisketSession().getPaymentMethod());
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: std::string view(){

        try {
            
    PaymentGatewayInterface paymentGatewayInterface = PaymentGatewayEntityFactory::getInstance().getPaymentGatewayInterface(this->getPaymentGatewayPrimaryKey().getStoreName(), BasicPaymentTypeUtil::getInstance().get(this->getPaymentGatewayPrimaryKey().getName()));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PaymentGatewayComponent(this->getTransformInfoInterface(), paymentGatewayInterface).view();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "edit()", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

