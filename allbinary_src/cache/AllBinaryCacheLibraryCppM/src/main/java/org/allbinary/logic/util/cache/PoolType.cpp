
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPE_CPP
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/util/cache/PoolType.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/CacheType.h"


PoolType::PoolType(CacheType* cacheType){
this->cacheType= cacheType;
    
}


    auto PoolType::getCacheType() -> CacheType*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->cacheType;
    
}


    auto PoolType::toString() -> std::string{

    std::string POOL_TYPE = "PoolType: ";;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(POOL_TYPE) +JavaString::valueOf(this->getCacheType()->toString());
    
}




        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPE_CPP
