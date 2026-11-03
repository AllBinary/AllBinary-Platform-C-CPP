
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLROW_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLROW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/sql/AbSqlRow.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/sql/ResultSet.h>

      
#include <java/sql/ResultSetMetaData.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/sql/AbSqlColumn.h"


AbSqlRow::AbSqlRow(DbConnectionInfo* databaseConnectionInfoInterface) : AbSqlColumn(databaseConnectionInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbSqlRow::getValue(std::string value) -> std::string{

                        if(StringValidationUtil::getInstance()->isEmpty(value))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->stringUtil->EMPTY_STRING;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return value;
    

                        }
                            
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbSqlRow::updateWhere(std::string key, std::string value, HashMap<Object*, Object*>* updatedKeyValuePairs) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->UPDATE);
    
stringBuffer->append(this->getTableName());
    
stringBuffer->append(this->sqlStrings->SET);
    

        try {
            
    std::vector<Object*> keyArray = updatedKeyValuePairs->keySet()->toArray();;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string columnName = keyArray[i]->toString();;
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(columnName);
    
stringBuffer->append(this->EQUAL_QUOTE);
    

    std::string columnValue = JavaBoxes::unbox<std::string>(updatedKeyValuePairs->get(columnName));;
    

                        if(false)
                        
                                    {
                                    columnValue= this->stringUtil->EMPTY_STRING;
    

                                    }
                                
                        else {
                            columnValue= (new Replace(this->sqlStrings->CLOSE_QUOTE, this->ESCAPE_QUOTES))->all(columnValue);
    

                        }
                            
stringBuffer->append(this->getValue(columnValue));
    
stringBuffer->append(this->sqlStrings->CLOSE_QUOTE);
    

                        if(i < size -1)
                        
                                    {
                                    stringBuffer->append(this->commonSeps->COMMA);
    

                                    }
                                
}

stringBuffer->append(this->sqlStrings->WHERE);
    
stringBuffer->append(key);
    
stringBuffer->append(this->sqlStrings->EQUAL_QUOTE);
    
stringBuffer->append(this->getValue(value));
    
stringBuffer->append(this->sqlStrings->CLOSE_QUOTE);
    

    std::string sqlStatement = stringBuffer->toString();;
    
this->executeSQLStatement(sqlStatement);
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->SUCCESS_SQL_STATEMENT) +JavaString::valueOf(sqlStatement), this, this->METHOD_UPDATE_WHERE);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->FAILED_SQL_STATEMENT +stringBuffer, this, METHOD_UPDATE_WHERE, &e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbSqlRow::updateWhere(HashMap<Object*, Object*>* whereKeyValuePairs, HashMap<Object*, Object*>* updatedKeyValuePairs) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->UPDATE);
    
stringBuffer->append(this->getTableName());
    
stringBuffer->append(this->sqlStrings->SET);
    

        try {
            
    std::vector<Object*> keyArray = updatedKeyValuePairs->keySet()->toArray();;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string columnName = keyArray[i]->toString();;
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(columnName);
    
stringBuffer->append(this->EQUAL_QUOTE);
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->COLUMN_NAME_LABEL) +JavaString::valueOf(columnName), this, this->METHOD_UPDATE_WHERE);
    

                                    }
                                

    std::string columnValue = JavaBoxes::unbox<std::string>(updatedKeyValuePairs->get(columnName));;
    

                        if(false)
                        
                                    {
                                    columnValue= this->stringUtil->EMPTY_STRING;
    

                                    }
                                
                        else {
                            columnValue= (new Replace(this->sqlStrings->CLOSE_QUOTE, this->ESCAPE_QUOTES))->all(columnValue);
    

                        }
                            
stringBuffer->append(this->getValue(columnValue));
    
stringBuffer->append(this->sqlStrings->CLOSE_QUOTE);
    

                        if(i < size -1)
                        
                                    {
                                    stringBuffer->append(this->commonSeps->COMMA);
    

                                    }
                                
}

stringBuffer->append(this->sqlStrings->WHERE);
    

    Set* set = whereKeyValuePairs->keySet();;
    

    std::vector<Object*> keyArray2 = set->toArray();;
    

    int32_t size2 = keyArray2.size();;
    




                        for (
    int32_t i = 0;i < size2; i++)
        {

    std::string key = JavaBoxes::unbox<std::string>(keyArray2[i]);;
    

    std::string value = JavaBoxes::unbox<std::string>(whereKeyValuePairs->get(key));;
    


                            {
                            stringBuffer->append(key);
    
stringBuffer->append(this->sqlStrings->EQUAL_QUOTE);
    
stringBuffer->append(this->getValue(value));
    
stringBuffer->append(this->sqlStrings->CLOSE_QUOTE);
    

                        if(i < size2 -1)
                        
                                    {
                                    stringBuffer->append(this->sqlStrings->AND);
    

                                    }
                                

                            }
                    
}


    std::string sqlStatement = stringBuffer->toString();;
    
this->executeSQLStatement(sqlStatement);
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->SUCCESS_SQL_STATEMENT) +JavaString::valueOf(sqlStatement), this, this->METHOD_UPDATE_WHERE);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->FAILED_SQL_STATEMENT +stringBuffer, this, METHOD_UPDATE_WHERE, &e);
    

                                    }
                                



                            throw e;
                    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbSqlRow::deleteWhere(std::string key, std::string value) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->DELETE);
    
stringBuffer->append(this->sqlStrings->FROM);
    
stringBuffer->append(this->getTableName());
    
stringBuffer->append(this->sqlStrings->WHERE);
    
stringBuffer->append(key);
    
stringBuffer->append(this->sqlStrings->EQUAL_QUOTE);
    
stringBuffer->append(value);
    
stringBuffer->append(this->sqlStrings->CLOSE_QUOTE);
    

        try {
            
    std::string sqlStatement = stringBuffer->toString();;
    
this->executeSQLStatement(sqlStatement);
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->SUCCESS_SQL_STATEMENT) +JavaString::valueOf(sqlStatement), this, this->METHOD_DELETE_WHERE);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->FAILED_SQL_STATEMENT +stringBuffer->toString(), this, this->METHOD_DELETE_WHERE, &e);
    

                                    }
                                
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbSqlRow::deleteWhere(HashMap<Object*, Object*>* keysAndValues) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->DELETE);
    
stringBuffer->append(this->sqlStrings->FROM);
    
stringBuffer->append(this->getTableName());
    
stringBuffer->append(this->sqlStrings->WHERE);
    

        try {
            
    Set* set = keysAndValues->keySet();;
    

    std::vector<Object*> keyArray = set->toArray();;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string key = JavaBoxes::unbox<std::string>(keyArray[i]);;
    

    std::string value = .toCharArray();;
    
stringBuffer->append(key);
    
stringBuffer->append(this->sqlStrings->EQUAL_QUOTE);
    
stringBuffer->append(this->getValue(value));
    
stringBuffer->append(this->sqlStrings->CLOSE_QUOTE);
    

                        if(i < size -1)
                        
                                    {
                                    stringBuffer->append(this->sqlStrings->AND);
    

                                    }
                                
}


    std::string sqlStatement = stringBuffer->toString();;
    
this->executeSQLStatement(sqlStatement);
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->SUCCESS_SQL_STATEMENT) +JavaString::valueOf(sqlStatement), this, this->METHOD_DELETE_WHERE);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->FAILED_SQL_STATEMENT +stringBuffer->toString(), this, this->METHOD_DELETE_WHERE, &e);
    

                                    }
                                
}

}


    auto AbSqlRow::insert(BasicArrayList* values) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->INSERT_INTO);
    
stringBuffer->append(this->getTableName());
    
stringBuffer->append(this->sqlStrings->VALUES);
    

        try {
            



                        for (
    int32_t i = 0;i < values->size() -1; i++)
        {

    std::string value = this->getValue(JavaBoxes::unbox<std::string>(values->get(i)));;
    
value= (new Replace(this->sqlStrings->ESCAPE, this->sqlStrings->DOUBLE_ESCAPE))->all(value);
    
stringBuffer->append(value);
    
stringBuffer->append(this->sqlStrings->SINGLE_QUOTE_COMMA_SEP);
    
}


    std::string value = this->getValue(JavaBoxes::unbox<std::string>(values->get(values->size() -1)));;
    
value= (new Replace(this->sqlStrings->ESCAPE, this->sqlStrings->DOUBLE_ESCAPE))->all(value);
    
stringBuffer->append(value);
    
stringBuffer->append(this->INSERT_END);
    

    std::string sqlStatement = stringBuffer->toString();;
    
this->executeSQLStatement(sqlStatement);
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->SUCCESS_SQL_STATEMENT) +JavaString::valueOf(sqlStatement), this, this->INSERT);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->FAILED_SQL_STATEMENT +stringBuffer->toString(), this, INSERT, &e);
    

                                    }
                                
}

}


    auto AbSqlRow::getRow(HashMap<Object*, Object*>* keysAndValues) -> HashMap<Object*, Object*>*{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->SELECT_ALL_FROM);
    
stringBuffer->append(this->getTableName());
    
stringBuffer->append(this->sqlStrings->WHERE);
    

        try {
            
    HashMap<Object*, Object*>* result = 
                null
            ;;
    

    Set* set = keysAndValues->keySet();;
    

    std::vector<Object*> keyArray = set->toArray();;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string key = JavaBoxes::unbox<std::string>(keyArray[index]);;
    

    std::string value = .toCharArray();;
    
stringBuffer->append(key);
    
stringBuffer->append(this->sqlStrings->EQUAL_QUOTE);
    
stringBuffer->append(this->getValue(value));
    
stringBuffer->append(this->sqlStrings->CLOSE_QUOTE);
    

                        if(index < size -1)
                        
                                    {
                                    stringBuffer->append(this->sqlStrings->AND);
    

                                    }
                                
}


    std::string sqlStatement = stringBuffer->toString();;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->sqlStrings->SQL_STATEMENT_LABEL) +JavaString::valueOf(sqlStatement), this, this->METHOD_GET_ROW);
    

                                    }
                                

    ResultSet* rset = this->executeSQLStatement(sqlStatement);;
    

    ResultSetMetaData* resultSetMetaData = rset->getMetaData();;
    

        while(rset->next())
        {
result= this->stdUtil->createHashMap();
    

    int32_t columnCount = resultSetMetaData->getColumnCount();;
    




                        for (
    int32_t index = 1;index <= columnCount; index++)
        {

    std::string columnName = resultSetMetaData->getColumnName(index);;
    

    std::string field = rset->getString(columnName);;
    
result->put(columnName, field);
    
}


                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->ROW_VALUE_LABEL +result->toString(), this, this->METHOD_GET_ROW);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    
}


                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->putF(this->NO_RESULTS_IN_RESULT_SET, this, this->METHOD_GET_ROW);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->FAILED_SQL_STATEMENT +stringBuffer, this, this->METHOD_GET_ROW, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto AbSqlRow::getRows(HashMap<Object*, Object*>* keysAndValues) -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getRows(keysAndValues, StringUtil::getInstance()->EMPTY_STRING);;
    
}


    auto AbSqlRow::getRows(HashMap<Object*, Object*>* keysAndValues, std::string more) -> BasicArrayList*{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->SELECT_ALL_FROM);
    
stringBuffer->append(this->getTableName());
    
stringBuffer->append(this->sqlStrings->WHERE);
    

        try {
            
    BasicArrayList* rows = new BasicArrayListD();;
    

    Set* set = keysAndValues->keySet();;
    

    std::vector<Object*> keyArray = set->toArray();;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string key = JavaBoxes::unbox<std::string>(keyArray[index]);;
    

    std::string value = .toCharArray();;
    
stringBuffer->append(key);
    
stringBuffer->append(this->sqlStrings->EQUAL_QUOTE);
    
stringBuffer->append(this->getValue(value));
    
stringBuffer->append(this->sqlStrings->CLOSE_QUOTE);
    

                        if(index < size -1)
                        
                                    {
                                    stringBuffer->append(this->sqlStrings->AND);
    

                                    }
                                
}


                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->sqlStrings->SQL_STATEMENT_LABEL +stringBuffer, this, this->METHOD_GET_ROWS);
    

                                    }
                                
stringBuffer->append(more);
    

    std::string sqlStatement = stringBuffer->toString();;
    

    ResultSet* rset = this->executeSQLStatement(sqlStatement);;
    

    ResultSetMetaData* resultSetMetaData = rset->getMetaData();;
    

        while(rset->next())
        {

    HashMap<Object*, Object*>* result = this->stdUtil->createHashMap();;
    

    int32_t columnCount = resultSetMetaData->getColumnCount();;
    




                        for (
    int32_t index = 1;index <= columnCount; index++)
        {

    std::string columnName = resultSetMetaData->getColumnName(index);;
    

    std::string field = rset->getString(columnName);;
    
result->put(columnName, field);
    
}


    std::string resultAsString = result->toString();;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->GET_ROW) +JavaString::valueOf(resultAsString), this, this->METHOD_GET_ROWS);
    

                                    }
                                
rows->add(result);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return rows;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->FAILED_SQL_STATEMENT +stringBuffer, this, this->METHOD_GET_ROWS, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto AbSqlRow::getAllRows() -> BasicArrayList*{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->SELECT_ALL_FROM);
    
stringBuffer->append(this->getTableName());
    

        try {
            
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->sqlStrings->SQL_STATEMENT_LABEL +stringBuffer, this, this->METHOD_GET_ALL_ROWS);
    

                                    }
                                

    BasicArrayList* rows = new BasicArrayListD();;
    

    std::string sqlStatement = stringBuffer->toString();;
    

    ResultSet* rset = this->executeSQLStatement(sqlStatement);;
    

    ResultSetMetaData* resultSetMetaData = rset->getMetaData();;
    

        while(rset->next())
        {

    HashMap<Object*, Object*>* result = this->stdUtil->createHashMap();;
    

    int32_t columnCount = resultSetMetaData->getColumnCount();;
    




                        for (
    int32_t index = 1;index <= columnCount; index++)
        {

    std::string columnName = resultSetMetaData->getColumnName(index);;
    

    std::string field = rset->getString(columnName);;
    
result->put(columnName, field);
    
}


                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->ROW_VALUES_LABEL +result->toString(), this, this->METHOD_GET_ALL_ROWS);
    

                                    }
                                
rows->add(result);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return rows;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->FAILED_SQL_STATEMENT +stringBuffer, this, this->METHOD_GET_ALL_ROWS, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto AbSqlRow::getRowsWhereBetween(HashMap<Object*, Object*>* whereKeyValuePairs, std::string betweenColumn, std::string smallest, std::string largest) -> BasicArrayList*{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->SELECT_ALL_FROM);
    
stringBuffer->append(this->getTableName());
    

        try {
            
    BasicArrayList* rows = new BasicArrayListD();;
    
stringBuffer->append(this->sqlStrings->WHERE);
    

    Set* set = whereKeyValuePairs->keySet();;
    

    std::string key;;
    

    std::string value;;
    

    std::vector<Object*> keyArray = set->toArray();;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
key= JavaBoxes::unbox<std::string>(keyArray[index]);
    
value= JavaBoxes::unbox<std::string>(whereKeyValuePairs->get(key));
    
stringBuffer->append(key);
    
stringBuffer->append(this->sqlStrings->EQUAL_QUOTE);
    
stringBuffer->append(this->getValue(value));
    
stringBuffer->append(this->sqlStrings->CLOSE_QUOTE);
    
stringBuffer->append(this->sqlStrings->AND);
    
}

stringBuffer->append(betweenColumn);
    
stringBuffer->append(this->sqlStrings->MORE_THAN_QUOTE);
    
stringBuffer->append(smallest);
    
stringBuffer->append(this->sqlStrings->CLOSE_QUOTE);
    
stringBuffer->append(this->sqlStrings->AND);
    
stringBuffer->append(betweenColumn);
    
stringBuffer->append(this->sqlStrings->LESS_THAN_QUOTE);
    
stringBuffer->append(largest);
    
stringBuffer->append(this->sqlStrings->CLOSE_QUOTE);
    

    std::string sqlStatement = stringBuffer->toString();;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->sqlStrings->SQL_STATEMENT_LABEL) +JavaString::valueOf(sqlStatement), this, this->METHOD_GET_ROWS_WHERE_BETWEEN);
    

                                    }
                                

    ResultSet* rset = this->executeSQLStatement(sqlStatement);;
    

    ResultSetMetaData* resultSetMetaData = rset->getMetaData();;
    

    HashMap<Object*, Object*>* result;;
    

    BasicArrayList* columnNames;;
    

    int32_t columnCount= 0;;
    

    std::string columnName;;
    

    std::string field;;
    

        while(rset->next())
        {
result= this->stdUtil->createHashMap();
    
columnNames= new BasicArrayListD();
    
columnCount= resultSetMetaData->getColumnCount();
    




                        for (
    int32_t index = 1;index <= columnCount; index++)
        {
columnName= resultSetMetaData->getColumnName(index);
    
field= rset->getString(columnName);
    
result->put(columnName, field);
    
}


                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->ROW_VALUE_LABEL +result->toString(), this, this->METHOD_GET_ROWS_WHERE_BETWEEN);
    

                                    }
                                
rows->add(result);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return rows;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->FAILED_SQL_STATEMENT +stringBuffer, this, METHOD_GET_ROWS_WHERE_BETWEEN, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto AbSqlRow::getRowsWhereBetween(std::string betweenColumn, std::string smallest, std::string largest) -> BasicArrayList*{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->SELECT_ALL_FROM);
    
stringBuffer->append(this->getTableName());
    

        try {
            
    BasicArrayList* rows = new BasicArrayListD();;
    
stringBuffer->append(this->sqlStrings->WHERE);
    
stringBuffer->append(betweenColumn);
    
stringBuffer->append(this->sqlStrings->MORE_THAN_QUOTE);
    
stringBuffer->append(smallest);
    
stringBuffer->append(this->sqlStrings->CLOSE_QUOTE);
    
stringBuffer->append(this->sqlStrings->AND);
    
stringBuffer->append(betweenColumn);
    
stringBuffer->append(this->sqlStrings->LESS_THAN_QUOTE);
    
stringBuffer->append(largest);
    
stringBuffer->append(this->sqlStrings->CLOSE_QUOTE);
    

    std::string sqlStatement = stringBuffer->toString();;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->sqlStrings->SQL_STATEMENT_LABEL) +JavaString::valueOf(sqlStatement), this, this->METHOD_GET_ROWS_WHERE_BETWEEN);
    

                                    }
                                

    ResultSet* rset = this->executeSQLStatement(sqlStatement);;
    

    ResultSetMetaData* resultSetMetaData = rset->getMetaData();;
    

    std::string columnName;;
    

    std::string field;;
    

    HashMap<Object*, Object*>* result;;
    

    BasicArrayList* columnNames;;
    

    int32_t columnCount= 0;;
    

        while(rset->next())
        {
result= this->stdUtil->createHashMap();
    
columnNames= new BasicArrayListD();
    
columnCount= resultSetMetaData->getColumnCount();
    




                        for (
    int32_t index = 1;index <= columnCount; index++)
        {
columnName= resultSetMetaData->getColumnName(index);
    
field= rset->getString(columnName);
    
result->put(columnName, field);
    
}


                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->ROW_VALUE_LABEL +result->toString(), this, this->METHOD_GET_ROWS_WHERE_BETWEEN);
    

                                    }
                                
rows->add(result);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return rows;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->FAILED_SQL_STATEMENT +stringBuffer, this, METHOD_GET_ROWS_WHERE_BETWEEN, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLROW_CPP
