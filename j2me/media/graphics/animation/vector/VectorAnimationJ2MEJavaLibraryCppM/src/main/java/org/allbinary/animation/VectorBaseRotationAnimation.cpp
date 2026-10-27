
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORBASEROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_VECTORBASEROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/VectorBaseRotationAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/animation/VectorAnimationInterface.h"
#include "org/allbinary/animation/AnimationBehavior.h"


VectorBaseRotationAnimation::VectorBaseRotationAnimation(AngleInfo* angleInfo, std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) : RotationAnimation(angleInfo, CircularIndexUtil::createInstance(360 /angleInfo->getAngleIncrementInfo()->getAngleIncrement()), animationBehavior), currentPoints(NullUtil::getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setPoints(currentPoints);
    
this->setBasicColorP(basicColor);
    
}


                //@Throws(Exception.constructor)
            
    auto VectorBaseRotationAnimation::getAnimationSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getSize();;
    
}


    auto VectorBaseRotationAnimation::getFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->circularIndexUtil->getIndex();;
    
}


    auto VectorBaseRotationAnimation::setFrame(int32_t index) -> void{
this->circularIndexUtil->setIndex(index);
    
}


    auto VectorBaseRotationAnimation::nextFrame() -> void{
this->circularIndexUtil->next();
    
}


    auto VectorBaseRotationAnimation::previousFrame() -> void{
this->circularIndexUtil->previous();
    
}


    auto VectorBaseRotationAnimation::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentPoints.size();
    
}


    auto VectorBaseRotationAnimation::setSequence(std::vector<int32_t> sequence) -> void{
}


    auto VectorBaseRotationAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    auto VectorBaseRotationAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->basicSetColorUtil->setBasicColorP(graphics, this->basicColor);
    

        try {
            
    int32_t nextPointX = 0;;
    

    int32_t nextPointY = 0;;
    

    std::vector<int32_t> nextPoint;;
    

    std::vector<int32_t> point;;
    

    std::vector<std::vector<int32_t>> currentPointsFrame = this->currentPoints[this->circularIndexUtil->getIndex()];;
    

    int32_t size = currentPointsFrame.size();;
    

    int32_t index = size -2;;
    

        while(--index >= 0)
        {
nextPoint= currentPointsFrame[index];
    
point= currentPointsFrame[index +1];
    
nextPointX= nextPoint[0];
    
nextPointY= nextPoint[1];
    

                        if(nextPointX != 1000)
                        
                                    {
                                    graphics->drawLine(point[0] +x, point[1] +y, nextPointX +x, nextPointY +y);
    

                                    }
                                
                        else {
                            index--;
    

                        }
                            
}


                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "paintVectors", &e);
    
}

}


    auto VectorBaseRotationAnimation::getPoints(int32_t frame) -> std::vector<std::vector<int32_t>>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentPoints[frame];
    
}


    auto VectorBaseRotationAnimation::setPoints(std::vector<std::vector<std::vector<int32_t>>> currentPoints) -> void{
this->currentPoints= currentPoints;
    
this->circularIndexUtil= CircularIndexUtil::createInstance(this->currentPoints.size());
    
}




        #endif //ORG_ALLBINARY_ANIMATION_VECTORBASEROTATIONANIMATION_CPP
