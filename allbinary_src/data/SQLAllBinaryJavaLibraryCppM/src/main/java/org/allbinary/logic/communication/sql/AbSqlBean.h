
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBEAN_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBEAN_H

            #include "../../../../../java/lang/Exception.h"
        
#include <java/sql/ResultSet.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbSqlRow.h"

class AbSqlBean: public AbSqlRow {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const METHOD_GET_FIELD: string = "getField";

    private: const METHOD_IS_SUBSET_OF_ENTRY: string = "isSubsetOfEntry";

public constructor (DbConnectionInfo databaseConnectionInfoInterface);

    public string getField(string key, string value, string requestedField);

    public string getField(HashMap<any, any> keysAndValues, string requestedField);

    public string isSubsetOfEntry(string key, string value, HashMap<any, any> columnsAndValues);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBEAN_H
