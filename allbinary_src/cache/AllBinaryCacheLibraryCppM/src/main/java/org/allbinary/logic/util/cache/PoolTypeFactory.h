
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPEFACTORY_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PoolType.h"
#include "CacheTypeFactory.h"

class PoolTypeFactory
            : public Object
         {

    private: static PoolTypeFactory instance() { return PoolTypeFactory(); }

    public: static PoolTypeFactory getInstance();

    public: PoolType VECTOR_POOL = PoolType(CacheTypeFactory::getInstance().NO_CACHE);

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPEFACTORY_H
