
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

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbSqlRow.h"

class AbSqlBean: public AbSqlRow {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const METHOD_GET_FIELD: string = "getField";

    private: const METHOD_IS_SUBSET_OF_ENTRY: string = "isSubsetOfEntry";

public constructor (DbConnectionInfo databaseConnectionInfoInterface){
            super(databaseConnectionInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public string getField(string key, string value, string requestedField){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.SELECT);
    
stringBuffer!.append(requestedField);
    
stringBuffer!.append(this.sqlStrings!.FROM);
    
stringBuffer!.append(this.getTableName());
    
stringBuffer!.append(this.sqlStrings!.WHERE);
    
stringBuffer!.append(key);
    
stringBuffer!.append(this.sqlStrings!.EQUAL_QUOTE);
    
stringBuffer!.append(value);
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    

    sqlStatement: string = stringBuffer!.toString()!;;
    

        try {
            
    field: string = this.stringUtil!.EMPTY_STRING;;
    

    rset: ResultSet = executeSQLStatement(sqlStatement)!;;
    

        while(rset.next())
        {
field= rset.getString(requestedField);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(this.sqlStrings!.SQL_STATEMENT_LABEL);
    
stringBuffer!.append(sqlStatement);
    
stringBuffer!.append(this.sqlStrings!.FIELD_VALUE);
    
stringBuffer!.append(field);
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.METHOD_GET_FIELD);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return field;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.FAILED_SQL_STATEMENT +sqlStatement, this, METHOD_GET_FIELD, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.FAILED_SQL_STATEMENT +sqlStatement;
    
}

}


    public string getField(HashMap<any, any> keysAndValues, string requestedField){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.SELECT);
    
stringBuffer!.append(requestedField);
    
stringBuffer!.append(this.sqlStrings!.FROM);
    
stringBuffer!.append(this.getTableName());
    
stringBuffer!.append(this.sqlStrings!.WHERE);
    

        try {
            
    field: string = this.stringUtil!.EMPTY_STRING;;
    

    set: Set = keysAndValues!.keySet()!;;
    

    keyArray: std::vector<any> = set.toArray()!;;
    

    size: int32_t = keyArray!.length
                ;;
    

    key: string;;
    

    value: string;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {
key= keyArray[i]! as string;
    
value= .toCharArray();
    
stringBuffer!.append(key);
    
stringBuffer!.append(this.sqlStrings!.EQUAL_QUOTE);
    
stringBuffer!.append(value);
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    

                        if(i < size -1)
                        
                                    {
                                    stringBuffer!.append(this.sqlStrings!.AND);
    

                                    }
                                
}


    sqlStatement: string = stringBuffer!.toString()!;;
    

    rset: ResultSet = executeSQLStatement(sqlStatement)!;;
    

        while(rset.next())
        {
field= rset.getString(requestedField);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(this.sqlStrings!.SQL_STATEMENT_LABEL);
    
stringBuffer!.append(sqlStatement);
    
stringBuffer!.append(this.sqlStrings!.FIELD_VALUE);
    
stringBuffer!.append(field);
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.METHOD_GET_FIELD);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return field;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                //: 
} catch(e) 
            {

    sqlStatement: string = stringBuffer!.toString()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.FAILED_SQL_STATEMENT +sqlStatement, this, METHOD_GET_FIELD, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.FAILED_SQL_STATEMENT +sqlStatement;
    
}

}


    public string isSubsetOfEntry(string key, string value, HashMap<any, any> columnsAndValues){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.SELECT);
    

        try {
            
    keyArray: std::vector<any> = columnsAndValues!.keySet()!.()!;;
    

    size: int32_t = keyArray!.length
                ;;
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(key);
    




                        for (
    i: int32_t = 0;i < size; i++)
        {
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(keyArray[i]!.toString());
    
}

stringBuffer!.append(this.sqlStrings!.FROM);
    
stringBuffer!.append(this.getTableName());
    
stringBuffer!.append(this.sqlStrings!.WHERE);
    
stringBuffer!.append(key);
    
stringBuffer!.append(this.sqlStrings!.EQUAL_QUOTE);
    
stringBuffer!.append(value);
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    

    sqlStatement: string = stringBuffer!.toString()!;;
    

    rset: ResultSet = executeSQLStatement(sqlStatement)!;;
    

    columnName: string;;
    

    field: string;;
    

        while(rset.next())
        {

    keyArray2: std::vector<any> = columnsAndValues!.keySet()!.()!;;
    

    size2: int32_t = keyArray2!.length
                ;;
    




                        for (
    i: int32_t = 0;i < size2; i++)
        {
columnName= keyArray2[i]!.toString();
    
field= rset.getObject(columnName)!.toString();
    

                        if(field.compareTo(columnsAndValues!.get(columnName) as string) != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return org.allbinary.globals.GLOBALS2.NOTASUBSET;
    

                                    }
                                
}

}


                        if(rset.getRow() != 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return org.allbinary.globals.GLOBALS2.NOTASUBSET;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return org.allbinary.globals.GLOBALS2.ISASUBSET;
    

                        }
                            

                //: 
} catch(e) 
            {

    sqlStatement: string = stringBuffer!.toString()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.FAILED_SQL_STATEMENT +sqlStatement, this, METHOD_IS_SUBSET_OF_ENTRY, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.FAILED_SQL_STATEMENT +sqlStatement;
    
}

}


};

            

