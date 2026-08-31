
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

public constructor (DbConnectionInfo databaseConnectionInfoInterface){

            super();
        this.databaseConnectionInfoInterface= databaseConnectionInfoInterface;
    
this.connectAttemptCounter= 0;
    
this.conn= 
                                        nullptr
                                    ;
    
}


                //@Throws(SQLException.constructor)
            
    public ResultSet executeSQLStatement(string statement){

        try {
            this.initialize();
    

    stmt: Statement = this.conn.createStatement()!;;
    
stmt.execute(statement);
    

    rset: ResultSet = stmt.getResultSet()!;;
    
stmt.close();
    

    tempConnection: Connection = this.conn;;
    
this.conn= 
                                        nullptr
                                    ;
    
this.sqlConnectionPool!.add(this.getDatabaseConnectionInfoInterface()!.getUrl(), tempConnection);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rset;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.FAILED_SQL_STATEMENT +statement, this, METHOD_EXECUTED_SQL_STATEMENT, e);
    

                                    }
                                
this.conn.close();
    
this.conn= 
                                        nullptr
                                    ;
    



                            throw e;
                    
}

}


    public string create(string databaseName){

        try {
            this.executeSQLStatement(this.sqlStrings!.CREATE_DATABASE +databaseName);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.DATABASE_CREATED_LABEL +databaseName, this, this.METHOD_CREATE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return databaseName +this.sqlStrings!.CREATE_RETURN;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.DATABASE_CREATION_FAILED_LABEL +databaseName, this, this.METHOD_CREATE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.DATABASE_CREATION_FAILED_LABEL +databaseName;
    
}

}


    createConnection(){

        try {
            this.conn= this.sqlConnectionPool!.get(this.getDatabaseConnectionInfoInterface()!.getUrl());
    

                //: 
} catch(se) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.SQL_CONNECTION_RETRYING, this, METHOD_CREATE_CONNECTION, se);
    

                                    }
                                

        try {
            Thread.currentThread()!.sleep(2000);
    

                        if(this.connectAttemptCounter < 10)
                        
                                    {
                                    this.connectAttemptCounter++;
    
this.initialize();
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.SQL_CONNECTION_RETRY +se.message, this, this.METHOD_CREATE_CONNECTION, e);
    

                                    }
                                
}

}

}


    initialize(){

        try {
            

                            {
                            
        try {
            
    loader: ClassLoader = Thread.currentThread()!.getContextClassLoader()!;;
    

    jdbcDriverClass: Function = loader.loadClass(this.getDatabaseConnectionInfoInterface()!.getJdbcDriver())!;;
    
jdbcDriverClass!.newInstance();
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.LOAD_JDBC_DRIVER_FAILED_LABEL +this.getDatabaseConnectionInfoInterface()!.getJdbcDriver(), this, METHOD_INITIALIZE, e);
    

                                    }
                                
}


                            }
                    
this.createConnection();
    

                //: 
} catch(se) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.SQL_CONNECTION_FAILED, this, this.METHOD_INITIALIZE, se);
    

                                    }
                                
}

}


    public DatabaseConnectionInfoInterface getDatabaseConnectionInfoInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.databaseConnectionInfoInterface;
    
}


    public setDatabaseConnectionInfoInterface(DbConnectionInfo databaseConnectionInfoInterface){
this.databaseConnectionInfoInterface= databaseConnectionInfoInterface;
    
}


};

            

