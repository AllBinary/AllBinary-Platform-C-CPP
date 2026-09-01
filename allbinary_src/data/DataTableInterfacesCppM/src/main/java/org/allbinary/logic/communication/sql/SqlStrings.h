
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_SQLSTRINGS_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_SQLSTRINGS_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SqlStrings
            : public Object
         {

    private: static SqlStrings instance() { return SqlStrings(); }

    public: static SqlStrings getInstance();

    public: const std::string CREATE_DATABASE = "CREATE DATABASE ";

    public: const std::string DROP_TABLE = "DROP TABLE ";

    public: const std::string CREATE_TABLE = "CREATE TABLE ";

    public: const std::string START = " (";

    public: const std::string SELECT = "SELECT ";

    public: const std::string FROM = " FROM ";

    public: const std::string SELECT_ALL = "SELECT *";

    public: const std::string WHERE = " WHERE ";

    public: const std::string AND = " AND ";

    public: const std::string UPDATE = "UPDATE ";

    public: const std::string SET = " SET ";

    public: const std::string SELECT_ALL_FROM = this->SELECT_ALL +this->FROM;

    public: const std::string DELETE = "DELETE";

    public: const std::string LIKE_QUOTE = " LIKE \"";

    public: const std::string INSERT_INTO = "INSERT INTO ";

    public: const std::string VALUES = " VALUES ('";

    public: const std::string ORDER_BY = "ORDER BY";

    public: const std::string COUNT = "COUNT(";

    public: const std::string ASC = "ASC";

    public: const std::string DESC = "DESC";

    public: const std::string PRIMARY_KEY = "PRIMARY KEY(";

    public: const std::string END = ") )";

    public: const std::string EQUAL_QUOTE = " = \"";

    public: const std::string CLOSE_QUOTE = CommonSeps::getInstance().QUOTE;

    public: const std::string EQUAL_QUOTE_NO_SPACE = "=\"";

    public: const std::string ESCAPE = "\\";

    public: const std::string DOUBLE_ESCAPE = "\\\\";

    public: const std::string MORE_THAN_QUOTE = " > \"";

    public: const std::string LESS_THAN_QUOTE = " < \"";

    public: const std::string SINGLE_QUOTE_COMMA_SEP = "','";

    public: const std::string ID = "ID";

    public: const std::string SQL_STATEMENT_LABEL = "SQL Statement: ";

    public: const std::string COLUMN_VALUE = "\nColumn Value: ";

    public: const std::string CREATE_RETURN = " Created Successfully";

    public: const std::string FIELD_VALUE = "\nField Value: ";

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_SQLSTRINGS_H
