
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

    private: static AbSqlTableUtil instance() { return AbSqlTableUtil(); }

    public: static AbSqlTableUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbSqlTableUtil::instance();
    
}


    private: const std::string TABLE_LABEL = "Table: ";

    protected: const StringUtil stringUtil = StringUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const CommonSeps commonSeps = CommonSeps::getInstance();

    protected: const SqlStrings sqlStrings = SqlStrings::getInstance();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string backupTable(AbSqlTable abSqlTable){

    std::string tableName = abSqlTable.getTableName();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->TABLE_LABEL +tableName +" Backup Failed";
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string restoreTable(AbSqlTable abSqlTable, Portion portion){

    std::string tableName = abSqlTable.getTableName();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->TABLE_LABEL);
    
stringBuffer.append(tableName);
    
stringBuffer.append(" Restoration Failed");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

