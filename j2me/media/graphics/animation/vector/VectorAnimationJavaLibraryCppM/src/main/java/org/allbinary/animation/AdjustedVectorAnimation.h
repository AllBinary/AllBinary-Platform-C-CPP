
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_ADJUSTEDVECTORANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_ADJUSTEDVECTORANIMATION_H

#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VectorAnimation.h"
#include "AnimationBehavior.h"

class AdjustedVectorAnimation: public VectorAnimation {
        

    private: dx: int32_t;

    private: dy: int32_t;

public constructor (std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor basicColor, int32_t dx, int32_t dy, AnimationBehavior animationBehavior);

    public paintXY(Graphics graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_ADJUSTEDVECTORANIMATION_H
