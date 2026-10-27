
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/PoolType.h"
#include "org/allbinary/logic/util/cache/CacheTypeFactory.h"

class PoolTypeFactory
            : public Object
         {

    private: static PoolTypeFactory* instance() { static std::unique_ptr<PoolTypeFactory> value(new PoolTypeFactory()); return value.get(); }

    public: static PoolTypeFactory* getInstance();

    public: PoolType* VECTOR_POOL = new PoolType(CacheTypeFactory::getInstance()->NO_CACHE);

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPEFACTORY_H
