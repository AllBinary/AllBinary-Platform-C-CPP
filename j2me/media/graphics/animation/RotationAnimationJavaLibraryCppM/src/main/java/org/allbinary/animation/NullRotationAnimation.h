
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_NULLROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_NULLROTATIONANIMATION_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RotationAnimation.h"
#include "AnimationBehavior.h"

class NullRotationAnimation: public RotationAnimation {

    public: static NullRotationAnimation createTotalAngle(AngleInfo angleInfo, int16_t totalAngle, AnimationBehavior animationBehavior);

    public: static NullRotationAnimation createQuarter(AnimationBehavior animationBehavior);

protected: NullRotationAnimation(AngleInfo angleInfo, CircularIndexUtil circularIndexUtil, AnimationBehavior animationBehavior);

                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_NULLROTATIONANIMATION_H
