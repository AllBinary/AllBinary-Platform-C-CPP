
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Portion;
class StringMaker;
class StringUtil;
class CommonSeps;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SqlStrings;
class AbSqlTable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbSqlTableUtil
            : public virtual Object
         {

    private: static AbSqlTableUtil* instance_owner();
    private: static AbSqlTableUtil* instance;

    public: static AbSqlTableUtil* getInstance();


            
    public: AbSqlTableUtil();
        
    private: const std::string TABLE_LABEL = "Table: ";

    /*protected*/ public: StringUtil* stringUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: CommonSeps* commonSeps;

    /*protected*/ public: SqlStrings* sqlStrings;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string backupTable(AbSqlTable* abSqlTable);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string restoreTable(AbSqlTable* abSqlTable, Portion* portion);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/business/installer/Portion.h>)
#include <org/allbinary/business/installer/Portion.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/communication/sql/SqlStrings.h")
#include "org/allbinary/logic/communication/sql/SqlStrings.h"
#endif
#if __has_include("org/allbinary/logic/communication/sql/AbSqlTable.h")
#include "org/allbinary/logic/communication/sql/AbSqlTable.h"
#endif

        #endif
    
