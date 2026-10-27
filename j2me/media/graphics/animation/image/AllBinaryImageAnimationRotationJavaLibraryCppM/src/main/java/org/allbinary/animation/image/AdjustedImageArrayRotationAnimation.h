
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYROTATIONANIMATION_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageArrayRotationAnimation.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"
//TWB - Adjustments should be done in the resource creation and not at the animation level
class AdjustedImageArrayRotationAnimation: public ImageArrayRotationAnimation {

                //@Throws(Exception.constructor)
            
    public: static AdjustedImageArrayRotationAnimation* createAdjustedImageArrayRotationAnimationInfo(Object* anyType, AnimationBehavior* animationBehavior);

                //@Throws(Exception.constructor)
            
    public: static AdjustedImageArrayRotationAnimation* createAnimation(std::vector<Image*> imageArray, AngleInfo* angleInfo, int32_t totalAngle, AnimationBehavior* animationBehavior);

    private: int32_t dx= 0;

    private: int32_t dy= 0;

public: AdjustedImageArrayRotationAnimation(std::vector<Image*> imageArray, AngleInfo* angleInfo, int32_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

                //@Throws(Exception.constructor)
            
    public: void init(int32_t dx, int32_t dy);

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: void setDx(int32_t dx);

    public: int32_t getDx();

    public: void setDy(int32_t dy);

    public: int32_t getDy();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYROTATIONANIMATION_H
