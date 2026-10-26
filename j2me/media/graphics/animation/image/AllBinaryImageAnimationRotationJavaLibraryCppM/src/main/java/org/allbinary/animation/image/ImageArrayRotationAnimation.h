
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATION_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageArrayBaseRotationAnimation.h"
#include "ImageArrayRotationAnimationInfo.h"

class ImageArrayRotationAnimation: public ImageArrayBaseRotationAnimation {

                //@Throws(Exception.constructor)
            
    protected: static ImageArrayRotationAnimation createAnimation(Object* anyType, AnimationBehavior animationBehavior);

    private: int32_t expectedTotalFrames= 0;

public: ImageArrayRotationAnimation(std::vector<Image> imageArray, AngleInfo angleInfo, int32_t totalAngle, AnimationBehavior animationBehavior);

                //@Throws(Exception.constructor)
            
    private: void init(std::vector<Image> imageArray, AngleInfo angleInfo, int32_t totalAngle);

    public: void setImageArray(std::vector<Image> imageArray);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATION_H
