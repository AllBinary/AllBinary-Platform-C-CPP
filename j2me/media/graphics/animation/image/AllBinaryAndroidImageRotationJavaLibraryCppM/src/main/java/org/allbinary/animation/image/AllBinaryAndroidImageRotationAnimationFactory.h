
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYANDROIDIMAGEROTATIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYANDROIDIMAGEROTATIONANIMATIONFACTORY_H

            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/media/image/ImageCopyUtil.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseImageAnimationFactory.h"
#include "AllBinaryFlickerAndroidImageRotationAnimation.h"
#include "AllBinaryAdjustedAndroidImageRotationAnimation.h"

class AllBinaryAndroidImageRotationAnimationFactory: public BaseImageAnimationFactory {

                //@Throws(Exception.constructor)
            
    public: static AllBinaryAndroidImageRotationAnimationFactory createFactory(Image image, int32_t width, int32_t height, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: static AllBinaryAndroidImageRotationAnimationFactory createFactoryA(Image image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: static AllBinaryAndroidImageRotationAnimationFactory createFactoryU(Image image, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: static AllBinaryAndroidImageRotationAnimationFactory createFactoryDXYU(Image image, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: static AllBinaryAndroidImageRotationAnimationFactory createFactoryADXY(Image image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory animationBehaviorFactory, bool resizeCanvasForRotation);

    public: void init(int32_t dx, int32_t dy);

    private: int16_t angleIncrement;

    private: bool resizeCanvasForRotation;

public: AllBinaryAndroidImageRotationAnimationFactory(Image image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory animationBehaviorFactory, bool resizeCanvasForRotation);

                //@Throws(Exception.constructor)
            
    private: Image getCanvasImage();

                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYANDROIDIMAGEROTATIONANIMATIONFACTORY_H
