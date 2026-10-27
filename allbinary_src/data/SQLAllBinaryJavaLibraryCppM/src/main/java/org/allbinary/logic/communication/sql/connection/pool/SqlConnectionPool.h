
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/sql/Connection.h>
#include <java/sql/DriverManager.h>
#include <java/sql/SQLException.h>
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class StdUtil;
class LogUtil;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SqlConnectionPool
            : public virtual Object
         {

    private: static SqlConnectionPool* instance_owner();
    private: static SqlConnectionPool* instance;

    public: static SqlConnectionPool* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: StdUtil* stdUtil;

    private: HashMap<Object*, Object*>* connectionHashMap = 
                nullptr
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

private: SqlConnectionPool();

                //@Throws(SQLException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Connection* get(std::string url);

                //@Throws(SQLException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void add(std::string url, Connection* sqlConnection);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_CONNECTION_POOL_SQLCONNECTIONPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_CONNECTION_POOL_SQLCONNECTIONPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_CONNECTION_POOL_SQLCONNECTIONPOOL_H_COMPLETE
        #if __has_include(<java/sql/Connection.h>)
#include <java/sql/Connection.h>
#endif
#if __has_include(<java/sql/DriverManager.h>)
#include <java/sql/DriverManager.h>
#endif
#if __has_include(<java/sql/SQLException.h>)
#include <java/sql/SQLException.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif

        #endif
    
