
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/vector/RectangleFilledAnimation.h"

class RectangleFilledAdjustedAnimation: public RectangleFilledAnimation, public ColorCompositeInterface {

    private: int32_t offsetX;

    private: int32_t offsetY;

public: RectangleFilledAdjustedAnimation(int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor) : RectangleFilledAnimation(width, height, basicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->offsetX= offsetX;
    
this->offsetY= offsetY;
    
this->setBasicColorP(basicColor);
    
}


    public: void nextFrame(){
}


    public: void paintXY(Graphics* graphics, int32_t x, int32_t y){
this->basicSetColorUtil.setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    
super.paintXY(graphics, x +this->offsetX, y +this->offsetY);
    
}


    public: void setOffsetX(int32_t offsetX){
this->offsetX= offsetX;
    
}


    public: void setOffsetY(int32_t offsetY){
this->offsetY= offsetY;
    
}


};

            

