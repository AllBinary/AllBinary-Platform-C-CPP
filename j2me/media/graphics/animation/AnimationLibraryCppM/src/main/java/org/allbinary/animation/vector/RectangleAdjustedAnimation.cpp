
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
        



#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RectangleAdjustedAnimation: public Animation: public ColorCompositeInterface {
        

    private: width: int32_t;

    private: height: int32_t;

    private: offsetX: int32_t;

    private: offsetY: int32_t;

public constructor (int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor basicColor){

            super();
        this.width= width;
    
this.height= height;
    
this.offsetX= offsetX;
    
this.offsetY= offsetY;
    
this.setBasicColorP(basicColor);
    
}


    public nextFrame(){
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
this.basicSetColorUtil!.setBasicColorP3(graphics, this.getBasicColorP(), this.getColor());
    
graphics.drawRect(x +this.offsetX, y +this.offsetY, this.width, this.height);
    
}


    public setWidth(int32_t width){
this.width= width;
    
}


    public setHeight(int32_t height){
this.height= height;
    
}


    public setOffsetX(int32_t offsetX){
this.offsetX= offsetX;
    
}


    public setOffsetY(int32_t offsetY){
this.offsetY= offsetY;
    
}


};

            

