
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLE_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLE_H

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbSqlBasic.h"

class AbSqlTable: public AbSqlBasic {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: tableName: string;

    private: const METHOD_CREATED_TABLE: string = "createTable()";

    private: const METHOD_DROP_TABLE: string = "dropTable()";

    private: const TABLE_CREATION_SUCCESS: string = "Table Creation Successful: ";

    private: const DROPPED_SUCCESS: string = " Dropped Successfully";

public constructor (DbConnectionInfo databaseConnectionInfoInterface);

    public setTableName(string tableName);

    public string getTableName();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string createTable(string data);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string dropTable();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLE_H
