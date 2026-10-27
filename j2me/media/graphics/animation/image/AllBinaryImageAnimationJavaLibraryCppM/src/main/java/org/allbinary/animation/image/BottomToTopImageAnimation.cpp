
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_BOTTOMTOTOPIMAGEANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_BOTTOMTOTOPIMAGEANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/BottomToTopImageAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageSegmentAnimation.h"


BottomToTopImageAnimation::BottomToTopImageAnimation(Image* image, AnimationBehavior* animationBehavior) : ImageSegmentAnimation(image, PrimitiveIntUtil::getArrayInstance(), animationBehavior), anchor(Anchor::TOP_LEFT){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setFrame(this->getSize() -1);
    
}


    auto BottomToTopImageAnimation::nextFrame() -> void{
ImageSegmentAnimation::previousFrame();
    
this->update();
    
}


    auto BottomToTopImageAnimation::previousFrame() -> void{
ImageSegmentAnimation::nextFrame();
    
this->update();
    
}


    auto BottomToTopImageAnimation::setFrame(int32_t index) -> void{
ImageSegmentAnimation::setFrame(index);
    
this->update();
    
}


    auto BottomToTopImageAnimation::update() -> void{
this->startHeight= this->getDrawHeight() *this->getFrame() /this->getSize();
    
this->currentHeight= this->getDrawHeight() -this->startHeight;
    
}


    auto BottomToTopImageAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
graphics->drawRegion(this->getImage(), this->getStartX(), this->startHeight, this->getDrawWidth(), this->currentHeight, Sprite::TRANS_NONE, x, y +this->startHeight, this->anchor);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_BOTTOMTOTOPIMAGEANIMATION_CPP
