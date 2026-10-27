
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTCACHEABLEINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTCACHEABLEINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/util/cache/BasicArrayListCacheableInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#include "org/allbinary/logic/util/cache/BasicArrayListCacheable.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"


BasicArrayListCacheableInterfaceFactory::BasicArrayListCacheableInterfaceFactory() {
        }
        
                //@Throws(Exception.constructor)
            
    auto BasicArrayListCacheableInterfaceFactory::getInstance(Object* key) -> CacheableInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicArrayListCacheable();
    
}




        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTCACHEABLEINTERFACEFACTORY_CPP
