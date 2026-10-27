
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_ARECTANGLEFILLEDANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_VECTOR_ARECTANGLEFILLEDANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
class BasicColorFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/vector/RectangleFilledAnimation.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ARectangleFilledAnimation: public RectangleFilledAnimation {

    public: int32_t x= 0;

    public: int32_t y= 0;

public: ARectangleFilledAnimation();

    public: void nextFrame();

    public: void paintXY(Graphics* graphics, int32_t unusedX, int32_t unusedY);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_ARECTANGLEFILLEDANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_VECTOR_ARECTANGLEFILLEDANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_VECTOR_ARECTANGLEFILLEDANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include("org/allbinary/animation/vector/RectangleFilledAnimation.h")
#include "org/allbinary/animation/vector/RectangleFilledAnimation.h"
#endif

        #endif
    
