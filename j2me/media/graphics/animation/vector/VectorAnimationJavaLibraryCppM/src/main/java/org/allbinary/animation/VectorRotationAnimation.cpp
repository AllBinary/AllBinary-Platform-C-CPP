
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_VECTORROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/VectorRotationAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/VectorBaseRotationAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"


VectorRotationAnimation::VectorRotationAnimation(std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) : VectorBaseRotationAnimation(AngleInfo::getInstance((AngleFactory::getInstance()->TOTAL_ANGLE /currentPoints.size())), currentPoints, basicColor, animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->angleInfo->adjustAngle(this->getFrame());
    
}


    auto VectorRotationAnimation::setFrameByDirection(Direction* direction) -> void{

    Angle* angle = this->directionUtil->getFrameAngle(direction);;
    
this->adjustFrameToAngle(angle);
    
}


    auto VectorRotationAnimation::setFrameToAngle(Angle* angle) -> void{
this->adjustFrameToAngle(angle);
    
}


    auto VectorRotationAnimation::setFrame(int32_t index) -> void{
VectorBaseRotationAnimation::setFrame(index);
    
this->angleInfo->adjustAngle(this->getFrame());
    
}


    auto VectorRotationAnimation::adjustFrame(int16_t newAngle) -> void{
this->setFrame(this->frameUtil->getFrameForAngle(newAngle, static_cast<int32_t>(this->angleInfo->getAngleIncrementInfo()->getAngleIncrement())));
    
}


    auto VectorRotationAnimation::adjustFrameToAngle(Angle* newAngle) -> void{
this->adjustFrame(newAngle->getValue());
    
}




        #endif //ORG_ALLBINARY_ANIMATION_VECTORROTATIONANIMATION_CPP
