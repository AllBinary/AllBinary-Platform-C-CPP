
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_SQLTYPESTRINGS_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_SQLTYPESTRINGS_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SqlTypeStrings
            : public Object
         {

    private: static SqlTypeStrings* instance() { static std::unique_ptr<SqlTypeStrings> value(new SqlTypeStrings()); return value.get(); }

    public: static SqlTypeStrings* getInstance();

    public: const std::string CHAR_COLUMN = "VARCHAR";

    public: const std::string INT_COLUMN = "VARCHAR";

    public: const std::string MAX_SIZE = "(255)";

    public: const std::string SIXTY_SIZE = "(60)";

    public: const std::string NOT_NULL = "NOT NULL";

    public: const std::string ONE_SIZE = "(1)";

    public: const std::string TWO_SIZE = "(2)";

    public: const std::string THREE_SIZE = "(3)";

    public: const std::string SIX_SIZE = "(6)";

    public: const std::string ELEVEN_SIZE = "(11)";

    public: const std::string TWELVE_SIZE = "(12)";

    public: const std::string ONE_KB_CHAR_COLUMN = (new StringMaker())->append(CommonSeps::getInstance()->SPACE)->append(CHAR_COLUMN)->append("(1024)")->append(CommonSeps::getInstance()->COMMA_SEP)->toString();

    public: const std::string MAX_CHAR_COLUMN = (new StringMaker())->append(CommonSeps::getInstance()->SPACE)->append(CHAR_COLUMN)->append(MAX_SIZE)->append(CommonSeps::getInstance()->COMMA_SEP)->toString();

    public: const std::string MAX_CHAR_COLUMN_NOT_NULL = (new StringMaker())->append(CommonSeps::getInstance()->SPACE)->append(CHAR_COLUMN)->append(MAX_SIZE)->append(CommonSeps::getInstance()->SPACE)->append(NOT_NULL)->append(CommonSeps::getInstance()->COMMA_SEP)->toString();

    public: const std::string SIXTY_CHAR_COLUMN_NOT_NULL = (new StringMaker())->append(CommonSeps::getInstance()->SPACE)->append(CHAR_COLUMN)->append(SIXTY_SIZE)->append(NOT_NULL)->append(CommonSeps::getInstance()->COMMA_SEP)->toString();

    public: const std::string ONE_CHAR_COLUMN_NOT_NULL = (new StringMaker())->append(CommonSeps::getInstance()->SPACE)->append(CHAR_COLUMN)->append(ONE_SIZE)->append(NOT_NULL)->append(CommonSeps::getInstance()->COMMA_SEP)->toString();

    public: const std::string SIX_CHAR_COLUMN_NOT_NULL = (new StringMaker())->append(CommonSeps::getInstance()->SPACE)->append(CHAR_COLUMN)->append(SIX_SIZE)->append(NOT_NULL)->append(CommonSeps::getInstance()->COMMA_SEP)->toString();

    public: const std::string TWELVE_CHAR_COLUMN_NOT_NULL = (new StringMaker())->append(CommonSeps::getInstance()->SPACE)->append(CHAR_COLUMN)->append(this->TWELVE_SIZE)->append(NOT_NULL)->append(CommonSeps::getInstance()->COMMA_SEP)->toString();

    public: const std::string TWO_INT_NOT_NULL = " INT(2) NOT NULL, ";

    public: const std::string THREE_INT_NOT_NULL = " INT(3) NOT NULL, ";

    public: const std::string FOUR_INT_NOT_NULL = " INT(4) NOT NULL, ";

    public: const std::string MAX_INT_NOT_NULL = " INT(11) NOT NULL, ";

    public: const std::string MAX_INT_UNSIGNED = " INT(11) UNSIGNED, ";

    public: const std::string MAX_INT_UNSIGNED_NOT_NULL = " INT(11) UNSIGNED NOT NULL, ";

    public: const std::string MAX_BIG_INT_NOT_NULL = " BIGINT(19) NOT NULL, ";

    public: const std::string MAX_BIG_INT_UNSIGNED = " BIGINT(19) UNSIGNED, ";

    public: const std::string MAX_BIG_INT_UNSIGNED_NOT_NULL = " BIGINT(19) UNSIGNED NOT NULL, ";

    public: const std::string MAX_BIG_INT_UNSIGNED_AUTO_INCREMENT_NOT_NULL = " BIGINT(19) UNSIGNED AUTO_INCREMENT NOT NULL,";

    public: const std::string LONG_BLOB = " LONGBLOB, ";

    public: const std::string BLOB = " BLOB, ";

    public: const std::string BLOB_NOT_NULL = " BLOB NOT NULL, ";

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_SQLTYPESTRINGS_H
