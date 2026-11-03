
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_SQLSTRINGS_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_SQLSTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/sql/SqlStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

SqlStrings::SqlStrings() : SELECT_ALL_FROM(this->SELECT_ALL +this->FROM), CLOSE_QUOTE(CommonSeps::getInstance()->QUOTE) {
        }
        auto SqlStrings::instance_owner() -> SqlStrings* { static std::unique_ptr<SqlStrings> value(new SqlStrings()); return value.get(); }
SqlStrings* SqlStrings::instance = SqlStrings::instance_owner();

    auto SqlStrings::getInstance() -> SqlStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SqlStrings::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_SQLSTRINGS_CPP
