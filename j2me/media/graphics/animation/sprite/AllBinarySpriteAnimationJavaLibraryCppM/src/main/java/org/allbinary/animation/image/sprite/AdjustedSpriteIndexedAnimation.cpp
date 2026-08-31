
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SpriteIndexedAnimation.h"

class AdjustedSpriteIndexedAnimation: public SpriteIndexedAnimation {
        

    private: dx: int32_t;

    private: dy: int32_t;

public constructor (Sprite sprite, Image image, std::vector<BasicColor> basicColorArray, int32_t dx, int32_t dy, AnimationBehavior animationBehavior){
            super(sprite, image, basicColorArray, animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.dx= dx;
    
this.dy= dy;
    
}


    public paintFrame(Graphics graphics, int32_t frame, int32_t x, int32_t y){
this.setFrame(frame);
    
this.sprite.setPosition(x +this.dx, y +this.dy);
    
super.paint(graphics);
    
}


    public paintXY(Graphics g, int32_t x, int32_t y){
this.sprite.setPosition(x +this.dx, y +this.dy);
    
super.paint(g);
    
}


    public paint(Graphics g){
this.sprite.setPosition(this.dx, this.dy);
    
super.paint(g);
    
}


};

            

