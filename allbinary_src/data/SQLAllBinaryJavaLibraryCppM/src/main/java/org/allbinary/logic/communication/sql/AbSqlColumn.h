
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLCOLUMN_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLCOLUMN_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/sql/ResultSet.h>
class BasicArrayList;
class BasicArrayListD;
class DbConnectionInfo;
class LogUtil;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/sql/AbSqlTable.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbSqlColumn: public AbSqlTable {

    /*protected*/ public: LogUtil* logUtil;

    private: const std::string LARGEST_INT_VALUE_IN_COLUMN = "\nLargest Int Value in column: ";

    private: const std::string METHOD_GET_LARGETS_INTEGER_IN_COLUMN = "getLargestIntegerInColumn";

    private: const std::string METHOD_GET_COLUMN = "getColumn";

    private: const std::string METHOD_GET_COLUMN_WHERE = "getColumnWhere";

    private: const std::string INVALID_RESULT = "-1";

public: AbSqlColumn(DbConnectionInfo* databaseConnectionInfoInterface);

    public: std::string getLargestIntegerInColumnWhere(std::string columnName, std::string key, std::string value);

    public: BasicArrayList* getColumn(std::string columnName);

    public: BasicArrayList* getColumnWhere(std::string columnName, std::string key, std::string value);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLCOLUMN_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLCOLUMN_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLCOLUMN_H_COMPLETE
        #if __has_include(<java/sql/ResultSet.h>)
#include <java/sql/ResultSet.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/init/db/DbConnectionInfo.h>)
#include <org/allbinary/business/init/db/DbConnectionInfo.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/allbinary/logic/communication/sql/AbSqlTable.h")
#include "org/allbinary/logic/communication/sql/AbSqlTable.h"
#endif

        #endif
    
