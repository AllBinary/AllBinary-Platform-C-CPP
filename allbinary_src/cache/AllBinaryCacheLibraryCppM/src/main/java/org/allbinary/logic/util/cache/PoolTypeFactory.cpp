
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPEFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/util/cache/PoolTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/PoolType.h"
#include "org/allbinary/logic/util/cache/CacheTypeFactory.h"


PoolTypeFactory::PoolTypeFactory() : VECTOR_POOL(new PoolType(CacheTypeFactory::getInstance()->NO_CACHE)) {
        }
        auto PoolTypeFactory::instance_owner() -> PoolTypeFactory* { static std::unique_ptr<PoolTypeFactory> value(new PoolTypeFactory()); return value.get(); }
PoolTypeFactory* PoolTypeFactory::instance = PoolTypeFactory::instance_owner();

    auto PoolTypeFactory::getInstance() -> PoolTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PoolTypeFactory::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPEFACTORY_CPP
