
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

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CircleAnimation: public Animation, public ColorCompositeInterface {

    protected: const int32_t TOTAL_ANGLE = static_cast<int32_t>(AngleFactory::getInstance()->TOTAL_ANGLE);

    protected: int32_t width;

    protected: int32_t height;

public: CircleAnimation(int32_t width, int32_t height, BasicColor* basicColor){
this->width= width;
    
this->height= height;
    
this->setBasicColorP(basicColor);
    
}


    public: void nextFrame(){
}


    public: void paintXY(Graphics* graphics, int32_t x, int32_t y){
this->basicSetColorUtil.setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    
graphics->drawArc(x, y, this->width, this->height, 0, this->TOTAL_ANGLE);
    
}


};

            

