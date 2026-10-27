
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
        



        #ifndef TAGHELPERS_ORDERHISTORYHELPER_H
        #define TAGHELPERS_ORDERHISTORYHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class HttpServletRequest;
class PageContext;
#include <admin/taghelpers/TagHelper.h>
class StoreFrontData;
class StoreFrontFactory;
class StoreFrontInterface;
class StreetAddress;
class OrderData;
class OrderHistoryData;
class OrderHistoryFactory;
class OrderHistoryInterface;
class ShippingMethodData;
class OrderHistoryEntityFactory;
class OrderHistoryEntityInterface;
class WeblisketSession;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OrderHistoryHelper: public TagHelper {

    /*protected*/ public: LogUtil* logUtil;

    private: WeblisketSession* weblisketSession;

    private: StoreFrontInterface* storeFrontInterface;

    private: HashMap<Object*, Object*>* propertiesHashMap;

    private: PageContext* pageContext;

    private: HttpServletRequest* request;

    private: StreetAddress* streetAddress;

    private: std::string id;

    private: std::string groupId;

    private: std::string status;

    private: std::string newStatus;

public: OrderHistoryHelper(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

    private: void getFormData();

    public: std::string setOrderStatus();

};

            


        #endif //TAGHELPERS_ORDERHISTORYHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(TAGHELPERS_ORDERHISTORYHELPER_H_COMPLETE)
        #define TAGHELPERS_ORDERHISTORYHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<admin/taghelpers/TagHelper.h>)
#include <admin/taghelpers/TagHelper.h>
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
#if __has_include(<org/allbinary/business/user/address/StreetAddress.h>)
#include <org/allbinary/business/user/address/StreetAddress.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderData.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderHistoryFactory.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderHistoryInterface.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>)
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSession.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif

        #endif
    
