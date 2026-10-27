
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"
#include "org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h"
//TWB - Adjustments should be done in the resource creation and not at the animation level
class PooledImageArrayRotationAnimationFactory
            : public Object
        , public AnimationInterfaceFactoryInterface {

                //@Throws(Exception.constructor)
            
    public: static PooledImageArrayRotationAnimationFactory* createFactory(Image* image, AnimationBehaviorFactory* animationBehaviorFactory){

    int32_t totalAngle = static_cast<int32_t>(AngleFactory::getInstance()->TOTAL_ANGLE);;
    

    int32_t angleIncrement = (totalAngle /GameConfigurationCentral::getInstance()->getGameControlFidelity());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new PooledImageArrayRotationAnimationFactory(image, image->getWidth(), image->getHeight(),  -(image->getWidth()>>2),  -(image->getHeight()>>2), angleIncrement, animationBehaviorFactory);
    
}


                //@Throws(Exception.constructor)
            
    public: static PooledImageArrayRotationAnimationFactory* createDXY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory){

    int32_t totalAngle = static_cast<int32_t>(AngleFactory::getInstance()->TOTAL_ANGLE);;
    

    int32_t angleIncrement = (totalAngle /GameConfigurationCentral::getInstance()->getGameControlFidelity());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new PooledImageArrayRotationAnimationFactory(image, image->getWidth(), image->getHeight(), dx, dy, angleIncrement, animationBehaviorFactory);
    
}


    private: Object* allBinaryImageRotationAnimationInfo = NullUtil::getInstance()->NULL_OBJECT;

    private: AnimationBehaviorFactory* animationBehaviorFactory;

public: PooledImageArrayRotationAnimationFactory(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory){
this->animationBehaviorFactory= animationBehaviorFactory;
    

    int32_t totalAngle = static_cast<int32_t>(AngleFactory::getInstance()->TOTAL_ANGLE);;
    

    std::vector<Image*> imageArray = ImageToRotationImageArrayUtil::getInstance()->generate(image, angleIncrement, totalAngle);;
    
this->allBinaryImageRotationAnimationInfo= new ImageArrayRotationAnimationInfo(imageArray, angleIncrement, totalAngle, dx, dy);
    
}


                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AdjustedImageArrayRotationAnimation::createAdjustedImageArrayRotationAnimationInfo(this->allBinaryImageRotationAnimationInfo, this->animationBehaviorFactory->getOrCreateInstance());;
    
}


    public: void setInitialScale(ScaleProperties* scaleProperties){
}


};

            

