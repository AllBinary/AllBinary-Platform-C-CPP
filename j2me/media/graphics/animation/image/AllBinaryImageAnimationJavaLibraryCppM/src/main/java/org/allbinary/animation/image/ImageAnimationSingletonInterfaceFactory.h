
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATIONSINGLETONINTERFACEFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATIONSINGLETONINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Animation;
class AnimationBehavior;
#include <org/allbinary/animation/SingletonAnimationInterfaceFactory.h>
class AnimationFrameToImageUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageAnimation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageAnimationSingletonInterfaceFactory: public SingletonAnimationInterfaceFactory {

public: ImageAnimationSingletonInterfaceFactory(Animation* animationInterface, int32_t width, int32_t height);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATIONSINGLETONINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATIONSINGLETONINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATIONSINGLETONINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/animation/SingletonAnimationInterfaceFactory.h>)
#include <org/allbinary/animation/SingletonAnimationInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/image/AnimationFrameToImageUtil.h>)
#include <org/allbinary/image/AnimationFrameToImageUtil.h>
#endif
#if __has_include("org/allbinary/animation/image/ImageAnimation.h")
#include "org/allbinary/animation/image/ImageAnimation.h"
#endif

        #endif
    
