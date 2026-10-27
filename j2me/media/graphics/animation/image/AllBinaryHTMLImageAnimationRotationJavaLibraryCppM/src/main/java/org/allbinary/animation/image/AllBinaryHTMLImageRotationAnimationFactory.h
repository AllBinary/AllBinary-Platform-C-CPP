
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYHTMLIMAGEROTATIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYHTMLIMAGEROTATIONANIMATIONFACTORY_H

        
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

class PrimitiveIntUtil;
class ImageCopyUtil;
class AngleFactory;
class AngleInfo;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
class AllBinaryHTMLImageRotationAnimation;
class AllBinaryAdjustedHTMLImageRotationAnimation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryHTMLImageRotationAnimationFactory: public BaseImageAnimationFactory {

                //@Throws(Exception.constructor)
            
    public: static AllBinaryHTMLImageRotationAnimationFactory* createFactoryADXY(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);

    /*protected*/ public: int16_t angleIncrement;

public: AllBinaryHTMLImageRotationAnimationFactory(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);

    public: void init(int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId);

    /*protected*/ public: int16_t getAngleIncrement();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYHTMLIMAGEROTATIONANIMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYHTMLIMAGEROTATIONANIMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYHTMLIMAGEROTATIONANIMATIONFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehaviorFactory.h>)
#include <org/allbinary/animation/AnimationBehaviorFactory.h>
#endif

#if __has_include(<org/allbinary/logic/math/PrimitiveIntUtil.h>)
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageCopyUtil.h>)
#include <org/allbinary/media/image/ImageCopyUtil.h>
#endif
#if __has_include(<org/allbinary/math/AngleFactory.h>)
#include <org/allbinary/math/AngleFactory.h>
#endif
#if __has_include(<org/allbinary/math/AngleInfo.h>)
#include <org/allbinary/math/AngleInfo.h>
#endif
#if __has_include("org/allbinary/animation/image/BaseImageAnimationFactory.h")
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#endif
#if __has_include("org/allbinary/animation/image/AllBinaryHTMLImageRotationAnimation.h")
#include "org/allbinary/animation/image/AllBinaryHTMLImageRotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/image/AllBinaryAdjustedHTMLImageRotationAnimation.h")
#include "org/allbinary/animation/image/AllBinaryAdjustedHTMLImageRotationAnimation.h"
#endif

        #endif
    
