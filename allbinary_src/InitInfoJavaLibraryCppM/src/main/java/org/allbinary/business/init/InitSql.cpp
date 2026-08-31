
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

public constructor (DbConnectionInfo databaseConnectionInfoInterface){

            super();
        this.setDatabaseConnectionInfoInterface(databaseConnectionInfoInterface);
    
}


    public setTable(string tableName){
this.tableName= tableName;
    
}


    public setDatabaseConnectionInfoInterface(DbConnectionInfo databaseConnectionInfoInterface){
this.databaseConnectionInfoInterface= databaseConnectionInfoInterface;
    
}


    public bool createTable(string tableData){

        try {
            
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Creating Table: ");
    
stringBuffer!.append(tableData);
    
PreLogUtil.put(stringBuffer!.toString(), INIT_SQL, "createTable()");
    
this.executeSQLStatement(tableData);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil.putOE(this.commonStrings!.EXCEPTION, INIT_SQL, "createTable()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public bool dropTable(){

    sqlStatement: string = this.sqlStrings!.DROP_TABLE +this.tableName;;
    

        try {
            this.executeSQLStatement(sqlStatement);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil.putOE(this.commonStrings!.EXCEPTION, INIT_SQL, "dropTables()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public HashMap<any, any> getRow(HashMap<any, any> keysAndValues){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.SELECT_ALL_FROM);
    
stringBuffer!.append(this.tableName);
    
stringBuffer!.append(this.sqlStrings!.WHERE);
    

        try {
            
    result: HashMap<any, any> = 
                null
            ;;
    

    set: Set = keysAndValues!.keySet()!;;
    

    keyArray: std::vector<any> = set.toArray()!;;
    

    size: int32_t = keyArray!.length
                ;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    key: string = keyArray[i]! as string;;
    

    value: string = .toCharArray();;
    
stringBuffer!.append(key);
    
stringBuffer!.append(this.sqlStrings!.EQUAL_QUOTE);
    
stringBuffer!.append(this.getValue(value));
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    

                        if(i < size -1)
                        
                                    {
                                    stringBuffer!.append(this.sqlStrings!.AND);
    

                                    }
                                
}


    sqlStatement: string = stringBuffer!.toString()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    PreLogUtil.put(this.sqlStrings!.SQL_STATEMENT_LABEL +sqlStatement, this.INIT_SQL, this.METHOD_GET_ROW);
    

                                    }
                                

    rset: ResultSet = this.executeSQLStatement(sqlStatement)!;;
    

    resultSetMetaData: ResultSetMetaData = rset.getMetaData()!;;
    

        while(rset.next())
        {
result= new HashMap<any, any>();
    

    columnCount: int32_t = resultSetMetaData!.getColumnCount()!;;
    




                        for (
    index: int32_t = 1;index <= columnCount; index++)
        {

    columnName: string = resultSetMetaData!.getColumnName(index)!;;
    

    field: string = rset.getString(columnName)!;;
    
result.put(columnName, field);
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    PreLogUtil.put(this.ROW_VALUE_LABEL +result.toString(), this.INIT_SQL, this.METHOD_GET_ROW);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil.put(this.NO_RESULTS_IN_RESULT_SET, this.INIT_SQL, this.METHOD_GET_ROW);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil.putOE(this.FAILED_SQL_STATEMENT +stringBuffer, this.INIT_SQL, this.METHOD_GET_ROW, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public updateWhere(string key, string value, HashMap<any, any> updatedKeyValuePairs){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.UPDATE);
    
stringBuffer!.append(this.tableName);
    
stringBuffer!.append(this.sqlStrings!.SET);
    

        try {
            
    columnArray: std::vector<any> = updatedKeyValuePairs!.keySet()!.()!;;
    

    size: int32_t = columnArray!.length
                ;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    columnName: string = columnArray[i]!.toString()!;;
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(columnName);
    
stringBuffer!.append(this.EQUAL_QUOTE);
    

    columnValue: string = updatedKeyValuePairs!.get(columnName) as string;;
    

                        if(columnValue == 
                                    null
                                )
                        
                                    {
                                    columnValue= this.stringUtil!.EMPTY_STRING;
    

                                    }
                                
                        else {
                            
                        }
                            
stringBuffer!.append(this.getValue(columnValue));
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    

                        if(i < size -1)
                        
                                    {
                                    stringBuffer!.append(this.commonSeps!.COMMA);
    

                                    }
                                
}

stringBuffer!.append(this.sqlStrings!.WHERE);
    
stringBuffer!.append(key);
    
stringBuffer!.append(this.sqlStrings!.EQUAL_QUOTE);
    
stringBuffer!.append(this.getValue(value));
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    

    sqlStatement: string = stringBuffer!.toString()!;;
    
this.executeSQLStatement(sqlStatement);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    PreLogUtil.put(this.SUCCESS_SQL_STATEMENT +sqlStatement, this.INIT_SQL, METHOD_UPDATE_WHERE);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil.putOE(this.FAILED_SQL_STATEMENT +stringBuffer, this.INIT_SQL, METHOD_UPDATE_WHERE, e);
    

                                    }
                                
}

}


    public insert(Vector values){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.INSERT_INTO);
    
stringBuffer!.append(this.tableName);
    
stringBuffer!.append(this.sqlStrings!.VALUES);
    

        try {
            
    size: int32_t = values.length!;;
    




                        for (
    i: int32_t = 0;i < size -1; i++)
        {

    value: string = this.getValue(values.get(i) as string)!;;
    
stringBuffer!.append(value);
    
stringBuffer!.append(this.sqlStrings!.SINGLE_QUOTE_COMMA_SEP);
    
}


    value: string = this.getValue(values.lastElement() as string)!;;
    
stringBuffer!.append(value);
    
stringBuffer!.append(this.INSERT_END);
    

    sqlStatement: string = stringBuffer!.toString()!;;
    
this.executeSQLStatement(sqlStatement);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    PreLogUtil.put(this.SUCCESS_SQL_STATEMENT +sqlStatement, this.INIT_SQL, INSERT);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil.putOE(this.FAILED_SQL_STATEMENT +stringBuffer!.toString(), this.INIT_SQL, INSERT, e);
    

                                    }
                                
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    string getValue(string value){

                        if(StringValidationUtil.getInstance()!.isEmpty(value))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.stringUtil!.EMPTY_STRING;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    

                        }
                            
}


                //@Throws(Exception.constructor, SQLException.constructor)
            
    public ResultSet executeSQLStatement(string statement){

        try {
            
                        if(this.conn == 
                                    null
                                )
                        
                                    {
                                    this.initialize();
    

                                    }
                                

    stmt: Statement = this.conn.createStatement()!;;
    
stmt.execute(statement);
    

    rset: ResultSet = stmt.getResultSet()!;;
    
stmt.close();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rset;
    

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil.putOE(this.commonStrings!.EXCEPTION, INIT_SQL, "executeSQLStatement()", e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil.putOE(this.commonStrings!.EXCEPTION, INIT_SQL, "executeSQLStatement()", e);
    

                                    }
                                



                            throw e;
                    
}
*/
}


                //@Throws(SQLException.constructor)
            
    createConnection(){

        try {
            
                        if(this.useridAndPassword == true)
                        
                                    {
                                    this.conn= DriverManager.getConnection(this.databaseConnectionInfoInterface!.getUrl(), this.userid, this.password);
    

                                    }
                                
                        else {
                            this.conn= DriverManager.getConnection(this.databaseConnectionInfoInterface!.getUrl());
    

                        }
                            

                //: 
} catch(se) 
            {
PreLogUtil.putOE(this.commonStrings!.EXCEPTION, INIT_SQL, "createConnection()", se);
    



                            throw se;
                    
}

}


                //@Throws(Exception.constructor)
            
    initialize(){

        try {
            
        try {
            
    jdbcDriver: string = this.databaseConnectionInfoInterface!.getJdbcDriver()!;;
    
PreLogUtil.put(new StringMaker().append("Loading DbConnnectionInfo: ")!.append(this.databaseConnectionInfoInterface!.constructor.name.toString()!)!.append(" Driver: ")!.append(jdbcDriver)!.toString(), this.INIT_SQL, "initialize()");
    
Class.forName(jdbcDriver)!.newInstance();
    

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil.putOE("LoadDriver Failed: " +this.databaseConnectionInfoInterface!.getJdbcDriver(), this.INIT_SQL, "initialize()", e);
    

                                    }
                                



                            throw e;
                    
}


                        if(this.userid == 
                                    null
                                 && this.password == 
                                    null
                                )
                        
                                    {
                                    this.useridAndPassword= true;
    

                                    }
                                
this.createConnection();
    

                //: 
} catch(se) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil.putOE(this.commonStrings!.EXCEPTION, INIT_SQL, "initialize()", se);
    

                                    }
                                



                            throw se;
                    
}

}


    public DatabaseConnectionInfoInterface getDatabaseConnectionInfoInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.databaseConnectionInfoInterface;
    
}


};

            

