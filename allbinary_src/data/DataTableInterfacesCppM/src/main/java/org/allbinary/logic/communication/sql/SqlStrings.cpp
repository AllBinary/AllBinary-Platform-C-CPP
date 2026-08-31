
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SqlStrings
            : public Object
         {
        

    private: static const instance: SqlStrings = new SqlStrings();

    public static SqlStrings getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SqlStrings.instance;
    
}


    public const CREATE_DATABASE: string = "CREATE DATABASE ";

    public const DROP_TABLE: string = "DROP TABLE ";

    public const CREATE_TABLE: string = "CREATE TABLE ";

    public const START: string = " (";

    public const SELECT: string = "SELECT ";

    public const FROM: string = " FROM ";

    public const SELECT_ALL: string = "SELECT *";

    public const WHERE: string = " WHERE ";

    public const AND: string = " AND ";

    public const UPDATE: string = "UPDATE ";

    public const SET: string = " SET ";

    public const SELECT_ALL_FROM: string = this.SELECT_ALL +this.FROM;

    public const DELETE: string = "DELETE";

    public const LIKE_QUOTE: string = " LIKE \"";

    public const INSERT_INTO: string = "INSERT INTO ";

    public const VALUES: string = " VALUES ('";

    public const ORDER_BY: string = "ORDER BY";

    public const COUNT: string = "COUNT(";

    public const ASC: string = "ASC";

    public const DESC: string = "DESC";

    public const PRIMARY_KEY: string = "PRIMARY KEY(";

    public const END: string = ") )";

    public const EQUAL_QUOTE: string = " = \"";

    public const CLOSE_QUOTE: string = CommonSeps.getInstance()!.QUOTE;

    public const EQUAL_QUOTE_NO_SPACE: string = "=\"";

    public const ESCAPE: string = "\\";

    public const DOUBLE_ESCAPE: string = "\\\\";

    public const MORE_THAN_QUOTE: string = " > \"";

    public const LESS_THAN_QUOTE: string = " < \"";

    public const SINGLE_QUOTE_COMMA_SEP: string = "','";

    public const ID: string = "ID";

    public const SQL_STATEMENT_LABEL: string = "SQL Statement: ";

    public const COLUMN_VALUE: string = "\nColumn Value: ";

    public const CREATE_RETURN: string = " Created Successfully";

    public const FIELD_VALUE: string = "\nField Value: ";

};

            

