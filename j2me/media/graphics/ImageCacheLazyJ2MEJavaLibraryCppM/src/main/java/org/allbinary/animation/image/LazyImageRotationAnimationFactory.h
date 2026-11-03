
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Animation;
class AnimationBehaviorFactory;
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
class ImageCacheFactory;
class ForcedLogUtil;
class ScaleProperties;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BaseImageAnimationFactory;
class LazyImageRotationAnimation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LazyImageRotationAnimationFactory
            : public virtual Object
        , public virtual AnimationInterfaceFactoryInterface {

    private: int32_t layoutIndex;

    private: BaseImageAnimationFactory* animationInterfaceFactoryInterface;

    public: ScaleProperties* scaleProperties;

public: LazyImageRotationAnimationFactory(int32_t layoutIndex, int32_t associatedLazyAnimationId, BaseImageAnimationFactory* animationInterfaceFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId);

    public: void setInitialScale(ScaleProperties* scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATIONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehaviorFactory.h>)
#include <org/allbinary/animation/AnimationBehaviorFactory.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/image/ImageCacheFactory.h>)
#include <org/allbinary/image/ImageCacheFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/media/ScaleProperties.h>)
#include <org/allbinary/media/ScaleProperties.h>
#endif
#if __has_include("org/allbinary/animation/image/BaseImageAnimationFactory.h")
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#endif
#if __has_include("org/allbinary/animation/image/LazyImageRotationAnimation.h")
#include "org/allbinary/animation/image/LazyImageRotationAnimation.h"
#endif

        #endif
    
