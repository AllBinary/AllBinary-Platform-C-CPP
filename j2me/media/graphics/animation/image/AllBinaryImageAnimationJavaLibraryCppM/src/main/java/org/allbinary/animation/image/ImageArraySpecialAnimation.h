
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

            #include <vector>
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/special/SpecialAnimationInterface.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageArrayAnimation.h"

class ImageArraySpecialAnimation: public ImageArrayAnimation, public SpecialAnimationInterface {

    private: const TimeDelayHelper timeDelayHelper = TimeDelayHelper(270);

public: ImageArraySpecialAnimation(std::vector<Image> imageArray, AnimationBehavior animationBehavior);

    private: int32_t loopCount = 0;

    public: int32_t getLoopCount();

    public: void setLastFrame();

    public: void reset();

    public: void nextFrame();

    private: const int32_t loopCountTotal = 1;

    public: bool isComplete();

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSPECIALANIMATION_H
