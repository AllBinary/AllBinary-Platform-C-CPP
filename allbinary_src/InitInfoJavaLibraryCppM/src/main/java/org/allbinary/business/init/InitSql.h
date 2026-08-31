
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_INITSQL_H
        #define ORG_ALLBINARY_BUSINESS_INIT_INITSQL_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Class.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/sql/Connection.h>

      
#include <java/sql/DriverManager.h>

      
#include <java/sql/ResultSet.h>

      
#include <java/sql/ResultSetMetaData.h>

      
#include <java/sql/SQLException.h>

      
#include <java/sql/Statement.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/communication/sql/SqlStrings.h>

      
#include <org/allbinary/logic/communication/sql/SqlTypeStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InitSql
            : public Object
         {
        

    const stringUtil: StringUtil = StringUtil.getInstance()!;

    const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    const sqlTypeStrings: SqlTypeStrings = SqlTypeStrings.getInstance()!;

    const sqlStrings: SqlStrings = SqlStrings.getInstance()!;

    const INSERT: string = "insert";

    const UPDATE: string = "update";

    private: databaseConnectionInfoInterface: DbConnectionInfo;

    private: userid: string;

    private: password: string;

    private: tableName: string;

    private: conn: Connection;

    private: useridAndPassword: bool= false;

    const SUCCESS_SQL_STATEMENT: string = "Success\nSQL Statement: ";

    const FAILED_SQL_STATEMENT: string = "Failed\nSQL Statement: ";

    private: const INIT_SQL: string = "InitSql";

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const EQUAL_QUOTE: string = "=\"";

    private: const METHOD_GET_ROW: string = "getRow()";

    private: const METHOD_UPDATE_WHERE: string = "updateWhere()";

    private: const ROW_VALUE_LABEL: string = "Row Value: ";

    private: const NO_RESULTS_IN_RESULT_SET: string = "No Results in ResultSet";

    private: const INSERT_END: string = "')";

public constructor (DbConnectionInfo databaseConnectionInfoInterface);

    public setTable(string tableName);

    public setDatabaseConnectionInfoInterface(DbConnectionInfo databaseConnectionInfoInterface);

    public bool createTable(string tableData);

    public bool dropTable();

    public HashMap<any, any> getRow(HashMap<any, any> keysAndValues);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public updateWhere(string key, string value, HashMap<any, any> updatedKeyValuePairs);

    public insert(Vector values);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    string getValue(string value);

                //@Throws(Exception.constructor, SQLException.constructor)
            
    public ResultSet executeSQLStatement(string statement);

                //@Throws(SQLException.constructor)
            
    createConnection();

                //@Throws(Exception.constructor)
            
    initialize();

    public DatabaseConnectionInfoInterface getDatabaseConnectionInfoInterface();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_INITSQL_H
