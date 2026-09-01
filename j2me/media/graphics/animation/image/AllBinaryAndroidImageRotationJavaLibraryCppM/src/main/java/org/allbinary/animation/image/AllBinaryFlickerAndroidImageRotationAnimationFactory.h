
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYFLICKERANDROIDIMAGEROTATIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYFLICKERANDROIDIMAGEROTATIONANIMATIONFACTORY_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/media/image/ImageCopyUtil.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryFlickerAndroidImageRotationAnimation.h"

class AllBinaryFlickerAndroidImageRotationAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface {

    private: Image image = NullImage::NULL_IMAGE;

    private: int16_t angleIncrement;

    protected: AnimationBehaviorFactory animationBehaviorFactory;

public: AllBinaryFlickerAndroidImageRotationAnimationFactory(Image image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId);

    protected: int16_t getAngleIncrement();

    protected: void setImage(Image image);

    protected: Image getImage();

    public: void setInitialScale(ScaleProperties scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYFLICKERANDROIDIMAGEROTATIONANIMATIONFACTORY_H
