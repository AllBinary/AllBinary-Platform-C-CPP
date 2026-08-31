
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLROW_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLROW_H

            #include "../../../../../java/lang/Exception.h"
        
#include <java/sql/ResultSet.h>

      
#include <java/sql/ResultSetMetaData.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbSqlColumn.h"

class AbSqlRow: public AbSqlColumn {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const EQUAL_QUOTE: string = "=\"";

    private: const ESCAPE_QUOTES: string = "\\\"";

    private: const GET_ROW: string = "Row Value: ";

    private: const METHOD_GET_ROW: string = "getRow()";

    private: const METHOD_GET_ROWS: string = "getRows()";

    private: const METHOD_GET_ALL_ROWS: string = "getAllRows()";

    private: const METHOD_UPDATE_WHERE: string = "updateWhere()";

    private: const METHOD_GET_ROWS_WHERE_BETWEEN: string = "getRowsWhereBetween()";

    private: const METHOD_DELETE_WHERE: string = "deleteWhere()";

    private: const ROW_VALUE_LABEL: string = "Row Value: ";

    private: const ROW_VALUES_LABEL: string = "Row Values: ";

    private: const NO_RESULTS_IN_RESULT_SET: string = "No Results in ResultSet";

    private: const COLUMN_NAME_LABEL: string = "columnName: ";

    private: const INSERT_END: string = "')";

public constructor (DbConnectionInfo databaseConnectionInfoInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    string getValue(string value);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public updateWhere(string key, string value, HashMap<any, any> updatedKeyValuePairs);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public updateWhere(HashMap<any, any> whereKeyValuePairs, HashMap<any, any> updatedKeyValuePairs);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public deleteWhere(string key, string value);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public deleteWhere(HashMap<any, any> keysAndValues);

    public insert(Vector values);

    public HashMap<any, any> getRow(HashMap<any, any> keysAndValues);

    public Vector getRows(HashMap<any, any> keysAndValues);

    public Vector getRows(HashMap<any, any> keysAndValues, string more);

    public Vector getAllRows();

    public Vector getRowsWhereBetween(HashMap<any, any> whereKeyValuePairs, string betweenColumn, string smallest, string largest);

    public Vector getRowsWhereBetween(string betweenColumn, string smallest, string largest);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLROW_H
