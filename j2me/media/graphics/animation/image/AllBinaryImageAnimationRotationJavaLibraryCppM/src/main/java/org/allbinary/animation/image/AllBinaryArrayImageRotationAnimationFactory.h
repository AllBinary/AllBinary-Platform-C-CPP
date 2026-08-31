
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

            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/media/image/ImageToRotationImageArrayUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseImageAnimationFactory.h"
#include "ImageArrayRotationAnimation.h"
#include "AdjustedImageArrayRotationAnimation.h"

class AllBinaryArrayImageRotationAnimationFactory: public BaseImageAnimationFactory {
        

                //@Throws(Exception.constructor)
            
    public static AllBinaryArrayImageRotationAnimationFactory createFactory(Image image, int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    public static AllBinaryArrayImageRotationAnimationFactory createFactoryA(Image image, int32_t dx, int32_t dy, int32_t angleIncrement);

    private: imageArray: std::vector<Image> = NullImage.NULL_IMAGE_ARRAY;

    private: angleIncrement: int32_t;

public constructor (Image image, int32_t width, int32_t height, int32_t angleIncrement, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    init();

    initDXY(int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    public Animation getInstance(int32_t instanceId);

    setImageArray(std::vector<Image> imageArray);

    int32_t getAngleIncrement();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYARRAYIMAGEROTATIONANIMATIONFACTORY_H
