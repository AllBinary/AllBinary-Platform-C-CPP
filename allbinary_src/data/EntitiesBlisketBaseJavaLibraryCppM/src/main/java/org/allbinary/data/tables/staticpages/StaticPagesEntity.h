
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_STATICPAGES_STATICPAGESENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_STATICPAGES_STATICPAGESENTITY_H

            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/init/db/StaticPagesDbInitInfo.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/control/search/SearchData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StaticPagesEntityInterface.h"

class StaticPagesEntity: public AbSqlBean, public StaticPagesEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const BasicItemData basicItemData = BasicItemData::getInstance();

    private: const std::string TABLENAME = "staticpages";

public: StaticPagesEntity();

    public: void insert(BasicArrayList values);

    public: std::string getFile(std::string store, std::string keywords);

    public: void delete_(std::string keywords);

    public: std::string dropTable();

    public: void update(HashMap<Object*, Object*> updatedValues);

    public: std::string createTableStatement();

    public: std::string createTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_STATICPAGES_STATICPAGESENTITY_H
