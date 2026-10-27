
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
        



        #ifndef ADMIN_TAGHELPERS_UPDATEORDERHELPER_H
        #define ADMIN_TAGHELPERS_UPDATEORDERHELPER_H

        
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
class StoreFrontData;
class EntryData;
class UserData;
class BillingAddressData;
class ShippingAddressData;
class OrderData;
class OrderHistoryData;
class PaymentData;
class ShippingMethodData;
class OrderHistoryEntityFactory;
class StdUtil;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelper.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UpdateOrderHelper: public TagHelper {

    /*protected*/ public: LogUtil* logUtil;

    private: HttpServletRequest* request;

    private: std::string entryId;

    private: std::string orderId;

    private: std::string userName;

    private: std::string storeName;

    private: std::string shipDate;

    private: std::string orderDate;

    private: std::string transDate;

    private: std::string cancelDate;

    private: std::string status;

    private: std::string paymentMethod;

    private: std::string name;

    private: std::string type;

    private: std::string expiration;

    private: std::string number;

    private: std::string encryption;

    private: std::string billingName;

    private: std::string billingStreet;

    private: std::string billingCity;

    private: std::string billingState;

    private: std::string billingCode;

    private: std::string billingCountry;

    private: std::string shippingName;

    private: std::string shippingStreet;

    private: std::string shippingCity;

    private: std::string shippingState;

    private: std::string shippingCode;

    private: std::string shippingCountry;

    private: std::string shippingMethodName;

    private: std::string subTotal;

    private: std::string shippingCost;

    private: std::string tax;

    private: std::string total;

    private: std::string special;

    private: std::string userComment;

    private: std::string userCancelComment;

    private: std::string storeComment;

    private: std::string storeCancelComment;

public: UpdateOrderHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

    private: void getFormData();

    public: std::string update();

};

            


        #endif //ADMIN_TAGHELPERS_UPDATEORDERHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_UPDATEORDERHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_UPDATEORDERHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
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
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/user/UserData.h>)
#include <org/allbinary/business/user/UserData.h>
#endif
#if __has_include(<org/allbinary/business/user/address/BillingAddressData.h>)
#include <org/allbinary/business/user/address/BillingAddressData.h>
#endif
#if __has_include(<org/allbinary/business/user/address/ShippingAddressData.h>)
#include <org/allbinary/business/user/address/ShippingAddressData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderData.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/PaymentData.h>)
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>)
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("admin/taghelpers/TagHelper.h")
#include "admin/taghelpers/TagHelper.h"
#endif

        #endif
    
