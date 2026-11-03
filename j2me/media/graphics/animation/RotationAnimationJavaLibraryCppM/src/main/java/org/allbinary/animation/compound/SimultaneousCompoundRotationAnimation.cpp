
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/compound/SimultaneousCompoundRotationAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

SimultaneousCompoundRotationAnimation::SimultaneousCompoundRotationAnimation(std::vector<RotationAnimation*> animationInterfaceArray, AnimationBehavior* animationBehavior) : RotationAnimation(AngleInfo::getInstance(AngleFactory::getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil::createInstance(4), animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->animationInterfaceArray= animationInterfaceArray;
    
}


    auto SimultaneousCompoundRotationAnimation::setFrame(int32_t frameIndex) -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->setFrame(frameIndex);
    
}

}


    auto SimultaneousCompoundRotationAnimation::getFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray[0]->getFrame();;
    
}


                //@Throws(Exception.constructor)
            
    auto SimultaneousCompoundRotationAnimation::getAnimationSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray[0]->getAnimationSize();;
    
}


    auto SimultaneousCompoundRotationAnimation::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray[0]->getSize();;
    
}


    auto SimultaneousCompoundRotationAnimation::previousFrame() -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->previousFrame();
    
}

}


                //@Throws(Exception.constructor)
            
    auto SimultaneousCompoundRotationAnimation::nextFrame() -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->nextFrame();
    
}

}


    auto SimultaneousCompoundRotationAnimation::previousRotation() -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->previousRotation();
    
}

}


    auto SimultaneousCompoundRotationAnimation::nextRotation() -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->nextRotation();
    
}

}


    auto SimultaneousCompoundRotationAnimation::setSequence(std::vector<int32_t> sequence) -> void{
}


    auto SimultaneousCompoundRotationAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    auto SimultaneousCompoundRotationAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->paintXY(graphics, x, y);
    
}

}


    auto SimultaneousCompoundRotationAnimation::paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z) -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->paintThreedXYZ(graphics, x, y, z);
    
}

}


    auto SimultaneousCompoundRotationAnimation::setFrameByDirection(Direction* direction) -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->setFrameByDirection(direction);
    
}

}


    auto SimultaneousCompoundRotationAnimation::setFrameToAngle(Angle* angle) -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->setFrameToAngle(angle);
    
}

}


    auto SimultaneousCompoundRotationAnimation::adjustFrameToAngle(Angle* newAngle) -> void{
this->adjustFrame(newAngle->getValue());
    
}


    auto SimultaneousCompoundRotationAnimation::adjustFrame(int16_t angle) -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->adjustFrame(angle);
    
}

}


    auto SimultaneousCompoundRotationAnimation::getAngleInfoP() -> AngleInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray[0]->getAngleInfoP();;
    
}


    auto SimultaneousCompoundRotationAnimation::getAnimationInterfaceArray() -> std::vector<RotationAnimation*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray;
    
}


    auto SimultaneousCompoundRotationAnimation::setAnimationInterfaceArray(std::vector<RotationAnimation*> animationInterfaceArray) -> void{
this->animationInterfaceArray= animationInterfaceArray;
    
}


                //@Throws(Exception.constructor)
            
    auto SimultaneousCompoundRotationAnimation::set(GL* gl) -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->set(gl);
    
}

}




        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDROTATIONANIMATION_CPP
