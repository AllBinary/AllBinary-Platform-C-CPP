
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICY_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CachePolicy
            : public virtual Object
         {

    private: std::string name;

    private: int64_t maxTime= 0;

    private: int64_t maxSize= 0;

public: CachePolicy(std::string name, int64_t maxTime, int64_t maxSize);

    public: int64_t getMaxTime();

    public: void setMaxTime(int64_t maxTime);

    public: int64_t getMaxSize();

    public: void setMaxSize(int64_t maxSize);

    public: std::string getName();

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICY_H_COMPLETE
        
        #endif
    
