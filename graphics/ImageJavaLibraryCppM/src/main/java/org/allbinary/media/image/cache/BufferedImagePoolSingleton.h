
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEPOOLSINGLETON_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEPOOLSINGLETON_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class LogUtil;
class CachePolicyFactory;
class PoolInterface;
class PoolInterfaceFactory;
class PoolTypeFactory;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BufferedImageCacheableFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BufferedImagePoolSingleton
            : public virtual Object
         {

    private: static inline PoolInterface* poolInterface = 
                nullptr
            ;

                    static int32_t initResult;
                static int32_t init();
            
    public: static PoolInterface* getInstance();

private: BufferedImagePoolSingleton();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEPOOLSINGLETON_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEPOOLSINGLETON_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEPOOLSINGLETON_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/CachePolicyFactory.h>)
#include <org/allbinary/logic/util/cache/CachePolicyFactory.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/PoolInterface.h>)
#include <org/allbinary/logic/util/cache/PoolInterface.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/PoolInterfaceFactory.h>)
#include <org/allbinary/logic/util/cache/PoolInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/PoolTypeFactory.h>)
#include <org/allbinary/logic/util/cache/PoolTypeFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/media/image/cache/BufferedImageCacheableFactory.h")
#include "org/allbinary/media/image/cache/BufferedImageCacheableFactory.h"
#endif

        #endif
    
