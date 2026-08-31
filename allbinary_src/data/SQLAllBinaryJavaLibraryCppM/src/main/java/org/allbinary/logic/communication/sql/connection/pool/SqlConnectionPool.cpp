
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

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SqlConnectionPool
            : public Object
         {
        

    private: static const instance: SqlConnectionPool = new SqlConnectionPool();

    public static SqlConnectionPool getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SqlConnectionPool.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: connectionHashMap: HashMap<any, any> = 
                null
            ;

    private: const FIRST_NEW_CONNECTION_CREATED: string = "First New Connection Created: ";

    private: const FIRST: string = "First ";

    private: const NEW_CONNECTION_FOR: string = "New Connection For ";

    private: const CREATED: string = " Created";

    private: const NUMBER_OF_SQL_CONNECTIONS_FOR: string = "Number Of Sql Connections for: ";

    private: const NUMBER_OF_SQL_CONNECTION_VECTORS: string = "Number Of Sql Connection Vectors: ";

    private: const IS: string = " is ";

    private: const CONNECTION_ALLREADY_CLOSED: string = "Connection AllReady Closed";

    private: const METHOD_GET: string = "get()";

    private: const METHOD_ADD: string = "add()";

private constructor (){

            super();
        }


                //@Throws(SQLException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public Connection get(string url){

                        if(this.connectionHashMap == 
                                    null
                                )
                        
                                    {
                                    this.connectionHashMap= new HashMap<any, any>();
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGPOOL))
                        
                                    {
                                    this.logUtil!.putF(this.FIRST_NEW_CONNECTION_CREATED +url, this, METHOD_GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DriverManager.getConnection(url);;
    

                                    }
                                
                        else {
                            
    connectionVector: Vector = this.connectionHashMap!.get(url) as Vector;;
    

                        if(connectionVector == 
                                    null
                                )
                        
                                    {
                                    connectionVector= new Vector();
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGPOOL))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.FIRST);
    
stringBuffer!.append(this.NEW_CONNECTION_FOR);
    
stringBuffer!.append(url);
    
stringBuffer!.append(this.CREATED);
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.METHOD_GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DriverManager.getConnection(url);;
    

                                    }
                                
                             else 
                        if(connectionVector!.length == 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGPOOL))
                        
                                    {
                                    this.logUtil!.putF(new StringMaker().append(this.NEW_CONNECTION_FOR)!.append(url)!.append(this.CREATED)!.toString(), this, METHOD_GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DriverManager.getConnection(url);;
    

                                    }
                                
                        else {
                            
    stringBuffer: StringMaker = new StringMaker();;
    

    size: int32_t = connectionVector!.length!;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    sqlConnection: Connection = connectionVector!.get(i) as Connection;;
    

                        if(!sqlConnection!.isClosed())
                        
                                    {
                                    connectionVector!.remove(sqlConnection);
    
this.connectionHashMap!.put(url, connectionVector);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGPOOL))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(this.NUMBER_OF_SQL_CONNECTIONS_FOR);
    
stringBuffer!.append(url);
    
stringBuffer!.append(this.IS);
    
stringBuffer!.appendint(connectionVector!.length);
    
this.logUtil!.putF(NUMBER_OF_SQL_CONNECTION_VECTORS +this.connectionHashMap!.size(), this, this.METHOD_GET);
    
this.logUtil!.putF(stringBuffer!.toString(), this, METHOD_GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return sqlConnection as Connection;
    

                                    }
                                
}


                        }
                            

                        }
                            

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGPOOL))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.NEW_CONNECTION_FOR);
    
stringBuffer!.append(url);
    
stringBuffer!.append(this.CREATED);
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.METHOD_GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DriverManager.getConnection(url);;
    
}


                //@Throws(SQLException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public add(string url, Connection sqlConnection){

                        if(!sqlConnection!.isClosed())
                        
                                    {
                                    
    connectionVector: Vector;;
    

                        if(this.connectionHashMap == 
                                    null
                                )
                        
                                    {
                                    this.connectionHashMap= new HashMap<any, any>();
    
connectionVector= new Vector();
    
connectionVector!.add(sqlConnection);
    

                                    }
                                
                        else {
                            connectionVector= this.connectionHashMap!.get(url) as Vector;
    

                        if(connectionVector == 
                                    null
                                )
                        
                                    {
                                    connectionVector= new Vector();
    

                                    }
                                
connectionVector!.add(sqlConnection);
    
this.connectionHashMap!.put(url, connectionVector);
    

                        }
                            

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGPOOL))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.NUMBER_OF_SQL_CONNECTIONS_FOR);
    
stringBuffer!.append(url);
    
stringBuffer!.append(this.IS);
    
stringBuffer!.appendint(connectionVector!.length);
    
this.logUtil!.putF(this.NUMBER_OF_SQL_CONNECTION_VECTORS +this.connectionHashMap!.size(), this, this.METHOD_ADD);
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.METHOD_ADD);
    

                                    }
                                

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGPOOL))
                        
                                    {
                                    this.logUtil!.putF(this.CONNECTION_ALLREADY_CLOSED, this, METHOD_ADD);
    

                                    }
                                
}


};

            

