
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_ABSTRACTARRAYLISTPOOL_CPP
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_ABSTRACTARRAYLISTPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/util/cache/AbstractArrayListPool.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/PoolInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"


AbstractArrayListPool::AbstractArrayListPool(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface) : commonStrings(CommonStrings::getInstance()), buffers(new BasicArrayListD()){
this->cacheableInterfaceFactoryInterface= cacheableInterfaceFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto AbstractArrayListPool::clear() -> void{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    auto AbstractArrayListPool::remove(Object* key) -> CacheableInterface*{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    auto AbstractArrayListPool::add(CacheableInterface* cacheableInterface) -> void{
this->buffers->add(cacheableInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto AbstractArrayListPool::addArray(std::vector<CacheableInterface*> cacheableInterfaces) -> void{




                        for (
    int32_t index = 0;index < cacheableInterfaces.size(); index++)
        {
this->buffers->add(cacheableInterfaces[index]);
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_ABSTRACTARRAYLISTPOOL_CPP
