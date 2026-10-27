
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/sql/ResultSet.h>
#include <java/util/HashMap.h>
#include <java/util/Set.h>
class DbConnectionInfo;
class LogUtil;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/sql/AbSqlRow.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbSqlBean: public AbSqlRow {

    /*protected*/ public: LogUtil* logUtil;

    private: const std::string METHOD_GET_FIELD = "getField";

    private: const std::string METHOD_IS_SUBSET_OF_ENTRY = "isSubsetOfEntry";

public: AbSqlBean(DbConnectionInfo* databaseConnectionInfoInterface);

    public: std::string getField(std::string key, std::string value, std::string requestedField);

    public: std::string getField(HashMap<Object*, Object*>* keysAndValues, std::string requestedField);

    public: std::string isSubsetOfEntry(std::string key, std::string value, HashMap<Object*, Object*>* columnsAndValues);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBEAN_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBEAN_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBEAN_H_COMPLETE
        #if __has_include(<java/sql/ResultSet.h>)
#include <java/sql/ResultSet.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<org/allbinary/business/init/db/DbConnectionInfo.h>)
#include <org/allbinary/business/init/db/DbConnectionInfo.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/allbinary/logic/communication/sql/AbSqlRow.h")
#include "org/allbinary/logic/communication/sql/AbSqlRow.h"
#endif

        #endif
    
