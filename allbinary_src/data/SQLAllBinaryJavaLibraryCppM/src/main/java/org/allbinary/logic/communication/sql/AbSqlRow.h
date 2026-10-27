
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/sql/ResultSet.h>

      
#include <java/sql/ResultSetMetaData.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/sql/AbSqlColumn.h"

class AbSqlRow: public AbSqlColumn {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: const std::string EQUAL_QUOTE = "=\"";

    private: const std::string ESCAPE_QUOTES = "\\\"";

    private: const std::string GET_ROW = "Row Value: ";

    private: const std::string METHOD_GET_ROW = "getRow()";

    private: const std::string METHOD_GET_ROWS = "getRows()";

    private: const std::string METHOD_GET_ALL_ROWS = "getAllRows()";

    private: const std::string METHOD_UPDATE_WHERE = "updateWhere()";

    private: const std::string METHOD_GET_ROWS_WHERE_BETWEEN = "getRowsWhereBetween()";

    private: const std::string METHOD_DELETE_WHERE = "deleteWhere()";

    private: const std::string ROW_VALUE_LABEL = "Row Value: ";

    private: const std::string ROW_VALUES_LABEL = "Row Values: ";

    private: const std::string NO_RESULTS_IN_RESULT_SET = "No Results in ResultSet";

    private: const std::string COLUMN_NAME_LABEL = "columnName: ";

    private: const std::string INSERT_END = "')";

public: AbSqlRow(DbConnectionInfo* databaseConnectionInfoInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: std::string getValue(std::string value);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void updateWhere(std::string key, std::string value, HashMap<Object*, Object*>* updatedKeyValuePairs);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void updateWhere(HashMap<Object*, Object*>* whereKeyValuePairs, HashMap<Object*, Object*>* updatedKeyValuePairs);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void deleteWhere(std::string key, std::string value);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void deleteWhere(HashMap<Object*, Object*>* keysAndValues);

    public: void insert(BasicArrayList* values);

    public: HashMap<Object*, Object*>* getRow(HashMap<Object*, Object*>* keysAndValues);

    public: BasicArrayList* getRows(HashMap<Object*, Object*>* keysAndValues);

    public: BasicArrayList* getRows(HashMap<Object*, Object*>* keysAndValues, std::string more);

    public: BasicArrayList* getAllRows();

    public: BasicArrayList* getRowsWhereBetween(HashMap<Object*, Object*>* whereKeyValuePairs, std::string betweenColumn, std::string smallest, std::string largest);

    public: BasicArrayList* getRowsWhereBetween(std::string betweenColumn, std::string smallest, std::string largest);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLROW_H
