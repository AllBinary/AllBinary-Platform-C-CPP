
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

public: LogTableEntity() : AbSqlBean(new LogDbInitInfo()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    public: std::string createTableStatement(){

    AbeHttpRequestInfoData* abeHttpRequestInfoData = AbeHttpRequestInfoData::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings.CREATE_TABLE)->append(tableName)->append(this->sqlStrings.START)->append(this->sqlStrings.ID)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL)->append(abeHttpRequestInfoData->HTTP_USER_AGENT)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL)->append(abeHttpRequestInfoData->REMOTE_HOST)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(abeHttpRequestInfoData->REMOTE_ADDRESS)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL)->append(abeHttpRequestInfoData->REQUEST_FILE_PATH)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL)->append(abeHttpRequestInfoData->REMOTE_PORT)->append(this->sqlTypeStrings.MAX_INT_UNSIGNED_NOT_NULL)->append(EntryData::getInstance()->TIMECREATED)->append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(this->sqlStrings.PRIMARY_KEY)->append(this->sqlStrings.ID)->append(this->sqlStrings.END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    public: std::string createTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.createTable(this->createTableStatement());;
    
}


};

            

