
        /* Generated Code Do Not Modify */
        



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

    public: static PoolTypeFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PoolTypeFactory::instance();
    
}


    public: PoolType* VECTOR_POOL = new PoolType(CacheTypeFactory::getInstance()->NO_CACHE);

};

            

