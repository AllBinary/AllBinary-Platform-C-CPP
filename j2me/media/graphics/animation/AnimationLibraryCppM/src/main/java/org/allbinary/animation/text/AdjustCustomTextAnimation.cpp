
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomTextAnimation.h"

class AdjustCustomTextAnimation: public CustomTextAnimation {

    private: int32_t dx;

    private: int32_t dy;

public: AdjustCustomTextAnimation(std::string text, int32_t fontSize, int32_t dx, int32_t dy, AnimationBehavior animationBehavior){
            super(text, fontSize, animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->dx= dx;
    
this->dy= dy;
    
}


    public: int32_t getDx(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dx;
    
}


    public: void setDx(int32_t dx){
this->dx= dx;
    
}


    public: int32_t getDy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dy;
    
}


    public: void setDy(int32_t dy){
this->dy= dy;
    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
super.paintXY(graphics, x +this->dx, y +this->dy);
    
}


};

            

