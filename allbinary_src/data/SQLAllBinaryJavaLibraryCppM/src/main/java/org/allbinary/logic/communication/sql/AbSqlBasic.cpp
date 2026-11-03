
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBASIC_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBASIC_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/sql/AbSqlBasic.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/ClassLoader.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <java/sql/Connection.h>

      
#include <java/sql/ResultSet.h>

      
#include <java/sql/SQLException.h>

      
#include <java/sql/Statement.h>

      
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/connection/pool/SqlConnectionPool.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/sql/SqlTypeStrings.h"
#include "org/allbinary/logic/communication/sql/SqlStrings.h"


AbSqlBasic::AbSqlBasic(DbConnectionInfo* databaseConnectionInfoInterface) : logUtil(LogUtil::getInstance()), sqlConnectionPool(SqlConnectionPool::getInstance()), stringUtil(StringUtil::getInstance()), commonStrings(CommonStrings::getInstance()), commonSeps(CommonSeps::getInstance()), stdUtil(StdUtil::getInstance()), sqlTypeStrings(SqlTypeStrings::getInstance()), sqlStrings(SqlStrings::getInstance()){
this->databaseConnectionInfoInterface= databaseConnectionInfoInterface;
    
this->connectAttemptCounter= 0;
    
this->conn= 
                                        nullptr
                                    ;
    
}


                //@Throws(SQLException.constructor)
            
    auto AbSqlBasic::executeSQLStatement(std::string statement) -> ResultSet*{

        try {
            this->initialize();
    

    Statement* stmt = this->conn->createStatement();;
    
stmt->execute(statement);
    

    ResultSet* rset = stmt->getResultSet();;
    
stmt->close();
    

    Connection* tempConnection = this->conn;;
    
this->conn= 
                                        nullptr
                                    ;
    
this->sqlConnectionPool->add(this->getDatabaseConnectionInfoInterface()->getUrl(), tempConnection);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return rset;
    

                //: 
} catch(SQLException& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(JavaString::valueOf(this->FAILED_SQL_STATEMENT) +JavaString::valueOf(statement), this, METHOD_EXECUTED_SQL_STATEMENT, &e);
    

                                    }
                                
this->conn->close();
    
this->conn= 
                                        nullptr
                                    ;
    



                            throw e;
                    
}

}


    auto AbSqlBasic::create(std::string databaseName) -> std::string{

        try {
            this->executeSQLStatement(JavaString::valueOf(this->sqlStrings->CREATE_DATABASE) +JavaString::valueOf(databaseName));
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->DATABASE_CREATED_LABEL) +JavaString::valueOf(databaseName), this, this->METHOD_CREATE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(databaseName) +JavaString::valueOf(this->sqlStrings->CREATE_RETURN);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(JavaString::valueOf(this->DATABASE_CREATION_FAILED_LABEL) +JavaString::valueOf(databaseName), this, this->METHOD_CREATE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->DATABASE_CREATION_FAILED_LABEL) +JavaString::valueOf(databaseName);
    
}

}


    auto AbSqlBasic::createConnection() -> void{

        try {
            this->conn= this->sqlConnectionPool->get(this->getDatabaseConnectionInfoInterface()->getUrl());
    

                //: 
} catch(SQLException& se) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->SQL_CONNECTION_RETRYING, this, METHOD_CREATE_CONNECTION, &se);
    

                                    }
                                

        try {
            Thread::currentThread()->sleep(2000);
    

                        if(this->connectAttemptCounter < 10)
                        
                                    {
                                    this->connectAttemptCounter++;
    
this->initialize();
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->SQL_CONNECTION_RETRY +se.message, this, this->METHOD_CREATE_CONNECTION, &e);
    

                                    }
                                
}

}

}


    auto AbSqlBasic::initialize() -> void{

        try {
            

                            {
                            
        try {
            
    ClassLoader* loader = Thread::currentThread()->getContextClassLoader();;
    

    Class* jdbcDriverClass = loader->loadClass(this->getDatabaseConnectionInfoInterface()->getJdbcDriver());;
    
jdbcDriverClass->newInstance();
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->LOAD_JDBC_DRIVER_FAILED_LABEL +this->getDatabaseConnectionInfoInterface()->getJdbcDriver(), this, METHOD_INITIALIZE, &e);
    

                                    }
                                
}


                            }
                    
this->createConnection();
    

                //: 
} catch(Exception& se) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->SQL_CONNECTION_FAILED, this, this->METHOD_INITIALIZE, &se);
    

                                    }
                                
}

}


    auto AbSqlBasic::getDatabaseConnectionInfoInterface() -> DatabaseConnectionInfoInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->databaseConnectionInfoInterface;
    
}


    auto AbSqlBasic::setDatabaseConnectionInfoInterface(DbConnectionInfo* databaseConnectionInfoInterface) -> void{
this->databaseConnectionInfoInterface= databaseConnectionInfoInterface;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBASIC_CPP
