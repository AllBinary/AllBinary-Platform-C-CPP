
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSPECIALANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSPECIALANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class Image;
class AnimationBehavior;
#include <org/allbinary/animation/special/SpecialAnimationInterface.h>
class DisplayInfoSingleton;
class GameTickTimeDelayHelperFactory;
class TimeDelayHelper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageArrayAnimation.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageArraySpecialAnimation: public ImageArrayAnimation, public virtual SpecialAnimationInterface {

    private: TimeDelayHelper* timeDelayHelper;

public: ImageArraySpecialAnimation(std::vector<Image*> imageArray, AnimationBehavior* animationBehavior);

    private: int32_t loopCount = 0;

    public: int32_t getLoopCount();

    public: void setLastFrame();

    public: void reset();

    public: void nextFrame();

    private: const int32_t loopCountTotal = 1;

    public: bool isComplete();

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSPECIALANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSPECIALANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSPECIALANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/animation/special/SpecialAnimationInterface.h>)
#include <org/allbinary/animation/special/SpecialAnimationInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelperFactory.h>)
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include("org/allbinary/animation/image/ImageArrayAnimation.h")
#include "org/allbinary/animation/image/ImageArrayAnimation.h"
#endif

        #endif
    
