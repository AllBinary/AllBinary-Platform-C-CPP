
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_LOG_LOGTABLEENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_LOG_LOGTABLEENTITY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/LogDbInitInfo.h>

      
#include <org/allbinary/logic/communication/http/request/AbeHttpRequestInfoData.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/log/LogTableEntityInterface.h"

class LogTableEntity: public AbSqlBean, public LogTableEntityInterface {

    private: const std::string tableName = "log";

public: LogTableEntity();

    public: std::string createTableStatement();

    public: std::string createTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_LOG_LOGTABLEENTITY_H
