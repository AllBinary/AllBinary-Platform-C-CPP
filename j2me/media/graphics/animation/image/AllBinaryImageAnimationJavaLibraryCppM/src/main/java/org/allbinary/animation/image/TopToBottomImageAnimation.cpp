
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
        



            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageSegmentAnimation.h"

class TopToBottomImageAnimation: public ImageSegmentAnimation {

    private: int32_t currentHeight;

public: TopToBottomImageAnimation(Image image, std::vector<int32_t> sequenceArray, AnimationBehavior animationBehavior) : ImageSegmentAnimation(image, sequenceArray, animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->currentHeight= 0;
    

                        if(this->getSequence()[0] ==  -1)
                        
                                    {
                                    this->setFrame(this->getSize() -1);
    

                                    }
                                
}


    public: void nextFrame(){

                        if(this->getSequence()[0] ==  -1)
                        
                                    {
                                    super.previousFrame();
    

                                    }
                                
                        else {
                            super.nextFrame();
    

                        }
                            
this->update();
    
}


    public: void previousFrame(){

                        if(this->getSequence()[0] ==  -1)
                        
                                    {
                                    super.nextFrame();
    

                                    }
                                
                        else {
                            super.previousFrame();
    

                        }
                            
this->update();
    
}


    public: void setFrame(int32_t index){
super.setFrame(index);
    
this->update();
    
}


    private: void update(){
this->currentHeight= this->getDrawHeight() *this->getFrame() /this->getSize();
    
}


    private: int32_t anchor = Anchor::TOP_LEFT;

    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
graphics.drawRegion(this->getImage(), this->getStartX(), this->getStartY(), this->getDrawWidth(), this->currentHeight, Sprite::TRANS_NONE, x, y, this->anchor);
    
}


};

            

