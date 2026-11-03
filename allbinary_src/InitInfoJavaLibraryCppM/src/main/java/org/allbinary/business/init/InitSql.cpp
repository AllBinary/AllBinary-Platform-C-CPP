
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_INITSQL_CPP
        #define ORG_ALLBINARY_BUSINESS_INIT_INITSQL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/init/InitSql.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/sql/Connection.h>

      
#include <java/sql/DriverManager.h>

      
#include <java/sql/ResultSet.h>

      
#include <java/sql/ResultSetMetaData.h>

      
#include <java/sql/SQLException.h>

      
#include <java/sql/Statement.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
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
        

InitSql::InitSql(DbConnectionInfo* databaseConnectionInfoInterface) : stringUtil(StringUtil::getInstance()), commonSeps(CommonSeps::getInstance()), sqlTypeStrings(SqlTypeStrings::getInstance()), sqlStrings(SqlStrings::getInstance()), stdUtil(StdUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->setDatabaseConnectionInfoInterface(databaseConnectionInfoInterface);
    
}


    auto InitSql::setTable(std::string tableName) -> void{
this->tableName= tableName;
    
}


    auto InitSql::setDatabaseConnectionInfoInterface(DbConnectionInfo* databaseConnectionInfoInterface) -> void{
this->databaseConnectionInfoInterface= databaseConnectionInfoInterface;
    
}


    auto InitSql::createTable(std::string tableData) -> bool{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Creating Table: ");
    
stringBuffer->append(tableData);
    
PreLogUtil::put(stringBuffer->toString(), INIT_SQL, "createTable()");
    
this->executeSQLStatement(tableData);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil::putOE(this->commonStrings->EXCEPTION, INIT_SQL, "createTable()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    auto InitSql::dropTable() -> bool{

    std::string sqlStatement = this->sqlStrings->DROP_TABLE +this->tableName;;
    

        try {
            this->executeSQLStatement(sqlStatement);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil::putOE(this->commonStrings->EXCEPTION, INIT_SQL, "dropTables()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    auto InitSql::getRow(HashMap<Object*, Object*>* keysAndValues) -> HashMap<Object*, Object*>*{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->SELECT_ALL_FROM);
    
stringBuffer->append(this->tableName);
    
stringBuffer->append(this->sqlStrings->WHERE);
    

        try {
            
    HashMap<Object*, Object*>* result = 
                null
            ;;
    

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
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    PreLogUtil::put(JavaString::valueOf(this->sqlStrings->SQL_STATEMENT_LABEL) +JavaString::valueOf(sqlStatement), this->INIT_SQL, this->METHOD_GET_ROW);
    

                                    }
                                

    ResultSet* rset = this->executeSQLStatement(sqlStatement);;
    

    ResultSetMetaData* resultSetMetaData = rset->getMetaData();;
    

        while(rset->next())
        {
result= stdUtil->createHashMap();
    

    int32_t columnCount = resultSetMetaData->getColumnCount();;
    




                        for (
    int32_t index = 1;index <= columnCount; index++)
        {

    std::string columnName = resultSetMetaData->getColumnName(index);;
    

    std::string field = rset->getString(columnName);;
    
result->put(columnName, field);
    
}


                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    PreLogUtil::put(this->ROW_VALUE_LABEL +result->toString(), this->INIT_SQL, this->METHOD_GET_ROW);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil::put(this->NO_RESULTS_IN_RESULT_SET, this->INIT_SQL, this->METHOD_GET_ROW);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil::putOE(this->FAILED_SQL_STATEMENT +stringBuffer, this->INIT_SQL, this->METHOD_GET_ROW, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto InitSql::updateWhere(std::string key, std::string value, HashMap<Object*, Object*>* updatedKeyValuePairs) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->UPDATE);
    
stringBuffer->append(this->tableName);
    
stringBuffer->append(this->sqlStrings->SET);
    

        try {
            
    std::vector<Object*> columnArray = updatedKeyValuePairs->keySet()->toArray();;
    

    int32_t size = columnArray.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string columnName = columnArray[i]->toString();;
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(columnName);
    
stringBuffer->append(this->EQUAL_QUOTE);
    

    std::string columnValue = JavaBoxes::unbox<std::string>(updatedKeyValuePairs->get(columnName));;
    

                        if(false)
                        
                                    {
                                    columnValue= this->stringUtil->EMPTY_STRING;
    

                                    }
                                
                        else {
                            
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
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    PreLogUtil::put(JavaString::valueOf(this->SUCCESS_SQL_STATEMENT) +JavaString::valueOf(sqlStatement), this->INIT_SQL, METHOD_UPDATE_WHERE);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil::putOE(this->FAILED_SQL_STATEMENT +stringBuffer, this->INIT_SQL, METHOD_UPDATE_WHERE, &e);
    

                                    }
                                
}

}


    auto InitSql::insert(BasicArrayList* values) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->INSERT_INTO);
    
stringBuffer->append(this->tableName);
    
stringBuffer->append(this->sqlStrings->VALUES);
    

        try {
            
    int32_t size = values->size();;
    




                        for (
    int32_t i = 0;i < size -1; i++)
        {

    std::string value = this->getValue(JavaBoxes::unbox<std::string>(values->get(i)));;
    
stringBuffer->append(value);
    
stringBuffer->append(this->sqlStrings->SINGLE_QUOTE_COMMA_SEP);
    
}


    std::string value = this->getValue(JavaBoxes::unbox<std::string>(values->get(values->size() -1)));;
    
stringBuffer->append(value);
    
stringBuffer->append(this->INSERT_END);
    

    std::string sqlStatement = stringBuffer->toString();;
    
this->executeSQLStatement(sqlStatement);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    PreLogUtil::put(JavaString::valueOf(this->SUCCESS_SQL_STATEMENT) +JavaString::valueOf(sqlStatement), this->INIT_SQL, INSERT);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil::putOE(this->FAILED_SQL_STATEMENT +stringBuffer->toString(), this->INIT_SQL, INSERT, &e);
    

                                    }
                                
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto InitSql::getValue(std::string value) -> std::string{

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


                //@Throws(Exception.constructor, SQLException.constructor)
            
    auto InitSql::executeSQLStatement(std::string statement) -> ResultSet*{

        try {
            
                        if(this->conn == 
                                    nullptr
                                )
                        
                                    {
                                    this->initialize();
    

                                    }
                                

    Statement* stmt = this->conn->createStatement();;
    
stmt->execute(statement);
    

    ResultSet* rset = stmt->getResultSet();;
    
stmt->close();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rset;
    

                //: 
} catch(SQLException& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil::putOE(this->commonStrings->EXCEPTION, INIT_SQL, "executeSQLStatement()", &e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil::putOE(this->commonStrings->EXCEPTION, INIT_SQL, "executeSQLStatement()", &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(SQLException.constructor)
            
    auto InitSql::createConnection() -> void{

        try {
            
                        if(this->useridAndPassword == true)
                        
                                    {
                                    this->conn= DriverManager::getConnection(this->databaseConnectionInfoInterface->getUrl(), this->userid, this->password);
    

                                    }
                                
                        else {
                            this->conn= DriverManager::getConnection(this->databaseConnectionInfoInterface->getUrl());
    

                        }
                            

                //: 
} catch(SQLException& se) 
            {
PreLogUtil::putOE(this->commonStrings->EXCEPTION, INIT_SQL, "createConnection()", &se);
    



                            throw se;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto InitSql::initialize() -> void{

        try {
            
        try {
            
    std::string jdbcDriver = this->databaseConnectionInfoInterface->getJdbcDriver();;
    
PreLogUtil::put((new StringMaker())->append("Loading DbConnnectionInfo: ")->append(this->databaseConnectionInfoInterface->getClass()->getName())->append(" Driver: ")->append(jdbcDriver)->toString(), this->INIT_SQL, "initialize()");
    
Class::forName(jdbcDriver)->newInstance();
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil::putOE(JavaString::valueOf("LoadDriver Failed: ") +JavaString::valueOf(this->databaseConnectionInfoInterface->getJdbcDriver()), this->INIT_SQL, "initialize()", &e);
    

                                    }
                                



                            throw e;
                    
}


                        if(false && false)
                        
                                    {
                                    this->useridAndPassword= true;
    

                                    }
                                
this->createConnection();
    

                //: 
} catch(Exception& se) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    PreLogUtil::putOE(this->commonStrings->EXCEPTION, INIT_SQL, "initialize()", &se);
    

                                    }
                                



                            throw se;
                    
}

}


    auto InitSql::getDatabaseConnectionInfoInterface() -> DatabaseConnectionInfoInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->databaseConnectionInfoInterface;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_INIT_INITSQL_CPP
