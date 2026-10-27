
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2007 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPE_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CacheType
            : public virtual Object
         {

    private: std::string vendor;

    private: std::string type;

public: CacheType(std::string vendor, std::string type);

    public: std::string getVendor();

    public: std::string getType();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif

        #endif
    
