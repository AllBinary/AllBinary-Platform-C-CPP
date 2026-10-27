
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_CONNECTION_POOL_SQLCONNECTIONPOOL_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_CONNECTION_POOL_SQLCONNECTIONPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/sql/connection/pool/SqlConnectionPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/sql/Connection.h>

      
#include <java/sql/DriverManager.h>

      
#include <java/sql/SQLException.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto SqlConnectionPool::instance_owner() -> SqlConnectionPool* { static std::unique_ptr<SqlConnectionPool> value(new SqlConnectionPool()); return value.get(); }
SqlConnectionPool* SqlConnectionPool::instance = SqlConnectionPool::instance_owner();

    auto SqlConnectionPool::getInstance() -> SqlConnectionPool*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SqlConnectionPool::instance;
    
}


SqlConnectionPool::SqlConnectionPool() : logUtil(LogUtil::getInstance()), stdUtil(StdUtil::getInstance()){
}


                //@Throws(SQLException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto SqlConnectionPool::get(std::string url) -> Connection*{

                        if(this->connectionHashMap == 
                                    nullptr
                                )
                        
                                    {
                                    this->connectionHashMap= this->stdUtil->createHashMap();
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGPOOL))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->FIRST_NEW_CONNECTION_CREATED) +JavaString::valueOf(url), this, METHOD_GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DriverManager::getConnection(url);;
    

                                    }
                                
                        else {
                            
    BasicArrayList* connectionVector = dynamic_cast<BasicArrayList*>(this->connectionHashMap->get(url));;
    

                        if(connectionVector == 
                                    nullptr
                                )
                        
                                    {
                                    connectionVector= new BasicArrayListD();
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGPOOL))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->FIRST);
    
stringBuffer->append(this->NEW_CONNECTION_FOR);
    
stringBuffer->append(url);
    
stringBuffer->append(this->CREATED);
    
this->logUtil->putF(stringBuffer->toString(), this, this->METHOD_GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DriverManager::getConnection(url);;
    

                                    }
                                
                             else 
                        if(connectionVector->size() == 0)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGPOOL))
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append(this->NEW_CONNECTION_FOR)->append(url)->append(this->CREATED)->toString(), this, METHOD_GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DriverManager::getConnection(url);;
    

                                    }
                                
                        else {
                            
    StringMaker* stringBuffer = new StringMaker();;
    

    int32_t size = connectionVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    Connection* sqlConnection = dynamic_cast<Connection*>(connectionVector->get(i));;
    

                        if(!sqlConnection->isClosed())
                        
                                    {
                                    connectionVector->remove(sqlConnection);
    
this->connectionHashMap->put(url, connectionVector);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGPOOL))
                        
                                    {
                                    stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(this->NUMBER_OF_SQL_CONNECTIONS_FOR);
    
stringBuffer->append(url);
    
stringBuffer->append(this->IS);
    
stringBuffer->appendint(connectionVector->size());
    
this->logUtil->putF(JavaString::valueOf(NUMBER_OF_SQL_CONNECTION_VECTORS) +JavaString::valueOf(this->connectionHashMap->size()), this, this->METHOD_GET);
    
this->logUtil->putF(stringBuffer->toString(), this, METHOD_GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<Connection*>(sqlConnection);
    

                                    }
                                
}


                        }
                            

                        }
                            

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGPOOL))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->NEW_CONNECTION_FOR);
    
stringBuffer->append(url);
    
stringBuffer->append(this->CREATED);
    
this->logUtil->putF(stringBuffer->toString(), this, this->METHOD_GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DriverManager::getConnection(url);;
    
}


                //@Throws(SQLException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto SqlConnectionPool::add(std::string url, Connection* sqlConnection) -> void{

                        if(!sqlConnection->isClosed())
                        
                                    {
                                    
    BasicArrayList* connectionVector;;
    

                        if(this->connectionHashMap == 
                                    nullptr
                                )
                        
                                    {
                                    this->connectionHashMap= this->stdUtil->createHashMap();
    
connectionVector= new BasicArrayListD();
    
connectionVector->add(sqlConnection);
    

                                    }
                                
                        else {
                            connectionVector= dynamic_cast<BasicArrayList*>(this->connectionHashMap->get(url));
    

                        if(connectionVector == 
                                    nullptr
                                )
                        
                                    {
                                    connectionVector= new BasicArrayListD();
    

                                    }
                                
connectionVector->add(sqlConnection);
    
this->connectionHashMap->put(url, connectionVector);
    

                        }
                            

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGPOOL))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->NUMBER_OF_SQL_CONNECTIONS_FOR);
    
stringBuffer->append(url);
    
stringBuffer->append(this->IS);
    
stringBuffer->appendint(connectionVector->size());
    
this->logUtil->putF(this->NUMBER_OF_SQL_CONNECTION_VECTORS +this->connectionHashMap->size(), this, this->METHOD_ADD);
    
this->logUtil->putF(stringBuffer->toString(), this, this->METHOD_ADD);
    

                                    }
                                

                                    }
                                

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGPOOL))
                        
                                    {
                                    this->logUtil->putF(this->CONNECTION_ALLREADY_CLOSED, this, METHOD_ADD);
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_CONNECTION_POOL_SQLCONNECTIONPOOL_CPP
