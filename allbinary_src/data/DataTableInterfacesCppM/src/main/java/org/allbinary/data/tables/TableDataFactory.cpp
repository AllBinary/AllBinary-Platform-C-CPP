
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_TABLEDATAFACTORY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_TABLEDATAFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/TableDataFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/string/CommonPhoneStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TableDataFactory::TableDataFactory() : INTEGER_MAX_VALUE_STRING(std::to_string(Integer.MAX_VALUE)), ZERO_STRING(CommonPhoneStrings::getInstance()->ZERO) {
        }
        auto TableDataFactory::instance_owner() -> TableDataFactory* { static std::unique_ptr<TableDataFactory> value(new TableDataFactory()); return value.get(); }
TableDataFactory* TableDataFactory::instance = TableDataFactory::instance_owner();

    auto TableDataFactory::getInstance() -> TableDataFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TableDataFactory::instance;
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_TABLEDATAFACTORY_CPP
