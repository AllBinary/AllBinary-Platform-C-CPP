
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
        



        #ifndef VIEWS_ADMIN_PAYMENT_GATEWAY_GATEWAYVIEW_H
        #define VIEWS_ADMIN_PAYMENT_GATEWAY_GATEWAYVIEW_H

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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (TransformInfoInterface transformInfoInterface);

    public getFormData(HttpServletRequest request);

                //@Throws(Exception.constructor)
            
    public string view();

};

            


        #endif //VIEWS_ADMIN_PAYMENT_GATEWAY_GATEWAYVIEW_H
