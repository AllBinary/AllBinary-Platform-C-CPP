
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_INDEXEDBASICARRAYLISTCACHE_CPP
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_INDEXEDBASICARRAYLISTCACHE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/util/cache/IndexedBasicArrayListCache.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/BaseBasicArrayListCache.h"
#include "org/allbinary/logic/util/cache/CacheInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"


                //@Throws(Exception.constructor)
            
    auto IndexedBasicArrayListCache::createCache(int32_t size) -> IndexedBasicArrayListCache*{

    IndexedBasicArrayListCache* indexedBasicArrayListCache = new IndexedBasicArrayListCache();;
    
indexedBasicArrayListCache->init(size);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return indexedBasicArrayListCache;
    
}


IndexedBasicArrayListCache::IndexedBasicArrayListCache() : commonStrings(CommonStrings::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto IndexedBasicArrayListCache::init(int32_t size) -> void{

                        if(this->size < size)
                        
                                    {
                                    this->list->ensureCapacity(size);
    




                        for (
    int32_t index = size -1;index >= this->size; index--)
        {
this->addDefault();
    
}

this->size= size;
    

                                    }
                                
}


    auto IndexedBasicArrayListCache::getAt(int32_t index) -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list->objectArray[index];
    
}


                //@Throws(Exception.constructor)
            
    auto IndexedBasicArrayListCache::addDefault() -> void{
}


                //@Throws(Exception.constructor)
            
    auto IndexedBasicArrayListCache::addObject(Object* anyType) -> void{
this->list->add(anyType);
    
}


                //@Throws(Exception.constructor)
            
    auto IndexedBasicArrayListCache::add(CacheableInterface* cacheableInterface) -> void{
this->list->add(cacheableInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto IndexedBasicArrayListCache::addArray(std::vector<CacheableInterface*> cacheableInterfaces) -> void{



                            throw Exception("No Imple");
                    
}


    auto IndexedBasicArrayListCache::clear() -> void{
this->index= 0;
    
}




        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_INDEXEDBASICARRAYLISTCACHE_CPP
