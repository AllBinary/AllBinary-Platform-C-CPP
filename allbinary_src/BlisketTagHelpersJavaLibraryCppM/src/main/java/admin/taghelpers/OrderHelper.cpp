
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
        



            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/Order.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderProcessorUtil.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TagHelper.h"

class OrderHelper: public TagHelper {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: weblisketSession: WeblisketSession;

    private: storeFrontInterface: StoreFrontInterface;

    private: propertiesHashMap: HashMap<any, any>;

    private: pageContext: PageContext;

    private: request: HttpServletRequest;

public constructor (HashMap<any, any> propertiesHashMap, PageContext pageContext){

            super();
        this.propertiesHashMap= propertiesHashMap;
    
this.pageContext= pageContext;
    
this.request= pageContext!.getRequest() as HttpServletRequest;
    

    storeName: string = propertiesHashMap!.get(StoreFrontData.getInstance()!.NAME) as string;;
    

                        if(!StringValidationUtil.getInstance()!.isEmpty(storeName))
                        
                                    {
                                    this.storeFrontInterface= StoreFrontFactory.getInstance(storeName);
    

                                    }
                                
this.weblisketSession= new WeblisketSession(this.propertiesHashMap, this.pageContext);
    
}


    public Boolean setPaymentGateway(){

        try {
            
    paymentGatewayBoolean: Boolean = Boolean.FALSE;;
    

    orderInterface: OrderInterface = this.weblisketSession!.getOrder()!;;
    

    requestPaymentGateway: string = this.request.getParameter(PaymentGatewayData.NAME.toString()) as string;;
    

                        if(!StringValidationUtil.getInstance()!.isEmpty(requestPaymentGateway))
                        
                                    {
                                    this.weblisketSession!.setPaymentMethod(requestPaymentGateway);
    
orderInterface!.setPaymentMethod(requestPaymentGateway);
    
paymentGatewayBoolean= Boolean.TRUE;
    

                                    }
                                

    paymentGatewayEntityInterface: PaymentGatewayEntity = PaymentGatewayEntityFactory.getInstance() as PaymentGatewayEntity;;
    

    paymentTypeVector: Vector = paymentGatewayEntityInterface!.findPaymentTypeVectorByStore(this.weblisketSession!.getStoreName())!;;
    

                        if(paymentTypeVector!.length == 1)
                        
                                    {
                                    
    paymentType: BasicPaymentType = paymentTypeVector!.get(0) as BasicPaymentType;;
    

    paymentGatewayInterface: PaymentGatewayInterface = paymentGatewayEntityInterface!.getPaymentGatewayInterface(this.weblisketSession!.getStoreName(), paymentType) as PaymentGatewayInterface;;
    

    paymentGateway: string = paymentGatewayInterface!.getName()!;;
    
this.weblisketSession!.setPaymentMethod(paymentGateway);
    
orderInterface!.setPaymentMethod(paymentGateway);
    
paymentGatewayBoolean= Boolean.TRUE;
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGS))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Successfully set PaymentGateway Order: ");
    
stringBuffer!.append(orderInterface!.getId());
    
stringBuffer!.append(" to: ");
    
stringBuffer!.append(orderInterface!.getPaymentMethod());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "setPaymentGateway()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentGatewayBoolean;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Failed to set PaymentGateway for Order: ");
    

        try {
            
    orderInterface: OrderInterface = this.weblisketSession!.getOrder()!;;
    

                        if(orderInterface != 
                                    null
                                )
                        
                                    {
                                    stringBuffer!.append(orderInterface!.getId());
    
stringBuffer!.append(" to: ");
    
stringBuffer!.append(orderInterface!.getPaymentMethod());
    

                                    }
                                

                //: 
} catch(ex) 
            {
stringBuffer!.append(" Exception Getting");
    
}

this.logUtil!.put(stringBuffer!.toString(), this, "setPaymentGateway()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}

}


    public string process(){

        try {
            
    order: OrderInterface = this.weblisketSession!.getOrder()!;;
    
order.setStoreName(this.storeFrontInterface!.getName());
    

    result: string = OrderProcessorUtil.getInstance()!.process(this.weblisketSession!.getUserName(), order as Order)!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGS))
                        
                                    {
                                    this.logUtil!.putF("Successfully Processed Order: " +result, this, "processOrder()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Failed to Process Order: ");
    

        try {
            stringBuffer!.append(this.weblisketSession!.getOrder()!.getId());
    

                //: 
} catch(ex) 
            {
stringBuffer!.append(" Exception Getting Id");
    
}


    error: string = stringBuffer!.toString()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.PROCESS, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


};

            

