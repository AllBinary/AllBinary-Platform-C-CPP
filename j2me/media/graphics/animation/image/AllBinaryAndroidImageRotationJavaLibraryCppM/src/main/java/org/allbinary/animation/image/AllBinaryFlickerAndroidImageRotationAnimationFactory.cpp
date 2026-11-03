
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYFLICKERANDROIDIMAGEROTATIONANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYFLICKERANDROIDIMAGEROTATIONANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/AllBinaryFlickerAndroidImageRotationAnimationFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/animation/image/AllBinaryFlickerAndroidImageRotationAnimation.h"


AllBinaryFlickerAndroidImageRotationAnimationFactory::AllBinaryFlickerAndroidImageRotationAnimationFactory(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) : image(NullImage::NULL_IMAGE){
this->setImage(image);
    
this->angleIncrement= angleIncrement;
    
this->animationBehaviorFactory= animationBehaviorFactory;
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryFlickerAndroidImageRotationAnimationFactory::getInstance(int32_t instanceId) -> Animation*{

    Image* image = ImageCopyUtil::getInstance()->createImage(this->getImage());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AllBinaryFlickerAndroidImageRotationAnimation(this->getImage(), image, AngleInfo::getInstance(this->angleIncrement), AngleFactory::getInstance()->TOTAL_ANGLE, this->animationBehaviorFactory->getOrCreateInstance());
    
}


    auto AllBinaryFlickerAndroidImageRotationAnimationFactory::getAngleIncrement() -> int16_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->angleIncrement;
    
}


    auto AllBinaryFlickerAndroidImageRotationAnimationFactory::setImage(Image* image) -> void{
this->image= image;
    
}


    auto AllBinaryFlickerAndroidImageRotationAnimationFactory::getImage() -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->image;
    
}


    auto AllBinaryFlickerAndroidImageRotationAnimationFactory::setInitialScale(ScaleProperties* scaleProperties) -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYFLICKERANDROIDIMAGEROTATIONANIMATIONFACTORY_CPP
