
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
        



        #ifndef VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHUTIL_H
        #define VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>
class BasicArrayListD;
class StoreFrontInterface;
class InventoryData;
class BasketData;
class BasicItemData;
class BasicItemView;
class ItemInterface;
class InventoryEntity;
class InventoryEntityFactory;
class ModDomHelper;
class XmlDocumentHelper;
class LogUtil;
class SearchData;
class SearchParams;
class SearchRequest;
class StringMaker;
class StringValidationUtil;
class Replace;
class AbeClientInformationInterface;
class StoreTransformer;
class TransformDocumentInterface;
class TransformStoreDocumentFactory;
class TransformInfoHttpSearch;
class TransformInfoInterface;
class CommonPhoneStrings;
class CommonSeps;
class CommonStrings;
class BasicArrayList;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InventoryColumnUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InventorySearchUtil
            : public virtual Object
         {

    private: static InventorySearchUtil* instance_owner();
    private: static InventorySearchUtil* instance;

    public: static InventorySearchUtil* getInstance();


            
    public: InventorySearchUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: CommonPhoneStrings* commonPhoneStrings;

    /*protected*/ public: BasicItemData* basicItemData;

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getBasicItemIdColumn(SearchRequest* searchRequest);

                //@Throws(Exception.constructor)
            
    private: std::string getNoResults(TransformDocumentInterface* viewDocumentInterface, Node* inventoryNode);

    public: std::vector<std::string> search(AbeClientInformationInterface* abeClientInformation, SearchRequest* searchRequest, BasicArrayList* column);

};

            


        #endif //VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHUTIL_H_COMPLETE)
        #define VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHUTIL_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/InventoryData.h>)
#include <org/allbinary/business/user/commerce/inventory/InventoryData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/basket/BasketData.h>)
#include <org/allbinary/business/user/commerce/inventory/basket/BasketData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>)
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>
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
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/search/SearchData.h>)
#include <org/allbinary/logic/control/search/SearchData.h>
#endif
#if __has_include(<org/allbinary/logic/control/search/SearchParams.h>)
#include <org/allbinary/logic/control/search/SearchParams.h>
#endif
#if __has_include(<org/allbinary/logic/control/search/SearchRequest.h>)
#include <org/allbinary/logic/control/search/SearchRequest.h>
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
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("views/generic/inventory/InventoryColumnUtil.h")
#include "views/generic/inventory/InventoryColumnUtil.h"
#endif

        #endif
    
