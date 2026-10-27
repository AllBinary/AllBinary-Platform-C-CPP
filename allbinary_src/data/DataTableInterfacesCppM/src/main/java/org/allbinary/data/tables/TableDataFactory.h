
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_TABLEDATAFACTORY_H
        #define ORG_ALLBINARY_DATA_TABLES_TABLEDATAFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class CommonPhoneStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TableDataFactory
            : public virtual Object
         {

    private: static TableDataFactory* instance_owner();
    private: static TableDataFactory* instance;

    public: static TableDataFactory* getInstance();


            
    public: TableDataFactory();
        
    public: const std::string INTEGER_MAX_VALUE_STRING;

    public: const std::string ZERO_STRING;

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_TABLEDATAFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_TABLEDATAFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_TABLEDATAFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif

        #endif
    
