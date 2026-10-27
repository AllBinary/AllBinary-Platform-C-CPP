
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_GENERATOR_IDGENERATORENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_GENERATOR_IDGENERATORENTITY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/generator/IdGeneratorEntityInterface.h"

class IdGeneratorEntity: public AbSqlBean, public IdGeneratorEntityInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: const std::string tableName = "idgenerator";

    private: std::string tableData;

    const std::string NAME = "NAME";

    const std::string VALUE = "VALUE";

public: IdGeneratorEntity();

                //@Throws(Exception.constructor)
            
    public: int64_t get(std::string name);

    public: void insert(BasicArrayList* values);

    public: void delete_(std::string value);

    public: void update(std::string name, int64_t value);

    public: void update(HashMap<Object*, Object*>* hashMap);

    public: std::string createTable();

    public: std::string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_GENERATOR_IDGENERATORENTITY_H
