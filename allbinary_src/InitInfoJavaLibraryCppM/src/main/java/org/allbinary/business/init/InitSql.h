
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

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Class.h"
        
            #include "../../../../java/lang/Exception.h"
        
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
        
class InitSql
            : public Object
         {

    protected: const StringUtil stringUtil = StringUtil::getInstance();

    protected: const CommonSeps commonSeps = CommonSeps::getInstance();

    protected: const SqlTypeStrings sqlTypeStrings = SqlTypeStrings::getInstance();

    protected: const SqlStrings sqlStrings = SqlStrings::getInstance();

    protected: const StdUtil stdUtil = StdUtil::getInstance();

    protected: const std::string INSERT = "insert";

    protected: const std::string UPDATE = "update";

    private: DbConnectionInfo databaseConnectionInfoInterface;

    private: std::string userid;

    private: std::string password;

    private: std::string tableName;

    private: Connection conn;

    private: bool useridAndPassword= false;

    protected: const std::string SUCCESS_SQL_STATEMENT = "Success\nSQL Statement: ";

    protected: const std::string FAILED_SQL_STATEMENT = "Failed\nSQL Statement: ";

    private: const std::string INIT_SQL = "InitSql";

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const std::string EQUAL_QUOTE = "=\"";

    private: const std::string METHOD_GET_ROW = "getRow()";

    private: const std::string METHOD_UPDATE_WHERE = "updateWhere()";

    private: const std::string ROW_VALUE_LABEL = "Row Value: ";

    private: const std::string NO_RESULTS_IN_RESULT_SET = "No Results in ResultSet";

    private: const std::string INSERT_END = "')";

public: InitSql(DbConnectionInfo databaseConnectionInfoInterface);

    public: void setTable(std::string tableName);

    public: void setDatabaseConnectionInfoInterface(DbConnectionInfo databaseConnectionInfoInterface);

    public: bool createTable(std::string tableData);

    public: bool dropTable();

    public: HashMap<any, any> getRow(HashMap<any, any> keysAndValues);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void updateWhere(std::string key, std::string value, HashMap<any, any> updatedKeyValuePairs);

    public: void insert(BasicArrayList values);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: std::string getValue(std::string value);

                //@Throws(Exception.constructor, SQLException.constructor)
            
    public: ResultSet executeSQLStatement(std::string statement);

                //@Throws(SQLException.constructor)
            
    private: void createConnection();

                //@Throws(Exception.constructor)
            
    private: void initialize();

    public: DatabaseConnectionInfoInterface getDatabaseConnectionInfoInterface();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_INITSQL_H
