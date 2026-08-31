
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_SQLTYPESTRINGS_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_SQLTYPESTRINGS_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SqlTypeStrings
            : public Object
         {
        

    private: static const instance: SqlTypeStrings = new SqlTypeStrings();

    public static SqlTypeStrings getInstance();

    public const CHAR_COLUMN: string = "VARCHAR";

    public const INT_COLUMN: string = "VARCHAR";

    public const MAX_SIZE: string = "(255)";

    public const SIXTY_SIZE: string = "(60)";

    public const NOT_NULL: string = "NOT NULL";

    public const ONE_SIZE: string = "(1)";

    public const TWO_SIZE: string = "(2)";

    public const THREE_SIZE: string = "(3)";

    public const SIX_SIZE: string = "(6)";

    public const ELEVEN_SIZE: string = "(11)";

    public const TWELVE_SIZE: string = "(12)";

    public const ONE_KB_CHAR_COLUMN: string = new StringMaker().append(CommonSeps.getInstance()!.SPACE)!.append(CHAR_COLUMN)!.append("(1024)")!.append(CommonSeps.getInstance()!.COMMA_SEP)!.toString()!;

    public const MAX_CHAR_COLUMN: string = new StringMaker().append(CommonSeps.getInstance()!.SPACE)!.append(CHAR_COLUMN)!.append(MAX_SIZE)!.append(CommonSeps.getInstance()!.COMMA_SEP)!.toString()!;

    public const MAX_CHAR_COLUMN_NOT_NULL: string = new StringMaker().append(CommonSeps.getInstance()!.SPACE)!.append(CHAR_COLUMN)!.append(MAX_SIZE)!.append(CommonSeps.getInstance()!.SPACE)!.append(NOT_NULL)!.append(CommonSeps.getInstance()!.COMMA_SEP)!.toString()!;

    public const SIXTY_CHAR_COLUMN_NOT_NULL: string = new StringMaker().append(CommonSeps.getInstance()!.SPACE)!.append(CHAR_COLUMN)!.append(SIXTY_SIZE)!.append(NOT_NULL)!.append(CommonSeps.getInstance()!.COMMA_SEP)!.toString()!;

    public const ONE_CHAR_COLUMN_NOT_NULL: string = new StringMaker().append(CommonSeps.getInstance()!.SPACE)!.append(CHAR_COLUMN)!.append(ONE_SIZE)!.append(NOT_NULL)!.append(CommonSeps.getInstance()!.COMMA_SEP)!.toString()!;

    public const SIX_CHAR_COLUMN_NOT_NULL: string = new StringMaker().append(CommonSeps.getInstance()!.SPACE)!.append(CHAR_COLUMN)!.append(SIX_SIZE)!.append(NOT_NULL)!.append(CommonSeps.getInstance()!.COMMA_SEP)!.toString()!;

    public const TWELVE_CHAR_COLUMN_NOT_NULL: string = new StringMaker().append(CommonSeps.getInstance()!.SPACE)!.append(CHAR_COLUMN)!.append(this.TWELVE_SIZE)!.append(NOT_NULL)!.append(CommonSeps.getInstance()!.COMMA_SEP)!.toString()!;

    public const TWO_INT_NOT_NULL: string = " INT(2) NOT NULL, ";

    public const THREE_INT_NOT_NULL: string = " INT(3) NOT NULL, ";

    public const FOUR_INT_NOT_NULL: string = " INT(4) NOT NULL, ";

    public const MAX_INT_NOT_NULL: string = " INT(11) NOT NULL, ";

    public const MAX_INT_UNSIGNED: string = " INT(11) UNSIGNED, ";

    public const MAX_INT_UNSIGNED_NOT_NULL: string = " INT(11) UNSIGNED NOT NULL, ";

    public const MAX_BIG_INT_NOT_NULL: string = " BIGINT(19) NOT NULL, ";

    public const MAX_BIG_INT_UNSIGNED: string = " BIGINT(19) UNSIGNED, ";

    public const MAX_BIG_INT_UNSIGNED_NOT_NULL: string = " BIGINT(19) UNSIGNED NOT NULL, ";

    public const MAX_BIG_INT_UNSIGNED_AUTO_INCREMENT_NOT_NULL: string = " BIGINT(19) UNSIGNED AUTO_INCREMENT NOT NULL,";

    public const LONG_BLOB: string = " LONGBLOB, ";

    public const BLOB: string = " BLOB, ";

    public const BLOB_NOT_NULL: string = " BLOB NOT NULL, ";

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_SQLTYPESTRINGS_H
