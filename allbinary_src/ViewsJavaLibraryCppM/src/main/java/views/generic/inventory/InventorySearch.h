
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
        



        #ifndef VIEWS_GENERIC_INVENTORY_INVENTORYSEARCH_H
        #define VIEWS_GENERIC_INVENTORY_INVENTORYSEARCH_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class StoreFrontInterface;
class BasicItemData;
class StaticPagesEntity;
class LogUtil;
class SearchParams;
class SearchRequest;
class InputOutputTypeData;
class AbPathData;
class StringMaker;
class StringValidationUtil;
class Replace;
class AbeClientInformationInterface;
class ServiceClientInformationInterfaceFactory;
class CommonSeps;
class CommonStrings;
#include <views/admin/inventory/listings/InventoryViewSearchInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InventorySearchUtil;
class InventorySearchProductUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InventorySearch
            : public virtual Object
        , public InventoryViewSearchInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    /*protected*/ public: BasicItemData* basicItemData;

    private: SearchRequest* searchRequest;

public: InventorySearch(SearchRequest* searchRequest);

                //@Throws(Exception.constructor)
            
    public: std::string searchSingleStaticPage();

                //@Throws(Exception.constructor)
            
    public: std::string searchSingleDynamicPage();

                //@Throws(Exception.constructor)
            
    public: std::vector<std::string> search();

                //@Throws(Exception.constructor)
            
    public: std::string getProduct(std::string product);

};

            


        #endif //VIEWS_GENERIC_INVENTORY_INVENTORYSEARCH_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_GENERIC_INVENTORY_INVENTORYSEARCH_H_COMPLETE)
        #define VIEWS_GENERIC_INVENTORY_INVENTORYSEARCH_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>)
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>
#endif
#if __has_include(<org/allbinary/data/tables/staticpages/StaticPagesEntity.h>)
#include <org/allbinary/data/tables/staticpages/StaticPagesEntity.h>
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
#if __has_include(<org/allbinary/logic/io/InputOutputTypeData.h>)
#include <org/allbinary/logic/io/InputOutputTypeData.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/regex/replace/Replace.h>)
#include <org/allbinary/logic/string/regex/replace/Replace.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>)
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<views/admin/inventory/listings/InventoryViewSearchInterface.h>)
#include <views/admin/inventory/listings/InventoryViewSearchInterface.h>
#endif
#if __has_include("views/generic/inventory/InventorySearchUtil.h")
#include "views/generic/inventory/InventorySearchUtil.h"
#endif
#if __has_include("views/generic/inventory/InventorySearchProductUtil.h")
#include "views/generic/inventory/InventorySearchProductUtil.h"
#endif

        #endif
    
