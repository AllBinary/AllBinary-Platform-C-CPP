
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
        



        #ifndef ADMIN_TAGHELPERS_BASKETREQUESTHELPER_H
        #define ADMIN_TAGHELPERS_BASKETREQUESTHELPER_H

            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketData.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TagHelper.h"

class BasketRequestHelper: public TagHelper {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const weblisketSession: WeblisketSession;

    private: const storeFrontInterface: StoreFrontInterface;

    private: const propertiesHashMap: HashMap<any, any>;

    private: const pageContext: PageContext;

    private: const request: HttpServletRequest;

    private: id: string;

    private: num: string;

    private: const MAX: int32_t = 200;

public constructor (HashMap<any, any> propertiesHashMap, PageContext pageContext);

    getFormData();

    public Boolean addItemToBasket();

    public Boolean removeItemFromBasket();

    public Boolean adjustBasket();

};

            


        #endif //ADMIN_TAGHELPERS_BASKETREQUESTHELPER_H
