
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_CIRCLEANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_VECTOR_CIRCLEANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
#include <org/allbinary/animation/Animation.h>
class BasicColor;
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>
class AngleFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CircleAnimation: public Animation, public virtual ColorCompositeInterface {

    /*protected*/ public: const int32_t TOTAL_ANGLE;

    /*protected*/ public: int32_t width;

    /*protected*/ public: int32_t height;

public: CircleAnimation(int32_t width, int32_t height, BasicColor* basicColor);

    public: void nextFrame();

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_CIRCLEANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_VECTOR_CIRCLEANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_VECTOR_CIRCLEANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/ColorCompositeInterface.h>)
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/math/AngleFactory.h>)
#include <org/allbinary/math/AngleFactory.h>
#endif

        #endif
    
