
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/util/cache/PoolInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/PoolInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#include "org/allbinary/logic/util/cache/PoolType.h"
#include "org/allbinary/logic/util/cache/CachePolicy.h"


PoolInterfaceFactory::PoolInterfaceFactory(){
}


                //@Throws(Exception.constructor)
            
    auto PoolInterfaceFactory::getInstance(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface, PoolType* poolType, CachePolicy* cachePolicy) -> PoolInterface*{



                            throw Exception(JavaString::valueOf("No Such PoolType: ") +JavaString::valueOf(JavaString::valueOf(poolType)));
                    
}




        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLINTERFACEFACTORY_CPP
