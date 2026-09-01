
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PoolType.h"
#include "CacheTypeFactory.h"

class PoolTypeFactory
            : public Object
         {

    private: static PoolTypeFactory instance() { return PoolTypeFactory(); }

    public: static PoolTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PoolTypeFactory::instance();
    
}


    public: PoolType VECTOR_POOL = PoolType(CacheTypeFactory::getInstance().NO_CACHE);

};

            

