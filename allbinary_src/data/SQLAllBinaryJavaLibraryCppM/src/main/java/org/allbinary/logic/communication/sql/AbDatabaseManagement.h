
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABDATABASEMANAGEMENT_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABDATABASEMANAGEMENT_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/net/InetAddress.h>

      
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/sql/AbSqlBean.h"

class AbDatabaseManagement: public AbSqlBean {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    protected: StringMaker* sqlCommandLog = new StringMaker();

    private: const std::string GRANT_ALL = "GRANT SELECT, INSERT, UPDATE, DELETE, CREATE, DROP, INDEX, ALTER ON ";

    private: const std::string DOT_STAR = ".*";

    private: const std::string TO = " TO ";

    private: const std::string AT_LOCALHOST = "@localhost";

    private: const std::string IDENTIFIED_BY = " IDENTIFIED BY '";

    private: const std::string WITH_GRANT_OPTION = "' WITH GRANT OPTION";

    private: const std::string FAILED = "Failed";

    private: const std::string GET_HOST_NAME = "getHostName()";

    private: const std::string METHOD_ADD_USER = "addUser()";

    protected: const std::string METHOD_ADD_USERS = "addUsers()";

    private: const std::string METHOD_ADD_DB = "addDb()";

    protected: const std::string METHOD_ADD_DATABASES = "addDatabases()";

    protected: const std::string METHOD_ADD_TABLES = "addTables()";

    protected: const std::string UNABLE_TO_CREATE_USER = "Unable to Create User: ";

    protected: const std::string UNABLE_TO_CREATE_DATABASE = "Unable to Create Database: ";

    protected: const std::string UNABLE_TO_CREATE_TABLES = "Unable to Create Tables";

    protected: const std::string ADD_TABLES_RESULTS_LABEL = "Add Table Results: ";

public: AbDatabaseManagement(DatabaseConnectionInfoInterface* databaseConnectionInfoInterface);

public: AbDatabaseManagement(DbConnectionInfo* connectionInfo);

    private: std::string getHostName();

                //@Throws(Exception.constructor)
            
    protected: bool addDbUser(std::string hostName, std::string db, std::string userName, std::string password);

    protected: bool addDbUser(std::string db, std::string userName, std::string password);

    protected: bool addDb(std::string db);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABDATABASEMANAGEMENT_H
