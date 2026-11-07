
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/sql/AbSqlTableUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/business/installer/Portion.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/sql/SqlStrings.h"
#include "org/allbinary/logic/communication/sql/AbSqlTable.h"


AbSqlTableUtil::AbSqlTableUtil() : stringUtil(StringUtil::getInstance()), commonStrings(CommonStrings::getInstance()), commonSeps(CommonSeps::getInstance()), sqlStrings(SqlStrings::getInstance()) {
        }
        auto AbSqlTableUtil::instance_owner() -> AbSqlTableUtil* { static std::unique_ptr<AbSqlTableUtil> value(new AbSqlTableUtil()); return value.get(); }
AbSqlTableUtil* AbSqlTableUtil::instance = AbSqlTableUtil::instance_owner();

    auto AbSqlTableUtil::getInstance() -> AbSqlTableUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlTableUtil::instance;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbSqlTableUtil::backupTable(AbSqlTable* abSqlTable) -> std::string{

    std::string tableName = abSqlTable->getTableName();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(JavaString::valueOf(this->TABLE_LABEL) +JavaString::valueOf(tableName)) +JavaString::valueOf(" Backup Failed");
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbSqlTableUtil::restoreTable(AbSqlTable* abSqlTable, Portion* portion) -> std::string{

    std::string tableName = abSqlTable->getTableName();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->TABLE_LABEL);
    
stringBuffer->append(tableName);
    
stringBuffer->append(" Restoration Failed");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_CPP
