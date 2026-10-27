
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
        



        #ifndef VIEWS_ADMIN_PAYMENT_PAYMENTPROCESSORCOMPONENT_H
        #define VIEWS_ADMIN_PAYMENT_PAYMENTPROCESSORCOMPONENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class PaymentProcessorInterface;
class PaymentProcessorInterfaceFactory;
class DomNodeInterface;
class LogUtil;
class TransformInfoHttpInterface;
class TransformInfoInterface;
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaymentProcessorComponent: public HttpStoreComponentView {

    /*protected*/ public: LogUtil* logUtil;

public: PaymentProcessorComponent(TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: void addDomNodeInterfaces();

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_ADMIN_PAYMENT_PAYMENTPROCESSORCOMPONENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_PAYMENT_PAYMENTPROCESSORCOMPONENT_H_COMPLETE)
        #define VIEWS_ADMIN_PAYMENT_PAYMENTPROCESSORCOMPONENT_H_COMPLETE
        #if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/processor/PaymentProcessorInterface.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/processor/PaymentProcessorInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/processor/PaymentProcessorInterfaceFactory.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/processor/PaymentProcessorInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<views/business/context/modules/storefront/HttpStoreComponentView.h>)
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
#endif

        #endif
    
