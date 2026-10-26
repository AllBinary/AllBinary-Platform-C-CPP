
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
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VectorAnimation.h"
#include "AnimationBehavior.h"

class ColorLessVectorAnimation: public VectorAnimation {

public: ColorLessVectorAnimation(std::vector<std::vector<std::vector<int32_t>>> currentPoints, AnimationBehavior animationBehavior) : VectorAnimation(currentPoints, BasicColorFactory::getInstance().WHITE, animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
this->paintVectors(graphics, x, y);
    
}


};

            

