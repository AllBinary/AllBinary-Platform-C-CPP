
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
        



        #ifndef ADMIN_TAGHELPERS_PERMISSIONITEMSREQUESTHELPER_H
        #define ADMIN_TAGHELPERS_PERMISSIONITEMSREQUESTHELPER_H

            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/permission/PermissionItemData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/permissions/PermissionItemsEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ModifyTable.h"

class PermissionItemsRequestHelper: public ModifyTable {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: request: HttpServletRequest;

    private: id: string;

    private: enabled: string;

    private: number: string;

    private: who: string;

    private: what: string;

    private: type: string;

    private: remoteAddr: string;

    private: startTime: string;

    private: endTime: string;

    private: price: string;

    private: timeEntered: string;

    private: lastModified: string;

public constructor (HashMap<any, any> hashMap, PageContext pageContext);

    public getFormData();

    HashMap<any, any> getHashMap();

    public string insert();

    public string delete();

    public string update();

};

            


        #endif //ADMIN_TAGHELPERS_PERMISSIONITEMSREQUESTHELPER_H
