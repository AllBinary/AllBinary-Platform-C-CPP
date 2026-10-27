
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_ARECTANGLEFILLEDANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_VECTOR_ARECTANGLEFILLEDANIMATION_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/vector/RectangleFilledAnimation.h"

class ARectangleFilledAnimation: public RectangleFilledAnimation {

    public: int32_t x= 0;

    public: int32_t y= 0;

public: ARectangleFilledAnimation();

    public: void nextFrame();

    public: void paintXY(Graphics* graphics, int32_t unusedX, int32_t unusedY);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_ARECTANGLEFILLEDANIMATION_H
