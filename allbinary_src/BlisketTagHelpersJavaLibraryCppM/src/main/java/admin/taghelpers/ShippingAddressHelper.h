
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
        



        #ifndef ADMIN_TAGHELPERS_SHIPPINGADDRESSHELPER_H
        #define ADMIN_TAGHELPERS_SHIPPINGADDRESSHELPER_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/installer/Portion.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/data/tables/user/address/billing/BillingAddressesEntityFactory.h>

      
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h>

      
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlTableUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/BasicTable.h"

class ShippingAddressHelper: public BasicTable {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: StringUtil* stringUtil = StringUtil::getInstance();

    private: WeblisketSession* weblisketSession;

    private: HttpServletRequest* request;

    private: std::string userName;

    private: StreetAddress* streetAddress;

    private: Portion* portion;

public: ShippingAddressHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

    private: void getAddressForm();

    public: std::string drop();

    public: std::string create();

    public: std::string restore();

    public: std::string backup();

    public: std::string insert();

    public: std::string update();

    private: std::string setToBillingAddress();

    public: std::string delete_();

    public: std::string set();

};

            


        #endif //ADMIN_TAGHELPERS_SHIPPINGADDRESSHELPER_H
