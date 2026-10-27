
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_SQLTYPESTRINGS_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_SQLTYPESTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/sql/SqlTypeStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

SqlTypeStrings::SqlTypeStrings() : ONE_KB_CHAR_COLUMN((new StringMaker())->append(CommonSeps::getInstance()->SPACE)->append(CHAR_COLUMN)->append("(1024)")->append(CommonSeps::getInstance()->COMMA_SEP)->toString()), MAX_CHAR_COLUMN((new StringMaker())->append(CommonSeps::getInstance()->SPACE)->append(CHAR_COLUMN)->append(MAX_SIZE)->append(CommonSeps::getInstance()->COMMA_SEP)->toString()), MAX_CHAR_COLUMN_NOT_NULL((new StringMaker())->append(CommonSeps::getInstance()->SPACE)->append(CHAR_COLUMN)->append(MAX_SIZE)->append(CommonSeps::getInstance()->SPACE)->append(NOT_NULL)->append(CommonSeps::getInstance()->COMMA_SEP)->toString()), SIXTY_CHAR_COLUMN_NOT_NULL((new StringMaker())->append(CommonSeps::getInstance()->SPACE)->append(CHAR_COLUMN)->append(SIXTY_SIZE)->append(NOT_NULL)->append(CommonSeps::getInstance()->COMMA_SEP)->toString()), ONE_CHAR_COLUMN_NOT_NULL((new StringMaker())->append(CommonSeps::getInstance()->SPACE)->append(CHAR_COLUMN)->append(ONE_SIZE)->append(NOT_NULL)->append(CommonSeps::getInstance()->COMMA_SEP)->toString()), SIX_CHAR_COLUMN_NOT_NULL((new StringMaker())->append(CommonSeps::getInstance()->SPACE)->append(CHAR_COLUMN)->append(SIX_SIZE)->append(NOT_NULL)->append(CommonSeps::getInstance()->COMMA_SEP)->toString()), TWELVE_CHAR_COLUMN_NOT_NULL((new StringMaker())->append(CommonSeps::getInstance()->SPACE)->append(CHAR_COLUMN)->append(this->TWELVE_SIZE)->append(NOT_NULL)->append(CommonSeps::getInstance()->COMMA_SEP)->toString()) {
        }
        auto SqlTypeStrings::instance_owner() -> SqlTypeStrings* { static std::unique_ptr<SqlTypeStrings> value(new SqlTypeStrings()); return value.get(); }
SqlTypeStrings* SqlTypeStrings::instance = SqlTypeStrings::instance_owner();

    auto SqlTypeStrings::getInstance() -> SqlTypeStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SqlTypeStrings::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_SQLTYPESTRINGS_CPP
