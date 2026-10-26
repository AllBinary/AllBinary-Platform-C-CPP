
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
        



            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageSegmentAnimation.h"

class RightToLeftImageAnimation: public ImageSegmentAnimation {

    private: int32_t startWidth= 0;

    private: int32_t currentWidth= 0;

public: RightToLeftImageAnimation(Image image, AnimationBehavior animationBehavior) : ImageSegmentAnimation(image, PrimitiveIntUtil::getArrayInstance(), animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setFrame(this->getSize() -1);
    
}


    public: void nextFrame(){
super.previousFrame();
    
this->update();
    
}


    public: void previousFrame(){
super.nextFrame();
    
this->update();
    
}


    public: void setFrame(int32_t index){
super.setFrame(index);
    
this->update();
    
}


    private: void update(){
this->startWidth= this->getDrawWidth() *this->getFrame() /this->getSize();
    
this->currentWidth= this->getDrawWidth() -this->startWidth;
    
}


    private: int32_t anchor = Anchor::TOP_LEFT;

    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
graphics.drawRegion(this->getImage(), this->startWidth, this->getStartY(), this->currentWidth, this->getDrawHeight(), Sprite::TRANS_NONE, x +this->startWidth, y, this->anchor);
    
}


};

            

