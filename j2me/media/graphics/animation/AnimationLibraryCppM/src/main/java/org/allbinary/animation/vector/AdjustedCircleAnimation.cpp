
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

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CircleAnimation.h"

class AdjustedCircleAnimation: public CircleAnimation {

    public: static AdjustedCircleAnimation createAnimation(int32_t width, int32_t height, int32_t xAdjustment, int32_t yAdjustment, BasicColor basicColor){

    AdjustedCircleAnimation adjustedCircleAnimation = AdjustedCircleAnimation(width, height, basicColor);;
    
adjustedCircleAnimation.initXY(xAdjustment, yAdjustment);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return adjustedCircleAnimation;
    
}


    public: static AdjustedCircleAnimation createW(int32_t width, int32_t height, int32_t innerWidth, BasicColor basicColor){

    AdjustedCircleAnimation adjustedCircleAnimation = AdjustedCircleAnimation(width, height, basicColor);;
    
adjustedCircleAnimation.init(innerWidth);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return adjustedCircleAnimation;
    
}


    private: int32_t xAdjustment= 0;

    private: int32_t yAdjustment= 0;

public: AdjustedCircleAnimation(int32_t width, int32_t height, BasicColor basicColor) : CircleAnimation(width, height, basicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    private: void initXY(int32_t xAdjustment, int32_t yAdjustment){
this->xAdjustment= xAdjustment;
    
this->yAdjustment= yAdjustment;
    
}


    private: void init(int32_t innerWidth){

                        if(AndroidUtil::isAndroid())
                        
                                    {
                                    
    int32_t widthPortion = (((innerWidth /3) *10) /7);;
    
this->xAdjustment=  -((this->width>>1) -widthPortion);
    
this->yAdjustment= this->xAdjustment;
    

                                    }
                                
                        else {
                            this->xAdjustment=  -((this->width>>1) -innerWidth);
    
this->yAdjustment= this->xAdjustment;
    

                        }
                            
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
this->basicSetColorUtil.setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    
graphics.drawArc(x +this->xAdjustment, y +this->yAdjustment, this->width, this->height, 0, this->TOTAL_ANGLE);
    
}


};

            

