
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
        



        #ifndef VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHPRODUCTUTIL_H
        #define VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHPRODUCTUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayListD;
class BasicItemView;
class ItemInterface;
class InventoryEntity;
class InventoryEntityFactory;
class XmlDocumentHelper;
class LogUtil;
class SearchRequest;
class AbeClientInformationInterface;
class StoreTransformer;
class TransformDocumentInterface;
class TransformStoreDocumentFactory;
class TransformInfoHttpSearch;
class TransformInfoInterface;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InventorySearchProductUtil
            : public virtual Object
         {

    private: static InventorySearchProductUtil* instance_owner();
    private: static InventorySearchProductUtil* instance;

    public: static InventorySearchProductUtil* getInstance();


            
    public: InventorySearchProductUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: const std::string ITEM_NOT_FOUND = "Item Not Found.";

                //@Throws(Exception.constructor)
            
    public: std::string getProduct(AbeClientInformationInterface* abeClientInformation, SearchRequest* searchRequest, std::string product);

};

            


        #endif //VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHPRODUCTUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHPRODUCTUTIL_H_COMPLETE)
        #define VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHPRODUCTUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/BasicItemView.h>)
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemView.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>)
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/search/SearchRequest.h>)
#include <org/allbinary/logic/control/search/SearchRequest.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/StoreTransformer.h>)
#include <org/allbinary/logic/visual/transform/StoreTransformer.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>)
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/data/TransformStoreDocumentFactory.h>)
#include <org/allbinary/logic/visual/transform/data/TransformStoreDocumentFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpSearch.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpSearch.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
