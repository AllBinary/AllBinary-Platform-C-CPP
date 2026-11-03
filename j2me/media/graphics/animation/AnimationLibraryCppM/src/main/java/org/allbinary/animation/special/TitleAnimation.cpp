
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_SPECIAL_TITLEANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_SPECIAL_TITLEANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/special/TitleAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/IndexedAnimationBehavior.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/logic/ABSystemWrapper.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/special/SpecialAnimation.h"


    auto TitleAnimation::createAnimation(std::vector<IndexedAnimation*> animationInterfaceArray, std::vector<BasicColor*> basicColorArray, std::vector<int32_t> dxArray, std::vector<int32_t> dyArray, int32_t y, int32_t width) -> TitleAnimation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new TitleAnimation(animationInterfaceArray, basicColorArray, dxArray, dyArray, y, width, new IndexedAnimationBehavior(1, 250));
    
}


TitleAnimation::TitleAnimation(std::vector<IndexedAnimation*> animationInterfaceArray, std::vector<BasicColor*> basicColorArray, std::vector<int32_t> dxArray, std::vector<int32_t> dyArray, int32_t y, int32_t width, AnimationBehavior* animationBehavior) : SpecialAnimation(animationBehavior), systemWrapper(ABSystemWrapper::getInstance()), displayInfoSingleton(DisplayInfoSingleton::getInstance()), CLEAR_COLOR(BasicColorFactory::getInstance()->CLEAR_COLOR){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->lastFrameStartTime= this->systemWrapper->currentTimeMillis();
    
this->animationInterfaceArray= animationInterfaceArray;
    
this->sizeP= this->animationInterfaceArray.size();
    
this->basicColorArray= basicColorArray;
    
this->dxArray= dxArray;
    
this->dyArray= dyArray;
    
this->y= y;
    
this->widthP= width;
    
this->reset();
    
}


    auto TitleAnimation::nextFrame() -> void{

    int64_t currentTime = this->systemWrapper->currentTimeMillis();;
    

    int64_t totalTimeElapsed = currentTime -this->lastFrameStartTime;;
    

    IndexedAnimationBehavior* indexedAnimationBehavior = dynamic_cast<IndexedAnimationBehavior*>(this->getAnimationBehavior());;
    

                        if(totalTimeElapsed > indexedAnimationBehavior->frameDelayTime)
                        
                                    {
                                    this->previousFrame();
    
this->lastFrameStartTime= currentTime;
    

                                    }
                                

                        if(this->animationInterfaceArray[0]->getFrame() == 0)
                        
                                    {
                                    indexedAnimationBehavior->loopIndex++;
    

                                    }
                                
}


    auto TitleAnimation::isComplete() -> bool{

    IndexedAnimationBehavior* indexedAnimationBehavior = dynamic_cast<IndexedAnimationBehavior*>(this->getAnimationBehavior());;
    

                        if(indexedAnimationBehavior->loopTotal ==  -1 || indexedAnimationBehavior->loopIndex < indexedAnimationBehavior->loopTotal || this->getFrame() != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                        }
                            
}


    auto TitleAnimation::setSequence(std::vector<int32_t> sequence) -> void{
}


    auto TitleAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    auto TitleAnimation::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray[0]->getSize();;
    
}


    auto TitleAnimation::getFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray[0]->getFrame();;
    
}


    auto TitleAnimation::setFrame(int32_t frame) -> void{




                        for (
    int32_t index = 0;index < this->sizeP; index++)
        {
this->animationInterfaceArray[index]->setFrame(frame);
    
}

}


    auto TitleAnimation::setLastFrame() -> void{
this->setFrame(this->getSize() -1);
    
}


    auto TitleAnimation::reset() -> void{
this->setLastFrame();
    

    IndexedAnimationBehavior* indexedAnimationBehavior = (dynamic_cast<IndexedAnimationBehavior*>(this->getAnimationBehavior()));;
    
indexedAnimationBehavior->reset();
    
}


    auto TitleAnimation::previousFrame() -> void{




                        for (
    int32_t index = 0;index < this->sizeP; index++)
        {
this->animationInterfaceArray[index]->previousFrame();
    
}

}


    auto TitleAnimation::paintFrameXY(Graphics* graphics, int32_t frame, int32_t x, int32_t y) -> void{
this->setFrame(frame);
    
this->paintXY(graphics, x, y);
    
}


    auto TitleAnimation::paintXY(Graphics* graphics, int32_t ax, int32_t ay) -> void{

    int32_t x = 0;;
    

                        if(this->widthP != Integer.MIN_VALUE)
                        
                                    {
                                    x= ((this->displayInfoSingleton->getLastWidth() -this->widthP) /2);
    

                                    }
                                

    int32_t deltaX= 0;;
    

    int32_t deltaY= 0;;
    




                        for (
    int32_t index = 0;index < this->sizeP; index++)
        {
deltaX= this->dxArray[index] +x;
    
deltaY= this->dyArray[index] +this->y;
    

                        if(this->basicColorArray[index] != this->CLEAR_COLOR)
                        
                                    {
                                    this->basicSetColorUtil->setBasicColorP(graphics, this->basicColorArray[index]);
    

                                    }
                                
this->animationInterfaceArray[index]->paintXY(graphics, deltaX, deltaY);
    
}

}




        #endif //ORG_ALLBINARY_ANIMATION_SPECIAL_TITLEANIMATION_CPP
