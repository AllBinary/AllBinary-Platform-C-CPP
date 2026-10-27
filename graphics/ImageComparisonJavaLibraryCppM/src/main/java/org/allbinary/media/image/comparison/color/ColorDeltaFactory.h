
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COLOR_COLORDELTAFACTORY_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COLOR_COLORDELTAFACTORY_H

        
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
class CacheInterfaceFactory;
class CachePolicyFactory;
class CacheTypeFactory;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ColorDelta;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ColorDeltaFactory
            : public virtual Object
         {

    private: static inline AutomaticCacheInterface* cacheInterface = 
                nullptr
            ;

                    static int32_t initResult;
                static int32_t init();
            
                //@Throws(Exception.constructor)
            
    public: static ColorDelta* getInstance(int32_t rgb1, int32_t rgb2);

    /*protected*/ public: LogUtil* logUtil;

private: ColorDeltaFactory();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COLOR_COLORDELTAFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COLOR_COLORDELTAFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COLOR_COLORDELTAFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/AutomaticCacheInterface.h>)
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>
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
#if __has_include("org/allbinary/media/image/comparison/color/ColorDelta.h")
#include "org/allbinary/media/image/comparison/color/ColorDelta.h"
#endif

        #endif
    
