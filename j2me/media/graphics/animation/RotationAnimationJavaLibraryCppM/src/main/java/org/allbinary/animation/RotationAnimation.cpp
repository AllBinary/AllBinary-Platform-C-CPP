
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_ROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_ROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/RotationAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/math/FrameUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/RotationAnimationInterface.h"
#include "org/allbinary/animation/AnimationBehavior.h"


RotationAnimation::RotationAnimation(AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior) : IndexedAnimation(animationBehavior), frameUtil(FrameUtil::getInstance()), directionUtil(DirectionUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->angleInfo= angleInfo;
    
this->circularIndexUtil= circularIndexUtil;
    
}


    auto RotationAnimation::nextRotationX() -> void{
}


    auto RotationAnimation::previousRotationX() -> void{
}


    auto RotationAnimation::nextRotation() -> void{
this->angleInfo->adjustAngle(this->circularIndexUtil->next());
    
}


    auto RotationAnimation::previousRotation() -> void{
this->angleInfo->adjustAngle(this->circularIndexUtil->previous());
    
}


    auto RotationAnimation::nextRotationZ() -> void{
}


    auto RotationAnimation::previousRotationZ() -> void{
}


    auto RotationAnimation::setFrame(int32_t index) -> void{
this->circularIndexUtil->setIndex(index);
    

    int32_t newFrame = this->circularIndexUtil->getIndex();;
    
this->angleInfo->adjustAngle(newFrame);
    
}


    auto RotationAnimation::setFrameByDirection(Direction* direction) -> void{

    Angle* angle = this->directionUtil->getFrameAngle(direction);;
    
this->adjustFrameToAngle(angle);
    
}


    auto RotationAnimation::setFrameToAngle(Angle* angle) -> void{
this->adjustFrameToAngle(angle);
    
}


    auto RotationAnimation::adjustFrameToAngle(Angle* angle) -> void{
this->adjustFrame(angle->getValue());
    
}


    auto RotationAnimation::adjustFrame(int16_t angle) -> void{
this->setFrame(this->frameUtil->getFrameForAngle(angle, static_cast<int32_t>(this->angleInfo->getAngleIncrementInfo()->getAngleIncrement())));
    
}


    auto RotationAnimation::getFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->circularIndexUtil->getIndex();;
    
}


    auto RotationAnimation::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->circularIndexUtil->getSize();;
    
}


    auto RotationAnimation::getAngleInfoP() -> AngleInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->angleInfo;
    
}


    auto RotationAnimation::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append(IndexedAnimation::toString())->append("circularIndexUtil: ")->append(this->circularIndexUtil->toString())->append("angleInfo: ")->append(this->angleInfo->toString())->toString();;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_ROTATIONANIMATION_CPP
