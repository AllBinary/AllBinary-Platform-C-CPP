
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBASIC_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBASIC_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Class.h"
        
            #include "../../../../../java/lang/ClassLoader.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Thread.h"
        
#include <java/sql/Connection.h>

      
#include <java/sql/ResultSet.h>

      
#include <java/sql/SQLException.h>

      
#include <java/sql/Statement.h>

      
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/connection/pool/SqlConnectionPool.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SqlTypeStrings.h"
#include "SqlStrings.h"

class AbSqlBasic
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const sqlConnectionPool: SqlConnectionPool = SqlConnectionPool.getInstance()!;

    private: databaseConnectionInfoInterface: DbConnectionInfo;

    private: connectAttemptCounter: int32_t;

    conn: Connection;

    const stringUtil: StringUtil = StringUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    const sqlTypeStrings: SqlTypeStrings = SqlTypeStrings.getInstance()!;

    const sqlStrings: SqlStrings = SqlStrings.getInstance()!;

    const INSERT: string = "insert";

    const UPDATE: string = "update";

    const FAILED_SQL_STATEMENT: string = "Failed\nSQL Statement: ";

    const SUCCESS_SQL_STATEMENT: string = "Success\nSQL Statement: ";

    private: const METHOD_EXECUTED_SQL_STATEMENT: string = "executedSQLStatement";

    private: const METHOD_CREATE: string = "create";

    private: const DATABASE_CREATED_LABEL: string = "Database Created: ";

    private: const DATABASE_CREATION_FAILED_LABEL: string = "Database Creation Failed: ";

    private: const SQL_CONNECTION_FAILED: string = "SQL Connection Failed";

    private: const SQL_CONNECTION_RETRYING: string = "SQL Connection Retrying";

    private: const SQL_CONNECTION_RETRY: string = "SQL Connection Retry";

    private: const METHOD_CREATE_CONNECTION: string = "createConnection()";

    private: const METHOD_INITIALIZE: string = "initialize";

    private: const LOAD_JDBC_DRIVER_FAILED_LABEL: string = "Load JDBC Driver Failed: ";

public constructor (DbConnectionInfo databaseConnectionInfoInterface);

                //@Throws(SQLException.constructor)
            
    public ResultSet executeSQLStatement(string statement);

    public string create(string databaseName);

    createConnection();

    initialize();

    public DatabaseConnectionInfoInterface getDatabaseConnectionInfoInterface();

    public setDatabaseConnectionInfoInterface(DbConnectionInfo databaseConnectionInfoInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBASIC_H
