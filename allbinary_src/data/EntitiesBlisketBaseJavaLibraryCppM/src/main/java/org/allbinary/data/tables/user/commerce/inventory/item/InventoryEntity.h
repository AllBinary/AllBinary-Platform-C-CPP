
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_INVENTORYENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_INVENTORYENTITY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class StoreFrontInterface;
class EntryData;
class InventoryDbInitInfo;
class BasicItem;
class BasicItemData;
class ItemInterface;
class MoneyException;
class StdUtil;
class LogUtil;
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
class StringMaker;
class StringValidationUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InventoryEntity: public AbSqlBean, public virtual InventoryEntityInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: BasicItemData* basicItemData;

    private: const std::string tableName = "basicinventory";

public: InventoryEntity();

    public: void insert(BasicArrayList* values);

    public: void delete_(std::string value);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getItems(StoreFrontInterface* storeFrontInterface);

                //@Throws(MoneyException.constructor)
            
    public: ItemInterface* getItem(std::string id);

    public: std::string getWeight(std::string id);

    public: std::string createTableStatement();

    public: std::string createTable();

    public: void update(HashMap<Object*, Object*>* updatedValues);

    public: std::string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_INVENTORYENTITY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_INVENTORYENTITY_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_INVENTORYENTITY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
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
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/init/db/InventoryDbInitInfo.h>)
#include <org/allbinary/business/init/db/InventoryDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/BasicItem.h>)
#include <org/allbinary/business/user/commerce/inventory/item/BasicItem.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>)
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>)
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/MoneyException.h>)
#include <org/allbinary/business/user/commerce/money/MoneyException.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbSqlBean.h>)
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include("org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityInterface.h")
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityInterface.h"
#endif

        #endif
    
