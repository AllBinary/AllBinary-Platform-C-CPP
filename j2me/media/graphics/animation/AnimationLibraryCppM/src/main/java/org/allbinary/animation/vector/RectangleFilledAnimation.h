
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEFILLEDANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEFILLEDANIMATION_H

#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RectangleFilledAnimation: public Animation, public ColorCompositeInterface {

    protected: int32_t widthP;

    protected: int32_t heightP;

public: RectangleFilledAnimation(int32_t width, int32_t height, BasicColor basicColor);

    public: void nextFrame();

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

    public: void setWidth(int32_t width);

    public: void setHeight(int32_t height);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEFILLEDANIMATION_H
