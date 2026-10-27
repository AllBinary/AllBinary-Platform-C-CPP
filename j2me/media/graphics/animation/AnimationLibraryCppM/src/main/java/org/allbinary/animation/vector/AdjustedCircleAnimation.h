
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_ADJUSTEDCIRCLEANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_VECTOR_ADJUSTEDCIRCLEANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
class AndroidUtil;
class BasicColor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/vector/CircleAnimation.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdjustedCircleAnimation: public CircleAnimation {

    public: static AdjustedCircleAnimation* createAnimation(int32_t width, int32_t height, int32_t xAdjustment, int32_t yAdjustment, BasicColor* basicColor);

    public: static AdjustedCircleAnimation* createW(int32_t width, int32_t height, int32_t innerWidth, BasicColor* basicColor);

    private: int32_t xAdjustment= 0;

    private: int32_t yAdjustment= 0;

public: AdjustedCircleAnimation(int32_t width, int32_t height, BasicColor* basicColor);

    private: void initXY(int32_t xAdjustment, int32_t yAdjustment);

    private: void init(int32_t innerWidth);

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_ADJUSTEDCIRCLEANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_VECTOR_ADJUSTEDCIRCLEANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_VECTOR_ADJUSTEDCIRCLEANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/AndroidUtil.h>)
#include <org/allbinary/AndroidUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include("org/allbinary/animation/vector/CircleAnimation.h")
#include "org/allbinary/animation/vector/CircleAnimation.h"
#endif

        #endif
    
