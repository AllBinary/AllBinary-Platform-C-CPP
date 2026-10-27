
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_VECTORANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/VectorAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/VectorAnimationInterface.h"
#include "org/allbinary/animation/AnimationBehavior.h"


    auto VectorAnimation::createVectorAnimation(std::vector<std::vector<int32_t>> currentPoints2, BasicColor* basicColor, AnimationBehavior* animationBehavior) -> VectorAnimation*{

    std::vector<std::vector<std::vector<int32_t>>> currentPoints = std::vector<std::vector<std::vector<int32_t>>>(1, std::vector<std::vector<int32_t>>(currentPoints2.length, std::vector<int32_t>(2)));;
    

    int32_t size = currentPoints2.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
currentPoints[0][index][0]= currentPoints2[index][0];
    
currentPoints[0][index][1]= currentPoints2[index][1];
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new VectorAnimation(currentPoints, basicColor, animationBehavior);
    
}


VectorAnimation::VectorAnimation(std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) : IndexedAnimation(animationBehavior), currentPoints(NullUtil::getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY), circularIndexUtil(CircularIndexUtil::createInstance(0)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setPoints(currentPoints);
    
this->setBasicColorP(basicColor);
    
}


    auto VectorAnimation::setBasicColorP(BasicColor* basicColor) -> void{

    bool changed = false;;
    

                        if(this->getBasicColorP() == 
                                    nullptr
                                 || this->getBasicColorP()->intValue() != basicColor->intValue())
                        
                                    {
                                    changed= true;
    

                                    }
                                
IndexedAnimation::setBasicColorP(basicColor);
    

                        if(changed)
                        
                                    {
                                    this->updateModifiers();
    

                                    }
                                
}


    auto VectorAnimation::changeBasicColor(BasicColor* basicColor) -> void{

    bool changed = false;;
    

                        if(this->getChangeBasicColor() == 
                                    nullptr
                                 || this->getChangeBasicColor()->intValue() != basicColor->intValue())
                        
                                    {
                                    changed= true;
    

                                    }
                                
IndexedAnimation::changeBasicColor(basicColor);
    

                        if(changed)
                        
                                    {
                                    this->updateModifiers();
    

                                    }
                                
}


    auto VectorAnimation::setAlpha(int32_t alpha) -> void{

    bool changed = false;;
    

                        if(this->alphaP != alpha)
                        
                                    {
                                    changed= true;
    

                                    }
                                
IndexedAnimation::setAlpha(alpha);
    

                        if(changed)
                        
                                    {
                                    this->updateModifiers();
    

                                    }
                                
}


    auto VectorAnimation::setScale(float scaleX, float scaleY) -> void{
}


    auto VectorAnimation::setMaxScale(float maxScaleX, float maxScaleY) -> void{
}


    auto VectorAnimation::updateModifiers() -> void{
}


                //@Throws(Exception.constructor)
            
    auto VectorAnimation::getAnimationSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getSize();;
    
}


    auto VectorAnimation::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentPoints.size();
    
}


    auto VectorAnimation::setSequence(std::vector<int32_t> sequence) -> void{
}


    auto VectorAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    auto VectorAnimation::nextFrame() -> void{
this->circularIndexUtil->next();
    
}


    auto VectorAnimation::previousFrame() -> void{
this->circularIndexUtil->previous();
    
}


    auto VectorAnimation::paintVectors(Graphics* graphics, int32_t x, int32_t y) -> void{

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


    auto VectorAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->basicSetColorUtil->setBasicColorP(graphics, this->basicColor);
    
this->paintVectors(graphics, x, y);
    
}


    auto VectorAnimation::getFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->circularIndexUtil->getIndex();;
    
}


    auto VectorAnimation::setFrame(int32_t index) -> void{
this->circularIndexUtil->setIndex(index);
    
}


    auto VectorAnimation::getPoints(int32_t frame) -> std::vector<std::vector<int32_t>>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentPoints[frame];
    
}


    auto VectorAnimation::setPoints(std::vector<std::vector<std::vector<int32_t>>> currentPoints) -> void{
this->currentPoints= currentPoints;
    
this->circularIndexUtil= CircularIndexUtil::createInstance(currentPoints.size());
    
}




        #endif //ORG_ALLBINARY_ANIMATION_VECTORANIMATION_CPP
