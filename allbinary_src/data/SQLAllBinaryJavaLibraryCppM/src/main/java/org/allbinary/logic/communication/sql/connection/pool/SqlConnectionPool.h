
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_CONNECTION_POOL_SQLCONNECTIONPOOL_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_CONNECTION_POOL_SQLCONNECTIONPOOL_H

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

    public static SqlConnectionPool getInstance();

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

private constructor ();

                //@Throws(SQLException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public Connection get(string url);

                //@Throws(SQLException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public add(string url, Connection sqlConnection);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_CONNECTION_POOL_SQLCONNECTIONPOOL_H
