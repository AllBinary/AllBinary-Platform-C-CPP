
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABDATABASEMANAGEMENT_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABDATABASEMANAGEMENT_H

            #include "../../../../../java/lang/Exception.h"
        
#include <java/net/InetAddress.h>

      
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbSqlBean.h"

class AbDatabaseManagement: public AbSqlBean {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const sqlCommandLog: StringMaker = new StringMaker();

    private: const GRANT_ALL: string = "GRANT SELECT, INSERT, UPDATE, DELETE, CREATE, DROP, INDEX, ALTER ON ";

    private: const DOT_STAR: string = ".*";

    private: const TO: string = " TO ";

    private: const AT_LOCALHOST: string = "@localhost";

    private: const IDENTIFIED_BY: string = " IDENTIFIED BY '";

    private: const WITH_GRANT_OPTION: string = "' WITH GRANT OPTION";

    private: const FAILED: string = "Failed";

    private: const GET_HOST_NAME: string = "getHostName()";

    private: const METHOD_ADD_USER: string = "addUser()";

    const METHOD_ADD_USERS: string = "addUsers()";

    private: const METHOD_ADD_DB: string = "addDb()";

    const METHOD_ADD_DATABASES: string = "addDatabases()";

    const METHOD_ADD_TABLES: string = "addTables()";

    const UNABLE_TO_CREATE_USER: string = "Unable to Create User: ";

    const UNABLE_TO_CREATE_DATABASE: string = "Unable to Create Database: ";

    const UNABLE_TO_CREATE_TABLES: string = "Unable to Create Tables";

    const ADD_TABLES_RESULTS_LABEL: string = "Add Table Results: ";

public constructor (DatabaseConnectionInfoInterface databaseConnectionInfoInterface);

public constructor (DbConnectionInfo connectionInfo);

    string getHostName();

                //@Throws(Exception.constructor)
            
    bool addDbUser(string hostName, string db, string userName, string password);

    bool addDbUser(string db, string userName, string password);

    Boolean addDb(string db);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABDATABASEMANAGEMENT_H
