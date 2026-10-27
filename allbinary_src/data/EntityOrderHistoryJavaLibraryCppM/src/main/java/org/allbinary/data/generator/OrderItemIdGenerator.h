
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
        



        #ifndef ORG_ALLBINARY_DATA_GENERATOR_ORDERITEMIDGENERATOR_H
        #define ORG_ALLBINARY_DATA_GENERATOR_ORDERITEMIDGENERATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class PATH_GLOBALS;
class URLGLOBALS;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/generator/UniqueIdGenerator.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OrderItemIdGenerator: public UniqueIdGenerator {

    private: const std::string IDFILE = "orderitemId.unq";

public: OrderItemIdGenerator();

};

            


        #endif //ORG_ALLBINARY_DATA_GENERATOR_ORDERITEMIDGENERATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_GENERATOR_ORDERITEMIDGENERATOR_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_GENERATOR_ORDERITEMIDGENERATOR_H_COMPLETE
        #if __has_include(<org/allbinary/globals/PATH_GLOBALS.h>)
#include <org/allbinary/globals/PATH_GLOBALS.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/allbinary/data/generator/UniqueIdGenerator.h")
#include "org/allbinary/data/generator/UniqueIdGenerator.h"
#endif

        #endif
    
