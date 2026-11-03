
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGESEGMENTANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGESEGMENTANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/ImageSegmentAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageAnimation.h"


ImageSegmentAnimation::ImageSegmentAnimation(Image* image, std::vector<int32_t> sequenceArray, AnimationBehavior* animationBehavior) : ImageAnimation(image, animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->startX= 0;
    
this->startY= 0;
    
this->drawWidth= this->getImage()->getWidth();
    
this->drawHeight= this->getImage()->getHeight();
    
this->circularIndexUtil= CircularIndexUtil::createInstance(this->drawHeight);
    
this->sequenceArray= sequenceArray;
    
}


    auto ImageSegmentAnimation::nextFrame() -> void{
this->circularIndexUtil->next();
    
}


    auto ImageSegmentAnimation::previousFrame() -> void{
this->circularIndexUtil->previous();
    
}


    auto ImageSegmentAnimation::setFrame(int32_t index) -> void{
this->circularIndexUtil->setIndex(index);
    
}


    auto ImageSegmentAnimation::getFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->circularIndexUtil->getIndex();;
    
}


    auto ImageSegmentAnimation::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->circularIndexUtil->getSize();;
    
}


    auto ImageSegmentAnimation::setSequence(std::vector<int32_t> sequenceArray) -> void{
this->sequenceArray= sequenceArray;
    
}


    auto ImageSegmentAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->sequenceArray;
    
}


    auto ImageSegmentAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
}


    auto ImageSegmentAnimation::getStartX() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->startX;
    
}


    auto ImageSegmentAnimation::setStartX(int32_t startX) -> void{
this->startX= startX;
    
}


    auto ImageSegmentAnimation::getStartY() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->startY;
    
}


    auto ImageSegmentAnimation::setStartY(int32_t startY) -> void{
this->startY= startY;
    
}


    auto ImageSegmentAnimation::getDrawWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->drawWidth;
    
}


    auto ImageSegmentAnimation::setDrawWidth(int32_t drawWidth) -> void{
this->drawWidth= drawWidth;
    
}


    auto ImageSegmentAnimation::getDrawHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->drawHeight;
    
}


    auto ImageSegmentAnimation::setDrawHeight(int32_t drawHeight) -> void{
this->drawHeight= drawHeight;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGESEGMENTANIMATION_CPP
