
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
        



            #include "../../../../../../../java/lang/Object.h"
        
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
        
class SqlConnectionPool
            : public Object
         {

    private: static SqlConnectionPool instance() { return SqlConnectionPool(); }

    public: static SqlConnectionPool getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SqlConnectionPool::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const StdUtil stdUtil = StdUtil::getInstance();

    private: HashMap<any, any> connectionHashMap = 
                null
            ;

    private: const std::string FIRST_NEW_CONNECTION_CREATED = "First New Connection Created: ";

    private: const std::string FIRST = "First ";

    private: const std::string NEW_CONNECTION_FOR = "New Connection For ";

    private: const std::string CREATED = " Created";

    private: const std::string NUMBER_OF_SQL_CONNECTIONS_FOR = "Number Of Sql Connections for: ";

    private: const std::string NUMBER_OF_SQL_CONNECTION_VECTORS = "Number Of Sql Connection Vectors: ";

    private: const std::string IS = " is ";

    private: const std::string CONNECTION_ALLREADY_CLOSED = "Connection AllReady Closed";

    private: const std::string METHOD_GET = "get()";

    private: const std::string METHOD_ADD = "add()";

private: SqlConnectionPool(){
}


                //@Throws(SQLException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Connection get(std::string url){

                        if(this->connectionHashMap == 
                                    nullptr
                                )
                        
                                    {
                                    this->connectionHashMap= this->stdUtil.createHashMap();
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGINGPOOL))
                        
                                    {
                                    this->logUtil.putF(this->FIRST_NEW_CONNECTION_CREATED +url, this, METHOD_GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DriverManager::getConnection(url);;
    

                                    }
                                
                        else {
                            
    BasicArrayList connectionVector = this->connectionHashMap.get(url) as BasicArrayList;;
    

                        if(connectionVector == 
                                    nullptr
                                )
                        
                                    {
                                    connectionVector= BasicArrayListD();
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGINGPOOL))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->FIRST);
    
stringBuffer.append(this->NEW_CONNECTION_FOR);
    
stringBuffer.append(url);
    
stringBuffer.append(this->CREATED);
    
this->logUtil.putF(stringBuffer.toString(), this, this->METHOD_GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DriverManager::getConnection(url);;
    

                                    }
                                
                             else 
                        if(connectionVector.size() == 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGINGPOOL))
                        
                                    {
                                    this->logUtil.putF(StringMaker().append(this->NEW_CONNECTION_FOR).append(url).append(this->CREATED).toString(), this, METHOD_GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DriverManager::getConnection(url);;
    

                                    }
                                
                        else {
                            
    StringMaker stringBuffer = StringMaker();;
    

    int32_t size = connectionVector.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    Connection sqlConnection = connectionVector.get(i) as Connection;;
    

                        if(!sqlConnection.isClosed())
                        
                                    {
                                    connectionVector.remove(sqlConnection);
    
this->connectionHashMap.put(url, connectionVector);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGINGPOOL))
                        
                                    {
                                    stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(this->NUMBER_OF_SQL_CONNECTIONS_FOR);
    
stringBuffer.append(url);
    
stringBuffer.append(this->IS);
    
stringBuffer.appendint(connectionVector.size());
    
this->logUtil.putF(NUMBER_OF_SQL_CONNECTION_VECTORS +this->connectionHashMap.size(), this, this->METHOD_GET);
    
this->logUtil.putF(stringBuffer.toString(), this, METHOD_GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return sqlConnection as Connection;
    

                                    }
                                
}


                        }
                            

                        }
                            

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGINGPOOL))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->NEW_CONNECTION_FOR);
    
stringBuffer.append(url);
    
stringBuffer.append(this->CREATED);
    
this->logUtil.putF(stringBuffer.toString(), this, this->METHOD_GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DriverManager::getConnection(url);;
    
}


                //@Throws(SQLException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void add(std::string url, Connection sqlConnection){

                        if(!sqlConnection.isClosed())
                        
                                    {
                                    
    BasicArrayList connectionVector;;
    

                        if(this->connectionHashMap == 
                                    nullptr
                                )
                        
                                    {
                                    this->connectionHashMap= this->stdUtil.createHashMap();
    
connectionVector= BasicArrayListD();
    
connectionVector.add(sqlConnection);
    

                                    }
                                
                        else {
                            connectionVector= this->connectionHashMap.get(url) as BasicArrayList;
    

                        if(connectionVector == 
                                    nullptr
                                )
                        
                                    {
                                    connectionVector= BasicArrayListD();
    

                                    }
                                
connectionVector.add(sqlConnection);
    
this->connectionHashMap.put(url, connectionVector);
    

                        }
                            

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGINGPOOL))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->NUMBER_OF_SQL_CONNECTIONS_FOR);
    
stringBuffer.append(url);
    
stringBuffer.append(this->IS);
    
stringBuffer.appendint(connectionVector.size());
    
this->logUtil.putF(this->NUMBER_OF_SQL_CONNECTION_VECTORS +this->connectionHashMap.size(), this, this->METHOD_ADD);
    
this->logUtil.putF(stringBuffer.toString(), this, this->METHOD_ADD);
    

                                    }
                                

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGINGPOOL))
                        
                                    {
                                    this->logUtil.putF(this->CONNECTION_ALLREADY_CLOSED, this, METHOD_ADD);
    

                                    }
                                
}


};

            

