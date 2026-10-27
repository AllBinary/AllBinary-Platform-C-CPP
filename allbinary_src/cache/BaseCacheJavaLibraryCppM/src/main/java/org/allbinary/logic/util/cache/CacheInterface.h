
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class JsType;
class JsMethod;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CacheableInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CacheInterface
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual void add(CacheableInterface* cacheableInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void addArray(std::vector<CacheableInterface*> cacheableInterfaces) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void clear() = 0;

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACE_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include("org/allbinary/logic/util/cache/CacheableInterface.h")
#include "org/allbinary/logic/util/cache/CacheableInterface.h"
#endif

        #endif
    
