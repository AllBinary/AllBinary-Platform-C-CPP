
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/compound/CompoundRotationAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/compound/CompoundAnimationInterface.h"


CompoundRotationAnimation::CompoundRotationAnimation(std::vector<RotationAnimation*> animationInterfaceArray, AnimationBehavior* animationBehavior) : RotationAnimation(AngleInfo::getInstance(AngleFactory::getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil::createInstance(4), animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->animationInterfaceArray= animationInterfaceArray;
    
this->circularIndexUtil= CircularIndexUtil::createInstance(this->animationInterfaceArray.size());
    
}


    auto CompoundRotationAnimation::setFrame(int32_t index) -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->setFrame(index);
    
}


    auto CompoundRotationAnimation::getFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->getFrame();;
    
}


                //@Throws(Exception.constructor)
            
    auto CompoundRotationAnimation::getAnimationSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->getAnimationSize();;
    
}


    auto CompoundRotationAnimation::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->getSize();;
    
}


    auto CompoundRotationAnimation::previousFrame() -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->previousFrame();
    
}


                //@Throws(Exception.constructor)
            
    auto CompoundRotationAnimation::nextFrame() -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->nextFrame();
    
}


    auto CompoundRotationAnimation::previousRotation() -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->previousRotation();
    
}


    auto CompoundRotationAnimation::nextRotation() -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->nextRotation();
    
}


    auto CompoundRotationAnimation::setSequence(std::vector<int32_t> sequence) -> void{
}


    auto CompoundRotationAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    auto CompoundRotationAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->paintXY(graphics, x, y);
    
}


    auto CompoundRotationAnimation::paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z) -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->paintThreedXYZ(graphics, x, y, z);
    
}


    auto CompoundRotationAnimation::getCurrentAnimation() -> IndexedAnimation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray[this->circularIndexUtil->getIndex()];
    
}


    auto CompoundRotationAnimation::nextAnimation() -> void{

    int32_t frame = this->getFrame();;
    
this->circularIndexUtil->next();
    
this->setFrame(frame);
    
}


    auto CompoundRotationAnimation::previousAnimation() -> void{

    int32_t frame = this->getFrame();;
    
this->circularIndexUtil->previous();
    
this->setFrame(frame);
    
}


    auto CompoundRotationAnimation::setAnimation(int32_t index) -> void{

    int32_t frame = this->getFrame();;
    
this->circularIndexUtil->setIndex(index);
    
this->setFrame(frame);
    
}


    auto CompoundRotationAnimation::setFrameByDirection(Direction* direction) -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->setFrameByDirection(direction);
    
}


    auto CompoundRotationAnimation::setFrameToAngle(Angle* angle) -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->setFrameToAngle(angle);
    
}


    auto CompoundRotationAnimation::adjustFrameToAngle(Angle* newAngle) -> void{
this->adjustFrame(newAngle->getValue());
    
}


    auto CompoundRotationAnimation::adjustFrame(int16_t angle) -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->adjustFrame(angle);
    
}


    auto CompoundRotationAnimation::getAngleInfoP() -> AngleInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->getAngleInfoP();;
    
}


    auto CompoundRotationAnimation::getAnimationInterfaceArray() -> std::vector<RotationAnimation*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray;
    
}


    auto CompoundRotationAnimation::setAnimationInterfaceArray(std::vector<RotationAnimation*> animationInterfaceArray) -> void{
this->animationInterfaceArray= animationInterfaceArray;
    
}


                //@Throws(Exception.constructor)
            
    auto CompoundRotationAnimation::set(GL* gl) -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->set(gl);
    
}

}




        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDROTATIONANIMATION_CPP
