
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

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/sql/ResultSet.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbSqlTable.h"

class AbSqlColumn: public AbSqlTable {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const LARGEST_INT_VALUE_IN_COLUMN: string = "\nLargest Int Value in column: ";

    private: const METHOD_GET_LARGETS_INTEGER_IN_COLUMN: string = "getLargestIntegerInColumn";

    private: const METHOD_GET_COLUMN: string = "getColumn";

    private: const METHOD_GET_COLUMN_WHERE: string = "getColumnWhere";

    private: const INVALID_RESULT: string = "-1";

public constructor (DbConnectionInfo databaseConnectionInfoInterface);

    public string getLargestIntegerInColumnWhere(string columnName, string key, string value);

    public Vector getColumn(string columnName);

    public Vector getColumnWhere(string columnName, string key, string value);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLCOLUMN_H
