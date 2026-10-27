
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_STATUS_ORDERSTATUSEMAIL_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_STATUS_ORDERSTATUSEMAIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class StoreFrontFactory;
class StoreFrontInterface;
class UserInterface;
class OrderHistory;
class UserEntityFactory;
class LogUtil;
class UserEmailEventNameData;
class UserEmailEventHandler;
class AdminUserEmailEventHandlerSingletons;
class StoreAdminUserEmailEventHandlerSingletons;
class UserEmailEventHandlerSingletons;
class AdminEmailInfo;
class BasicEmailInfo;
class EmailInfo;
class StoreEmailInfo;
class AbeClientInformationInterface;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OrderStatusEmail
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: AbeClientInformationInterface* abeClientInformation;

    private: OrderHistory* orderHistory;

    private: StoreFrontInterface* storeFrontInterface;

    private: UserInterface* user;

public: OrderStatusEmail(AbeClientInformationInterface* abeClientInformation, OrderHistory* orderHistory);

                //@Throws(Exception.constructor)
            
    public: void process();

                //@Throws(Exception.constructor)
            
    private: void notifyStoreAdmin();

                //@Throws(Exception.constructor)
            
    private: void notifyUser();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_STATUS_ORDERSTATUSEMAIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_STATUS_ORDERSTATUSEMAIL_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_STATUS_ORDERSTATUSEMAIL_H_COMPLETE
        #if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/UserInterface.h>)
#include <org/allbinary/business/user/UserInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/UserEntityFactory.h>)
#include <org/allbinary/data/tables/user/UserEntityFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>)
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>)
#include <org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h>)
#include <org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/event/handler/factory/StoreAdminUserEmailEventHandlerSingletons.h>)
#include <org/allbinary/logic/communication/smtp/event/handler/factory/StoreAdminUserEmailEventHandlerSingletons.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/event/handler/factory/UserEmailEventHandlerSingletons.h>)
#include <org/allbinary/logic/communication/smtp/event/handler/factory/UserEmailEventHandlerSingletons.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h>)
#include <org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>)
#include <org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/info/EmailInfo.h>)
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/info/StoreEmailInfo.h>)
#include <org/allbinary/logic/communication/smtp/info/StoreEmailInfo.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
