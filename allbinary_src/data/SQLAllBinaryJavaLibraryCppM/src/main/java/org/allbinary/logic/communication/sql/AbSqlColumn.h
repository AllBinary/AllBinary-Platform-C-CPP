
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

            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/sql/ResultSet.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbSqlTable.h"

class AbSqlColumn: public AbSqlTable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const std::string LARGEST_INT_VALUE_IN_COLUMN = "\nLargest Int Value in column: ";

    private: const std::string METHOD_GET_LARGETS_INTEGER_IN_COLUMN = "getLargestIntegerInColumn";

    private: const std::string METHOD_GET_COLUMN = "getColumn";

    private: const std::string METHOD_GET_COLUMN_WHERE = "getColumnWhere";

    private: const std::string INVALID_RESULT = "-1";

public: AbSqlColumn(DbConnectionInfo databaseConnectionInfoInterface);

    public: std::string getLargestIntegerInColumnWhere(std::string columnName, std::string key, std::string value);

    public: BasicArrayList getColumn(std::string columnName);

    public: BasicArrayList getColumnWhere(std::string columnName, std::string key, std::string value);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLCOLUMN_H
