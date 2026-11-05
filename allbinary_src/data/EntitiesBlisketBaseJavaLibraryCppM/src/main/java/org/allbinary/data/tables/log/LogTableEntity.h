
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_LOG_LOGTABLEENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_LOG_LOGTABLEENTITY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class EntryData;
class LogDbInitInfo;
class AbeHttpRequestInfoData;
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
class StringMaker;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/log/LogTableEntityInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LogTableEntity: public AbSqlBean, public virtual LogTableEntityInterface {

    private: const std::string tableName = "log";

public: LogTableEntity();

    public: std::string createTableStatement();

    public: std::string createTable();

    public: void deleteWhere(std::string key, std::string value);

    public: void insert(BasicArrayList* values);

    public: std::string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_LOG_LOGTABLEENTITY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_LOG_LOGTABLEENTITY_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_LOG_LOGTABLEENTITY_H_COMPLETE
        #if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/init/db/LogDbInitInfo.h>)
#include <org/allbinary/business/init/db/LogDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/AbeHttpRequestInfoData.h>)
#include <org/allbinary/logic/communication/http/request/AbeHttpRequestInfoData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbSqlBean.h>)
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/data/tables/log/LogTableEntityInterface.h")
#include "org/allbinary/data/tables/log/LogTableEntityInterface.h"
#endif

        #endif
    
