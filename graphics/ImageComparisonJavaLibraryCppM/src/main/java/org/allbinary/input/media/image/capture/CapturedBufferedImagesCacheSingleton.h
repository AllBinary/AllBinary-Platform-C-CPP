
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
        



        #ifndef ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_CAPTUREDBUFFEREDIMAGESCACHESINGLETON_H
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_CAPTUREDBUFFEREDIMAGESCACHESINGLETON_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class LogUtil;
class AutomaticCacheInterface;
class CacheInterface;
class CacheInterfaceFactory;
class CachePolicyFactory;
class CacheTypeFactory;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CapturedBufferedImagesCacheSingleton
            : public virtual Object
         {

    private: static inline AutomaticCacheInterface* cacheInterface = 
                nullptr
            ;

    public: static CacheInterface* getInstance();

                    static int32_t initResult;
                static int32_t init();
            
    /*protected*/ public: LogUtil* logUtil;

private: CapturedBufferedImagesCacheSingleton();

};

            


        #endif //ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_CAPTUREDBUFFEREDIMAGESCACHESINGLETON_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_CAPTUREDBUFFEREDIMAGESCACHESINGLETON_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_CAPTUREDBUFFEREDIMAGESCACHESINGLETON_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/AutomaticCacheInterface.h>)
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/CacheInterface.h>)
#include <org/allbinary/logic/util/cache/CacheInterface.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/CacheInterfaceFactory.h>)
#include <org/allbinary/logic/util/cache/CacheInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/CachePolicyFactory.h>)
#include <org/allbinary/logic/util/cache/CachePolicyFactory.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/CacheTypeFactory.h>)
#include <org/allbinary/logic/util/cache/CacheTypeFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
