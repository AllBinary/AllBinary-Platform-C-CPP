
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
        



        #ifndef ADMIN_TAGHELPERS_BILLINGADDRESSHELPER_H
        #define ADMIN_TAGHELPERS_BILLINGADDRESSHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>
class HttpServletRequest;
class PageContext;
class Portion;
class UserData;
class StreetAddress;
class BillingAddressesEntity;
class BillingAddressesEntityFactory;
class ShippingAddressesEntityFactory;
class WeblisketSession;
class WeblisketSessionData;
class LogUtil;
class AbSqlTableUtil;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/Table.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BillingAddressHelper: public Table {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: StringUtil* stringUtil;

    private: WeblisketSession* weblisketSession;

    private: HttpServletRequest* request;

    private: std::string userName;

    private: StreetAddress* streetAddress;

    private: Portion* portion;

public: BillingAddressHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

    private: void getAddressForm();

    public: std::string drop();

    public: std::string create();

    public: std::string restore();

    public: std::string backup();

    public: std::string insert();

    public: std::string update();

    private: std::string setToShippingAddress();

    public: std::string delete_();

    public: std::string set();

};

            


        #endif //ADMIN_TAGHELPERS_BILLINGADDRESSHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_BILLINGADDRESSHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_BILLINGADDRESSHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/installer/Portion.h>)
#include <org/allbinary/business/installer/Portion.h>
#endif
#if __has_include(<org/allbinary/business/user/UserData.h>)
#include <org/allbinary/business/user/UserData.h>
#endif
#if __has_include(<org/allbinary/business/user/address/StreetAddress.h>)
#include <org/allbinary/business/user/address/StreetAddress.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/address/billing/BillingAddressesEntity.h>)
#include <org/allbinary/data/tables/user/address/billing/BillingAddressesEntity.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/address/billing/BillingAddressesEntityFactory.h>)
#include <org/allbinary/data/tables/user/address/billing/BillingAddressesEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntityFactory.h>)
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntityFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSession.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbSqlTableUtil.h>)
#include <org/allbinary/logic/communication/sql/AbSqlTableUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("admin/taghelpers/Table.h")
#include "admin/taghelpers/Table.h"
#endif

        #endif
    
