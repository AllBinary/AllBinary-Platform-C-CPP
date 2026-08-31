
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

public constructor (DatabaseConnectionInfoInterface databaseConnectionInfoInterface){
            super(databaseConnectionInfoInterface as DbConnectionInfo);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public constructor (DbConnectionInfo connectionInfo){
            super(connectionInfo);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    string getHostName(){

        try {
            
    addr: InetAddress = InetAddress.getLocalHost()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return addr.getHostName();;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.FAILED, this, GET_HOST_NAME, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


                //@Throws(Exception.constructor)
            
    bool addDbUser(string hostName, string db, string userName, string password){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.GRANT_ALL);
    
stringBuffer!.append(db);
    
stringBuffer!.append(this.DOT_STAR);
    
stringBuffer!.append(this.TO);
    
stringBuffer!.append(userName);
    
stringBuffer!.append(hostName);
    
stringBuffer!.append(this.IDENTIFIED_BY);
    
stringBuffer!.append(password);
    
stringBuffer!.append(this.WITH_GRANT_OPTION);
    

    sqlStatement: string = stringBuffer!.toString()!;;
    
this.sqlCommandLog!.append(sqlStatement);
    
this.sqlCommandLog!.append(this.commonSeps!.NEW_LINE);
    
super.executeSQLStatement(sqlStatement);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    bool addDbUser(string db, string userName, string password){

        try {
            this.addDbUser(this.AT_LOCALHOST, db, userName, password);
    

    hostName: string = this.getHostName()!;;
    

                        if(hostName != 
                                    null
                                )
                        
                                    {
                                    this.addDbUser(hostName, db, userName, password);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.UNABLE_TO_CREATE_USER +userName, this, this.METHOD_ADD_USER, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    Boolean addDb(string db){

        try {
            
    sqlStatement: string = this.sqlStrings!.CREATE_DATABASE +db;;
    
this.sqlCommandLog!.append(sqlStatement);
    
this.sqlCommandLog!.append(this.commonSeps!.NEW_LINE);
    
super.executeSQLStatement(sqlStatement);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.UNABLE_TO_CREATE_DATABASE +db, this, this.METHOD_ADD_DB, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}

}


};

            

