
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEFILLEDADJUSTEDANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEFILLEDADJUSTEDANIMATION_H

#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RectangleFilledAnimation.h"

class RectangleFilledAdjustedAnimation: public RectangleFilledAnimation, public ColorCompositeInterface {

    private: int32_t offsetX;

    private: int32_t offsetY;

public: RectangleFilledAdjustedAnimation(int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor basicColor);

    public: void nextFrame();

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

    public: void setOffsetX(int32_t offsetX);

    public: void setOffsetY(int32_t offsetY);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEFILLEDADJUSTEDANIMATION_H
