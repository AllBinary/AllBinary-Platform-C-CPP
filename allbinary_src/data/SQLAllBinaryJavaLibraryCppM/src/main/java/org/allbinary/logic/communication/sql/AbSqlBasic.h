
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

      
#include <org/allbinary/logic/StdUtil.h>

      
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const SqlConnectionPool sqlConnectionPool = SqlConnectionPool::getInstance();

    private: DbConnectionInfo databaseConnectionInfoInterface;

    private: int32_t connectAttemptCounter;

    protected: Connection conn;

    protected: const StringUtil stringUtil = StringUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const CommonSeps commonSeps = CommonSeps::getInstance();

    protected: const StdUtil stdUtil = StdUtil::getInstance();

    protected: const SqlTypeStrings sqlTypeStrings = SqlTypeStrings::getInstance();

    protected: const SqlStrings sqlStrings = SqlStrings::getInstance();

    protected: const std::string INSERT = "insert";

    protected: const std::string UPDATE = "update";

    protected: const std::string FAILED_SQL_STATEMENT = "Failed\nSQL Statement: ";

    protected: const std::string SUCCESS_SQL_STATEMENT = "Success\nSQL Statement: ";

    private: const std::string METHOD_EXECUTED_SQL_STATEMENT = "executedSQLStatement";

    private: const std::string METHOD_CREATE = "create";

    private: const std::string DATABASE_CREATED_LABEL = "Database Created: ";

    private: const std::string DATABASE_CREATION_FAILED_LABEL = "Database Creation Failed: ";

    private: const std::string SQL_CONNECTION_FAILED = "SQL Connection Failed";

    private: const std::string SQL_CONNECTION_RETRYING = "SQL Connection Retrying";

    private: const std::string SQL_CONNECTION_RETRY = "SQL Connection Retry";

    private: const std::string METHOD_CREATE_CONNECTION = "createConnection()";

    private: const std::string METHOD_INITIALIZE = "initialize";

    private: const std::string LOAD_JDBC_DRIVER_FAILED_LABEL = "Load JDBC Driver Failed: ";

public: AbSqlBasic(DbConnectionInfo databaseConnectionInfoInterface);

                //@Throws(SQLException.constructor)
            
    public: ResultSet executeSQLStatement(std::string statement);

    public: std::string create(std::string databaseName);

    private: void createConnection();

    private: void initialize();

    public: DatabaseConnectionInfoInterface getDatabaseConnectionInfoInterface();

    public: void setDatabaseConnectionInfoInterface(DbConnectionInfo databaseConnectionInfoInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBASIC_H
