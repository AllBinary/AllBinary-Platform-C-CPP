
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_ARECTANGLEFILLEDANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_VECTOR_ARECTANGLEFILLEDANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/vector/ARectangleFilledAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/vector/RectangleFilledAnimation.h"


ARectangleFilledAnimation::ARectangleFilledAnimation() : RectangleFilledAnimation(0, 0, BasicColorFactory::getInstance()->BLACK){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto ARectangleFilledAnimation::nextFrame() -> void{
}


    auto ARectangleFilledAnimation::paintXY(Graphics* graphics, int32_t unusedX, int32_t unusedY) -> void{
RectangleFilledAnimation::paintXY(graphics, this->x, this->y);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_ARECTANGLEFILLEDANIMATION_CPP
