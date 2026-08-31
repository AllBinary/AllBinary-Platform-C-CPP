
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

            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/media/image/ImageCopyUtil.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseImageAnimationFactory.h"
#include "AllBinaryHTMLImageRotationAnimation.h"
#include "AllBinaryAdjustedHTMLImageRotationAnimation.h"

class AllBinaryHTMLImageRotationAnimationFactory: public BaseImageAnimationFactory {
        

                //@Throws(Exception.constructor)
            
    public static AllBinaryHTMLImageRotationAnimationFactory createFactoryADXY(Image image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory animationBehaviorFactory);

    const angleIncrement: int16_t;

public constructor (Image image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory animationBehaviorFactory);

    public init(int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    public Animation getInstance(int32_t instanceId);

    int16_t getAngleIncrement();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYHTMLIMAGEROTATIONANIMATIONFACTORY_H
