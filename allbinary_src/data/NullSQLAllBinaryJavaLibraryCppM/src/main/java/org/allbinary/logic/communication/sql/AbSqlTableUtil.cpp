
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/business/installer/Portion.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SqlStrings.h"
#include "AbSqlTable.h"

class AbSqlTableUtil
            : public Object
         {
        

    private: static const instance: AbSqlTableUtil = new AbSqlTableUtil();

    public static AbSqlTableUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbSqlTableUtil.instance;
    
}


    private: const TABLE_LABEL: string = "Table: ";

    const stringUtil: StringUtil = StringUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    const sqlStrings: SqlStrings = SqlStrings.getInstance()!;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string backupTable(AbSqlTable abSqlTable){

    tableName: string = abSqlTable!.getTableName()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.TABLE_LABEL +tableName +" Backup Failed";
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string restoreTable(AbSqlTable abSqlTable, Portion portion){

    tableName: string = abSqlTable!.getTableName()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.TABLE_LABEL);
    
stringBuffer!.append(tableName);
    
stringBuffer!.append(" Restoration Failed");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

