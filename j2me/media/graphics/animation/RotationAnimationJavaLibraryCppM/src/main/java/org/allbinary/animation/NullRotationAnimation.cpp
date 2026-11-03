
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_NULLROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_NULLROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/NullRotationAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"


    auto NullRotationAnimation::createTotalAngle(AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) -> NullRotationAnimation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new NullRotationAnimation(angleInfo, CircularIndexUtil::createInstance(totalAngle /angleInfo->getAngleIncrementInfo()->getAngleIncrement()), animationBehavior);
    
}


    auto NullRotationAnimation::createQuarter(AnimationBehavior* animationBehavior) -> NullRotationAnimation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new NullRotationAnimation(AngleInfo::getInstance(AngleFactory::getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil::createInstance(4), animationBehavior);
    
}


NullRotationAnimation::NullRotationAnimation(AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior) : RotationAnimation(angleInfo, circularIndexUtil, animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto NullRotationAnimation::getAnimationSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_NULLROTATIONANIMATION_CPP
