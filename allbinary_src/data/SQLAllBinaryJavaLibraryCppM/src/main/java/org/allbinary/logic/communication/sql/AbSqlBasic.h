
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/ClassLoader.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <java/sql/Connection.h>
#include <java/sql/ResultSet.h>
#include <java/sql/SQLException.h>
#include <java/sql/Statement.h>
class DatabaseConnectionInfoInterface;
class DbConnectionInfo;
class StdUtil;
class LogUtil;
class SqlConnectionPool;
class StringUtil;
class CommonSeps;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SqlTypeStrings;
class SqlStrings;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbSqlBasic
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: SqlConnectionPool* sqlConnectionPool;

    private: DbConnectionInfo* databaseConnectionInfoInterface;

    private: int32_t connectAttemptCounter;

    /*protected*/ public: Connection* conn;

    /*protected*/ public: StringUtil* stringUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: CommonSeps* commonSeps;

    /*protected*/ public: StdUtil* stdUtil;

    /*protected*/ public: SqlTypeStrings* sqlTypeStrings;

    /*protected*/ public: SqlStrings* sqlStrings;

    /*protected*/ public: const std::string INSERT = "insert";

    /*protected*/ public: const std::string UPDATE = "update";

    /*protected*/ public: const std::string FAILED_SQL_STATEMENT = "Failed\nSQL Statement: ";

    /*protected*/ public: const std::string SUCCESS_SQL_STATEMENT = "Success\nSQL Statement: ";

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

public: AbSqlBasic(DbConnectionInfo* databaseConnectionInfoInterface);

                //@Throws(SQLException.constructor)
            
    public: ResultSet* executeSQLStatement(std::string statement);

    public: std::string create(std::string databaseName);

    private: void createConnection();

    private: void initialize();

    public: DatabaseConnectionInfoInterface* getDatabaseConnectionInfoInterface();

    public: void setDatabaseConnectionInfoInterface(DbConnectionInfo* databaseConnectionInfoInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBASIC_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBASIC_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBASIC_H_COMPLETE
        #if __has_include(<java/sql/Connection.h>)
#include <java/sql/Connection.h>
#endif
#if __has_include(<java/sql/ResultSet.h>)
#include <java/sql/ResultSet.h>
#endif
#if __has_include(<java/sql/SQLException.h>)
#include <java/sql/SQLException.h>
#endif
#if __has_include(<java/sql/Statement.h>)
#include <java/sql/Statement.h>
#endif
#if __has_include(<org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>)
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>
#endif
#if __has_include(<org/allbinary/business/init/db/DbConnectionInfo.h>)
#include <org/allbinary/business/init/db/DbConnectionInfo.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/connection/pool/SqlConnectionPool.h>)
#include <org/allbinary/logic/communication/sql/connection/pool/SqlConnectionPool.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/communication/sql/SqlTypeStrings.h")
#include "org/allbinary/logic/communication/sql/SqlTypeStrings.h"
#endif
#if __has_include("org/allbinary/logic/communication/sql/SqlStrings.h")
#include "org/allbinary/logic/communication/sql/SqlStrings.h"
#endif

        #endif
    
