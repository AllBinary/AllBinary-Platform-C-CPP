
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_INDEXEDBASICARRAYLISTCACHE_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_INDEXEDBASICARRAYLISTCACHE_H

            #include <vector>
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseBasicArrayListCache.h"
#include "CacheInterface.h"
#include "CacheableInterface.h"

class IndexedBasicArrayListCache: public BaseBasicArrayListCache, public CacheInterface {

                //@Throws(Exception.constructor)
            
    public: static IndexedBasicArrayListCache createCache(int32_t size);

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: int32_t size = 0;

    protected: int32_t index = 0;

public: IndexedBasicArrayListCache();

                //@Throws(Exception.constructor)
            
    public: void init(int32_t size);

    public: Object* getAt(int32_t index);

                //@Throws(Exception.constructor)
            
    public: void addDefault();

                //@Throws(Exception.constructor)
            
    public: void addObject(Object anyType);

                //@Throws(Exception.constructor)
            
    public: void add(CacheableInterface cacheableInterface);

                //@Throws(Exception.constructor)
            
    public: void addArray(std::vector<CacheableInterface> cacheableInterfaces);

    public: void clear();

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_INDEXEDBASICARRAYLISTCACHE_H
