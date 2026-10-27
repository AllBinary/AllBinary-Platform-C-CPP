
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class UserDbInitInfo;
class StdUtil;
class LogUtil;
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/generator/IdGeneratorEntityInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class IdGeneratorEntity: public AbSqlBean, public IdGeneratorEntityInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: const std::string tableName = "idgenerator";

    private: std::string tableData;

    public: const std::string NAME = "NAME";

    public: const std::string VALUE = "VALUE";

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_GENERATOR_IDGENERATORENTITY_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_GENERATOR_IDGENERATORENTITY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/init/db/UserDbInitInfo.h>)
#include <org/allbinary/business/init/db/UserDbInitInfo.h>
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
#if __has_include("org/allbinary/data/tables/generator/IdGeneratorEntityInterface.h")
#include "org/allbinary/data/tables/generator/IdGeneratorEntityInterface.h"
#endif

        #endif
    
