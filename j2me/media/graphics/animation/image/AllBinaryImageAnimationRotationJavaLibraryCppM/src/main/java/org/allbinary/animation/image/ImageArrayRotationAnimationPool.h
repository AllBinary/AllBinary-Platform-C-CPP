
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONPOOL_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONPOOL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/cache/BasicArrayListResetablePool.h>
class CacheableInterface;
class CacheableInterfaceFactoryInterface;
class PoolInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageArrayRotationAnimationCacheableInterfaceFactory;
class ImageArrayRotationAnimationInfo;
class ImageArrayRotationAnimationCacheable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageArrayRotationAnimationPool: public BasicArrayListResetablePool {

    private: static PoolInterface* IMAGE_ROTATION_ANIMATION_POOL;

    public: static PoolInterface* getInstance();

public: ImageArrayRotationAnimationPool(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: CacheableInterface* remove(Object* key);
    public: CacheableInterface* remove(const std::string& key) { return remove(JavaString::box(key)); }

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONPOOL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/cache/BasicArrayListResetablePool.h>)
#include <org/allbinary/logic/util/cache/BasicArrayListResetablePool.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/CacheableInterface.h>)
#include <org/allbinary/logic/util/cache/CacheableInterface.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h>)
#include <org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/PoolInterface.h>)
#include <org/allbinary/logic/util/cache/PoolInterface.h>
#endif
#if __has_include("org/allbinary/animation/image/ImageArrayRotationAnimationCacheableInterfaceFactory.h")
#include "org/allbinary/animation/image/ImageArrayRotationAnimationCacheableInterfaceFactory.h"
#endif
#if __has_include("org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h")
#include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"
#endif
#if __has_include("org/allbinary/animation/image/ImageArrayRotationAnimationCacheable.h")
#include "org/allbinary/animation/image/ImageArrayRotationAnimationCacheable.h"
#endif

        #endif
    
