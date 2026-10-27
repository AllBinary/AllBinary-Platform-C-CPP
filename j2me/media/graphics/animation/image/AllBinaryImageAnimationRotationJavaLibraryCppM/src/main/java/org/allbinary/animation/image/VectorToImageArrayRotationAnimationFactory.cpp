
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
        #include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h"

class VectorToImageArrayRotationAnimationFactory: public BaseImageAnimationFactory {

    private: std::vector<Image*> imageArray = NullImage::NULL_IMAGE_ARRAY;

    private: int32_t angleIncrement= 0;

public: VectorToImageArrayRotationAnimationFactory(VectorInfo* vectorInfo, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) : BaseImageAnimationFactory(AnimationFrameToImageUtil::getInstance()->getInstanceTranslate(vectorInfo->getWidth(), vectorInfo->getHeight(), VectorAnimation::createVectorAnimation(vectorInfo->getPoints(), basicColor, animationBehaviorFactory->getOrCreateInstance())), PrimitiveIntUtil::getArrayInstance(), 0, 0, 0, 0, animationBehaviorFactory){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->init();
    
}


                //@Throws(Exception.constructor)
            
    protected: void init(){

    AngleFactory* angleFactory = AngleFactory::getInstance();;
    
this->angleIncrement= angleFactory->TOTAL_ANGLE /GameConfigurationCentral::getInstance()->getGameControlFidelity();
    
this->imageArray= ImageToRotationImageArrayUtil::getInstance()->generate(this->getImage(), this->getAngleIncrement(), static_cast<int32_t>(angleFactory->TOTAL_ANGLE));
    
}


                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId){

                        if(this->animationFactoryInitializationVisitor.dx != 0 || this->animationFactoryInitializationVisitor.dy != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AdjustedImageArrayRotationAnimation(this->imageArray, AngleInfo::getInstance(this->getAngleIncrement()), static_cast<int32_t>(AngleFactory::getInstance()->TOTAL_ANGLE), this->animationFactoryInitializationVisitor.dx, this->animationFactoryInitializationVisitor.dy, this->animationBehaviorFactory.getOrCreateInstance());
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AdjustedImageArrayRotationAnimation::createAnimation(this->imageArray, AngleInfo::getInstance(this->angleIncrement), static_cast<int32_t>(AngleFactory::getInstance()->TOTAL_ANGLE), this->animationBehaviorFactory.getOrCreateInstance());;
    

                        }
                            
}


    protected: int32_t getAngleIncrement(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->angleIncrement;
    
}


    public: void setInitialScale(ScaleProperties* scaleProperties){
}


};

            

