
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLE_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/sql/AbSqlTable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/sql/AbSqlBasic.h"


AbSqlTable::AbSqlTable(DbConnectionInfo* databaseConnectionInfoInterface) : AbSqlBasic(databaseConnectionInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto AbSqlTable::setTableName(std::string tableName) -> void{
this->tableName= tableName;
    
}


    auto AbSqlTable::getTableName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tableName;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbSqlTable::createTable(std::string data) -> std::string{

        try {
            this->executeSQLStatement(data);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(this->TABLE_CREATION_SUCCESS +this->tableName) +JavaString::valueOf(" with statement: ")) +JavaString::valueOf(data), this, this->METHOD_CREATED_TABLE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tableName +this->sqlStrings->CREATE_RETURN;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Table Creation Failed: ") +JavaString::valueOf(this->tableName)) +JavaString::valueOf(" with statement: ")) +JavaString::valueOf(data), this, this->METHOD_CREATED_TABLE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(JavaString::valueOf("Failed to Create ") +JavaString::valueOf(this->tableName)) +JavaString::valueOf(" table.");
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbSqlTable::dropTable() -> std::string{

    std::string sqlStatement = this->sqlStrings->DROP_TABLE +this->tableName;;
    

        try {
            this->executeSQLStatement(sqlStatement);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->SUCCESS_SQL_STATEMENT) +JavaString::valueOf(sqlStatement), this, this->METHOD_DROP_TABLE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(tableName) +JavaString::valueOf(this->DROPPED_SUCCESS);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(JavaString::valueOf(this->FAILED_SQL_STATEMENT) +JavaString::valueOf(sqlStatement), this, this->METHOD_DROP_TABLE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(JavaString::valueOf("Failed to Drop ") +JavaString::valueOf(tableName)) +JavaString::valueOf(" table.");
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLE_CPP
