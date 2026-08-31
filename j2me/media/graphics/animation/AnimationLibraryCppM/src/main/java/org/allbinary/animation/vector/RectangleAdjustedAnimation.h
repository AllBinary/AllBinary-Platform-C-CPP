
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEADJUSTEDANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEADJUSTEDANIMATION_H

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

public constructor (int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor basicColor);

    public nextFrame();

    public paintXY(Graphics graphics, int32_t x, int32_t y);

    public setWidth(int32_t width);

    public setHeight(int32_t height);

    public setOffsetX(int32_t offsetX);

    public setOffsetY(int32_t offsetY);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEADJUSTEDANIMATION_H
