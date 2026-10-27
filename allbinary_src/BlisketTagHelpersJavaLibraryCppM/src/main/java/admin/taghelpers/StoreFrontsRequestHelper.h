
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
        



        #ifndef ADMIN_TAGHELPERS_STOREFRONTSREQUESTHELPER_H
        #define ADMIN_TAGHELPERS_STOREFRONTSREQUESTHELPER_H

        
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
class StoreFront;
class StoreFrontInterface;
class Portion;
class StoreFrontsEntityFactory;
class WeblisketSession;
class LogUtil;
class UserEmailEventNameData;
class UserEmailEventHandler;
class AdminUserEmailEventHandlerSingletons;
class StoreAdminUserEmailEventHandlerSingletons;
class AdminEmailInfo;
class BasicEmailInfo;
class EmailInfo;
class StoreEmailInfo;
class StringMaker;
class AbeClientInformationInterface;
class ServiceClientInformationInterfaceFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/ModifyTable.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreFrontsRequestHelper: public ModifyTable {

    /*protected*/ public: LogUtil* logUtil;

    private: AbeClientInformationInterface* abeClientInformation;

    private: PageContext* pageContext;

    private: HttpServletRequest* request;

    private: WeblisketSession* weblisketSession;

    private: std::string storeName;

    private: StoreFrontInterface* modifyingStoreFrontInterface;

    private: Portion* portion;

public: StoreFrontsRequestHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

                //@Throws(Exception.constructor)
            
    private: void getFormData();

    public: std::string update();

                //@Throws(Exception.constructor)
            
    public: void sendStoreCreatedEmails();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string install();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string insert();

    public: std::string delete_();

};

            


        #endif //ADMIN_TAGHELPERS_STOREFRONTSREQUESTHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_STOREFRONTSREQUESTHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_STOREFRONTSREQUESTHELPER_H_COMPLETE
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
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFront.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/installer/Portion.h>)
#include <org/allbinary/business/installer/Portion.h>
#endif
#if __has_include(<org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h>)
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSession.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>
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
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>)
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>
#endif
#if __has_include("admin/taghelpers/ModifyTable.h")
#include "admin/taghelpers/ModifyTable.h"
#endif

        #endif
    
