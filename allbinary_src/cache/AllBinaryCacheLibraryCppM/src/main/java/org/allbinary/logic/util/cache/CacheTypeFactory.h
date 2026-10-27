
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CacheType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CacheTypeFactory
            : public virtual Object
         {

    private: static CacheTypeFactory* instance_owner();
    private: static CacheTypeFactory* instance;

    public: static CacheTypeFactory* getInstance();


            
    public: CacheTypeFactory();
        
    public: CacheType* NO_CACHE;

    public: CacheType* CACHE;

    public: CacheType* SET;

    public: CacheType* CACHE_VECTOR;

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/logic/util/cache/CacheType.h")
#include "org/allbinary/logic/util/cache/CacheType.h"
#endif

        #endif
    
