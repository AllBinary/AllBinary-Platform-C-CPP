
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
        



        #ifndef VIEWS_ADMIN_INVENTORY_LISTINGS_PRODUCTLISTING_H
        #define VIEWS_ADMIN_INVENTORY_LISTINGS_PRODUCTLISTING_H

        
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
#include <java/util/HashSet.h>
#include <java/util/Set.h>
class BasicArrayList;
class BasicArrayListD;
class StoreFrontInterface;
class BasicItemData;
class StoreFrontsEntity;
class StaticPagesEntity;
class InventoryEntity;
class GLOBALS2;
class URLGLOBALS;
class StdUtil;
class LogUtil;
class SearchParams;
class SearchRequest;
class AbDataOutputStream;
class DataOutputStreamFactory;
class InputOutputTypeData;
class StreamUtil;
class AbFile;
class Directory;
class AbPath;
class AbPathData;
class SpecialCharacterUtil;
class StringMaker;
class StringUtil;
class Replace;
class UniqueTokens;
class AbeClientInformationInterface;
class ServiceClientInformationInterfaceFactory;
class CommonPhoneStrings;
class CommonSeps;
class BasicArrayList;
class InventoryColumnUtil;
class InventorySearchUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/admin/inventory/listings/ProductListingInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ProductListing
            : public virtual Object
        , public virtual ProductListingInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: Directory* directory;

    /*protected*/ public: BasicItemData* basicItemData;

    private: StoreFrontsEntity* storeFronts;

    private: StaticPagesEntity* staticPages;

    private: InventoryEntity* inventory;

    private: SearchRequest* searchRequest;

    private: const std::string INVENTORY = ".InventoryView";

public: ProductListing(SearchRequest* searchRequest);

                //@Throws(Exception.constructor)
            
    private: HashSet* getHashSet(StoreFrontInterface* storeFront);

                //@Throws(Exception.constructor)
            
    private: void savePage(std::string file, std::string data);

                //@Throws(Exception.constructor)
            
    private: void create(std::string keywordData, HashMap<Object*, Object*>* keywordFilenameHashMap, BasicArrayList* vector, AbPath* staticPath);

    private: void addStaticPageInfoToDatabase(StoreFrontInterface* storeFront, HashMap<Object*, Object*>* keywordFilenameHashMap);

                //@Throws(Exception.constructor)
            
    public: std::string generateAll();

                //@Throws(Exception.constructor)
            
    public: std::string generateAll(std::string storeName);

};

            


        #endif //VIEWS_ADMIN_INVENTORY_LISTINGS_PRODUCTLISTING_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_INVENTORY_LISTINGS_PRODUCTLISTING_H_COMPLETE)
        #define VIEWS_ADMIN_INVENTORY_LISTINGS_PRODUCTLISTING_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/HashSet.h>)
#include <java/util/HashSet.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>)
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>
#endif
#if __has_include(<org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntity.h>)
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntity.h>
#endif
#if __has_include(<org/allbinary/data/tables/staticpages/StaticPagesEntity.h>)
#include <org/allbinary/data/tables/staticpages/StaticPagesEntity.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>
#endif
#if __has_include(<org/allbinary/globals/GLOBALS2.h>)
#include <org/allbinary/globals/GLOBALS2.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
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
#if __has_include(<org/allbinary/logic/io/AbDataOutputStream.h>)
#include <org/allbinary/logic/io/AbDataOutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/DataOutputStreamFactory.h>)
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>
#endif
#if __has_include(<org/allbinary/logic/io/InputOutputTypeData.h>)
#include <org/allbinary/logic/io/InputOutputTypeData.h>
#endif
#if __has_include(<org/allbinary/logic/io/StreamUtil.h>)
#include <org/allbinary/logic/io/StreamUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/directory/Directory.h>)
#include <org/allbinary/logic/io/file/directory/Directory.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/SpecialCharacterUtil.h>)
#include <org/allbinary/logic/string/SpecialCharacterUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/regex/replace/Replace.h>)
#include <org/allbinary/logic/string/regex/replace/Replace.h>
#endif
#if __has_include(<org/allbinary/logic/string/tokens/UniqueTokens.h>)
#include <org/allbinary/logic/string/tokens/UniqueTokens.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>)
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<views/generic/inventory/InventoryColumnUtil.h>)
#include <views/generic/inventory/InventoryColumnUtil.h>
#endif
#if __has_include(<views/generic/inventory/InventorySearchUtil.h>)
#include <views/generic/inventory/InventorySearchUtil.h>
#endif
#if __has_include("views/admin/inventory/listings/ProductListingInterface.h")
#include "views/admin/inventory/listings/ProductListingInterface.h"
#endif

        #endif
    
