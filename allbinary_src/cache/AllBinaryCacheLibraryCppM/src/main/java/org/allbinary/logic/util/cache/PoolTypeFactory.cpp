
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PoolType.h"
#include "CacheTypeFactory.h"

class PoolTypeFactory
            : public Object
         {
        

    private: static const instance: PoolTypeFactory = new PoolTypeFactory();

    public static PoolTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PoolTypeFactory.instance;
    
}


    public VECTOR_POOL: PoolType = new PoolType(CacheTypeFactory.getInstance()!.NO_CACHE);

};

            

