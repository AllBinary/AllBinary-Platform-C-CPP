
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TEXT_ADJUSTCUSTOMTEXTANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_TEXT_ADJUSTCUSTOMTEXTANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
class AnimationBehavior;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/text/CustomTextAnimation.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdjustCustomTextAnimation: public CustomTextAnimation {

    private: int32_t dx;

    private: int32_t dy;

public: AdjustCustomTextAnimation(std::string text, int32_t fontSize, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

    public: int32_t getDx();

    public: void setDx(int32_t dx);

    public: int32_t getDy();

    public: void setDy(int32_t dy);

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TEXT_ADJUSTCUSTOMTEXTANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_TEXT_ADJUSTCUSTOMTEXTANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_TEXT_ADJUSTCUSTOMTEXTANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include("org/allbinary/animation/text/CustomTextAnimation.h")
#include "org/allbinary/animation/text/CustomTextAnimation.h"
#endif

        #endif
    
