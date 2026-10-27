
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_TOPTOBOTTOMIMAGEANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_TOPTOBOTTOMIMAGEANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/TopToBottomImageAnimation.h"
        

            #include <vector>
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageSegmentAnimation.h"


TopToBottomImageAnimation::TopToBottomImageAnimation(Image* image, std::vector<int32_t> sequenceArray, AnimationBehavior* animationBehavior) : ImageSegmentAnimation(image, sequenceArray, animationBehavior), anchor(Anchor::TOP_LEFT){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->currentHeight= 0;
    

                        if(this->getSequence()[0] ==  -1)
                        
                                    {
                                    this->setFrame(this->getSize() -1);
    

                                    }
                                
}


    auto TopToBottomImageAnimation::nextFrame() -> void{

                        if(this->getSequence()[0] ==  -1)
                        
                                    {
                                    ImageSegmentAnimation::previousFrame();
    

                                    }
                                
                        else {
                            ImageSegmentAnimation::nextFrame();
    

                        }
                            
this->update();
    
}


    auto TopToBottomImageAnimation::previousFrame() -> void{

                        if(this->getSequence()[0] ==  -1)
                        
                                    {
                                    ImageSegmentAnimation::nextFrame();
    

                                    }
                                
                        else {
                            ImageSegmentAnimation::previousFrame();
    

                        }
                            
this->update();
    
}


    auto TopToBottomImageAnimation::setFrame(int32_t index) -> void{
ImageSegmentAnimation::setFrame(index);
    
this->update();
    
}


    auto TopToBottomImageAnimation::update() -> void{
this->currentHeight= this->getDrawHeight() *this->getFrame() /this->getSize();
    
}


    auto TopToBottomImageAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
graphics->drawRegion(this->getImage(), this->getStartX(), this->getStartY(), this->getDrawWidth(), this->currentHeight, Sprite::TRANS_NONE, x, y, this->anchor);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_TOPTOBOTTOMIMAGEANIMATION_CPP
