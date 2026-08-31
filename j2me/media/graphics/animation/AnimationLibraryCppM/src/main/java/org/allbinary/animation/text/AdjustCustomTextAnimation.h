
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

#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomTextAnimation.h"

class AdjustCustomTextAnimation: public CustomTextAnimation {
        

    private: dx: int32_t;

    private: dy: int32_t;

public constructor (string text, int32_t fontSize, int32_t dx, int32_t dy, AnimationBehavior animationBehavior);

    public int32_t getDx();

    public setDx(int32_t dx);

    public int32_t getDy();

    public setDy(int32_t dy);

    public paintXY(Graphics graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TEXT_ADJUSTCUSTOMTEXTANIMATION_H
