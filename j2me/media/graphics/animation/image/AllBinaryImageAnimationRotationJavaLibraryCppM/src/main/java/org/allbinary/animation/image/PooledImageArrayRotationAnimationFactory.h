
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_POOLEDIMAGEARRAYROTATIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_POOLEDIMAGEARRAYROTATIONANIMATIONFACTORY_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
#include <org/allbinary/media/image/ImageToRotationImageArrayUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageArrayRotationAnimationInfo.h"
#include "AdjustedImageArrayRotationAnimation.h"
//TWB - Adjustments should be done in the resource creation and not at the animation level
class PooledImageArrayRotationAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface {
        

                //@Throws(Exception.constructor)
            
    public static PooledImageArrayRotationAnimationFactory createFactory(Image image, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public static PooledImageArrayRotationAnimationFactory createDXY(Image image, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory);

    private: allBinaryImageRotationAnimationInfo: any = NullUtil.getInstance()!.NULL_OBJECT;

    private: const animationBehaviorFactory: AnimationBehaviorFactory;

public constructor (Image image, int32_t width, int32_t height, int32_t dx, int32_t dy, int32_t angleIncrement, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public Animation getInstance(int32_t instanceId);

    public setInitialScale(ScaleProperties scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_POOLEDIMAGEARRAYROTATIONANIMATIONFACTORY_H
