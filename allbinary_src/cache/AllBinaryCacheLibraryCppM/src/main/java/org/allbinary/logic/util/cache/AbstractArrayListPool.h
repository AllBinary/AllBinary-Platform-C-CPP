
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_ABSTRACTARRAYLISTPOOL_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_ABSTRACTARRAYLISTPOOL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/PoolInterface.h"
class CacheableInterfaceFactoryInterface;
class CacheableInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbstractArrayListPool
            : public virtual Object
        , public virtual PoolInterface {

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: BasicArrayList* buffers;

    /*protected*/ public: CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface;

public: AbstractArrayListPool(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: void clear();

                //@Throws(Exception.constructor)
            
    public: CacheableInterface* remove(Object* key);
    public: CacheableInterface* remove(const std::string& key) { return remove(JavaString::box(key)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> CacheableInterface* remove(BoxValue key) { return remove(JavaBoxes::toObject(key)); }

                //@Throws(Exception.constructor)
            
    public: void add(CacheableInterface* cacheableInterface);

                //@Throws(Exception.constructor)
            
    public: void addArray(std::vector<CacheableInterface*> cacheableInterfaces);

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_ABSTRACTARRAYLISTPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_CACHE_ABSTRACTARRAYLISTPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_ABSTRACTARRAYLISTPOOL_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/logic/util/cache/PoolInterface.h")
#include "org/allbinary/logic/util/cache/PoolInterface.h"
#endif
#if __has_include("org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h")
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/logic/util/cache/CacheableInterface.h")
#include "org/allbinary/logic/util/cache/CacheableInterface.h"
#endif

        #endif
    
