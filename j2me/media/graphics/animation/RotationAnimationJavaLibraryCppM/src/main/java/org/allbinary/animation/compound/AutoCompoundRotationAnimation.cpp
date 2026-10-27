
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_AUTOCOMPOUNDROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_AUTOCOMPOUNDROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/compound/AutoCompoundRotationAnimation.h"
        

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


AutoCompoundRotationAnimation::AutoCompoundRotationAnimation(std::vector<RotationAnimation*> animationInterfaceArray, AnimationBehavior* animationBehavior) : RotationAnimation(AngleInfo::getInstance(AngleFactory::getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil::createInstance(4), animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->animationInterfaceArray= animationInterfaceArray;
    
this->circularIndexUtil= CircularIndexUtil::createInstance(this->animationInterfaceArray.size());
    
}


    auto AutoCompoundRotationAnimation::setFrame(int32_t index) -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->setFrame(index);
    
}


    auto AutoCompoundRotationAnimation::getFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->getFrame();;
    
}


                //@Throws(Exception.constructor)
            
    auto AutoCompoundRotationAnimation::getAnimationSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->getAnimationSize();;
    
}


    auto AutoCompoundRotationAnimation::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->getSize();;
    
}


    auto AutoCompoundRotationAnimation::previousFrame() -> void{
this->circularIndexUtil->previous();
    
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->previousFrame();
    
}


                //@Throws(Exception.constructor)
            
    auto AutoCompoundRotationAnimation::nextFrame() -> void{
this->circularIndexUtil->next();
    
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->nextFrame();
    
}


    auto AutoCompoundRotationAnimation::previousRotation() -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->previousRotation();
    
}


    auto AutoCompoundRotationAnimation::nextRotation() -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->nextRotation();
    
}


    auto AutoCompoundRotationAnimation::setSequence(std::vector<int32_t> sequence) -> void{
}


    auto AutoCompoundRotationAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    auto AutoCompoundRotationAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->paintXY(graphics, x, y);
    
}


    auto AutoCompoundRotationAnimation::paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z) -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->paintThreedXYZ(graphics, x, y, z);
    
}


    auto AutoCompoundRotationAnimation::getCurrentAnimation() -> IndexedAnimation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterfaceArray[this->circularIndexUtil->getIndex()];
    
}


    auto AutoCompoundRotationAnimation::nextAnimation() -> void{

    int32_t frame = this->getFrame();;
    
this->circularIndexUtil->next();
    
this->setFrame(frame);
    
}


    auto AutoCompoundRotationAnimation::previousAnimation() -> void{

    int32_t frame = this->getFrame();;
    
this->circularIndexUtil->previous();
    
this->setFrame(frame);
    
}


    auto AutoCompoundRotationAnimation::setAnimation(int32_t index) -> void{

    int32_t frame = this->getFrame();;
    
this->circularIndexUtil->setIndex(index);
    
this->setFrame(frame);
    
}


    auto AutoCompoundRotationAnimation::setFrameByDirection(Direction* direction) -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->setFrameByDirection(direction);
    
}


    auto AutoCompoundRotationAnimation::setFrameToAngle(Angle* angle) -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->setFrameToAngle(angle);
    
}


    auto AutoCompoundRotationAnimation::adjustFrameToAngle(Angle* newAngle) -> void{
this->adjustFrame(newAngle->getValue());
    
}


    auto AutoCompoundRotationAnimation::adjustFrame(int16_t angle) -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->adjustFrame(angle);
    
}


    auto AutoCompoundRotationAnimation::getAngleInfoP() -> AngleInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->getAngleInfoP();;
    
}


    auto AutoCompoundRotationAnimation::getAnimationInterfaceArray() -> std::vector<RotationAnimation*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterfaceArray;
    
}


    auto AutoCompoundRotationAnimation::setAnimationInterfaceArray(std::vector<RotationAnimation*> animationInterfaceArray) -> void{
this->animationInterfaceArray= animationInterfaceArray;
    
}


                //@Throws(Exception.constructor)
            
    auto AutoCompoundRotationAnimation::set(GL* gl) -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->set(gl);
    
}

}




        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_AUTOCOMPOUNDROTATIONANIMATION_CPP
