
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/HashSet.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntity.h>

      
#include <org/allbinary/data/tables/staticpages/StaticPagesEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/search/SearchParams.h>

      
#include <org/allbinary/logic/control/search/SearchRequest.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/InputOutputTypeData.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/SpecialCharacterUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/logic/string/tokens/UniqueTokens.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <views/generic/inventory/InventoryColumnUtil.h>

      
#include <views/generic/inventory/InventorySearchUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProductListingInterface.h"

class ProductListing
            : public Object
        : public ProductListingInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const Directory directory = Directory::getInstance();

    protected: const BasicItemData basicItemData = BasicItemData::getInstance();

    private: StoreFrontsEntity storeFronts;

    private: StaticPagesEntity staticPages;

    private: InventoryEntity inventory;

    private: SearchRequest searchRequest;

    private: const std::string INVENTORY = ".InventoryView";

public: ProductListing(SearchRequest searchRequest);

                //@Throws(Exception.constructor)
            
    private: HashSet getHashSet(StoreFrontInterface storeFront);

                //@Throws(Exception.constructor)
            
    private: void savePage(std::string file, std::string data);

                //@Throws(Exception.constructor)
            
    private: void create(std::string keywordData, HashMap<Object*, Object*> keywordFilenameHashMap, BasicArrayList vector, AbPath staticPath);

    private: void addStaticPageInfoToDatabase(StoreFrontInterface storeFront, HashMap<Object*, Object*> keywordFilenameHashMap);

                //@Throws(Exception.constructor)
            
    public: std::string generateAll();

                //@Throws(Exception.constructor)
            
    public: std::string generateAll(std::string storeName);

};

            


        #endif //VIEWS_ADMIN_INVENTORY_LISTINGS_PRODUCTLISTING_H
