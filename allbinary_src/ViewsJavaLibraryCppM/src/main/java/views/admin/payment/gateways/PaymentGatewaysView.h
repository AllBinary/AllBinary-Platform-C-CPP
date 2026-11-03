
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
        



        #ifndef VIEWS_ADMIN_PAYMENT_GATEWAYS_PAYMENTGATEWAYSVIEW_H
        #define VIEWS_ADMIN_PAYMENT_GATEWAYS_PAYMENTGATEWAYSVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class EntryData;
class PaymentGatewayData;
class PaymentGatewaysData;
class BasicPaymentType;
class PaymentTypeUtil;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class ModDomHelper;
class LogUtil;
class TransformInfoInterface;
class Document;
class Node;
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaymentGatewaysView: public HttpStoreComponentView, public virtual DomNodeInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: BasicArrayList* paymentGatewayVector;

public: PaymentGatewaysView(TransformInfoInterface* transformInfoInterface, BasicArrayList* gatewayVector);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

    public: void addDomNodeInterfaces();

    public: std::string view();

};

            


        #endif //VIEWS_ADMIN_PAYMENT_GATEWAYS_PAYMENTGATEWAYSVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_PAYMENT_GATEWAYS_PAYMENTGATEWAYSVIEW_H_COMPLETE)
        #define VIEWS_ADMIN_PAYMENT_GATEWAYS_PAYMENTGATEWAYSVIEW_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewaysData.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewaysData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>)
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/types/PaymentTypeUtil.h>)
#include <org/allbinary/business/user/commerce/money/payment/types/PaymentTypeUtil.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<views/business/context/modules/storefront/HttpStoreComponentView.h>)
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
#endif

        #endif
    
