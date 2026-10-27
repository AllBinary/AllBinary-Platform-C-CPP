
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLE_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class DbConnectionInfo;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/sql/AbSqlBasic.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbSqlTable: public AbSqlBasic {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string tableName;

    private: const std::string METHOD_CREATED_TABLE = "createTable()";

    private: const std::string METHOD_DROP_TABLE = "dropTable()";

    private: const std::string TABLE_CREATION_SUCCESS = "Table Creation Successful: ";

    private: const std::string DROPPED_SUCCESS = " Dropped Successfully";

public: AbSqlTable(DbConnectionInfo* databaseConnectionInfoInterface);

    public: void setTableName(std::string tableName);

    public: std::string getTableName();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string createTable(std::string data);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string dropTable();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLE_H_COMPLETE
        #if __has_include(<org/allbinary/business/init/db/DbConnectionInfo.h>)
#include <org/allbinary/business/init/db/DbConnectionInfo.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/logic/communication/sql/AbSqlBasic.h")
#include "org/allbinary/logic/communication/sql/AbSqlBasic.h"
#endif

        #endif
    
