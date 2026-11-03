
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2011 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *  ` 
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_XMLOPTIONITEMSENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_XMLOPTIONITEMSENTITY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class EntryData;
class InventoryDbInitInfo;
class BasicItemData;
class XmlOptionItemData;
class LogUtil;
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/commerce/inventory/item/options/XmlOptionItemsEntityInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class XmlOptionItemsEntity: public AbSqlBean, public virtual XmlOptionItemsEntityInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: BasicItemData* basicItemData;

    /*protected*/ public: const std::string tableName = "xmloptionitems";

public: XmlOptionItemsEntity();

    public: void insert(BasicArrayList* values);

    public: void delete_(std::string value);

    public: std::string createTableStatement();

    public: std::string createTable();

    public: void update(HashMap<Object*, Object*>* updatedValues);

    public: std::string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_XMLOPTIONITEMSENTITY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_XMLOPTIONITEMSENTITY_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_XMLOPTIONITEMSENTITY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/init/db/InventoryDbInitInfo.h>)
#include <org/allbinary/business/init/db/InventoryDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>)
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/option/XmlOptionItemData.h>)
#include <org/allbinary/business/user/commerce/inventory/item/option/XmlOptionItemData.h>
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
#if __has_include("org/allbinary/data/tables/user/commerce/inventory/item/options/XmlOptionItemsEntityInterface.h")
#include "org/allbinary/data/tables/user/commerce/inventory/item/options/XmlOptionItemsEntityInterface.h"
#endif

        #endif
    
