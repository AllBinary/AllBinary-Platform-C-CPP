
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbSqlBasic.h"

class AbSqlTable: public AbSqlBasic {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string tableName;

    private: const std::string METHOD_CREATED_TABLE = "createTable()";

    private: const std::string METHOD_DROP_TABLE = "dropTable()";

    private: const std::string TABLE_CREATION_SUCCESS = "Table Creation Successful: ";

    private: const std::string DROPPED_SUCCESS = " Dropped Successfully";

public: AbSqlTable(DbConnectionInfo databaseConnectionInfoInterface){
            super(databaseConnectionInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void setTableName(std::string tableName){
this->tableName= tableName;
    
}


    public: std::string getTableName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tableName;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string createTable(std::string data){

        try {
            this->executeSQLStatement(data);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->TABLE_CREATION_SUCCESS +this->tableName +" with statement: " +data, this, this->METHOD_CREATED_TABLE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tableName +this->sqlStrings.CREATE_RETURN;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil.put("Table Creation Failed: " +this->tableName +" with statement: " +data, this, this->METHOD_CREATED_TABLE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Failed to Create " +this->tableName +" table.";
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string dropTable(){

    std::string sqlStatement = this->sqlStrings.DROP_TABLE +this->tableName;;
    

        try {
            this->executeSQLStatement(sqlStatement);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->SUCCESS_SQL_STATEMENT +sqlStatement, this, this->METHOD_DROP_TABLE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return tableName +this->DROPPED_SUCCESS;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil.put(this->FAILED_SQL_STATEMENT +sqlStatement, this, this->METHOD_DROP_TABLE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Failed to Drop " +tableName +" table.";
    
}

}


};

            

