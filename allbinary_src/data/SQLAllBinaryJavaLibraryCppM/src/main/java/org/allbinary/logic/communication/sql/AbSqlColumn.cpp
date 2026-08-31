
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
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/sql/ResultSet.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbSqlTable.h"

class AbSqlColumn: public AbSqlTable {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const LARGEST_INT_VALUE_IN_COLUMN: string = "\nLargest Int Value in column: ";

    private: const METHOD_GET_LARGETS_INTEGER_IN_COLUMN: string = "getLargestIntegerInColumn";

    private: const METHOD_GET_COLUMN: string = "getColumn";

    private: const METHOD_GET_COLUMN_WHERE: string = "getColumnWhere";

    private: const INVALID_RESULT: string = "-1";

public constructor (DbConnectionInfo databaseConnectionInfoInterface){
            super(databaseConnectionInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public string getLargestIntegerInColumnWhere(string columnName, string key, string value){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.SELECT);
    
stringBuffer!.append(columnName);
    
stringBuffer!.append(this.sqlStrings!.FROM);
    
stringBuffer!.append(this.getTableName());
    
stringBuffer!.append(this.sqlStrings!.WHERE);
    
stringBuffer!.append(key);
    
stringBuffer!.append(this.sqlStrings!.EQUAL_QUOTE);
    
stringBuffer!.append(value);
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    

    sqlStatement: string = stringBuffer!.toString()!;;
    

        try {
            
    largest: int32_t = 0;;
    

    rset: ResultSet = executeSQLStatement(sqlStatement)!;;
    

        while(rset.next())
        {

    intValue: int32_t = rset.getInt(columnName)!;;
    

                        if(intValue > largest)
                        
                                    {
                                    largest= intValue;
    

                                    }
                                
}


    largestAsString: string = new Integer(largest).toString()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(this.sqlStrings!.SQL_STATEMENT_LABEL);
    
stringBuffer!.append(sqlStatement);
    
stringBuffer!.append(this.LARGEST_INT_VALUE_IN_COLUMN);
    
stringBuffer!.append(largestAsString);
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.METHOD_GET_LARGETS_INTEGER_IN_COLUMN);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return largestAsString;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.FAILED_SQL_STATEMENT +sqlStatement, this, METHOD_GET_LARGETS_INTEGER_IN_COLUMN, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.INVALID_RESULT;
    
}

}


    public Vector getColumn(string columnName){

    column: Vector = new Vector();;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.SELECT);
    
stringBuffer!.append(columnName);
    
stringBuffer!.append(this.sqlStrings!.FROM);
    
stringBuffer!.append(this.getTableName());
    

    sqlStatement: string = stringBuffer!.toString()!;;
    

        try {
            
    rset: ResultSet = executeSQLStatement(sqlStatement)!;;
    

        while(rset.next())
        {

    field: string = rset.getObject(columnName)!.toString()!;;
    
column.add(field);
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(this.sqlStrings!.SQL_STATEMENT_LABEL);
    
stringBuffer!.append(sqlStatement);
    
stringBuffer!.append(this.sqlStrings!.COLUMN_VALUE);
    
stringBuffer!.append(column.toString());
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.METHOD_GET_COLUMN);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return column;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.FAILED_SQL_STATEMENT +sqlStatement, this, METHOD_GET_COLUMN, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return column;
    
}

}


    public Vector getColumnWhere(string columnName, string key, string value){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.SELECT);
    
stringBuffer!.append(columnName);
    
stringBuffer!.append(this.sqlStrings!.FROM);
    
stringBuffer!.append(this.getTableName());
    
stringBuffer!.append(this.sqlStrings!.WHERE);
    
stringBuffer!.append(key);
    
stringBuffer!.append(this.sqlStrings!.EQUAL_QUOTE);
    
stringBuffer!.append(value);
    
stringBuffer!.append(this.sqlStrings!.CLOSE_QUOTE);
    

    sqlStatement: string = stringBuffer!.toString()!;;
    

    column: Vector = new Vector();;
    

    rset: ResultSet;;
    

    field: string;;
    

        try {
            rset= executeSQLStatement(sqlStatement);
    

        while(rset.next())
        {
field= rset.getObject(columnName)!.toString();
    
column.add(field);
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(this.sqlStrings!.SQL_STATEMENT_LABEL);
    
stringBuffer!.append(sqlStatement);
    
stringBuffer!.append(this.sqlStrings!.COLUMN_VALUE);
    
stringBuffer!.append(column.toString());
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.METHOD_GET_COLUMN_WHERE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return column;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.FAILED_SQL_STATEMENT +sqlStatement, this, this.METHOD_GET_COLUMN_WHERE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return column;
    
}

}


};

            

