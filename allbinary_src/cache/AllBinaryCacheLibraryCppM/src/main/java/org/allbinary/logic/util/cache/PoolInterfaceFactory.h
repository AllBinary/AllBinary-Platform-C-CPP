
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2007 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLINTERFACEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PoolInterface;
class CacheableInterfaceFactoryInterface;
class PoolType;
class CachePolicy;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PoolInterfaceFactory
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static PoolInterface* getInstance(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface, PoolType* poolType, CachePolicy* cachePolicy);

private: PoolInterfaceFactory();

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLINTERFACEFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/logic/util/cache/PoolInterface.h")
#include "org/allbinary/logic/util/cache/PoolInterface.h"
#endif
#if __has_include("org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h")
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/logic/util/cache/PoolType.h")
#include "org/allbinary/logic/util/cache/PoolType.h"
#endif
#if __has_include("org/allbinary/logic/util/cache/CachePolicy.h")
#include "org/allbinary/logic/util/cache/CachePolicy.h"
#endif

        #endif
    
