
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_CONTEXT_MODULE_STOREFRONTS_STOREFRONTSENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_CONTEXT_MODULE_STOREFRONTS_STOREFRONTSENTITY_H

            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreFrontsEntityInterface.h"

class StoreFrontsEntity: public AbSqlBean, public StoreFrontsEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const std::string tableName = "storefronts";

public: StoreFrontsEntity();

    public: void insert(BasicArrayList values);

    public: void delete_(std::string value);

                //@Throws(Exception.constructor)
            
    public: StoreFront getStoreFrontInterface(std::string name);

    public: BasicArrayList getStoreFrontNames();

    public: void update(HashMap<Object*, Object*> updatedValues);

    public: std::string createTableStatement();

    public: std::string createTable();

    public: std::string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_CONTEXT_MODULE_STOREFRONTS_STOREFRONTSENTITY_H
