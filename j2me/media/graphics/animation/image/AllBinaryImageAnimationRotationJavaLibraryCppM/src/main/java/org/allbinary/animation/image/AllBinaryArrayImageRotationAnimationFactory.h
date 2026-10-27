
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYARRAYIMAGEROTATIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYARRAYIMAGEROTATIONANIMATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Image;
class NullImage;
class Animation;
class AnimationBehaviorFactory;
class GameConfigurationCentral;
class PrimitiveIntUtil;
class AngleFactory;
class AngleInfo;
class ImageToRotationImageArrayUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
class ImageArrayRotationAnimation;
class AdjustedImageArrayRotationAnimation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryArrayImageRotationAnimationFactory: public BaseImageAnimationFactory {

                //@Throws(Exception.constructor)
            
    public: static AllBinaryArrayImageRotationAnimationFactory* createFactory(Image* image, int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    public: static AllBinaryArrayImageRotationAnimationFactory* createFactoryA(Image* image, int32_t dx, int32_t dy, int32_t angleIncrement);

    private: std::vector<Image*> imageArray;

    private: int32_t angleIncrement;

public: AllBinaryArrayImageRotationAnimationFactory(Image* image, int32_t width, int32_t height, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    private: void init();

    private: void initDXY(int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId);

    /*protected*/ public: void setImageArray(std::vector<Image*> imageArray);

    /*protected*/ public: int32_t getAngleIncrement();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYARRAYIMAGEROTATIONANIMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYARRAYIMAGEROTATIONANIMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYARRAYIMAGEROTATIONANIMATIONFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullImage.h>)
#include <javax/microedition/lcdui/NullImage.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehaviorFactory.h>)
#include <org/allbinary/animation/AnimationBehaviorFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/GameConfigurationCentral.h>)
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveIntUtil.h>)
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>
#endif
#if __has_include(<org/allbinary/math/AngleFactory.h>)
#include <org/allbinary/math/AngleFactory.h>
#endif
#if __has_include(<org/allbinary/math/AngleInfo.h>)
#include <org/allbinary/math/AngleInfo.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageToRotationImageArrayUtil.h>)
#include <org/allbinary/media/image/ImageToRotationImageArrayUtil.h>
#endif
#if __has_include("org/allbinary/animation/image/BaseImageAnimationFactory.h")
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#endif
#if __has_include("org/allbinary/animation/image/ImageArrayRotationAnimation.h")
#include "org/allbinary/animation/image/ImageArrayRotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h")
#include "org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h"
#endif

        #endif
    
