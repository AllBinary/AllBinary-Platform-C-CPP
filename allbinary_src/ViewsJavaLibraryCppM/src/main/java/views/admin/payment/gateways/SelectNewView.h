
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
        



        #ifndef VIEWS_ADMIN_PAYMENT_GATEWAYS_SELECTNEWVIEW_H
        #define VIEWS_ADMIN_PAYMENT_GATEWAYS_SELECTNEWVIEW_H

            #include "../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <views/admin/payment/gateway/PaymentGatewayViewAbstract.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaymentGatewaysView.h"

class SelectNewView: public PaymentGatewayViewAbstract {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (TransformInfoInterface transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public string view();

};

            


        #endif //VIEWS_ADMIN_PAYMENT_GATEWAYS_SELECTNEWVIEW_H
