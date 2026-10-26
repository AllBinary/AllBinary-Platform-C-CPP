
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_VECTORTOIMAGEARRAYROTATIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_VECTORTOIMAGEARRAYROTATIONANIMATIONFACTORY_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/VectorAnimation.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/image/AnimationFrameToImageUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
#include <org/allbinary/media/image/ImageToRotationImageArrayUtil.h>

      
#include <org/allbinary/vector/VectorInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseImageAnimationFactory.h"
#include "AdjustedImageArrayRotationAnimation.h"

class VectorToImageArrayRotationAnimationFactory: public BaseImageAnimationFactory {

    private: std::vector<Image> imageArray = NullImage::NULL_IMAGE_ARRAY;

    private: int32_t angleIncrement= 0;

public: VectorToImageArrayRotationAnimationFactory(VectorInfo vectorInfo, BasicColor basicColor, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    protected: void init();

                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId);

    protected: int32_t getAngleIncrement();

    public: void setInitialScale(ScaleProperties scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_VECTORTOIMAGEARRAYROTATIONANIMATIONFACTORY_H
