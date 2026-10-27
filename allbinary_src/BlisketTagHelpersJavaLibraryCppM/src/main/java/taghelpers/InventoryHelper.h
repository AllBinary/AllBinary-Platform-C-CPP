
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
        



        #ifndef TAGHELPERS_INVENTORYHELPER_H
        #define TAGHELPERS_INVENTORYHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class HttpServletRequest;
class HttpServletResponse;
class PageContext;
#include <admin/taghelpers/TagHelper.h>
class StoreFrontData;
class StoreFrontFactory;
class StoreFrontInterface;
class StreetAddress;
class BasicItemData;
class AcceptableResponseGenerator;
class WeblisketSession;
class LogUtil;
class SearchParams;
class SearchRequest;
class StringUtil;
class TransformInfoData;
class InventoryViewFactory;
class InventoryViewSearchInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InventoryHelper: public TagHelper {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: BasicItemData* basicItemData;

    private: WeblisketSession* weblisketSession;

    private: HttpServletResponse* response;

    private: HttpServletRequest* request;

    private: StreetAddress* streetAddress;

    private: std::string id;

    private: SearchRequest* searchRequest;

public: InventoryHelper(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

    private: void getFormData();

    public: std::string viewSummary();

    public: std::string search();

};

            


        #endif //TAGHELPERS_INVENTORYHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(TAGHELPERS_INVENTORYHELPER_H_COMPLETE)
        #define TAGHELPERS_INVENTORYHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletResponse.h>)
#include <javax/servlet/http/HttpServletResponse.h>
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
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>)
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/AcceptableResponseGenerator.h>)
#include <org/allbinary/logic/communication/http/AcceptableResponseGenerator.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSession.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/search/SearchParams.h>)
#include <org/allbinary/logic/control/search/SearchParams.h>
#endif
#if __has_include(<org/allbinary/logic/control/search/SearchRequest.h>)
#include <org/allbinary/logic/control/search/SearchRequest.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoData.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>
#endif
#if __has_include(<views/admin/inventory/listings/InventoryViewFactory.h>)
#include <views/admin/inventory/listings/InventoryViewFactory.h>
#endif
#if __has_include(<views/admin/inventory/listings/InventoryViewSearchInterface.h>)
#include <views/admin/inventory/listings/InventoryViewSearchInterface.h>
#endif

        #endif
    
