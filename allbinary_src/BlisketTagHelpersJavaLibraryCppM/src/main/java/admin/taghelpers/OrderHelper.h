
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
        



        #ifndef ADMIN_TAGHELPERS_ORDERHELPER_H
        #define ADMIN_TAGHELPERS_ORDERHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class HttpServletRequest;
class PageContext;
class StoreFrontData;
class StoreFrontFactory;
class StoreFrontInterface;
class Order;
class OrderInterface;
class OrderProcessorUtil;
class PaymentGatewayData;
class PaymentGatewayInterface;
class BasicPaymentType;
class PaymentGatewayEntity;
class PaymentGatewayEntityFactory;
class WeblisketSession;
class LogUtil;
class StringMaker;
class StringValidationUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelper.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OrderHelper: public TagHelper {

    /*protected*/ public: LogUtil* logUtil;

    private: WeblisketSession* weblisketSession;

    private: StoreFrontInterface* storeFrontInterface;

    private: HashMap<Object*, Object*>* propertiesHashMap;

    private: PageContext* pageContext;

    private: HttpServletRequest* request;

public: OrderHelper(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

    public: bool setPaymentGateway();

    public: std::string process();

};

            


        #endif //ADMIN_TAGHELPERS_ORDERHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_ORDERHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_ORDERHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/Order.h>)
#include <org/allbinary/business/user/commerce/inventory/order/Order.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderProcessorUtil.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderProcessorUtil.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>)
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntity.h>)
#include <org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntity.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSession.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include("admin/taghelpers/TagHelper.h")
#include "admin/taghelpers/TagHelper.h"
#endif

        #endif
    
