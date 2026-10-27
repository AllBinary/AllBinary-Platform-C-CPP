
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_AUTOMATICCACHEINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_AUTOMATICCACHEINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/util/cache/AutomaticCacheInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/AutomaticCacheInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#include "org/allbinary/logic/util/cache/CacheType.h"
#include "org/allbinary/logic/util/cache/CachePolicy.h"


AutomaticCacheInterfaceFactory::AutomaticCacheInterfaceFactory(){
}


                //@Throws(Exception.constructor)
            
    auto AutomaticCacheInterfaceFactory::getInstance(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface, CacheType* cacheType, CachePolicy* cachePolicy) -> AutomaticCacheInterface*{



                            throw Exception(JavaString::valueOf("No such ") +JavaString::valueOf(cacheType->toString()));
                    
}




        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_AUTOMATICCACHEINTERFACEFACTORY_CPP
