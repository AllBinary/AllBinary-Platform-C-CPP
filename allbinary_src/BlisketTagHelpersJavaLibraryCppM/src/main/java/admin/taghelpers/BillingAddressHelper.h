
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

            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/installer/Portion.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/data/tables/user/address/billing/BillingAddressesEntity.h>

      
#include <org/allbinary/data/tables/user/address/billing/BillingAddressesEntityFactory.h>

      
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlTableUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Table.h"

class BillingAddressHelper: public Table {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const stringUtil: StringUtil = StringUtil.getInstance()!;

    private: weblisketSession: WeblisketSession;

    private: request: HttpServletRequest;

    private: userName: string;

    private: streetAddress: StreetAddress;

    private: const portion: Portion;

public constructor (HashMap<any, any> hashMap, PageContext pageContext);

    getAddressForm();

    public string drop();

    public string create();

    public string restore();

    public string backup();

    public string insert();

    public string update();

    string setToShippingAddress();

    public string delete();

    public string set();

};

            


        #endif //ADMIN_TAGHELPERS_BILLINGADDRESSHELPER_H
