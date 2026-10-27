
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABDATABASEMANAGEMENT_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABDATABASEMANAGEMENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/net/InetAddress.h>
class DatabaseConnectionInfoInterface;
class DbConnectionInfo;
class LogUtil;
class StringMaker;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/sql/AbSqlBean.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbDatabaseManagement: public AbSqlBean {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: StringMaker* sqlCommandLog;

    private: const std::string GRANT_ALL = "GRANT SELECT, INSERT, UPDATE, DELETE, CREATE, DROP, INDEX, ALTER ON ";

    private: const std::string DOT_STAR = ".*";

    private: const std::string TO = " TO ";

    private: const std::string AT_LOCALHOST = "@localhost";

    private: const std::string IDENTIFIED_BY = " IDENTIFIED BY '";

    private: const std::string WITH_GRANT_OPTION = "' WITH GRANT OPTION";

    private: const std::string FAILED = "Failed";

    private: const std::string GET_HOST_NAME = "getHostName()";

    private: const std::string METHOD_ADD_USER = "addUser()";

    /*protected*/ public: const std::string METHOD_ADD_USERS = "addUsers()";

    private: const std::string METHOD_ADD_DB = "addDb()";

    /*protected*/ public: const std::string METHOD_ADD_DATABASES = "addDatabases()";

    /*protected*/ public: const std::string METHOD_ADD_TABLES = "addTables()";

    /*protected*/ public: const std::string UNABLE_TO_CREATE_USER = "Unable to Create User: ";

    /*protected*/ public: const std::string UNABLE_TO_CREATE_DATABASE = "Unable to Create Database: ";

    /*protected*/ public: const std::string UNABLE_TO_CREATE_TABLES = "Unable to Create Tables";

    /*protected*/ public: const std::string ADD_TABLES_RESULTS_LABEL = "Add Table Results: ";

public: AbDatabaseManagement(DatabaseConnectionInfoInterface* databaseConnectionInfoInterface);

public: AbDatabaseManagement(DbConnectionInfo* connectionInfo);

    private: std::string getHostName();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: bool addDbUser(std::string hostName, std::string db, std::string userName, std::string password);

    /*protected*/ public: bool addDbUser(std::string db, std::string userName, std::string password);

    /*protected*/ public: bool addDb(std::string db);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABDATABASEMANAGEMENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABDATABASEMANAGEMENT_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABDATABASEMANAGEMENT_H_COMPLETE
        #if __has_include(<java/net/InetAddress.h>)
#include <java/net/InetAddress.h>
#endif
#if __has_include(<org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>)
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>
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
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/communication/sql/AbSqlBean.h")
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#endif

        #endif
    
