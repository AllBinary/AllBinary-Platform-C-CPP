
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PoolType;
class CacheTypeFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PoolTypeFactory
            : public virtual Object
         {

    private: static PoolTypeFactory* instance_owner();
    private: static PoolTypeFactory* instance;

    public: static PoolTypeFactory* getInstance();


            
    public: PoolTypeFactory();
        
    public: PoolType* VECTOR_POOL;

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPEFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/logic/util/cache/PoolType.h")
#include "org/allbinary/logic/util/cache/PoolType.h"
#endif
#if __has_include("org/allbinary/logic/util/cache/CacheTypeFactory.h")
#include "org/allbinary/logic/util/cache/CacheTypeFactory.h"
#endif

        #endif
    
