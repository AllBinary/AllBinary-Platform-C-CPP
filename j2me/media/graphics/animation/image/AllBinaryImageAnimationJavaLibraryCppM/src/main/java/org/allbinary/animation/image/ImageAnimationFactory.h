
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Image;
class Animation;
class AnimationBehaviorFactory;
class OpenGLUtil;
class PrimitiveIntUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
class ImageAnimation;
class AdjustedImageAnimation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageAnimationFactory: public BaseImageAnimationFactory {

                //@Throws(Exception.constructor)
            
    public: static ImageAnimationFactory* createFactory(Image* image);

public: ImageAnimationFactory(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATIONFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehaviorFactory.h>)
#include <org/allbinary/animation/AnimationBehaviorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLUtil.h>)
#include <org/allbinary/graphics/opengles/OpenGLUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveIntUtil.h>)
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>
#endif
#if __has_include("org/allbinary/animation/image/BaseImageAnimationFactory.h")
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#endif
#if __has_include("org/allbinary/animation/image/ImageAnimation.h")
#include "org/allbinary/animation/image/ImageAnimation.h"
#endif
#if __has_include("org/allbinary/animation/image/AdjustedImageAnimation.h")
#include "org/allbinary/animation/image/AdjustedImageAnimation.h"
#endif

        #endif
    
