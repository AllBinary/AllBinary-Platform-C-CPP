
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_VECTORROTATIONANIMATION_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/VectorBaseRotationAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"

class VectorRotationAnimation: public VectorBaseRotationAnimation {

public: VectorRotationAnimation(std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior);

    public: void setFrameByDirection(Direction* direction);

    public: void setFrameToAngle(Angle* angle);

    public: void setFrame(int32_t index);

    public: void adjustFrame(int16_t newAngle);

    public: void adjustFrameToAngle(Angle* newAngle);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTORROTATIONANIMATION_H
