
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_INITSQL_H
        #define ORG_ALLBINARY_BUSINESS_INIT_INITSQL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
class BasicArrayList;

class DatabaseConnectionInfoInterface;
class DbConnectionInfo;
class StdUtil;
class PreLogUtil;
class LogConfigTypeFactory;
class LogConfigTypes;
class SqlStrings;
class SqlTypeStrings;
class StringMaker;
class StringUtil;
class StringValidationUtil;
class CommonSeps;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InitSql
            : public virtual Object
         {

    /*protected*/ public: StringUtil* stringUtil;

    /*protected*/ public: CommonSeps* commonSeps;

    /*protected*/ public: SqlTypeStrings* sqlTypeStrings;

    /*protected*/ public: SqlStrings* sqlStrings;

    /*protected*/ public: StdUtil* stdUtil;

    /*protected*/ public: const std::string INSERT = "insert";

    /*protected*/ public: const std::string UPDATE = "update";

    private: DbConnectionInfo* databaseConnectionInfoInterface;

    private: std::string userid;

    private: std::string password;

    private: std::string tableName;

    private: Connection* conn;

    private: bool useridAndPassword= false;

    /*protected*/ public: const std::string SUCCESS_SQL_STATEMENT = "Success\nSQL Statement: ";

    /*protected*/ public: const std::string FAILED_SQL_STATEMENT = "Failed\nSQL Statement: ";

    private: const std::string INIT_SQL = "InitSql";

    /*protected*/ public: CommonStrings* commonStrings;

    private: const std::string EQUAL_QUOTE = "=\"";

    private: const std::string METHOD_GET_ROW = "getRow()";

    private: const std::string METHOD_UPDATE_WHERE = "updateWhere()";

    private: const std::string ROW_VALUE_LABEL = "Row Value: ";

    private: const std::string NO_RESULTS_IN_RESULT_SET = "No Results in ResultSet";

    private: const std::string INSERT_END = "')";

public: InitSql(DbConnectionInfo* databaseConnectionInfoInterface);

    public: void setTable(std::string tableName);

    public: void setDatabaseConnectionInfoInterface(DbConnectionInfo* databaseConnectionInfoInterface);

    public: bool createTable(std::string tableData);

    public: bool dropTable();

    public: HashMap<Object*, Object*>* getRow(HashMap<Object*, Object*>* keysAndValues);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void updateWhere(std::string key, std::string value, HashMap<Object*, Object*>* updatedKeyValuePairs);

    public: void insert(BasicArrayList* values);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: std::string getValue(std::string value);

                //@Throws(Exception.constructor, SQLException.constructor)
            
    public: ResultSet* executeSQLStatement(std::string statement);

                //@Throws(SQLException.constructor)
            
    private: void createConnection();

                //@Throws(Exception.constructor)
            
    private: void initialize();

    public: DatabaseConnectionInfoInterface* getDatabaseConnectionInfoInterface();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_INITSQL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_INIT_INITSQL_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_INIT_INITSQL_H_COMPLETE
        #if __has_include(<java/sql/Connection.h>)
#include <java/sql/Connection.h>
#endif
#if __has_include(<java/sql/DriverManager.h>)
#include <java/sql/DriverManager.h>
#endif
#if __has_include(<java/sql/ResultSet.h>)
#include <java/sql/ResultSet.h>
#endif
#if __has_include(<java/sql/ResultSetMetaData.h>)
#include <java/sql/ResultSetMetaData.h>
#endif
#if __has_include(<java/sql/SQLException.h>)
#include <java/sql/SQLException.h>
#endif
#if __has_include(<java/sql/Statement.h>)
#include <java/sql/Statement.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>)
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>
#endif
#if __has_include(<org/allbinary/business/init/db/DbConnectionInfo.h>)
#include <org/allbinary/business/init/db/DbConnectionInfo.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/SqlStrings.h>)
#include <org/allbinary/logic/communication/sql/SqlStrings.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/SqlTypeStrings.h>)
#include <org/allbinary/logic/communication/sql/SqlTypeStrings.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
