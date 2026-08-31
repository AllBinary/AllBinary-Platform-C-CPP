
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public PaymentGatewayInterface getInstance(HttpServletRequest httpServletRequest){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PAYMENT))
                        
                                    {
                                    this.logUtil!.putF("Getting", this, commonStrings!.GET_INSTANCE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getInstance(new RequestParams(httpServletRequest).toHashMap());;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PAYMENTERROR))
                        
                                    {
                                    this.logUtil!.put(commonStrings!.EXCEPTION, this, "getInstance(HttpServletRequest)", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public PaymentGatewayInterface getInstance(BasicPaymentType paymentType){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(PaymentGatewayData.NAME.toString(), paymentType!.getName());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getInstance(hashMap);;
    
}


                //@Throws(Exception.constructor)
            
    public PaymentGatewayInterface getInstance(HashMap<any, any> hashMap){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

        try {
            
    gatewayName: string = hashMap!.get(PaymentGatewayData.NAME.toString()) as string;;
    

    paymentType: BasicPaymentType = BasicPaymentTypeUtil.getInstance()!.get(gatewayName)!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PAYMENT))
                        
                                    {
                                    this.logUtil!.putF("Getting PaymentGatewayInterface for PaymentType: " +paymentType!.getName() +" with: " +hashMap, this, commonStrings!.GET_INSTANCE);
    

                                    }
                                

    paymentGatewayInterfaceFactoryInterface: PaymentGatewayInterfaceFactoryInterface = paymentType!.getPaymentGatewayInterfaceFactoryInterface()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentGatewayInterfaceFactoryInterface!.getInstance(hashMap);;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PAYMENTERROR))
                        
                                    {
                                    this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.GET_INSTANCE, e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

