
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaymentGatewayInterfaceFactoryInterface.h"
#include "PaymentGatewayInterface.h"
#include "PaymentGatewayData.h"

class PaymentGatewayInterfaceFactory
            : public Object
        : public PaymentGatewayInterfaceFactoryInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: PaymentGatewayInterfaceFactory(){
}


                //@Throws(Exception.constructor)
            
    public: PaymentGatewayInterface getInstance(HttpServletRequest httpServletRequest){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PAYMENT))
                        
                                    {
                                    this->logUtil.putF("Getting", this, commonStrings.GET_INSTANCE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getInstance(RequestParams(httpServletRequest).toHashMap());;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PAYMENTERROR))
                        
                                    {
                                    this->logUtil.put(commonStrings.EXCEPTION, this, "getInstance(HttpServletRequest)", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: PaymentGatewayInterface getInstance(BasicPaymentType paymentType){

    HashMap<any, any> hashMap = StdUtil::getInstance().createHashMap();;
    
hashMap.put(PaymentGatewayData::NAME.toString(), paymentType.getName());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getInstance(hashMap);;
    
}


                //@Throws(Exception.constructor)
            
    public: PaymentGatewayInterface getInstance(HashMap<any, any> hashMap){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

        try {
            
    std::string gatewayName = hashMap.get(PaymentGatewayData::NAME.toString()) as string;;
    

    BasicPaymentType paymentType = BasicPaymentTypeUtil::getInstance().get(gatewayName);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PAYMENT))
                        
                                    {
                                    this->logUtil.putF("Getting PaymentGatewayInterface for PaymentType: " +paymentType.getName() +" with: " +hashMap, this, commonStrings.GET_INSTANCE);
    

                                    }
                                

    PaymentGatewayInterfaceFactoryInterface paymentGatewayInterfaceFactoryInterface = paymentType.getPaymentGatewayInterfaceFactoryInterface();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentGatewayInterfaceFactoryInterface.getInstance(hashMap);;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PAYMENTERROR))
                        
                                    {
                                    this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

