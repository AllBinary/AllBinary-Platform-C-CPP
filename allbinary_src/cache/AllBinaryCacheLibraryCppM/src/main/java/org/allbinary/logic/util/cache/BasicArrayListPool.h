
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTPOOL_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTPOOL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/AbstractArrayListPool.h"
class CacheableInterfaceFactoryInterface;
class CacheableInterface;
class BasicArrayListCacheable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicArrayListPool: public AbstractArrayListPool {

public: BasicArrayListPool(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface);

    public: void clear();

                //@Throws(Exception.constructor)
            
    public: CacheableInterface* remove(Object* key);
    public: CacheableInterface* remove(const std::string& key) { return remove(JavaString::box(key)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> CacheableInterface* remove(BoxValue key) { return remove(JavaBoxes::toObject(key)); }
    public: template<typename BoxElement> CacheableInterface* remove(const std::vector<BoxElement>& key) { return remove(JavaBoxes::toObject(key)); }

                //@Throws(Exception.constructor)
            
    public: void addAll(BasicArrayList* usedList);

                //@Throws(Exception.constructor)
            
    public: void releaseUsedBackToPool(BasicArrayList* usedList);

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTPOOL_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/logic/util/cache/AbstractArrayListPool.h")
#include "org/allbinary/logic/util/cache/AbstractArrayListPool.h"
#endif
#if __has_include("org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h")
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/logic/util/cache/CacheableInterface.h")
#include "org/allbinary/logic/util/cache/CacheableInterface.h"
#endif
#if __has_include("org/allbinary/logic/util/cache/BasicArrayListCacheable.h")
#include "org/allbinary/logic/util/cache/BasicArrayListCacheable.h"
#endif

        #endif
    
