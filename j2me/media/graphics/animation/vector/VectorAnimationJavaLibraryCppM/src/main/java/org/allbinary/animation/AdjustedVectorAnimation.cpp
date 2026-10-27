
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_ADJUSTEDVECTORANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_ADJUSTEDVECTORANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/AdjustedVectorAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/VectorAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"


AdjustedVectorAnimation::AdjustedVectorAnimation(std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor* basicColor, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) : VectorAnimation(currentPoints, basicColor, animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->dx= dx;
    
this->dy= dy;
    
}


    auto AdjustedVectorAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
VectorAnimation::paintXY(graphics, x +this->dx, y +this->dy);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_ADJUSTEDVECTORANIMATION_CPP
