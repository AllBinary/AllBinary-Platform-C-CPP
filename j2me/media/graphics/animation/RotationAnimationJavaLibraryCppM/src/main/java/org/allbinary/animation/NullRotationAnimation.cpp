
        /* Generated Code Do Not Modify */
        



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

class NullRotationAnimation: public RotationAnimation {

    public: static NullRotationAnimation* createTotalAngle(AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new NullRotationAnimation(angleInfo, CircularIndexUtil::createInstance(totalAngle /angleInfo->getAngleIncrementInfo()->getAngleIncrement()), animationBehavior);
    
}


    public: static NullRotationAnimation* createQuarter(AnimationBehavior* animationBehavior){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new NullRotationAnimation(AngleInfo::getInstance(AngleFactory::getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil::createInstance(4), animationBehavior);
    
}


protected: NullRotationAnimation(AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior) : RotationAnimation(angleInfo, circularIndexUtil, animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


};

            

