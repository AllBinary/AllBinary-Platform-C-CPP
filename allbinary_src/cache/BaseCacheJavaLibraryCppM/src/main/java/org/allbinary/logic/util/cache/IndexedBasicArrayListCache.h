
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class JsType;
class CommonStrings;
class JsMethod;
class JsConstructor;
class JsProperty;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/BaseBasicArrayListCache.h"
#include "org/allbinary/logic/util/cache/CacheInterface.h"
class CacheableInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class IndexedBasicArrayListCache: public BaseBasicArrayListCache, public virtual CacheInterface {

                //@Throws(Exception.constructor)
            
    public: static IndexedBasicArrayListCache* createCache(int32_t size);

    /*protected*/ public: CommonStrings* commonStrings;

    private: int32_t size = 0;

    /*protected*/ public: int32_t index = 0;

public: IndexedBasicArrayListCache();

                //@Throws(Exception.constructor)
            
    public: void init(int32_t size);

    public: Object* getAt(int32_t index);

                //@Throws(Exception.constructor)
            
    public: void addDefault();

                //@Throws(Exception.constructor)
            
    public: void addObject(Object* anyType);
    public: void addObject(const std::string& anyType) { return addObject(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void addObject(BoxValue anyType) { return addObject(JavaBoxes::toObject(anyType)); }

                //@Throws(Exception.constructor)
            
    public: void add(CacheableInterface* cacheableInterface);

                //@Throws(Exception.constructor)
            
    public: void addArray(std::vector<CacheableInterface*> cacheableInterfaces);

    public: void clear();

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_INDEXEDBASICARRAYLISTCACHE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_CACHE_INDEXEDBASICARRAYLISTCACHE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_INDEXEDBASICARRAYLISTCACHE_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include(<jsinterop/annotations/JsConstructor.h>)
#include <jsinterop/annotations/JsConstructor.h>
#endif
#if __has_include(<jsinterop/annotations/JsProperty.h>)
#include <jsinterop/annotations/JsProperty.h>
#endif
#if __has_include("org/allbinary/logic/util/cache/BaseBasicArrayListCache.h")
#include "org/allbinary/logic/util/cache/BaseBasicArrayListCache.h"
#endif
#if __has_include("org/allbinary/logic/util/cache/CacheInterface.h")
#include "org/allbinary/logic/util/cache/CacheInterface.h"
#endif
#if __has_include("org/allbinary/logic/util/cache/CacheableInterface.h")
#include "org/allbinary/logic/util/cache/CacheableInterface.h"
#endif

        #endif
    
