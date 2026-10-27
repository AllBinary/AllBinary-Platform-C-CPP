
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICYFACTORY_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICYFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CachePolicy;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CachePolicyFactory
            : public virtual Object
         {

    private: static CachePolicyFactory* instance_owner();
    private: static CachePolicyFactory* instance;

    public: static CachePolicyFactory* getInstance();


            
    public: CachePolicyFactory();
        
    public: const std::string NAME = "lru";

    public: CachePolicy* MAX_TIME_THOUSAND_MAX;

    public: CachePolicy* THIRTY_MINUTES_TEN_THOUSAND_MAX;

    public: CachePolicy* THIRTY_MINUTES_FIFTY_THOUSAND_MAX;

    public: CachePolicy* ONE_MINUTE_FIVE_MAX;

    public: CachePolicy* ONE_MINUTE_TEN_MAX;

    public: CachePolicy* ONE_MINUTE_ONE_HUNDRED_MAX;

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICYFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/logic/util/cache/CachePolicy.h")
#include "org/allbinary/logic/util/cache/CachePolicy.h"
#endif

        #endif
    
