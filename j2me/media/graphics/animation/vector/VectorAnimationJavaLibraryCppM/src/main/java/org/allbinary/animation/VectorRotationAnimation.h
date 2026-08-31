
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

            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VectorBaseRotationAnimation.h"
#include "AnimationBehavior.h"

class VectorRotationAnimation: public VectorBaseRotationAnimation {
        

public constructor (std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor basicColor, AnimationBehavior animationBehavior);

    public setFrameByDirection(Direction direction);

    public setFrameToAngle(Angle angle);

    public setFrame(int32_t index);

    public adjustFrame(int16_t newAngle);

    public adjustFrameToAngle(Angle newAngle);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTORROTATIONANIMATION_H
