
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

            #include <vector>
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VectorAnimation.h"
#include "AnimationBehavior.h"

class AdjustedVectorAnimation: public VectorAnimation {

    private: int32_t dx;

    private: int32_t dy;

public: AdjustedVectorAnimation(std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor basicColor, int32_t dx, int32_t dy, AnimationBehavior animationBehavior);

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_ADJUSTEDVECTORANIMATION_H
