
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RectangleAdjustedAnimation: public Animation, public ColorCompositeInterface {

    private: int32_t width;

    private: int32_t height;

    private: int32_t offsetX;

    private: int32_t offsetY;

public: RectangleAdjustedAnimation(int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor);

    public: void nextFrame();

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: void setWidth(int32_t width);

    public: void setHeight(int32_t height);

    public: void setOffsetX(int32_t offsetX);

    public: void setOffsetY(int32_t offsetY);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEADJUSTEDANIMATION_H
