
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <java/sql/ResultSet.h>

      
#include <java/sql/ResultSetMetaData.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbSqlColumn.h"

class AbSqlRow: public AbSqlColumn {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const EQUAL_QUOTE: string = "=\"";

    private: const ESCAPE_QUOTES: string = "\\\"";

    private: const GET_ROW: string = "Row Value: ";

    private: const METHOD_GET_ROW: string = "getRow()";

    private: const METHOD_GET_ROWS: string = "getRows()";

    private: const METHOD_GET_ALL_ROWS: string = "getAllRows()";

    private: const METHOD_UPDATE_WHERE: string = "updateWhere()";

    private: const METHOD_GET_ROWS_WHERE_BETWEEN: string = "getRowsWhereBetween()";

    private: const METHOD_DELETE_WHERE: string = "deleteWhere()";

    private: const ROW_VALUE_LABEL: string = "Row Value: ";

    private: const ROW_VALUES_LABEL: string = "Row Values: ";

    private: const NO_RESULTS_IN_RESULT_SET: string = "No Results in ResultSet";

    private: const COLUMN_NAME_LABEL: string = "columnName: ";

    private: const INSERT_END: string = "')";

public constructor (DbConnectionInfo databaseConnectionInfoInterface){
            super(databaseConnectionInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
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

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public updateWhere(string key, string value, HashMap<any, any> updatedKeyValuePairs){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.UPDATE);
    
stringBuffer!.append(this.getTableName());
    
stringBuffer!.append(this.sqlStrings!.SET);
    

        try {
            
    keyArray: std::vector<any> = updatedKeyValuePairs!.keySet()!.()!;;
    

    size: int32_t = keyArray!.length
                ;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    columnName: string = keyArray[i]!.toString()!;;
    
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
                            columnValue= new Replace(this.sqlStrings!.CLOSE_QUOTE, this.ESCAPE_QUOTES).all(columnValue);
    

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
                                    this.logUtil!.putF(this.SUCCESS_SQL_STATEMENT +sqlStatement, this, this.METHOD_UPDATE_WHERE);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.FAILED_SQL_STATEMENT +stringBuffer, this, METHOD_UPDATE_WHERE, e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public updateWhere(HashMap<any, any> whereKeyValuePairs, HashMap<any, any> updatedKeyValuePairs){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.UPDATE);
    
stringBuffer!.append(this.getTableName());
    
stringBuffer!.append(this.sqlStrings!.SET);
    

        try {
            
    keyArray: std::vector<any> = updatedKeyValuePairs!.keySet()!.()!;;
    

    size: int32_t = keyArray!.length
                ;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    columnName: string = keyArray[i]!.toString()!;;
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(columnName);
    
stringBuffer!.append(this.EQUAL_QUOTE);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.COLUMN_NAME_LABEL +columnName, this, this.METHOD_UPDATE_WHERE);
    

                                    }
                                

    columnValue: string = updatedKeyValuePairs!.get(columnName) as string;;
    

                        if(columnValue == 
                                    null
                                )
                        
                                    {
                                    columnValue= this.stringUtil!.EMPTY_STRING;
    

                                    }
                                
                        else {
                            columnValue= new Replace(this.sqlStrings!.CLOSE_QUOTE, this.ESCAPE_QUOTES).all(columnValue);
    

                        }
                            
stringBuffer!.append(this.getValue(columnValue));
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    

                        if(i < size -1)
                        
                                    {
                                    stringBuffer!.append(this.commonSeps!.COMMA);
    

                                    }
                                
}

stringBuffer!.append(this.sqlStrings!.WHERE);
    

    set: Set = whereKeyValuePairs!.keySet()!;;
    

    keyArray2: std::vector<any> = set.toArray()!;;
    

    size2: int32_t = keyArray2!.length
                ;;
    




                        for (
    i: int32_t = 0;i < size2; i++)
        {

    key: string = keyArray2[i]! as string;;
    

    value: string = whereKeyValuePairs!.get(key) as string;;
    


                            {
                            stringBuffer!.append(key);
    
stringBuffer!.append(this.sqlStrings!.EQUAL_QUOTE);
    
stringBuffer!.append(this.getValue(value));
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    

                        if(i < size2 -1)
                        
                                    {
                                    stringBuffer!.append(this.sqlStrings!.AND);
    

                                    }
                                

                            }
                    
}


    sqlStatement: string = stringBuffer!.toString()!;;
    
this.executeSQLStatement(sqlStatement);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.SUCCESS_SQL_STATEMENT +sqlStatement, this, this.METHOD_UPDATE_WHERE);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.FAILED_SQL_STATEMENT +stringBuffer, this, METHOD_UPDATE_WHERE, e);
    

                                    }
                                



                            throw e;
                    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public deleteWhere(string key, string value){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.DELETE);
    
stringBuffer!.append(this.sqlStrings!.FROM);
    
stringBuffer!.append(this.getTableName());
    
stringBuffer!.append(this.sqlStrings!.WHERE);
    
stringBuffer!.append(key);
    
stringBuffer!.append(this.sqlStrings!.EQUAL_QUOTE);
    
stringBuffer!.append(value);
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    

        try {
            
    sqlStatement: string = stringBuffer!.toString()!;;
    
this.executeSQLStatement(sqlStatement);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.SUCCESS_SQL_STATEMENT +sqlStatement, this, this.METHOD_DELETE_WHERE);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.FAILED_SQL_STATEMENT +stringBuffer!.toString(), this, this.METHOD_DELETE_WHERE, e);
    

                                    }
                                
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public deleteWhere(HashMap<any, any> keysAndValues){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.DELETE);
    
stringBuffer!.append(this.sqlStrings!.FROM);
    
stringBuffer!.append(this.getTableName());
    
stringBuffer!.append(this.sqlStrings!.WHERE);
    

        try {
            
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
    
this.executeSQLStatement(sqlStatement);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.SUCCESS_SQL_STATEMENT +sqlStatement, this, this.METHOD_DELETE_WHERE);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.FAILED_SQL_STATEMENT +stringBuffer!.toString(), this, this.METHOD_DELETE_WHERE, e);
    

                                    }
                                
}

}


    public insert(Vector values){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.INSERT_INTO);
    
stringBuffer!.append(this.getTableName());
    
stringBuffer!.append(this.sqlStrings!.VALUES);
    

        try {
            



                        for (
    i: int32_t = 0;i < values.length -1; i++)
        {

    value: string = this.getValue(values.get(i) as string)!;;
    
value= new Replace(this.sqlStrings!.ESCAPE, this.sqlStrings!.DOUBLE_ESCAPE).all(value);
    
stringBuffer!.append(value);
    
stringBuffer!.append(this.sqlStrings!.SINGLE_QUOTE_COMMA_SEP);
    
}


    value: string = this.getValue(values.lastElement() as string)!;;
    
value= new Replace(this.sqlStrings!.ESCAPE, this.sqlStrings!.DOUBLE_ESCAPE).all(value);
    
stringBuffer!.append(value);
    
stringBuffer!.append(this.INSERT_END);
    

    sqlStatement: string = stringBuffer!.toString()!;;
    
this.executeSQLStatement(sqlStatement);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.SUCCESS_SQL_STATEMENT +sqlStatement, this, this.INSERT);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.FAILED_SQL_STATEMENT +stringBuffer!.toString(), this, INSERT, e);
    

                                    }
                                
}

}


    public HashMap<any, any> getRow(HashMap<any, any> keysAndValues){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.SELECT_ALL_FROM);
    
stringBuffer!.append(this.getTableName());
    
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
    index: int32_t = 0;index < size; index++)
        {

    key: string = keyArray[index]! as string;;
    

    value: string = .toCharArray();;
    
stringBuffer!.append(key);
    
stringBuffer!.append(this.sqlStrings!.EQUAL_QUOTE);
    
stringBuffer!.append(this.getValue(value));
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    

                        if(index < size -1)
                        
                                    {
                                    stringBuffer!.append(this.sqlStrings!.AND);
    

                                    }
                                
}


    sqlStatement: string = stringBuffer!.toString()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.sqlStrings!.SQL_STATEMENT_LABEL +sqlStatement, this, this.METHOD_GET_ROW);
    

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
                                    this.logUtil!.putF(this.ROW_VALUE_LABEL +result.toString(), this, this.METHOD_GET_ROW);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.putF(this.NO_RESULTS_IN_RESULT_SET, this, this.METHOD_GET_ROW);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.FAILED_SQL_STATEMENT +stringBuffer, this, this.METHOD_GET_ROW, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public Vector getRows(HashMap<any, any> keysAndValues){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getRows(keysAndValues, StringUtil.getInstance()!.EMPTY_STRING);;
    
}


    public Vector getRows(HashMap<any, any> keysAndValues, string more){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.SELECT_ALL_FROM);
    
stringBuffer!.append(this.getTableName());
    
stringBuffer!.append(this.sqlStrings!.WHERE);
    

        try {
            
    rows: Vector = new Vector();;
    

    set: Set = keysAndValues!.keySet()!;;
    

    keyArray: std::vector<any> = set.toArray()!;;
    

    size: int32_t = keyArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    key: string = keyArray[index]! as string;;
    

    value: string = .toCharArray();;
    
stringBuffer!.append(key);
    
stringBuffer!.append(this.sqlStrings!.EQUAL_QUOTE);
    
stringBuffer!.append(this.getValue(value));
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    

                        if(index < size -1)
                        
                                    {
                                    stringBuffer!.append(this.sqlStrings!.AND);
    

                                    }
                                
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.sqlStrings!.SQL_STATEMENT_LABEL +stringBuffer, this, this.METHOD_GET_ROWS);
    

                                    }
                                
stringBuffer!.append(more);
    

    sqlStatement: string = stringBuffer!.toString()!;;
    

    rset: ResultSet = this.executeSQLStatement(sqlStatement)!;;
    

    resultSetMetaData: ResultSetMetaData = rset.getMetaData()!;;
    

        while(rset.next())
        {

    result: HashMap<any, any> = new HashMap<any, any>();;
    

    columnCount: int32_t = resultSetMetaData!.getColumnCount()!;;
    




                        for (
    index: int32_t = 1;index <= columnCount; index++)
        {

    columnName: string = resultSetMetaData!.getColumnName(index)!;;
    

    field: string = rset.getString(columnName)!;;
    
result.put(columnName, field);
    
}


    resultAsString: string = result.toString()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.GET_ROW +resultAsString, this, this.METHOD_GET_ROWS);
    

                                    }
                                
rows.add(result);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rows;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.FAILED_SQL_STATEMENT +stringBuffer, this, this.METHOD_GET_ROWS, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public Vector getAllRows(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.SELECT_ALL_FROM);
    
stringBuffer!.append(this.getTableName());
    

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.sqlStrings!.SQL_STATEMENT_LABEL +stringBuffer, this, this.METHOD_GET_ALL_ROWS);
    

                                    }
                                

    rows: Vector = new Vector();;
    

    sqlStatement: string = stringBuffer!.toString()!;;
    

    rset: ResultSet = this.executeSQLStatement(sqlStatement)!;;
    

    resultSetMetaData: ResultSetMetaData = rset.getMetaData()!;;
    

        while(rset.next())
        {

    result: HashMap<any, any> = new HashMap<any, any>();;
    

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
                                    this.logUtil!.putF(this.ROW_VALUES_LABEL +result.toString(), this, this.METHOD_GET_ALL_ROWS);
    

                                    }
                                
rows.add(result);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rows;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.FAILED_SQL_STATEMENT +stringBuffer, this, this.METHOD_GET_ALL_ROWS, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public Vector getRowsWhereBetween(HashMap<any, any> whereKeyValuePairs, string betweenColumn, string smallest, string largest){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.SELECT_ALL_FROM);
    
stringBuffer!.append(this.getTableName());
    

        try {
            
    rows: Vector = new Vector();;
    
stringBuffer!.append(this.sqlStrings!.WHERE);
    

    set: Set = whereKeyValuePairs!.keySet()!;;
    

    key: string;;
    

    value: string;;
    

    keyArray: std::vector<any> = set.toArray()!;;
    

    size: int32_t = keyArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
key= keyArray[index]! as string;
    
value= whereKeyValuePairs!.get(key) as string;
    
stringBuffer!.append(key);
    
stringBuffer!.append(this.sqlStrings!.EQUAL_QUOTE);
    
stringBuffer!.append(this.getValue(value));
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    
stringBuffer!.append(this.sqlStrings!.AND);
    
}

stringBuffer!.append(betweenColumn);
    
stringBuffer!.append(this.sqlStrings!.MORE_THAN_QUOTE);
    
stringBuffer!.append(smallest);
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    
stringBuffer!.append(this.sqlStrings!.AND);
    
stringBuffer!.append(betweenColumn);
    
stringBuffer!.append(this.sqlStrings!.LESS_THAN_QUOTE);
    
stringBuffer!.append(largest);
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    

    sqlStatement: string = stringBuffer!.toString()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.sqlStrings!.SQL_STATEMENT_LABEL +sqlStatement, this, this.METHOD_GET_ROWS_WHERE_BETWEEN);
    

                                    }
                                

    rset: ResultSet = this.executeSQLStatement(sqlStatement)!;;
    

    resultSetMetaData: ResultSetMetaData = rset.getMetaData()!;;
    

    result: HashMap<any, any>;;
    

    columnNames: Vector;;
    

    columnCount: int32_t= 0;;
    

    columnName: string;;
    

    field: string;;
    

        while(rset.next())
        {
result= new HashMap<any, any>();
    
columnNames= new Vector();
    
columnCount= resultSetMetaData!.getColumnCount();
    




                        for (
    index: int32_t = 1;index <= columnCount; index++)
        {
columnName= resultSetMetaData!.getColumnName(index);
    
field= rset.getString(columnName);
    
result.put(columnName, field);
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.ROW_VALUE_LABEL +result.toString(), this, this.METHOD_GET_ROWS_WHERE_BETWEEN);
    

                                    }
                                
rows.add(result);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rows;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.FAILED_SQL_STATEMENT +stringBuffer, this, METHOD_GET_ROWS_WHERE_BETWEEN, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public Vector getRowsWhereBetween(string betweenColumn, string smallest, string largest){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.SELECT_ALL_FROM);
    
stringBuffer!.append(this.getTableName());
    

        try {
            
    rows: Vector = new Vector();;
    
stringBuffer!.append(this.sqlStrings!.WHERE);
    
stringBuffer!.append(betweenColumn);
    
stringBuffer!.append(this.sqlStrings!.MORE_THAN_QUOTE);
    
stringBuffer!.append(smallest);
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    
stringBuffer!.append(this.sqlStrings!.AND);
    
stringBuffer!.append(betweenColumn);
    
stringBuffer!.append(this.sqlStrings!.LESS_THAN_QUOTE);
    
stringBuffer!.append(largest);
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    

    sqlStatement: string = stringBuffer!.toString()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.sqlStrings!.SQL_STATEMENT_LABEL +sqlStatement, this, this.METHOD_GET_ROWS_WHERE_BETWEEN);
    

                                    }
                                

    rset: ResultSet = this.executeSQLStatement(sqlStatement)!;;
    

    resultSetMetaData: ResultSetMetaData = rset.getMetaData()!;;
    

    columnName: string;;
    

    field: string;;
    

    result: HashMap<any, any>;;
    

    columnNames: Vector;;
    

    columnCount: int32_t= 0;;
    

        while(rset.next())
        {
result= new HashMap<any, any>();
    
columnNames= new Vector();
    
columnCount= resultSetMetaData!.getColumnCount();
    




                        for (
    index: int32_t = 1;index <= columnCount; index++)
        {
columnName= resultSetMetaData!.getColumnName(index);
    
field= rset.getString(columnName);
    
result.put(columnName, field);
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.ROW_VALUE_LABEL +result.toString(), this, this.METHOD_GET_ROWS_WHERE_BETWEEN);
    

                                    }
                                
rows.add(result);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rows;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.FAILED_SQL_STATEMENT +stringBuffer, this, METHOD_GET_ROWS_WHERE_BETWEEN, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

