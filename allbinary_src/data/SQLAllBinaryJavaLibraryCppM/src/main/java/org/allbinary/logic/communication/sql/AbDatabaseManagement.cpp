
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const StringMaker sqlCommandLog = StringMaker();

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

public: AbDatabaseManagement(DatabaseConnectionInfoInterface databaseConnectionInfoInterface){
            super(databaseConnectionInfoInterface as DbConnectionInfo);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public: AbDatabaseManagement(DbConnectionInfo connectionInfo){
            super(connectionInfo);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    private: std::string getHostName(){

        try {
            
    InetAddress addr = InetAddress::getLocalHost();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return addr.getHostName();;
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->FAILED, this, GET_HOST_NAME, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


                //@Throws(Exception.constructor)
            
    protected: bool addDbUser(std::string hostName, std::string db, std::string userName, std::string password){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->GRANT_ALL);
    
stringBuffer.append(db);
    
stringBuffer.append(this->DOT_STAR);
    
stringBuffer.append(this->TO);
    
stringBuffer.append(userName);
    
stringBuffer.append(hostName);
    
stringBuffer.append(this->IDENTIFIED_BY);
    
stringBuffer.append(password);
    
stringBuffer.append(this->WITH_GRANT_OPTION);
    

    std::string sqlStatement = stringBuffer.toString();;
    
this->sqlCommandLog.append(sqlStatement);
    
this->sqlCommandLog.append(this->commonSeps.NEW_LINE);
    
super.executeSQLStatement(sqlStatement);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    protected: bool addDbUser(std::string db, std::string userName, std::string password){

        try {
            this->addDbUser(this->AT_LOCALHOST, db, userName, password);
    

    std::string hostName = this->getHostName();;
    

                        if(true)
                        
                                    {
                                    this->addDbUser(hostName, db, userName, password);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->UNABLE_TO_CREATE_USER +userName, this, this->METHOD_ADD_USER, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    protected: Boolean addDb(std::string db){

        try {
            
    std::string sqlStatement = this->sqlStrings.CREATE_DATABASE +db;;
    
this->sqlCommandLog.append(sqlStatement);
    
this->sqlCommandLog.append(this->commonSeps.NEW_LINE);
    
super.executeSQLStatement(sqlStatement);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->UNABLE_TO_CREATE_DATABASE +db, this, this->METHOD_ADD_DB, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


};

            

