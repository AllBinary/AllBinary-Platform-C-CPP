
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_KEYLESSBASICARRAYLISTCACHE_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_KEYLESSBASICARRAYLISTCACHE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class LogUtil;
class StringMaker;
class BasicArrayList;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/IndexedBasicArrayListCache.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class KeylessBasicArrayListCache: public IndexedBasicArrayListCache {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: BasicArrayListUtil* basicArrayListUtil;

public: KeylessBasicArrayListCache();

    public: BasicArrayList* get();

    public: void clear();

    public: std::string log();

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_KEYLESSBASICARRAYLISTCACHE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_CACHE_KEYLESSBASICARRAYLISTCACHE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_KEYLESSBASICARRAYLISTCACHE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include("org/allbinary/logic/util/cache/IndexedBasicArrayListCache.h")
#include "org/allbinary/logic/util/cache/IndexedBasicArrayListCache.h"
#endif

        #endif
    
