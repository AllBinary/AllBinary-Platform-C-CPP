
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

            #include "java/lang/Exception.h"
        
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const BasicItemData basicItemData = BasicItemData::getInstance();

    private: WeblisketSession weblisketSession;

    private: const StoreFrontInterface storeFrontInterface;

    private: HashMap<Object*, Object*> propertiesHashMap;

    private: PageContext pageContext;

    private: HttpServletRequest request;

    private: std::string id;

    private: std::string num;

    private: const int32_t MAX = 200;

public: BasketRequestHelper(HashMap<Object*, Object*> propertiesHashMap, PageContext pageContext);

    private: void getFormData();

    public: Boolean addItemToBasket();

    public: Boolean removeItemFromBasket();

    public: Boolean adjustBasket();

};

            


        #endif //ADMIN_TAGHELPERS_BASKETREQUESTHELPER_H
