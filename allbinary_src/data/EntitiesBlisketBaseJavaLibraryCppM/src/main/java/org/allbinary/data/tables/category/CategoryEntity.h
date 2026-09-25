
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_CATEGORY_CATEGORYENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_CATEGORY_CATEGORYENTITY_H

            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/category/Category.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryFactoryInterface.h>

      
#include <org/allbinary/business/init/db/InventoryDbInitInfo.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryEntityInterface.h"

class CategoryEntity: public AbSqlBean, public CategoryEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const std::string tableName = "categories";

public: CategoryEntity(CategoryFactoryInterface categoryFactoryInterface);

public: CategoryEntity();

    public: void insert(Category category);

    public: void delete_(std::string value);

    public: std::string createTableStatement();

    public: std::string createTable();

    public: void update(HashMap<any, any> updatedValues);

    public: std::string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_CATEGORY_CATEGORYENTITY_H
