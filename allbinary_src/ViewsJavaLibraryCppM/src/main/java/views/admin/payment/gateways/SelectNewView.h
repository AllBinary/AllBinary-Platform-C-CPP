
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class BasicArrayList;

class BasicPaymentTypeUtil;
class PaymentGatewayEntityFactory;
class PaymentGatewayEntityInterface;
class LogUtil;
class TransformInfoInterface;
#include <views/admin/payment/gateway/PaymentGatewayViewAbstract.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PaymentGatewaysView;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SelectNewView: public PaymentGatewayViewAbstract {

    /*protected*/ public: LogUtil* logUtil;

public: SelectNewView(TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_ADMIN_PAYMENT_GATEWAYS_SELECTNEWVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_PAYMENT_GATEWAYS_SELECTNEWVIEW_H_COMPLETE)
        #define VIEWS_ADMIN_PAYMENT_GATEWAYS_SELECTNEWVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h>)
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityInterface.h>)
#include <org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<views/admin/payment/gateway/PaymentGatewayViewAbstract.h>)
#include <views/admin/payment/gateway/PaymentGatewayViewAbstract.h>
#endif
#if __has_include("views/admin/payment/gateways/PaymentGatewaysView.h")
#include "views/admin/payment/gateways/PaymentGatewaysView.h"
#endif

        #endif
    
